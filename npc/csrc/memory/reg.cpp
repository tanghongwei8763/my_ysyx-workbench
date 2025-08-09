#include "../include/common.h"
#include "../include/reg.h"
#include "../include/switch.h"
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull.h"

extern VysyxSoCFull *top;
#define pc top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
#define gpr top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs
#define mtvec top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec
#define mepc top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc
#define mstatus top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus
#define mcause top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause
#define mvendorid top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
#define marchid top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid

void isa_reg_display(){
    printf("pc\t\t0x%08x\n", pc);
    for(int reg = 0; reg < 16; reg++){
        printf("%s\t\t0x%08x\n", tempregs[reg], gpr[reg]);
    }
#ifdef CONFIG_PCSRS
    printf("mtvec\t\t0x%08x\n", mtvec);
    printf("mepc\t\t0x%08x\n", mepc);
    printf("mstatus\t\t0x%08x\n", mstatus);
    printf("mcause\t\t0x%08x\n", mcause);
    printf("mvendorid\t0x%08x\n", mvendorid);
    printf("marchid\t\t0x%08x\n", marchid);
#endif
}