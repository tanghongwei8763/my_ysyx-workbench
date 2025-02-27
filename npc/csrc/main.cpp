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
typedef uint32_t paddr_t;
typedef uint32_t word_t;
static Vysyx_25020037_cpu dut;
uint32_t* init(size_t size);
uint32_t* guest_to_host(uint32_t addr);
static word_t pmem_read(paddr_t addr, int len);


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
    uint32_t* memory;
    memory = init(5);

    VerilatedContext* contextp = new VerilatedContext;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut.trace(tfp, 99);
    tfp->open("ysyx_25020037_cpu.vcd");

    reset(10);
    for(int i=0; i < 6; i++){
        dut.inst = pmem_read(memory, dut.pc);
        single_cycle();
        tfp.dump(concept->time());
        concept->timeInc(1);
    }

    tfp->close();

    delete contextp;
    return 0;
}