#include <cstdint>
#include <cassert>
#include <cstddef>
#include <cstdlib>
#include <cstring>

#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x80000000

typedef uint32_t paddr_t;
typedef uint32_t word_t;

static uint32_t pmem[CONFIG_MSIZE];

static const uint32_t img [] = {
  0x00100093,  // reg1=zero+1
  0x00908113,  // reg2=reg1+9
  0xffe10193,  // reg3=reg2-2
  0x00908093,  // reg1=reg1+9
  0x00100073,  // ebreak (used as nemu_trap)
};
/*
uint32_t* init(size_t size) {
  uint32_t* memory = (uint32_t*)malloc(size * sizeof(uint32_t));
  memcpy(memory, img, sizeof(img));
  if(memory==NULL) exit(0);
  return memory;
}
*/
static inline word_t host_read(paddr_t addr, int len) {
  paddr_t temp_pc = addr - CONFIG_MBASE;
  switch (len) {
    case 1: return (uint8_t)*(img + temp_pc);
    case 2: return (uint16_t)*(img + temp_pc);
    case 4: return (uint32_t)*(img + temp_pc);
    //IFDEF(CONFIG_ISA64, case 8: return *(uint64_t *)addr);
    default: return 0x00100073;
  }
}

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(addr, len);
  return ret;
}
