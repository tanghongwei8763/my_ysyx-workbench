#include "../include/commen.h"
#include "../include/reg.h"

bool isa_difftest_checkregs(diff_context_t *ref_r, vaddr_t pc) {

  for (int i = 0; i < 32; i++) {
    if (ref_r->gpr[i] != dut.regs[i]) {
      printf("dut->reg[%d]: 0x%08x != ref->gpr[%d]: 0x%08x\n", i, dut.regs[i], i, ref_r->gpr[i]);
      return false;
    }
  }
  if (ref_r->pc != dut.pc) {
    printf("dut->pc: 0x%08x != ref->pc: 0x%08x\n", dut.pc, ref_r->pc);
    return false;
  }
  if (ref_r->mstatus != dut.mstatus) {
    printf("dut->mstatus: 0x%08x != ref->mstatus: 0x%08x\n", dut.mstatus, ref_r->mstatus);
    return false;
  }
  if (ref_r->mcause != dut.mcause) {
    printf("dut->mcause: 0x%08x != ref->mcause: 0x%08x\n", dut.mcause, ref_r->mcause);
    return false;
  }
  if (ref_r->mepc != dut.mepc) {
    printf("dut->mepc: 0x%08x != ref->mepc: 0x%08x\n", dut.mepc, ref_r->mepc);
    return false;
  }
  if (ref_r->mtvec != dut.mtvec) {
    printf("dut->mtvec: 0x%08x != ref->mtvec: 0x%08x\n", dut.mtvec, ref_r->mtvec);
    return false;
  }
  return true;
}
