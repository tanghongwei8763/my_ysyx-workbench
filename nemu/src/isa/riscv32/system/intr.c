/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include "../local-include/reg.h"
#include "../include/isa-def.h"

#define IRQ_TIMER 0x80000007

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  CSRs(MCAUSE) = NO;
  CSRs(MEPC) = epc;
#ifdef CONFIG_ETRACE
  printf("mepc=0x%08x, mcause=0x%08x, mstatus=0x%08x, satp=0x%08x\n", CSRs(MEPC), CSRs(MCAUSE), CSRs(MSTATUS), CSRs(SATP));
#endif
  CSRs(MSTATUS) = ((CSRs(MSTATUS) & ~(1 << 7)) | ((CSRs(MSTATUS) >> 3) & 1) << 7);
  CSRs(MSTATUS) = CSRs(MSTATUS) & ~(1 << 3);
  return CSRs(MTVEC);
}

word_t isa_query_intr() {
  if (cpu.intr && ((CSRs(MSTATUS) >> 3) & 1)) {
    cpu.intr = false;
    return IRQ_TIMER;
  }
  return INTR_EMPTY;
}
