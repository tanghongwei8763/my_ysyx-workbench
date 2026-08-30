#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vysyx_25020037_chisel_soc.h"


void init_difftest(const char *so_path, uint8_t *img_buf, size_t img_size);
int  difftest_step(Vysyx_25020037_chisel_soc *top);
void difftest_display(void);


#define FLASH_BASE  0x30000000ULL
#define FLASH_SIZE  (4 * 1024 * 1024)     // 4 MB
#define SRAM_BASE   0x0F000000ULL
#define SRAM_SIZE   (8 * 1024)            // 8 KB
#define PSRAM_BASE  0x80000000ULL
#define PSRAM_SIZE  (4 * 1024 * 1024)     // 4 MB
#define SDRAM_BASE  0xA0000000ULL
#define SDRAM_SIZE  (64 * 1024 * 1024)    // 64 MB

static uint8_t g_flash_mem[FLASH_SIZE] __attribute__((aligned(16)));
static uint8_t g_sram_mem[SRAM_SIZE]  __attribute__((aligned(16)));
static uint8_t g_psram_mem[PSRAM_SIZE] __attribute__((aligned(16)));
static uint8_t g_sdram_mem[SDRAM_SIZE] __attribute__((aligned(16)));
static size_t  g_img_size = 0;

// 仿真循环上限 (约 1670 万条指令, 可根据需要调整)
static const uint64_t CYCLE_LIMIT = 1000000;

extern "C" int pmem_read(int addr) {
  uint32_t val = 0;
  uint64_t uaddr = (uint32_t)addr;  // 零扩展为 64 位比较

  if (uaddr >= FLASH_BASE && uaddr < FLASH_BASE + FLASH_SIZE) {
    memcpy(&val, g_flash_mem + (uaddr - FLASH_BASE), 4);
  } else if (uaddr >= SRAM_BASE && uaddr < SRAM_BASE + SRAM_SIZE) {
    memcpy(&val, g_sram_mem + (uaddr - SRAM_BASE), 4);
  } else if (uaddr >= PSRAM_BASE && uaddr < PSRAM_BASE + PSRAM_SIZE) {
    memcpy(&val, g_psram_mem + (uaddr - PSRAM_BASE), 4);
  } else if (uaddr >= SDRAM_BASE && uaddr < SDRAM_BASE + SDRAM_SIZE) {
    memcpy(&val, g_sdram_mem + (uaddr - SDRAM_BASE), 4);
  }
  return (int)val;
}

extern "C" void pmem_write(int addr, int data, int strb) {
  uint64_t uaddr = (uint32_t)addr;
  uint8_t* target = nullptr;
  uint64_t offset = 0;

  if (uaddr >= FLASH_BASE && uaddr < FLASH_BASE + FLASH_SIZE) {
    target = g_flash_mem; offset = uaddr - FLASH_BASE;
  } else if (uaddr >= SRAM_BASE && uaddr < SRAM_BASE + SRAM_SIZE) {
    target = g_sram_mem;  offset = uaddr - SRAM_BASE;
  } else if (uaddr >= PSRAM_BASE && uaddr < PSRAM_BASE + PSRAM_SIZE) {
    target = g_psram_mem; offset = uaddr - PSRAM_BASE;
  } else if (uaddr >= SDRAM_BASE && uaddr < SDRAM_BASE + SDRAM_SIZE) {
    target = g_sdram_mem; offset = uaddr - SDRAM_BASE;
  }

  if (target) {
    if (strb & 1) target[offset + 0] = (uint8_t)(data >> 0);
    if (strb & 2) target[offset + 1] = (uint8_t)(data >> 8);
    if (strb & 4) target[offset + 2] = (uint8_t)(data >> 16);
    if (strb & 8) target[offset + 3] = (uint8_t)(data >> 24);
  }
}

static size_t load_bin(const char* path) {
  FILE* fp = fopen(path, "rb");
  if (!fp) { fprintf(stderr, "Cannot open %s\n", path); exit(1); }
  fseek(fp, 0, SEEK_END);
  long sz = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  printf("Loading %s (%ld B)\n", path, sz);

  size_t n = fread(g_flash_mem, 1, (sz < (long)FLASH_SIZE) ? sz : FLASH_SIZE, fp);
  fclose(fp);
  printf("  → flash [0x%08llx .. 0x%08llx]\n",
         (unsigned long long)FLASH_BASE,
         (unsigned long long)(FLASH_BASE + n));
  return n;
}

