#include "../include/common.h"
#include "../include/monitor.h"
#include "../include/trace.h"
#include "../include/switch.h"
#include "../include/difftest-def.h"
#include "Vysyx_25020037___024root.h"
#include "Vysyx_25020037.h"

extern Vysyx_25020037 *top;
#define pc top->rootp->ysyx_25020037__DOT__pc
#define inst top->rootp->ysyx_25020037__DOT__inst

static void exec_once();

static void trace_and_difftest() {

#ifdef CONFIG_DIFFTEST
    difftest_step(dut.pc, dut.pc);
#endif

#ifdef CONFIG_WATCHPOINT			//监视点
  //printf("enter(1)\n");
  int sign = 0, i = 0;
  i = watchpoint_exec(&sign);
  if(sign == 1) {
    NPC_STATE = (NPC_STATE == NPC_END) ? NPC_END : NPC_STOP;
    printf("watchpoint %d not equavolent\n", i);
  }
  else if (sign == 2) {
    printf("caculate error\n");
    assert(0);
  }
#endif

}

void cpu_exec(int n){
    if(NPC_STATE == NPC_RUNING){
        if(n < 0){
            while(true){
                iringbuf(pc, inst);
                if(NPC_STATE == NPC_END || NPC_STATE == NPC_ABORT){
                    finish();
                    break;
                }
                else if (NPC_STATE == NPC_STOP) {
                    NPC_STATE = NPC_RUNING;
                    break;
                }
                exec_once();
            }
        }
        else{
            for(int i = 0; i < n; i++){
                iringbuf(pc, inst);
                if(NPC_STATE == NPC_RUNING) {
                    exec_once();
                    if(NPC_STATE == NPC_RUNING) printf("0x%08x: %08x\n", pc, inst);
                }
                else if (NPC_STATE == NPC_STOP) {
                    NPC_STATE = NPC_RUNING;
                    break;
                }
                else if(NPC_STATE == NPC_END || NPC_STATE == NPC_ABORT) {
                    finish();
                    break;
                }
            }
        }
    }
    else if(NPC_STATE == NPC_END) {
        printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
        return;
    }
}

static void exec_once() {
    int last_pc = pc;
    do{
        single_cycle();
    } while (pc == last_pc);
    single_cycle();
    trace_and_difftest();
}
