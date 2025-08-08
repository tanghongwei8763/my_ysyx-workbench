#include "../include/common.h"
#include "../include/reg.h"
#include "../include/switch.h"
#include "Vysyx_25020037___024root.h"
#include "Vysyx_25020037.h"

extern Vysyx_25020037 *top;
#define pc top->rootp->ysyx_25020037__DOT__pc
#define gpr top->rootp->ysyx_25020037__DOT__gpr_cpu__DOT__regs

void isa_reg_display(){
    printf("pc\t\t0x%08x\n", pc);
    for(int reg = 0; reg < 16; reg++){
        printf("%s\t\t0x%08x\n", tempregs[reg], gpr[reg]);
    }
}