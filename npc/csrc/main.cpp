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


static Vysyx_25020037_cpu dut;

// 设置时钟，复位信号
void single_cycle() {
    dut.clk=0;dut.eval();
    dut.clk=1;dut.eval();
}

static void reset(int n) {
    dut.rst = 1;
    while (n -- > 0) single_cycle();
    dut.rst = 0;
}

int main (int argc, char** argv)
{
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut.trace(tfp, 99);
    tfp->open("ysyx_25020037_cpu.vcd");

    reset(10);
    for(int i=0; i < 6; i++){
        single_cycle();
        tfp->dump(contextp->time());
        contextp->timeInc(1);
    }

    tfp->close();

    delete tfp;
    delete contextp;
    return 0;
}