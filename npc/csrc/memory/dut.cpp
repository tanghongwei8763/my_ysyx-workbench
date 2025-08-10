#include "../include/common.h"
#include "../include/reg.h"

#ifdef CONFIG_YSYXSOC
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull.h"
extern VysyxSoCFull *top;
#define dut_pc top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
#define dut_gpr top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs
#define dut_mtvec top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec
#define dut_mepc top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc
#define dut_mstatus top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus
#define dut_mcause top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause
#else
#include "Vysyx25020037___024root.h"
#include "Vysyx25020037.h"
extern Vysyx25020037 *top;
#define dut_pc top->rootp->ysyx_25020037__DOT__pc
#define dut_gpr top->rootp->ysyx_25020037__DOT__gpr_cpu__DOT__regs
#define dut_mtvec top->rootp->ysyx_25020037__DOT__mtvec
#define dut_mepc top->rootp->ysyx_25020037__DOT__mepc
#define dut_mstatus top->rootp->ysyx_25020037__DOT__mstatus
#define dut_mcause top->rootp->ysyx_25020037__DOT__mcause
#endif

bool isa_difftest_checkregs(diff_context_t *ref_r, vaddr_t pc) {

  for (int i = 0; i < 32; i++) {
    if (ref_r->gpr[i] != dut_gpr[i]) {
      printf("dut->reg[%d]: 0x%08x != ref->gpr[%d]: 0x%08x\n", i, dut_gpr[i], i, ref_r->gpr[i]);
      return false;
    }
  }
  if (ref_r->pc != dut_pc) {
    printf("dut->pc: 0x%08x != ref->pc: 0x%08x\n", dut_pc, ref_r->pc);
    return false;
  }
  if (ref_r->mstatus != dut_mstatus) {
    printf("dut->mstatus: 0x%08x != ref->mstatus: 0x%08x\n", dut_mstatus, ref_r->mstatus);
    return false;
  }
  if (ref_r->mcause != dut_mcause) {
    printf("dut->mcause: 0x%08x != ref->mcause: 0x%08x\n", dut_mcause, ref_r->mcause);
    return false;
  }
  if (ref_r->mepc != dut_mepc) {
    printf("dut->mepc: 0x%08x != ref->mepc: 0x%08x\n", dut_mepc, ref_r->mepc);
    return false;
  }
  if (ref_r->mtvec != dut_mtvec) {
    printf("dut->mtvec: 0x%08x != ref->mtvec: 0x%08x\n", dut_mtvec, ref_r->mtvec);
    return false;
  }
  return true;
}