static uint64_t wave_limit_from_env() {
  const char* s = getenv("WAVE_LIMIT");
  if (!s || s[0] == '\0') return 1000000;
  char* end;
  unsigned long long v = strtoull(s, &end, 10);
  if (end == s) return 1000000;
  return v > 0 ? v : 0;
}

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  // ---- 解析命令行参数 ----
  const char *diff_so = NULL;
  int img_arg_idx = 0;
  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "--diff") == 0 && i + 1 < argc) {
      diff_so = argv[++i];
    } else {
      img_arg_idx = i;
    }
  }

  Vysyx_25020037_chisel_soc* top = new Vysyx_25020037_chisel_soc;

  // ---- 波形 (FST) ----
  VerilatedFstC* tfp = nullptr;
  const char* we = getenv("WAVE");
  bool wave = we && atoi(we) == 1;
  uint64_t wave_limit = wave_limit_from_env();
  uint64_t wave_cycle = 0;
  if (wave) {
    tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("build/chisel.fst");
  }

  // ---- 加载二进制 ----
  if (img_arg_idx > 0) {
    g_img_size = load_bin(argv[img_arg_idx]);
  } else {
    fprintf(stderr, "Usage: %s [--diff <ref.so>] <image.bin>\n", argv[0]);
    return 1;
  }

  // ---- 初始化 Difftest ----
  init_difftest(diff_so, g_flash_mem, g_img_size);

  uint64_t cycle = 0;

  // ---- 复位 ----
  top->reset = 1;
  for (int i = 5; i > 0; i--) {
    top->clock = 1;
    top->eval();
    if (tfp) { tfp->dump(cycle * 2); wave_cycle++; }
    top->clock = 0;
    top->eval();
    if (tfp) { tfp->dump(cycle * 2 + 1); wave_cycle++;
      if (wave_limit > 0 && wave_cycle >= wave_limit * 2) {
        tfp->close(); tfp->open("build/chisel.fst"); wave_cycle = 0;
      }
    }
    cycle++;
  }
  top->reset = 0;

  // ---- 主循环 ----
  bool difftest_error = false;
  while (cycle < CYCLE_LIMIT) {
    // 上升沿
    top->clock = 1;
    top->eval();

    // 波形记录 (上升沿)
    if (tfp) { tfp->dump(cycle * 2); wave_cycle++; }

    // ---- Difftest: 在 posedge 后检查提交 ----
    if (!top->reset) {
      int dt_ret = difftest_step(top);
      if (dt_ret == 1) {
        // 不匹配: 先 dump 下降沿确保波形完整
        top->clock = 0;
        top->eval();
        if (tfp) {
          tfp->dump(cycle * 2 + 1);
          tfp->flush();
        }
        printf("\n\033[31m[Difftest] FAIL at cycle %llu\033[0m\n",
               (unsigned long long)cycle);
        difftest_display();
        difftest_error = true;
        break;
      }
    }

    // ---- ebreak ----
    if (top->sim_end) {
      uint32_t r = top->test_pass;
      printf("\n[%llu] EBREAK  a0 = %d (0x%x)\n",
             (unsigned long long)cycle, r, r);
      printf(r == 0 ? "  \033[32m*** PASS ***\033[0m\n" : "  \033[31m*** FAIL (code %d) ***\033[0m\n", r);
      break;
    }

    // 下降沿
    top->clock = 0;
    top->eval();

    // 波形记录 (下降沿)
    if (tfp) { tfp->dump(cycle * 2 + 1); wave_cycle++;
      if (wave_limit > 0 && wave_cycle >= wave_limit * 2) {
        tfp->close(); tfp->open("build/chisel.fst"); wave_cycle = 0;
      }
    }

    // ---- ebreak (兜底) ----
    if (top->sim_end) {
      uint32_t r = top->test_pass;
      printf("\n[%llu] EBREAK  a0 = %d (0x%x)\n",
             (unsigned long long)cycle, r, r);
      printf(r == 0 ? "  \033[32m*** PASS ***\033[0m\n" : "  \033[31m*** FAIL (code %d) ***\033[0m\n", r);
      break;
    }

    if (cycle % 100000 == 0) {
      printf("\rCycle %llu ...", (unsigned long long)cycle);
      fflush(stdout);
    }
    cycle++;
  }

  if (difftest_error) {
    printf("\033[31m\nSimulation ABORTED due to Difftest mismatch.\033[0m\n");
  } else if (cycle >= CYCLE_LIMIT) {
    printf("\n\033[33mTimeout (%llu cycles)\033[0m\n", (unsigned long long)cycle);
  }
  printf("Total: %llu cycles\n", (unsigned long long)cycle);

  if (tfp) { tfp->close(); delete tfp; }
  delete top;
  return difftest_error ? 1 : 0;
}
