#ifndef REG_H
#define REG_H

void isa_reg_display();
bool isa_difftest_checkregs(uint32_t *ref_r, vaddr_t pc);

#endif