#ifndef DIFFTEST_DEF_H
#define DIFFTEST_DEF_H

#include <stdint.h>

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void difftest_step(vaddr_t pc, vaddr_t npc);
void difftest_skip_ref();
#endif