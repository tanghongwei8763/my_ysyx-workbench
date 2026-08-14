// =============================================================================
// Chisel CPU — Difftest (差分测试)
//
// 功能:
//   每次 WBU 提交指令时, 将 DUT 的 PC 和 GPR 状态与 NEMU 参考模型对比.
//   C++ 侧维护 shadow_gpr (通过 commit wdata 跟踪) 和 shadow_pc
//   (预期下一条提交指令的 PC), 避免直接从硬件读取 32 个寄存器.
// =============================================================================

#include <dlfcn.h>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cassert>
#include "Vysyx_25020037_chisel_soc.h"

// ============================================================================
// NEMU 参考模型的 API
// ============================================================================

typedef uint32_t paddr_t;

/* 与 NEMU 的 diff_context_t 严格对齐 */
typedef struct {
  uint32_t gpr[32];
  uint32_t pc;
  uint32_t mtvec;
  uint32_t mepc;
  uint32_t mstatus;
  uint32_t mcause;
} diff_context_t;

/* RISC-V 寄存器名称 (打印用) */
static const char *reg_name[32] = {
  "zero", "ra", "sp",  "gp",  "tp", "t0", "t1", "t2",
  "s0",   "s1", "a0",  "a1",  "a2", "a3", "a4", "a5",
  "a6",   "a7", "s2",  "s3",  "s4", "s5", "s6", "s7",
  "s8",   "s9", "s10", "s11", "t3", "t4", "t5", "t6",
};

// ============================================================================
// DIFTTEST 状态
// ============================================================================

/* NEMU 的共享对象句柄 */
static void *ref_handle = NULL;

/* NEMU 函数指针 */
static void (*ref_difftest_init)(int) = NULL;
static void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
static void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
static void (*ref_difftest_exec)(uint64_t n) = NULL;

/* 从 commit 流跟踪的 DUT 状态 */
static uint32_t  shadow_gpr[32] = {0};
static uint32_t  shadow_pc      = 0x30000000;

/* 最近一次 commit 时从 NEMU 读回的参考状态 (用于出错后展示) */
static diff_context_t last_ref_state;
static uint32_t       last_commit_pc_val = 0;
static bool           last_commit_valid = false;

/* 是否启用 difftest */
static bool difftest_enabled = false;

/* 上一个周期是否已有 commit (防止同一指令重复比对) */
static uint32_t last_checked_pc = 0xFFFFFFFF;

// ============================================================================
// 初始化
// ============================================================================

void init_difftest(const char *so_path, uint8_t *img_buf, size_t img_size) {
  if (!so_path || !img_buf || img_size == 0) {
    printf("[Difftest] Disabled (no ref SO or no image)\n");
    return;
  }

  ref_handle = dlopen(so_path, RTLD_LAZY);
  if (!ref_handle) {
    fprintf(stderr, "[Difftest] Cannot open ref SO '%s': %s\n", so_path, dlerror());
    fprintf(stderr, "[Difftest] Difftest DISABLED\n");
    return;
  }

  // 解析 NEMU 符号
  ref_difftest_init   = (void (*)(int))              dlsym(ref_handle, "difftest_init");
  ref_difftest_memcpy = (void (*)(paddr_t, void*, size_t, bool)) dlsym(ref_handle, "difftest_memcpy");
  ref_difftest_regcpy = (void (*)(void*, bool))       dlsym(ref_handle, "difftest_regcpy");
  ref_difftest_exec   = (void (*)(uint64_t))          dlsym(ref_handle, "difftest_exec");

  if (!ref_difftest_init || !ref_difftest_memcpy || !ref_difftest_regcpy || !ref_difftest_exec) {
    fprintf(stderr, "[Difftest] Missing required symbols in '%s'\n", so_path);
    dlclose(ref_handle);
    ref_handle = NULL;
    return;
  }

  printf("\033[34m[Difftest] Using \033[1;33m%s\033[0m\n", so_path);
  printf("[Difftest] Each committed instruction will be compared with the reference.\n"
         "          This helps debugging but reduces performance.\n\033[0m");

  // 初始化 NEMU
  ref_difftest_init(0);

  // 将二进制映像复制到 NEMU 内存 (Flash 基址 = 0x30000000)
  // NEMU difftest-def.h: enum { DIFFTEST_TO_DUT=0, DIFFTEST_TO_REF=1 }
  ref_difftest_memcpy(0x30000000, img_buf, img_size, 1);  // DIFFTEST_TO_REF

  // 设置 NEMU 的初始状态: PC = 0x30000000, GPR = 全 0
  diff_context_t init_state;
  memset(&init_state, 0, sizeof(init_state));
  init_state.pc = 0x30000000;
  ref_difftest_regcpy(&init_state, 1);  // DIFFTEST_TO_REF

  // 初始化 shadow 状态
  memset(shadow_gpr, 0, sizeof(shadow_gpr));
  shadow_pc = 0x30000000;
  memset(&last_ref_state, 0, sizeof(last_ref_state));
  last_commit_valid = false;

  difftest_enabled = true;
  printf("[Difftest] Initialized: PC=0x%08x, GPRs=all zero\n", 0x30000000);
}

