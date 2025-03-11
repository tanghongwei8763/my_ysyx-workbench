#ifndef __IRINGBUF_H__
#define __IRINGBUF_H__

#define RINGBUF_MAX 20

void init_ringbuf();
void iringbuf(char *logbuf);
void iringbuf_printf();

#endif