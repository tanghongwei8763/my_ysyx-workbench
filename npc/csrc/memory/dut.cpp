#include "../include/common.h"
#include "../include/reg.h"
#include "Vysyx_25020037___024root.h"
#include "Vysyx_25020037.h"

extern Vysyx_25020037 *top;
#define dut_pc top->rootp->ysyx_25020037__DOT__pc
#define dut_gpr top->rootp->ysyx_25020037__DOT__gpr_cpu__DOT__regs


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
  return true;
}
