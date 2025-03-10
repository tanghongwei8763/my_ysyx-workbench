#ifndef __IRINGBUF_H__
#define __IRINGBUF_H__

#define RINGBUF_MAX 20

void init_ringbuf();
void iringbuf(Decode *s);
void iringbuf_printf(int pos);

#endif