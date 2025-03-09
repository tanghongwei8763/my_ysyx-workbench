#include<common.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define RINGBUF_MAX 20

typedef struct {
  word_t pc;
  uint32_t inst;
} ItraceNode;


ItraceNode ringbuf[RINGBUF_MAX];

void init_ringbuf() {
    memset(ringbuf, 0, sizeof(ringbuf));
}

void iringbuf(Decode *s) {
    int index = 0;
    ringbuf[index % RINGBUF_MAX].pc = s->pc;
    ringbuf[index % RINGBUF_MAX].inst = inst_fetch(&s->pc, 4);
}
