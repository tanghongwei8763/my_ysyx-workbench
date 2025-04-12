#include "../include/commen.h"
#include "../include/reg.h"

bool isa_difftest_checkregs(uint32_t *ref_r, vaddr_t pc) {
  for (int i = 0; i < 32; i++) {
    if (ref_r[i] != dut.regs[i]) {
      printf("dut->reg[%d]: 0x%08x != ref->gpr[%d]: 0x%08x\n", i, dut.regs[i], i, ref_r[i]);
      return false;
    }
  }
  if (ref_r[33] != dut.pc) {
    printf("dut->pc: 0x%08x != ref->pc: 0x%08x\n", dut.pc, ref_r[33]);
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}
