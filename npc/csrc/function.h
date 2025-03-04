#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdint.h>
#define RESET_VECTOR 0x80000000
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x80000000
#define PG_ALIGN __attribute((aligned(4096)))
typedef uint32_t paddr_t;
typedef uint32_t word_t;



#ifdef __cplusplus
extern "C" {
#endif

uint8_t* guest_to_host(uint32_t paddr);
word_t pmem_read(paddr_t addr, int len);
word_t host_read(void *addr, int len);
void init_isa();

#ifdef __cplusplus
}
#endif

#endif