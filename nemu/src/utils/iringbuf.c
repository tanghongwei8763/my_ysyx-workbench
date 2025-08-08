#include <common.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include "iringbuf.h"
#include "disasm.h"

static int ringbuf_index = 0;

char ringbuf[RINGBUF_MAX][128];

void init_ringbuf() {
    memset(ringbuf, 0, sizeof(ringbuf));
}

void iringbuf(uint32_t thispc) {
    uint32_t pc = thispc;
    uint32_t inst = inst_fetch(&pc, 4);
    char logbuf[128];

#ifdef CONFIG_ITRACE
    char buffer[20];
    uint8_t code[4];
    code[0] = (uint8_t)(inst & 0xFF);
    code[1] = (uint8_t)((inst >> 8) & 0xFF);
    code[2] = (uint8_t)((inst >> 16) & 0xFF);
    code[3] = (uint8_t)((inst >> 24) & 0xFF);
    disassemble(buffer, sizeof(buffer), pc, code, sizeof(code));
    sprintf(logbuf, "0x%08x: %-30s", thispc, buffer);
#endif
    sprintf(logbuf, "0x%08x: ", thispc);
    strcat(logbuf, "\t");

    for(int i = 3; i >= 0; i--) {
      char byte[4];
      sprintf(byte, " %02x", (inst >> (i * 8)) & 0xFF);
      strcat(logbuf, byte);
    }

    strcpy(ringbuf[ringbuf_index % RINGBUF_MAX], logbuf);
    ringbuf_index++;
}

void iringbuf_printf() {
  for (int i = 0; i < RINGBUF_MAX; i++) {
  printf("%s", (((ringbuf_index - 1) % RINGBUF_MAX) == i) ? "-->" : "   ");
  puts(ringbuf[i]);
  }
}
