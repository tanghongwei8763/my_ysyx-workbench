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
  Vcpu* cpu = new Vcpu{contextp};

  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  cpu->trace(tfp, 99);  
  tfp->open("cpu.vcd");

  

  int step = 0;
  while (!contextp->gotFinish())
    {
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