/*
#include <stdio.h>

int main() {
  printf("Hello, ysyx!\n");
  return 0;
}
*/
#include "Vcpu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "stdio.h"
#include "stdlib.h"
#include "assert.h"

int main (int argc, char** argv)
{
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};

  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace(tfp, 99);  
  tfp->open("cpu.vcd");

  static const uint32_t img [] = {
  0x00100093,  // reg1=zero+1
  0x00908113,  // reg2=reg1+9
  0xffe10193,  // reg3=reg2-2
  0x00908093,  // reg1=reg1+9
};

  int step = 0;
  while (!contextp->gotFinish())
    {
      cpu->s=img[step]
      cpu->eval();
      
      // 写入波形数据
      tfp->dump(step);
      step++;
    }
    
  // 关闭波形文件
  tfp->close();
    
  delete cpu;
  delete contextp;
  return 0;
}