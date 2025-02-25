// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VReg__Syms.h"


VL_ATTR_COLD void VReg___024root__trace_init_sub__TOP__0(VReg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"s", false,-1, 31,0);
    tracep->declBus(c+3,"rd", false,-1, 4,0);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+7,"src1", false,-1, 31,0);
    tracep->declBus(c+8,"src2", false,-1, 31,0);
    tracep->declBus(c+9,"result", false,-1, 31,0);
    tracep->declBit(c+83,"wen", false,-1);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+10,"din", false,-1, 31,0);
    tracep->declBus(c+1,"dout", false,-1, 31,0);
    tracep->declBit(c+83,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_cpu ");
    tracep->declBus(c+7,"src1", false,-1, 31,0);
    tracep->declBus(c+8,"src2", false,-1, 31,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+9,"result", false,-1, 31,0);
    tracep->declBit(c+83,"wen", false,-1);
    tracep->declBus(c+9,"result1", false,-1, 31,0);
    tracep->declBus(c+11,"result2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu_cpu ");
    tracep->declBus(c+2,"s", false,-1, 31,0);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+3,"rd", false,-1, 4,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+6,"immI", false,-1, 31,0);
    tracep->declBus(c+12,"immS", false,-1, 31,0);
    tracep->declBus(c+13,"immU", false,-1, 31,0);
    tracep->declBus(c+14,"immB", false,-1, 31,0);
    tracep->declBus(c+15,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu_cpu ");
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"s", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_cpu ");
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"d", false,-1, 31,0);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+7,"src1", false,-1, 31,0);
    tracep->declBus(c+8,"src2", false,-1, 31,0);
    tracep->declBus(c+3,"rd", false,-1, 4,0);
    tracep->declBit(c+83,"wen", false,-1);
    tracep->pushNamePrefix("lsu_gpr ");
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"d", false,-1, 31,0);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+7,"src1", false,-1, 31,0);
    tracep->declBus(c+8,"src2", false,-1, 31,0);
    tracep->declBus(c+3,"waddr", false,-1, 4,0);
    tracep->declBit(c+83,"wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+16+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("GPR32[0] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+48,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[10] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+50,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[11] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+51,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[12] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+52,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[13] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+53,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[14] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+54,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[15] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+55,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[16] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+56,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[17] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+57,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[18] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+58,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[19] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+59,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[1] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+60,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[20] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+61,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[21] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+62,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[22] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+63,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[23] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+64,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[24] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+65,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[25] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+66,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[26] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+67,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[27] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+68,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[28] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+69,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[29] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+70,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[2] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+71,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[30] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+72,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[31] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+73,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[3] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+74,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[4] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+75,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[5] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+76,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[6] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+77,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[7] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+78,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[8] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+79,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[9] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+80,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(5);
}

VL_ATTR_COLD void VReg___024root__trace_init_top(VReg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root__trace_init_top\n"); );
    // Body
    VReg___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VReg___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VReg___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VReg___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VReg___024root__trace_register(VReg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VReg___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VReg___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VReg___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VReg___024root__trace_full_sub_0(VReg___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VReg___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root__trace_full_top_0\n"); );
    // Init
    VReg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VReg___024root*>(voidSelf);
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VReg___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VReg___024root__trace_full_sub_0(VReg___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__pc),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__s),32);
    bufp->fullCData(oldp+3,((0x1fU & (vlSelf->cpu__DOT__s 
                                      >> 7U))),5);
    bufp->fullCData(oldp+4,((0x1fU & (vlSelf->cpu__DOT__s 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+5,((0x1fU & (vlSelf->cpu__DOT__s 
                                      >> 0x14U))),5);
    bufp->fullIData(oldp+6,((((- (IData)((vlSelf->cpu__DOT__s 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelf->cpu__DOT__s 
                                          >> 0x14U))),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__src1),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs
                            [(0x1fU & (vlSelf->cpu__DOT__s 
                                       >> 0x14U))]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__result),32);
    bufp->fullIData(oldp+10,(((IData)(4U) + vlSelf->cpu__DOT__pc)),32);
    bufp->fullIData(oldp+11,((vlSelf->cpu__DOT__src1 
                              + vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs
                              [(0x1fU & (vlSelf->cpu__DOT__s 
                                         >> 0x14U))])),32);
    bufp->fullIData(oldp+12,((((- (IData)((vlSelf->cpu__DOT__s 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->cpu__DOT__s 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->cpu__DOT__s 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+13,((((- (IData)((vlSelf->cpu__DOT__s 
                                           >> 0x1fU))) 
                               << 0x14U) | (vlSelf->cpu__DOT__s 
                                            >> 0xcU))),32);
    bufp->fullIData(oldp+14,((((- (IData)((vlSelf->cpu__DOT__s 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->cpu__DOT__s 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->cpu__DOT__s 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->cpu__DOT__s 
                                                    >> 7U)))))),32);
    bufp->fullIData(oldp+15,((((- (IData)((vlSelf->cpu__DOT__s 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->cpu__DOT__s) 
                                            | ((0x800U 
                                                & (vlSelf->cpu__DOT__s 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->cpu__DOT__s 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[1]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[2]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[3]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[4]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[5]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[6]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[7]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[8]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[9]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[10]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[11]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[12]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[13]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[14]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[15]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[16]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[17]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[18]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[19]),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[20]),32);
    bufp->fullIData(oldp+37,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[21]),32);
    bufp->fullIData(oldp+38,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[22]),32);
    bufp->fullIData(oldp+39,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[23]),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[24]),32);
    bufp->fullIData(oldp+41,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[25]),32);
    bufp->fullIData(oldp+42,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[26]),32);
    bufp->fullIData(oldp+43,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[27]),32);
    bufp->fullIData(oldp+44,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[28]),32);
    bufp->fullIData(oldp+45,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[29]),32);
    bufp->fullIData(oldp+46,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[30]),32);
    bufp->fullIData(oldp+47,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[31]),32);
    bufp->fullIData(oldp+48,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullBit(oldp+49,((1U == (0x1fU & (vlSelf->cpu__DOT__s 
                                            >> 7U)))));
    bufp->fullIData(oldp+50,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+51,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+52,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+53,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+54,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+55,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+56,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+57,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+58,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+59,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+60,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+61,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+62,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+63,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+64,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+65,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+66,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+67,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+68,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+69,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+70,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+71,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+72,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+73,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+74,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+75,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+76,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+77,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+78,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+79,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+80,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullBit(oldp+81,(vlSelf->clk));
    bufp->fullBit(oldp+82,(vlSelf->rst));
    bufp->fullBit(oldp+83,(1U));
    bufp->fullIData(oldp+84,(0x20U),32);
    bufp->fullIData(oldp+85,(0x80000000U),32);
    bufp->fullIData(oldp+86,(0U),32);
}
