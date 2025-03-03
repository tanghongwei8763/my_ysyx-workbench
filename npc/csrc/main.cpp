/*
#include <stdio.h>

int main() {
  printf("Hello, ysyx!\n");
  return 0;
}
*/

#include "Vysyx_25020037_cpu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "function.h"


// 设置时钟，复位信号
void single_cycle(Vysyx_25020037_cpu& dut) {
    dut.clk=0;dut.eval();
    dut.clk=1;dut.eval();
}

static void reset(Vysyx_25020037_cpu& dut, int n) {
    dut.rst = 1;
    while (n -- > 0) single_cycle(dut);
    dut.rst = 0;
}

int main (int argc, char** argv)
{

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    Verilated::traceEverOn(true);

    Vysyx_25020037_cpu dut;
    
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut.trace(tfp, 99);
    tfp->open("ysyx_25020037_cpu.vcd");

    init_isa();

    reset(dut,10);
    for(int i=0; i < 6; i++){
        dut.inst = pmem_read(4*i+0x80000000, 4);
        single_cycle(dut);
        tfp->dump(contextp->time());
        contextp->timeInc(1);
    }

    tfp->close();

    delete tfp;
    delete contextp;
    return 0;
}
