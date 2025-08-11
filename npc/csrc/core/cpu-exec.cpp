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

typedef enum {
    INST_R,
    INST_I,
    INST_S,
    INST_B,
    INST_U,
    INST_J,
    INST_N,
    INST_TYPE_COUNT
} InstType;

typedef struct {
    uint64_t count;      // 指令数量
    uint64_t clk;        // 消耗的时钟数
    uint64_t time;       // 消耗的时间(us)
} InstTypeStats;

typedef struct {
    uint64_t ifu;
    uint64_t lsu;
    uint64_t exu;
    uint64_t idu;
} PerfCounter;

typedef struct {
    uint64_t inst_sum;   // 总指令数
    uint64_t clk_sum;    // 总时钟数
    uint64_t g_timer;    // 总时间(us)
    PerfCounter perf;    // 性能计数器
    InstTypeStats types[INST_TYPE_COUNT];  // 各类型指令统计
    InstType current_type;  // 当前执行的指令类型
} Stats;
static Stats stats = {0};
static void exec_once();

extern "C" void performance_counter(int ifu, int lsu, int exu, int idu, int type_) {
    stats.perf.ifu += ifu;
    stats.perf.lsu += lsu;
    stats.perf.exu += exu;
    stats.perf.idu += idu;
    if ((type_ >> 6) & 0x01) { stats.types[INST_R].count++; stats.current_type = INST_R; }
    if ((type_ >> 5) & 0x01) { stats.types[INST_I].count++; stats.current_type = INST_I; }
    if ((type_ >> 4) & 0x01) { stats.types[INST_S].count++; stats.current_type = INST_S; }
    if ((type_ >> 3) & 0x01) { stats.types[INST_B].count++; stats.current_type = INST_B; }
    if ((type_ >> 2) & 0x01) { stats.types[INST_U].count++; stats.current_type = INST_U; }
    if ((type_ >> 1) & 0x01) { stats.types[INST_J].count++; stats.current_type = INST_J; }
    if ((type_ >> 0) & 0x01) { stats.types[INST_N].count++; stats.current_type = INST_N; }
}

static void inst_infomation() {
    Log("IPC = %.4f", (double)stats.inst_sum / stats.clk_sum);
    Log("host time spent = %ld us", stats.g_timer);
    Log("total guest instructions = %ld", stats.inst_sum);
    Log("total guest clocks = %ld", stats.clk_sum);
    Log("simulation frequency = %ld inst/s", stats.inst_sum * 1000000 / stats.g_timer);
    
    printf("+----------------+-------------------+\n");
    printf("| 性能计数器     |                   |\n");
    printf("+----------------+-------------------+\n");
    printf("| - ifu          | %-17ld |\n", stats.perf.ifu);
    printf("| - lsu          | %-17ld |\n", stats.perf.lsu);
    printf("| - exu          | %-17ld |\n", stats.perf.exu / 2);
    printf("| - idu          | %-17ld |\n", stats.perf.idu / 2);
    printf("+---------------------------------------------------------------+\n");
    
    // 打印指令类型统计表格
    printf("| 指令类型统计   | 时钟占比             时间占比\t\t|\n");
    printf("+---------------------------------------------------------------+\n");
    
    const char* type_names[INST_TYPE_COUNT] = {"R", "I", "S", "B", "U", "J", "N"};
    for (int i = 0; i < INST_TYPE_COUNT; i++) {
        double clk_ratio = stats.clk_sum > 0 ? 
            (double)stats.types[i].clk / stats.clk_sum * 100 : 0;
        double time_ratio = stats.g_timer > 0 ? 
            (double)stats.types[i].time / stats.g_timer * 100 : 0;
        
        printf("| %-9s %-4ld | %-10ld(%.1f%%)\t%-10ld(%.1f%%)\t|\n",
               type_names[i],
               stats.types[i].count / 2,
               stats.types[i].clk,
               clk_ratio,
               stats.types[i].time,
               time_ratio);
    }
    printf("+---------------------------------------------------------------+\n");
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
#ifdef CONFIG_YSYXSOC
                    inst_infomation();
#endif
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
#ifdef CONFIG_YSYXSOC
                    inst_infomation();
#endif
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
    stats.inst_sum++;
    int last_pc = pc;

    uint64_t timer_start = get_time();
    uint64_t clk_sum_reg = 0;
    do{
        single_cycle();
        clk_sum_reg++;
    } while (pc == last_pc);
    single_cycle();
    clk_sum_reg++;
    uint64_t timer_end = get_time();
    uint64_t time_spent = timer_end - timer_start;
    
    stats.clk_sum += clk_sum_reg;
    stats.g_timer += time_spent;
    stats.types[stats.current_type].clk += clk_sum_reg;
    stats.types[stats.current_type].time += time_spent;

    trace_and_difftest();
}
