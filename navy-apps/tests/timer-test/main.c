#include <stdio.h>
#include <stdint.h>
#include <NDL.h>

int main() {
  NDL_Init(0);
  int count = 1;
  while (1) {
    uint32_t cost_time_us = NDL_GetTicks();
    if (cost_time_us >= count * 500000) {
      printf("输出时间第%d次\n", count++);
    }
  }
  return 0;
}