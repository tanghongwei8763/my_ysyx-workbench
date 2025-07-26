#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../include/common.h"
#include "../include/memory.h"
#include "../include/monitor.h"
#include "../include/reg.h"
#include "../include/trace.h"
#include "../include/switch.h"
#include "../include/debug.h"
#include "../include/macro.h"
#include "Vysyx_25020037___024root.h"
#include "Vysyx_25020037.h"

Vysyx_25020037 *top = new Vysyx_25020037("top");
#define pc top->rootp->ysyx_25020037__DOT__pc
#define inst top->rootp->ysyx_25020037__DOT__inst
#define gpr top->rootp->ysyx_25020037__DOT__gpr_cpu__DOT__regs

// 定义全局变量
VerilatedContext* contextp = nullptr;
VerilatedVcdC* tfp = nullptr;

int NPC_STATE;

const char *tempregs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

extern "C" {
    void hit(int inst_not_realize) {
        if(inst_not_realize)
            NPC_STATE = NPC_ABORT;
        else
            NPC_STATE = NPC_END;
    }
}

int is_exit_status_bad() {
  int good = (NPC_STATE == NPC_END) ||
             (NPC_STATE == NPC_QUIT);
  return !good;
}

void finish(){
#ifdef CONFIG_WAVE
    tfp->dump(contextp->time());
    contextp->timeInc(1);
    tfp->close();
    delete tfp;
    delete contextp;
#endif

    if (NPC_STATE == NPC_ABORT) {
        iringbuf_printf();
        Log("npc: %s at pc = 0x%08x",ANSI_FMT("HIT ABORT TRAP", ANSI_FG_RED), pc-4);
    } 
    else if(gpr[10]) Log("npc: %s at pc = 0x%08x",ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED), pc-4);
    else Log("npc: %s at pc = 0x%08x",ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN), pc-4);
    return;
}

// 一周期最小执行单元
void single_cycle() {
    top->clock=1;
    top->eval();
#ifdef CONFIG_WAVE
    tfp->dump(contextp->time());
    contextp->timeInc(1);
#endif
    top->clock=0;
    top->eval();
#ifdef CONFIG_WAVE
    tfp->dump(contextp->time());
    contextp->timeInc(1);
#endif
}

static void reset(int n) {
    top->reset = 1;
    while (n -- > 0) single_cycle();
    top->reset = 0;
}

int main (int argc, char** argv) {

    Verilated::traceEverOn(true);

    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
#ifdef CONFIG_WAVE
    tfp = new VerilatedVcdC;
    top.trace(tfp, 99);
    tfp->open("ysyx_25020037.vcd");
#endif
    reset(10);
    
    init_monitor(argc, argv);

    NPC_STATE = true;

    sdb_mainloop();
    
    return is_exit_status_bad();
}    