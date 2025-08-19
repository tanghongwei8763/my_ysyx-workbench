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
#define araddr top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr
#define arvalid top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid
#define awaddr top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awaddr
#define awvalid top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid
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
} TypeStats;

typedef struct {
    TypeStats ifu;
    TypeStats lsu;
    TypeStats exu;
    TypeStats idu;
    TypeStats wbu;
} PerfCounter;

typedef struct {
    uint64_t inst_sum;   // 总指令数
    uint64_t clk_sum;    // 总时钟数
    uint64_t g_timer;    // 总时间(us)
    PerfCounter perf;    // 性能计数器
    TypeStats types[INST_TYPE_COUNT];  // 各类型指令统计
    InstType current_type;  // 当前执行的指令类型
    int prev_valid;
    int current_module;
    uint64_t module_clk_start[5];  // 0:ifu, 1:idu, 2:exu, 3:lsu, 4:wbu
    uint64_t module_time_start[5];
} Stats;
static Stats stats = {0};
static int prev_valid = 0;
static void exec_once();

static uint64_t us;
extern uint64_t get_time();
static uint64_t current_total_clk_reg = 0;

static void update_module_stats(int valid, uint64_t current_total_clk) {
    if(valid == 0) return;
    // printf("0x%02x  %ld  ", valid, current_total_clk);
    uint64_t clock_spend = current_total_clk - current_total_clk_reg;
    // printf("%ld\n", clock_spend);
    current_total_clk_reg = current_total_clk;

    switch(valid) {
        case 0x10:stats.perf.ifu.clk += clock_spend + 1; break;
        case 0x08:stats.perf.idu.clk += clock_spend; break;
        case 0x04:stats.perf.exu.clk += clock_spend; break;
        case 0x02:stats.perf.lsu.clk += clock_spend; break;
        case 0x01:stats.perf.wbu.clk += 2          ; break;
    }
}
static uint64_t icache_hit = 0;
extern "C" void performance_counter(int valid, int type_, int cache_hit) {
    if((prev_valid != valid) && (valid != 0)) prev_valid = valid;

    icache_hit += ((cache_hit >> 0) & 0x01);
    stats.perf.ifu.count += ((valid >> 4) & 0x01);
    stats.perf.idu.count += ((valid >> 3) & 0x01);
    stats.perf.exu.count += ((valid >> 2) & 0x01);
    stats.perf.lsu.count += ((valid >> 1) & 0x01);
    stats.perf.wbu.count += ((valid >> 0) & 0x01);
    if ((type_ >> 6) & 0x01) { stats.types[INST_R].count++; stats.current_type = INST_R; }
    if ((type_ >> 5) & 0x01) { stats.types[INST_I].count++; stats.current_type = INST_I; }
    if ((type_ >> 4) & 0x01) { stats.types[INST_S].count++; stats.current_type = INST_S; }
    if ((type_ >> 3) & 0x01) { stats.types[INST_B].count++; stats.current_type = INST_B; }
    if ((type_ >> 2) & 0x01) { stats.types[INST_U].count++; stats.current_type = INST_U; }
    if ((type_ >> 1) & 0x01) { stats.types[INST_J].count++; stats.current_type = INST_J; }
    if ((type_ >> 0) & 0x01) { stats.types[INST_N].count++; stats.current_type = INST_N; }
}

