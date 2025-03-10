#include <common.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include "iringbuf.h"

static int ringbuf_index = 0;

typedef struct {
  word_t pc;
  uint32_t inst;
} ItraceNode;


ItraceNode ringbuf[RINGBUF_MAX];

void init_ringbuf() {
    memset(ringbuf, 0, sizeof(ringbuf));
}

void iringbuf(Decode *s) {
    ringbuf[ringbuf_index % RINGBUF_MAX].pc = s->pc;
    ringbuf[ringbuf_index % RINGBUF_MAX].inst = inst_fetch(&s->pc, 4);
    ringbuf_index++;
}
