#include <am.h>
#include <stdlib.h>
#include <unistd.h>

Area heap;

void putch(char ch) {
  write(1, &ch, 1);
}

void halt(int code) {
  exit(code);
}
