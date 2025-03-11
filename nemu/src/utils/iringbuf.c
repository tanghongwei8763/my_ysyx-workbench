#include <common.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include "iringbuf.h"

static int ringbuf_index = 0;
/*
typedef struct {
  word_t pc;
  uint32_t inst;
} ItraceNode;
*/

char ringbuf[RINGBUF_MAX][128];

void init_ringbuf() {
    memset(ringbuf, 0, sizeof(ringbuf));
}

void iringbuf(char *logbuf) {
    strcpy(ringbuf[ringbuf_index % RINGBUF_MAX], logbuf);
    ringbuf_index++;
}

void iringbuf_printf() {
  for (int i = 0; i < RINGBUF_MAX; i++) {
  puts((((ringbuf_index-1)%RINGBUF_MAX)==i)?"-->":"   ");
  puts(ringbuf[i]);
  }
}
