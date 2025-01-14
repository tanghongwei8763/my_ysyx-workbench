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
  printf("%S\t\t0x%08x\t%d\n", reg[0]);
  printf("%S\t\t0x%08x\t%d\n", reg[1]);
  printf("%S\t\t0x%08x\t%d\n", reg[2]);
  printf("%S\t\t0x%08x\t%d\n", reg[3]);
  printf("%S\t\t0x%08x\t%d\n", reg[4]);
  printf("%S\t\t0x%08x\t%d\n", reg[5]);
  printf("%S\t\t0x%08x\t%d\n", reg[6]);
  printf("%S\t\t0x%08x\t%d\n", reg[7]);
  printf("%S\t\t0x%08x\t%d\n", reg[8]);
  printf("%S\t\t0x%08x\t%d\n", reg[9]);
  printf("%S\t\t0x%08x\t%d\n", reg[10]);
  printf("%S\t\t0x%08x\t%d\n", reg[11]);
  printf("%S\t\t0x%08x\t%d\n", reg[12]);
  printf("%S\t\t0x%08x\t%d\n", reg[13]);
  printf("%S\t\t0x%08x\t%d\n", reg[14]);
  printf("%S\t\t0x%08x\t%d\n", reg[15]);
  printf("%S\t\t0x%08x\t%d\n", reg[16]);
  printf("%S\t\t0x%08x\t%d\n", reg[17]);
  printf("%S\t\t0x%08x\t%d\n", reg[18]);
  printf("%S\t\t0x%08x\t%d\n", reg[19]);
  printf("%S\t\t0x%08x\t%d\n", reg[20]);
  printf("%S\t\t0x%08x\t%d\n", reg[21]);
  printf("%S\t\t0x%08x\t%d\n", reg[22]);
  printf("%S\t\t0x%08x\t%d\n", reg[23]);
  printf("%S\t\t0x%08x\t%d\n", reg[24]);
  printf("%S\t\t0x%08x\t%d\n", reg[25]);
  printf("%S\t\t0x%08x\t%d\n", reg[26]);
  printf("%S\t\t0x%08x\t%d\n", reg[27]);
  printf("%S\t\t0x%08x\t%d\n", reg[28]);
  printf("%S\t\t0x%08x\t%d\n", reg[29]);
  printf("%S\t\t0x%08x\t%d\n", reg[30]);
  printf("%S\t\t0x%08x\t%d\n", reg[31]);
*/
}

word_t isa_reg_str2val(const char *s, bool *success) {
  return 0;
}