static void inst_infomation() {
    printf("+----------------+----------------------+\n");
    printf("| cache\t\t | 命中率\t\t|\n");
    printf("+----------------+----------------------+\n");
    printf("| -icache\t | %-15.4f\t|\n", (double)icache_hit / stats.inst_sum);
    printf("+----------------+----------------------+\n");
#ifdef CONFIG_YSYXSOC
    printf("| 模块耗时统计   | 时钟占比\t\t|\n");
    printf("+----------------+----------------------+\n");
    const char* module_names[5] = {"ifu", "idu", "exu", "lsu", "wbu"};
    TypeStats* modules[5] = {
        &stats.perf.ifu, &stats.perf.idu, 
        &stats.perf.exu, &stats.perf.lsu, &stats.perf.wbu
    };
    
    for (int i = 0; i < 5; i++) {
        double clk_ratio = stats.clk_sum > 0 ? 
            (double)modules[i]->clk / stats.clk_sum * 100 : 0;
        double time_ratio = stats.g_timer > 0 ? 
            (double)modules[i]->time / stats.g_timer * 100 : 0;
        
        printf("| - %-12s | %-10ld(%.1f%%)\t|\n",
               module_names[i],
               modules[i]->clk,
               clk_ratio);
    }
    printf("+----------------+----------------------------------------------+\n");
    
    // 打印指令类型统计表格
    printf("| 指令类型统计   | 时钟占比             时间占比\t\t|\n");
    printf("+----------------+----------------------------------------------+\n");
    
    const char* type_names[INST_TYPE_COUNT] = {"R", "I", "S", "B", "U", "J", "N"};
    for (int i = 0; i < INST_TYPE_COUNT; i++) {
        double clk_ratio = stats.clk_sum > 0 ? 
            (double)stats.types[i].clk / stats.clk_sum * 100 : 0;
        double time_ratio = stats.g_timer > 0 ? 
            (double)stats.types[i].time / stats.g_timer * 100 : 0;
        
        printf("| %-5s %-8ld | %-10ld(%.1f%%)\t%-10ld(%.1f%%)\t|\n",
               type_names[i],
               stats.types[i].count / 2,
               stats.types[i].clk,
               clk_ratio,
               stats.types[i].time,
               time_ratio);
    }
    printf("+---------------------------------------------------------------+\n");
#endif
    Log("IPC = %.4f", (double)stats.inst_sum / stats.clk_sum);
    Log("host time spent = %ld us", stats.g_timer);
    Log("total guest instructions = %ld", stats.inst_sum);
    Log("total guest clocks = %ld", stats.clk_sum);
    Log("simulation frequency = %ld inst/s", stats.inst_sum * 1000000 / stats.g_timer);
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
                    inst_infomation();
                    finish();
                    break;
                }
                if(lsu_access_fault) {
                    printf("lsu_access_fault\n");
                    inst_infomation();
                    finish();
                    break;
                }
#endif
                if(NPC_STATE == NPC_END || NPC_STATE == NPC_ABORT){
                    inst_infomation();
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
#ifdef CONFIG_ITRACE
                iringbuf(pc, inst);
#endif
#ifdef CONFIG_YSYXSOC
                if(ifu_access_fault) {
                    printf("ifu_access_fault\n");
                    inst_infomation();
                    finish();
                    break;
                }
                if(lsu_access_fault) {
                    printf("lsu_access_fault\n");
                    inst_infomation();
                    finish();
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
                    inst_infomation();
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
    stats.inst_sum++;
    int last_pc = pc;

    uint64_t timer_start, timer_end, time_spent = 0;
    uint64_t clk_sum_reg = 0;
    int prev_valid_reg = 0x10;
    do{
#ifdef CONFIG_DIFFTEST
        if((araddr >= 0x10000000) & (araddr <= 0x10000fff) & (arvalid | awvalid)) {printf("jumping 0x%08x\n", pc); difftest_skip_ref();}
        if((araddr >= 0x02000000) & (araddr <= 0x0200ffff) & (arvalid | awvalid)) {printf("jumping 0x%08x\n", pc); difftest_skip_ref();}
#endif
        if(prev_valid_reg != prev_valid){
            prev_valid_reg = prev_valid;
            update_module_stats(prev_valid_reg, clk_sum_reg);
        }
        timer_start = get_time();
        single_cycle();
        timer_end = get_time();
        time_spent += timer_end - timer_start;
        clk_sum_reg++;
    } while (pc == last_pc);

    timer_start = get_time();
    single_cycle();
    timer_end = get_time();
    time_spent += timer_end - timer_start;
    clk_sum_reg++;
    
    stats.clk_sum += clk_sum_reg;
    stats.g_timer += time_spent;
    stats.types[stats.current_type].clk += clk_sum_reg;
    stats.types[stats.current_type].time += time_spent;

    trace_and_difftest();
}
