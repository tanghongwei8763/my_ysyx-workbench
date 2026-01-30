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
#include <memory/paddr.h>

#define MMIO_BASE 0xa0000000
#define AUDIO_SBUF_ADDR (MMIO_BASE + 0x1200000)

word_t vaddr_ifetch(vaddr_t addr, int len) {
  if(addr >= AUDIO_SBUF_ADDR) return paddr_read(addr, len);
  int tmp = isa_mmu_check(addr, len, NULL);
  paddr_t paddr = 0;
  switch(tmp) {
    case MMU_DIRECT   : paddr = addr; break;
    case MMU_TRANSLATE: paddr = isa_mmu_translate(addr, len, 0); break;
    default: paddr = 0x00114514; break;
  }
  // if(paddr != addr){
  //   printf("paddr:0x%08x != addr:0x%08x\n", paddr, addr);
  //   assert(paddr == addr);
  // }
  return paddr_read(paddr, len);
}

word_t vaddr_read(vaddr_t addr, int len) {
  if(addr >= AUDIO_SBUF_ADDR) return paddr_read(addr, len);
  int tmp = isa_mmu_check(addr, len, NULL);
  paddr_t paddr = 0;
  switch(tmp) {
    case MMU_DIRECT   : paddr = addr; break;
    case MMU_TRANSLATE: paddr = isa_mmu_translate(addr, len, 0); break;
    default: paddr = 0x00114514; break;
  }
  // if(paddr != addr){
  //   printf("paddr:0x%08x != addr:0x%08x\n", paddr, addr);
  //   assert(paddr == addr);
  // }
  return paddr_read(paddr, len);
}

void vaddr_write(vaddr_t addr, int len, word_t data) {
  if(addr >= AUDIO_SBUF_ADDR) {paddr_write(addr, len, data); return;};
  int tmp = isa_mmu_check(addr, len, NULL);
  paddr_t paddr = 0;
  switch(tmp) {
    case MMU_DIRECT   : paddr = addr; break;
    case MMU_TRANSLATE: paddr = isa_mmu_translate(addr, len, 0); break;
    default: paddr = 0x00114514; break;
  }
  // if(paddr != addr){
  //   printf("paddr:0x%08x != addr:0x%08x\n", paddr, addr);
  //   assert(paddr == addr);
  // }
  paddr_write(paddr, len, data);
}
