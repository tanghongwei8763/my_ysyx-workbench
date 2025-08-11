#include "../include/common.h"
#include "../include/monitor.h"
#include "../include/trace.h"
#include "../include/switch.h"
#include "../include/debug.h"
#include "../include/macro.h"
#include "../include/difftest-def.h"

#include <time.h>
#include <sys/time.h>

#ifdef CONFIG_YSYXSOC
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull.h"
extern VysyxSoCFull *top;
#define pc top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
#define inst top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst
#define ifu_access_fault top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_access_fault
#define lsu_access_fault top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_access_fault
#else
#include "Vysyx_25020037___024root.h"
#include "Vysyx_25020037.h"
extern Vysyx_25020037 *top;
#define pc top->rootp->ysyx_25020037__DOT__pc
#define inst top->rootp->ysyx_25020037__DOT__inst
#endif

static void exec_once();
static uint64_t inst_sum = 0;
static uint64_t clk_sum = 0;
static uint64_t g_timer = 0;

static uint64_t ifu_sum = 0;
static uint64_t lsu_sum = 0;
static uint64_t exu_sum = 0;
static uint64_t idu_sum = 0;
static uint64_t type_r = 0;
static uint64_t type_i = 0;
static uint64_t type_s = 0;
static uint64_t type_b = 0;
static uint64_t type_u = 0;
static uint64_t type_j = 0;
static uint64_t type_n = 0;
extern "C" void performance_counter(int ifu, int lsu, int exu, int idu, int type_) {
    ifu_sum += ifu;
    lsu_sum += lsu;
    exu_sum += exu;
    idu_sum += idu;
    type_r  += (type_ >> 6) & 0x01;
    type_i  += (type_ >> 5) & 0x01;
    type_s  += (type_ >> 4) & 0x01;
    type_b  += (type_ >> 3) & 0x01;
    type_u  += (type_ >> 2) & 0x01;
    type_j  += (type_ >> 1) & 0x01;
    type_n  += (type_ >> 0) & 0x01;
}

static void inst_infomation() {
    Log("IPC = %.4f", (double)inst_sum / clk_sum);
    Log("host time spent = %ld us", g_timer);
    Log("total guest instructions = %ld", inst_sum);
    Log("total guest clocks = %ld", clk_sum);
    Log("simulation frequency = %ld inst/s", inst_sum * 1000000 / g_timer);
    // Log("performance counter: ifu:%ld lsu:%ld exu:%ld idu:%ld", ifu_sum, lsu_sum, exu_sum/2, idu_sum/2);
    // Log("inst type: R:%ld I:%ld S:%ld B:%ld U:%ld J:%ld N:%ld", type_r/2, type_i/2, type_s/2, type_b/2, type_u/2, type_j/2, type_n/2);
    // 打印表格标题
    printf("+-------------------------+---------------------+\n");
    printf("| 项目                    | 数值                |\n");
    printf("+-------------------------+---------------------+\n");
    printf("+-------------------------+---------------------+\n");
    printf("| performance counter:    |                     |\n");
    printf("| - ifu                   | %-19ld |\n", ifu_sum);
    printf("| - lsu                   | %-19ld |\n", lsu_sum);
    printf("| - exu                   | %-19ld |\n", exu_sum/2);
    printf("| - idu                   | %-19ld |\n", idu_sum/2);
    printf("+-------------------------+---------------------+\n");
    printf("| inst type:              |                     |\n");
    printf("| - R                     | %-19ld |\n", type_r/2);
    printf("| - I                     | %-19ld |\n", type_i/2);
    printf("| - S                     | %-19ld |\n", type_s/2);
    printf("| - B                     | %-19ld |\n", type_b/2);
    printf("| - U                     | %-19ld |\n", type_u/2);
    printf("| - J                     | %-19ld |\n", type_j/2);
    printf("| - N                     | %-19ld |\n", type_n/2);
    printf("+-------------------------+---------------------+\n");
}

static void trace_and_difftest() {

#ifdef CONFIG_DIFFTEST
    difftest_step(pc, pc);
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
#ifdef CONFIG_ITRACE
                iringbuf(pc, inst);
#endif
#ifdef CONFIG_YSYXSOC
                if(ifu_access_fault) {
                    printf("ifu_access_fault\n");
                    finish();
                    inst_infomation();
                    break;
                }
                if(lsu_access_fault) {
                    printf("lsu_access_fault\n");
                    finish();
                    inst_infomation();
                    break;
                }
#endif
                if(NPC_STATE == NPC_END || NPC_STATE == NPC_ABORT){
                    finish();
                    inst_infomation();
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
#ifdef CONFIG_ITRACE
                iringbuf(pc, inst);
#endif
#ifdef CONFIG_YSYXSOC
                if(ifu_access_fault) {
                    printf("ifu_access_fault\n");
                    finish();
                    inst_infomation();
                    break;
                }
                if(lsu_access_fault) {
                    printf("lsu_access_fault\n");
                    finish();
                    inst_infomation();
                    break;
                }
#endif
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
                    inst_infomation();
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

static uint64_t us;

extern uint64_t get_time();

static void exec_once() {
    inst_sum++;
    int last_pc = pc;
    uint64_t timer_start = get_time();
    do{
        single_cycle();
        clk_sum++;
    } while (pc == last_pc);
    single_cycle();
    uint64_t timer_end = get_time();
    clk_sum++;
    g_timer += timer_end - timer_start;
    trace_and_difftest();
}
