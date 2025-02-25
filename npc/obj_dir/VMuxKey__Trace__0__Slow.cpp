// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMuxKey__Syms.h"


VL_ATTR_COLD void VMuxKey___024root__trace_init_sub__TOP__0(VMuxKey___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+96,"MuxKey.out", false,-1, 0,0);
    tracep->declBus(c+97,"MuxKey.key", false,-1, 0,0);
    tracep->declBus(c+98,"MuxKey.lut", false,-1, 3,0);
    tracep->declBus(c+99,"MuxKeyWithDefault.out", false,-1, 0,0);
    tracep->declBus(c+100,"MuxKeyWithDefault.key", false,-1, 0,0);
    tracep->declBus(c+101,"default_out", false,-1, 0,0);
    tracep->declBus(c+102,"MuxKeyWithDefault.lut", false,-1, 3,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+105,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("MuxKey ");
    tracep->declBus(c+106,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+107,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+96,"out", false,-1, 0,0);
    tracep->declBus(c+97,"key", false,-1, 0,0);
    tracep->declBus(c+98,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+106,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+107,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+108,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+96,"out", false,-1, 0,0);
    tracep->declBus(c+97,"key", false,-1, 0,0);
    tracep->declBus(c+109,"default_out", false,-1, 0,0);
    tracep->declBus(c+98,"lut", false,-1, 3,0);
    tracep->declBus(c+106,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+7,"lut_out", false,-1, 0,0);
    tracep->declBit(c+8,"hit", false,-1);
    tracep->declBus(c+110,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("MuxKeyWithDefault ");
    tracep->declBus(c+106,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+107,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+99,"out", false,-1, 0,0);
    tracep->declBus(c+100,"key", false,-1, 0,0);
    tracep->declBus(c+101,"default_out", false,-1, 0,0);
    tracep->declBus(c+102,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+106,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+107,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+107,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+99,"out", false,-1, 0,0);
    tracep->declBus(c+100,"key", false,-1, 0,0);
    tracep->declBus(c+101,"default_out", false,-1, 0,0);
    tracep->declBus(c+102,"lut", false,-1, 3,0);
    tracep->declBus(c+106,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+13+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+15,"lut_out", false,-1, 0,0);
    tracep->declBit(c+16,"hit", false,-1);
    tracep->declBus(c+110,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+105,"dnpc", false,-1, 31,0);
    tracep->declBus(c+17,"pc", false,-1, 31,0);
    tracep->declBus(c+18,"s", false,-1, 31,0);
    tracep->declBus(c+19,"rd", false,-1, 4,0);
    tracep->declBus(c+20,"rs1", false,-1, 4,0);
    tracep->declBus(c+21,"rs2", false,-1, 4,0);
    tracep->declBus(c+22,"imm", false,-1, 31,0);
    tracep->declBus(c+23,"src1", false,-1, 31,0);
    tracep->declBus(c+24,"src2", false,-1, 31,0);
    tracep->declBus(c+25,"result", false,-1, 31,0);
    tracep->declBit(c+111,"wen", false,-1);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+113,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+26,"din", false,-1, 31,0);
    tracep->declBus(c+17,"dout", false,-1, 31,0);
    tracep->declBit(c+111,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_cpu ");
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBus(c+23,"src1", false,-1, 31,0);
    tracep->declBus(c+24,"src2", false,-1, 31,0);
    tracep->declBus(c+22,"imm", false,-1, 31,0);
    tracep->declBus(c+25,"result", false,-1, 31,0);
    tracep->declBit(c+111,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu_cpu ");
    tracep->declBus(c+18,"s", false,-1, 31,0);
    tracep->declBus(c+20,"rs1", false,-1, 4,0);
    tracep->declBus(c+21,"rs2", false,-1, 4,0);
    tracep->declBus(c+19,"rd", false,-1, 4,0);
    tracep->declBus(c+22,"imm", false,-1, 31,0);
    tracep->declBus(c+22,"immI", false,-1, 31,0);
    tracep->declBus(c+27,"immS", false,-1, 31,0);
    tracep->declBus(c+28,"immU", false,-1, 31,0);
    tracep->declBus(c+29,"immB", false,-1, 31,0);
    tracep->declBus(c+30,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu_cpu ");
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBus(c+17,"pc", false,-1, 31,0);
    tracep->declBus(c+18,"s", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_cpu ");
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"d", false,-1, 31,0);
    tracep->declBus(c+20,"rs1", false,-1, 4,0);
    tracep->declBus(c+21,"rs2", false,-1, 4,0);
    tracep->declBus(c+23,"src1", false,-1, 31,0);
    tracep->declBus(c+24,"src2", false,-1, 31,0);
    tracep->declBus(c+19,"rd", false,-1, 4,0);
    tracep->declBit(c+111,"wen", false,-1);
    tracep->pushNamePrefix("lsu_gpr ");
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"d", false,-1, 31,0);
    tracep->declBus(c+20,"rs1", false,-1, 4,0);
    tracep->declBus(c+21,"rs2", false,-1, 4,0);
    tracep->declBus(c+23,"src1", false,-1, 31,0);
    tracep->declBus(c+24,"src2", false,-1, 31,0);
    tracep->declBus(c+19,"waddr", false,-1, 4,0);
    tracep->declBit(c+111,"wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+31+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("GPR32[0] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+63,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[10] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+65,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[11] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+66,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[12] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+67,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[13] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+68,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[14] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+69,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[15] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+70,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[16] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+71,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[17] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+72,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[18] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+73,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[19] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+74,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[1] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+75,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[20] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+76,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[21] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+77,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[22] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+78,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[23] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+79,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[24] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+80,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[25] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+81,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[26] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+82,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[27] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+83,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[28] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+84,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[29] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+85,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[2] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+86,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[30] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+87,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[31] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+88,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[3] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+89,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[4] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+90,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[5] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+91,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[6] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+92,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[7] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+93,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[8] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+94,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[9] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+112,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 31,0);
    tracep->declBus(c+95,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(5);
}

VL_ATTR_COLD void VMuxKey___024root__trace_init_top(VMuxKey___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_init_top\n"); );
    // Body
    VMuxKey___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMuxKey___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMuxKey___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMuxKey___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMuxKey___024root__trace_register(VMuxKey___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMuxKey___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMuxKey___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMuxKey___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMuxKey___024root__trace_full_sub_0(VMuxKey___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMuxKey___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_full_top_0\n"); );
    // Init
    VMuxKey___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMuxKey___024root*>(voidSelf);
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMuxKey___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMuxKey___024root__trace_full_sub_0(VMuxKey___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->MuxKey__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->MuxKey__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+3,(vlSelf->MuxKey__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+4,(vlSelf->MuxKey__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+5,(vlSelf->MuxKey__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+6,(vlSelf->MuxKey__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+7,(vlSelf->MuxKey__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+8,(vlSelf->MuxKey__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+9,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+10,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+11,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+12,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+13,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+14,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+15,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+16,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__pc),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__s),32);
    bufp->fullCData(oldp+19,((0x1fU & (vlSelf->cpu__DOT__s 
                                       >> 7U))),5);
    bufp->fullCData(oldp+20,((0x1fU & (vlSelf->cpu__DOT__s 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+21,((0x1fU & (vlSelf->cpu__DOT__s 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+22,((((- (IData)((vlSelf->cpu__DOT__s 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->cpu__DOT__s 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs
                             [(0x1fU & (vlSelf->cpu__DOT__s 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs
                             [(0x1fU & (vlSelf->cpu__DOT__s 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__result),32);
    bufp->fullIData(oldp+26,(((IData)(4U) + vlSelf->cpu__DOT__pc)),32);
    bufp->fullIData(oldp+27,((((- (IData)((vlSelf->cpu__DOT__s 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->cpu__DOT__s 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->cpu__DOT__s 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+28,((((- (IData)((vlSelf->cpu__DOT__s 
                                           >> 0x1fU))) 
                               << 0x14U) | (vlSelf->cpu__DOT__s 
                                            >> 0xcU))),32);
    bufp->fullIData(oldp+29,((((- (IData)((vlSelf->cpu__DOT__s 
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
    bufp->fullIData(oldp+30,((((- (IData)((vlSelf->cpu__DOT__s 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->cpu__DOT__s) 
                                            | ((0x800U 
                                                & (vlSelf->cpu__DOT__s 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->cpu__DOT__s 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[1]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[2]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[3]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[4]),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[5]),32);
    bufp->fullIData(oldp+37,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[6]),32);
    bufp->fullIData(oldp+38,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[7]),32);
    bufp->fullIData(oldp+39,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[8]),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[9]),32);
    bufp->fullIData(oldp+41,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[10]),32);
    bufp->fullIData(oldp+42,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[11]),32);
    bufp->fullIData(oldp+43,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[12]),32);
    bufp->fullIData(oldp+44,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[13]),32);
    bufp->fullIData(oldp+45,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[14]),32);
    bufp->fullIData(oldp+46,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[15]),32);
    bufp->fullIData(oldp+47,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[16]),32);
    bufp->fullIData(oldp+48,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[17]),32);
    bufp->fullIData(oldp+49,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[18]),32);
    bufp->fullIData(oldp+50,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[19]),32);
    bufp->fullIData(oldp+51,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[20]),32);
    bufp->fullIData(oldp+52,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[21]),32);
    bufp->fullIData(oldp+53,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[22]),32);
    bufp->fullIData(oldp+54,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[23]),32);
    bufp->fullIData(oldp+55,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[24]),32);
    bufp->fullIData(oldp+56,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[25]),32);
    bufp->fullIData(oldp+57,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[26]),32);
    bufp->fullIData(oldp+58,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[27]),32);
    bufp->fullIData(oldp+59,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[28]),32);
    bufp->fullIData(oldp+60,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[29]),32);
    bufp->fullIData(oldp+61,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[30]),32);
    bufp->fullIData(oldp+62,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[31]),32);
    bufp->fullIData(oldp+63,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullBit(oldp+64,((1U == (0x1fU & (vlSelf->cpu__DOT__s 
                                            >> 7U)))));
    bufp->fullIData(oldp+65,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+66,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+67,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+68,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+69,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+70,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+71,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+72,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+73,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+74,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+75,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+76,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+77,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+78,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+79,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+80,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+81,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+82,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+83,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+84,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+85,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+86,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+87,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+88,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+89,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+90,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+91,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+92,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+93,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+94,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+95,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullBit(oldp+96,(vlSelf->MuxKey__02Eout));
    bufp->fullBit(oldp+97,(vlSelf->MuxKey__02Ekey));
    bufp->fullCData(oldp+98,(vlSelf->MuxKey__02Elut),4);
    bufp->fullBit(oldp+99,(vlSelf->MuxKeyWithDefault__02Eout));
    bufp->fullBit(oldp+100,(vlSelf->MuxKeyWithDefault__02Ekey));
    bufp->fullBit(oldp+101,(vlSelf->default_out));
    bufp->fullCData(oldp+102,(vlSelf->MuxKeyWithDefault__02Elut),4);
    bufp->fullBit(oldp+103,(vlSelf->clk));
    bufp->fullBit(oldp+104,(vlSelf->rst));
    bufp->fullIData(oldp+105,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+106,(2U),32);
    bufp->fullIData(oldp+107,(1U),32);
    bufp->fullIData(oldp+108,(0U),32);
    bufp->fullBit(oldp+109,(0U));
    bufp->fullIData(oldp+110,(2U),32);
    bufp->fullBit(oldp+111,(1U));
    bufp->fullIData(oldp+112,(0x20U),32);
    bufp->fullIData(oldp+113,(0x80000000U),32);
    bufp->fullIData(oldp+114,(0U),32);
}
