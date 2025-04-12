#include "Vysyx_25020037_cpu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../include/commen.h"
#include "../include/memory.h"
#include "../include/monitor.h"
#include "../include/reg.h"
#include "../include/trace.h"

// 定义全局变量
VerilatedContext* contextp = nullptr;
VerilatedVcdC* tfp = nullptr;
Vysyx_25020037_cpu dut;

int NPC_STATE;

const char *tempregs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

extern "C" {
    void hit() {
        NPC_STATE = NPC_END;
    }
}

void finish(){
    tfp->dump(contextp->time());
    contextp->timeInc(1);

    /*
    printf("\033[1m\033[32mHIT GOOD TRAP\033[37m at pc=0x%08x\n",  dut.pc);
    return;
    */

    if(dut.regs[10]) {
        iringbuf_printf();
        printf("\033[1m\033[31mHIT BAD TRAP\033[37m at pc=0x%08x\n",  dut.pc);
        return;
    }
    else if (NPC_STATE == NPC_ABORT) {
        iringbuf_printf();
        printf("\033[1m\033[31mHIT ABORT TRAP\033[37m at pc=0x%08x\n",  dut.pc);
        return;
    }
    else{
        printf("\033[1m\033[32mHIT GOOD TRAP\033[37m at pc=0x%08x\n",  dut.pc);
        return;
    }

    tfp->close();
    delete tfp;
    delete contextp;
}

// 一周期最小执行单元
void single_cycle() {
    dut.clk=1;
    dut.eval();
    tfp->dump(contextp->time());
    contextp->timeInc(1);

    dut.clk=0;
    dut.eval();
    tfp->dump(contextp->time());
    contextp->timeInc(1);
}

static void reset(int n) {
    dut.rst = 1;
    while (n -- > 0) single_cycle();
    dut.rst = 0;
}

int main (int argc, char** argv) {
    /*
    printf("argc: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    */
    Verilated::traceEverOn(true);

    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    tfp = new VerilatedVcdC;
    dut.trace(tfp, 99);
    tfp->open("ysyx_25020037_cpu.vcd");

    init_monitor(argc, argv);

    reset(10);
    NPC_STATE = true;
    while(true){
        sdb_mainloop();
        //single_cycle();
    }
    
    return 0;
}    