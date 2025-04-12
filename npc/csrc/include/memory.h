#ifndef MEMORY_H
#define MEMORY_H


#ifdef __cplusplus
extern "C" {
#endif

uint8_t* guest_to_host(uint32_t paddr);
word_t pmem_read(paddr_t addr, uint8_t len);
word_t host_read(void *addr, uint8_t len);
void pmem_write(paddr_t addr, uint8_t len, word_t data);
void init_isa();

#ifdef __cplusplus
}
#endif

#endif