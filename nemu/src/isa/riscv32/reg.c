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
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
/*
  printf("$0 = 0x%08x", reg[0]);
  printf("ra = 0x%08x", reg[1]);
  printf("sp = 0x%08x", reg[2]);
  printf("gp = 0x%08x", reg[3]);
  printf("tp = 0x%08x", reg[4]);
  printf("t0 = 0x%08x", reg[5]);
  printf("t1 = 0x%08x", reg[6]);
  printf("t2 = 0x%08x", reg[7]);
  printf("s0 = 0x%08x", reg[8]);
  printf("s1 = 0x%08x", reg[9]);
  printf("a0 = 0x%08x", reg[10]);
  printf("a1 = 0x%08x", reg[11]);
  printf("a2 = 0x%08x", reg[12]);
  printf("a3 = 0x%08x", reg[13]);
  printf("a4 = 0x%08x", reg[14]);
  printf("a5 = 0x%08x", reg[15]);
  printf("a6 = 0x%08x", reg[16]);
  printf("s2 = 0x%08x", reg[17]);
  printf("s3 = 0x%08x", reg[18]);
  printf("s4 = 0x%08x", reg[19]);
  printf("s5 = 0x%08x", reg[20]);
  printf("s6 = 0x%08x", reg[21]);
  printf("s7 = 0x%08x", reg[22]);
  printf("s8 = 0x%08x", reg[23]);
  printf("s9 = 0x%08x", reg[24]);
  printf("s10 = 0x%08x", reg[25]);
  printf("s11 = 0x%08x", reg[26]);
  printf("t3 = 0x%08x", reg[27]);
  printf("t4 = 0x%08x", reg[28]);
  printf("t5 = 0x%08x", reg[29]);
  printf("t6 = 0x%08x", reg[30]);
*/
}

word_t isa_reg_str2val(const char *s, bool *success) {
  return 0;
}