// ============================================================================
// 打印全部 32 个寄存器的 DUT vs REF 对照表
// ============================================================================

static void print_reg_table(uint32_t commit_pc) {
  printf("\n");
  printf("  ================ Difftest FAIL at PC = 0x%08x ================\n",
         commit_pc);
  printf("  %-8s  %-6s  %-12s  %-12s  %s\n",
         "Name", "Index", "DUT", "REF", "Status");
  printf("  "); for (int i = 0; i < 56; i++) printf("─");
  printf("\n");
  for (int i = 0; i < 32; i++) {
    uint32_t d = shadow_gpr[i];
    uint32_t r = last_ref_state.gpr[i];
    const char *mark = (d == r) ? " \033[32m✓\033[0m" : " \033[31m✗ MISMATCH\033[0m";
    printf("  %-8s(x%2d): 0x%08x  0x%08x  %s\n",
           reg_name[i], i, d, r, mark);
  }
  printf("  "); for (int i = 0; i < 56; i++) printf("─");
  printf("\n");
  printf("  %-8s      : 0x%08x  0x%08x  (DUT commit PC / REF next PC)\n",
         "pc", commit_pc, last_ref_state.pc);
  printf("  ==================================================================\n");
  printf("\n");
}

// ============================================================================
// 单步 difftest: 在每个时钟周期调用, 检查是否有提交并比对
//
// 返回值: 0 = 正常, 1 = 不匹配, -1 = 无 difftest
// ============================================================================

int difftest_step(Vysyx_25020037_chisel_soc *top) {
  if (!difftest_enabled) return -1;

  // 检查是否有提交
  if (!top->debug_commit_valid) return 0;

  uint32_t commit_pc    = top->debug_commit_pc;
  int      commit_wen   = top->debug_commit_wen;
  uint32_t commit_wdest = top->debug_commit_wdest;
  uint32_t commit_wdata = top->debug_commit_wdata;

  // 防止同一指令重复比对 (Verilator 可能在同一边沿多次 eval)
  if (commit_pc == last_checked_pc) return 0;
  last_checked_pc = commit_pc;

  // ---- 校验 PC ----
  if (commit_pc != shadow_pc) {
    printf("\n\033[31m[Difftest] PC MISMATCH\033[0m\n");
    printf("  DUT commit PC : 0x%08x\n", commit_pc);
    printf("  Shadow PC     : 0x%08x (expected next commit PC)\n", shadow_pc);
    printf("  The instruction stream diverged.\n");
    last_commit_pc_val = commit_pc;
    last_commit_valid  = true;
    return 1;
  }

  // ---- 更新 shadow GPR ----
  if (commit_wen && commit_wdest != 0) {
    shadow_gpr[commit_wdest] = commit_wdata;
  }

  // ---- 步进 NEMU ----
  ref_difftest_exec(1);

  // ---- 读取 NEMU 状态 ----
  memset(&last_ref_state, 0, sizeof(last_ref_state));
  ref_difftest_regcpy(&last_ref_state, 0);  // DIFFTEST_TO_DUT

  // ---- 更新 shadow PC (使用 NEMU 的下一条 PC) ----
  shadow_pc = last_ref_state.pc;

  // ---- 保存 commit PC ----
  last_commit_pc_val = commit_pc;
  last_commit_valid  = true;

  // ---- 比对 GPR ----
  for (int i = 0; i < 32; i++) {
    if (shadow_gpr[i] != last_ref_state.gpr[i]) {
      return 1;
    }
  }

  return 0;
}

// ============================================================================
// 打印 DUT 和 REF 的完整寄存器状态 (可在仿真结束后调用)
// ============================================================================

void difftest_display(void) {
  if (!difftest_enabled) return;
  if (!last_commit_valid) return;
  print_reg_table(last_commit_pc_val);
}
