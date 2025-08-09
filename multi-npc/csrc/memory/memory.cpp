#include "../include/common.h"
#include "../include/switch.h"
#include "../include/memory.h"
#include "../include/difftest-def.h"

#include <time.h>
#include <sys/time.h>

static const uint32_t img [] = {
  0x00000413,
  0x00009117,
  0xffc10113,
  0x00c000ef,
  0x00000513,
  0x00008067,
  0xff410113,
  0x00000517,
  0x01c50513,
  0x00112423,
  0xfe9ff0ef,
  0x00050513,
  0x00100073,
  0x0000006f,  
};

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
static uint8_t clk[CLK_SIZE] PG_ALIGN = {};

extern "C" uint8_t* guest_to_host(uint32_t paddr) {
  if(paddr >= CLK_BASE) return clk + paddr - CLK_BASE;
  return pmem + paddr - CONFIG_MBASE; 
}

extern "C" {
  word_t host_read(void *addr, uint8_t len) {
    switch (len) {
      case 1: return *(uint8_t*)addr; break;
      case 2: return *(uint16_t*)addr; break;
      case 4: return *(uint32_t*)addr; break;
      default: return 0x00100073; break;
    }
  }
}

extern "C" {
  static inline void host_write(void *addr, int len, word_t data) {
    switch (len) {
      case 0x1: *(uint8_t  *)addr = data; return;
      case 0x2: *(uint16_t *)addr = data; return;
      case 0xf: *(uint32_t *)addr = data; return;
    }
  }
}

static uint64_t us;

uint64_t get_time() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (uint64_t)tv.tv_sec * 1000000 + tv.tv_usec;
}

extern "C" word_t pmem_read(paddr_t addr, uint8_t len, int trace_on) {
  uint32_t clk_offset = addr - CLK_BASE;
  if(clk_offset >=0 && clk_offset <= 4) {
#ifdef CONFIG_DIFFTEST
    difftest_skip_ref();
#endif
    if(clk_offset == 0) return us;
    if(clk_offset == 4) {us = get_time(); return us >> 32;}
  }

  if(addr < 0x80000000 || addr > 0x8fffffff)
    return 0x0000000;
#ifdef CONFIG_MTRACE
  if(trace_on) printf("0x%08x: r\t%08x   %d\n", dut.pc, addr, len);
#endif
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}


extern "C" void pmem_write(paddr_t addr, uint8_t len, word_t data, int trace_on) {
#ifdef CONFIG_MTRACE
  if(trace_on) printf("0x%08x: w\t%08x   %d   0x%08x\n", dut.pc, addr, len, data);
#endif
  if(addr < 0x80000000) { printf("waddr 0x%08x is error\n", addr);assert(0);}
  if((addr & ~0x3u) == UART_BASE) {
#ifdef CONFIG_DIFFTEST
    difftest_skip_ref();
#endif
    //putchar(data&0xff);
    //fflush(stdout);
  }
  else host_write(guest_to_host(addr), len, data);
}



extern "C" void init_isa() {memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));}

extern "C" void init_device() {
  memcpy(guest_to_host(CLK_BASE), clk, sizeof(clk));
}
