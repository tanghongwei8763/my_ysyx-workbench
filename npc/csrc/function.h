#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdint.h>

#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x80000000

typedef uint32_t paddr_t;
typedef uint32_t word_t;

#ifdef __cplusplus
extern "C" {
#endif

word_t pmem_read(paddr_t addr, int len);
inline word_t host_read(paddr_t addr, int len);

#ifdef __cplusplus
}
#endif

#endif