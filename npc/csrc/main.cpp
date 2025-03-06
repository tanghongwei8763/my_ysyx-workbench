#include "Vysyx_25020037_cpu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "function.h"

VerilatedContext* global_contextp = nullptr;
VerilatedVcdC* global_tfp = nullptr;

extern "C" {
    void ending() {

    global_contextp->timeInc(2);
    global_tfp->dump(global_contextp->time());

    global_tfp->close();
    delete global_tfp;
    delete global_contextp;
        printf("ending....\n");
        exit(0);
    }
}

// 设置时钟，复位信号
void single_cycle(Vysyx_25020037_cpu& dut, VerilatedContext* contextp, VerilatedVcdC* tfp) {
    dut.clk=0;
    dut.eval();
    tfp->dump(contextp->time());
    contextp->timeInc(1);

    dut.clk=1;
    dut.eval();
    tfp->dump(contextp->time());
    contextp->timeInc(1);
}

static void reset(Vysyx_25020037_cpu& dut, VerilatedContext* contextp, VerilatedVcdC* tfp, int n) {
    dut.rst = 1;
    while (n -- > 0) single_cycle(dut, contextp, tfp);
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

    global_contextp = contextp;
    global_tfp = tfp;

    init_isa();
    //printf("here!!!\n");

    reset(dut, contextp, tfp,10);
    int inst = 0;
    //printf("here0\n");
    while(true){
        dut.inst = pmem_read(4*inst+0x80000000, 4);
        //printf("here 0x%08x\n",dut.inst);
        single_cycle(dut, contextp, tfp);
        inst++;
    }
    printf("here\n");
    ending();
    return 0;
}
