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
  printf("$0 = 0x%08x", *$0);
  printf("ra = 0x%08x", *ra);
  printf("sp = 0x%08x", *sp);
  printf("gp = 0x%08x", *gp);
  printf("tp = 0x%08x", *tp);
  printf("t0 = 0x%08x", *t0);
  printf("t1 = 0x%08x", *t1);
  printf("t2 = 0x%08x", *t2);
  printf("s0 = 0x%08x", s0);
  printf("s1 = 0x%08x", s1);
  printf("a0 = 0x%08x", a0);
  printf("a1 = 0x%08x", a1);
  printf("a2 = 0x%08x", a2);
  printf("a3 = 0x%08x", a3);
  printf("a4 = 0x%08x", a4);
  printf("a5 = 0x%08x", a5);
  printf("a6 = 0x%08x", a6);
  printf("s2 = 0x%08x", s2);
  printf("s3 = 0x%08x", s3);
  printf("s4 = 0x%08x", s4);
  printf("s5 = 0x%08x", s5);
  printf("s6 = 0x%08x", s6);
  printf("s7 = 0x%08x", s7);
  printf("s8 = 0x%08x", s8);
  printf("s9 = 0x%08x", s9);
  printf("s10 = 0x%08x", s10);
  printf("s11 = 0x%08x", s11);
  printf("t3 = 0x%08x", t3);
  printf("t4 = 0x%08x", t4);
  printf("t5 = 0x%08x", t5);
  printf("t6 = 0x%08x", t6);
*/
}

word_t isa_reg_str2val(const char *s, bool *success) {
  return 0;
}
