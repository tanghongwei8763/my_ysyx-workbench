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
#include <memory/vaddr.h>
#include <memory/paddr.h>

paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type) {
  //  VPN1(9位) | VPN0(9位) | 页内偏移(12位)
  paddr_t vpn1 = (vaddr >> 22) & 0x3ff;
  paddr_t vpn0 = (vaddr >> 12) & 0x3ff;

  paddr_t pt1_addr = cpu.csrs.satp << 12;
  paddr_t pte1_addr = pt1_addr | (vpn1 << 2); 
  word_t pte1 = paddr_read(pte1_addr, 4);
  if((pte1 & 1) == 0) {
    printf("cpu.csrs.satp=0x%08x\n", cpu.csrs.satp);
    Log("read:0x%08x -> pte1 = %d", pte1_addr, pte1);
    Assert(pte1 & 1, "Invalid page table 1 vaddr: " FMT_PADDR, vaddr);
  }

  paddr_t pt0_addr = (pte1 << 2) & ~0xfff;
  paddr_t pte0_addr = pt0_addr | (vpn0 << 2);
  word_t pte0 = paddr_read(pte0_addr, 4);
  if((pte0 & 1) == 0) {
    printf("cpu.csrs.satp=0x%08x\n", cpu.csrs.satp);
    Log("read:0x%08x -> pte1 = %d", pte1_addr, pte1);
    Log("read:0x%08x -> pte0 = %d", pte0_addr, pte0);
    Assert(pte0 & 1, "Invalid page table 0 vaddr: " FMT_PADDR, vaddr);
  }

  paddr_t paddr = ((pte0 << 2) & ~0xfff) | (vaddr & 0xfff);
  return paddr;
}
