#include "../include/commen.h"
#include "../include/reg.h"
#include "../include/switch.h"


void isa_reg_display(){
    printf("pc\t\t0x%08x\n", dut.pc);
    for(int reg = 0; reg < 16; reg++){
        printf("%s\t\t0x%08x\n", tempregs[reg], dut.regs[reg]);
    }
#ifdef CONFIG_PCSRS
    printf("mtvec\t\t0x%08x\n", dut.mtvec);
    printf("mepc\t\t0x%08x\n", dut.mepc);
    printf("mstatus\t\t0x%08x\n", dut.mstatus);
    printf("mcause\t\t0x%08x\n", dut.mcause);
#endif
}