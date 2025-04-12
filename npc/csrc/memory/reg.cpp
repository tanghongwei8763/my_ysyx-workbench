#include "../include/commen.h"
#include "../include/reg.h"


void isa_reg_display(){
    printf("pc\t\t0x%08x\n", dut.pc);
    for(int reg = 0; reg < 32; reg++){
        printf("%s\t\t0x%08x\n", tempregs[reg], dut.regs[reg]);
    }
}