#include "../include/commen.h"
#include "../include/switch.h"

static const uint32_t img [] = {
  0x00000413,
  0x00009117,
  0xffc10113,
  0x00c000ef,
  0x00000513,
  0x00008067,
  0xff410113,
  0x00000517,
  0x01450513,
  0x00112423,
  0xfe9ff0ef,
  0x00050513,
  0x00100073,
  0x0000006f,  
};

static uint8_t pmem[0x10000000] PG_ALIGN = {};
extern "C" {
  uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }
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
      case 1: *(uint8_t  *)addr = data; return;
      case 2: *(uint16_t *)addr = data; return;
      case 4: *(uint32_t *)addr = data; return;
    }
  }
}


extern "C" {
  word_t pmem_read(paddr_t addr, uint8_t len) {
#ifdef CONFIG_MTRACE
    printf("0x%08x: r\t%08x   %d\n", dut.pc, addr, len);
#endif
    word_t ret = host_read(guest_to_host(addr), len);
    return ret;
  }
}

extern "C" {
  void pmem_write(paddr_t addr, uint8_t len, word_t data) {
#ifdef CONFIG_MTRACE
    printf("0x%08x: w\t%08x   %d   0x%08x\n", dut.pc, addr, len, data);
#endif
    host_write(guest_to_host(addr), len, data);
  }
}


extern "C" void init_isa() {memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));}
