#include <iostream>
#include <iomanip>
#include <cstdint>
#include <cassert>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include "function.h"

static const uint32_t img [] = {
  0x00100093,  // reg1=zero+1
  0x00908113,  // reg2=reg1+9
  0x00908113,  // reg2=reg1+9
  0xffe10193,  // reg3=reg2-2
  0x00908093,  // reg1=reg1+9
  0x00100073,  // ebreak (used as nemu_trap)
  0x00100093,  // reg1=zero+1
  0x00908113,  // reg2=reg1+9
  0xffe10193,  // reg3=reg2-2
  0x00908093,  // reg1=reg1+9
};

static uint8_t pmem[1000] PG_ALIGN = {};
extern "C" {
  uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }
}
extern "C" {
  word_t host_read(void *addr, int len) {
    switch (len) {
      case 1: return *(uint8_t*)addr;
      case 2: return *(uint16_t*)addr;
      case 4: return *(uint32_t*)addr;
      //IFDEF(CONFIG_ISA64, case 8: return *(uint64_t *)addr);
      default: return 0x00100073;
    }
  }
}


extern "C" {
  word_t pmem_read(paddr_t addr, int len) {
    word_t ret = host_read(guest_to_host(addr), len);
    return ret;
  }
}

extern "C" {
  void init_isa() {
    memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
  }
}
