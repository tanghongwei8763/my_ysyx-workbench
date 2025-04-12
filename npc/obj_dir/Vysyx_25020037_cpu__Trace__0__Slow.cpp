// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25020037_cpu__Syms.h"


VL_ATTR_COLD void Vysyx_25020037_cpu___024root__trace_init_sub__TOP__0(Vysyx_25020037_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+78,"inst", false,-1, 31,0);
    tracep->declBus(c+79,"pc", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+80+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("ysyx_25020037_cpu ");
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+78,"inst", false,-1, 31,0);
    tracep->declBus(c+79,"pc", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+80+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+112,"rd", false,-1, 4,0);
    tracep->declBus(c+113,"rs1", false,-1, 4,0);
    tracep->declBus(c+114,"rs2", false,-1, 4,0);
    tracep->declBus(c+1,"src1", false,-1, 31,0);
    tracep->declBus(c+2,"src2", false,-1, 31,0);
    tracep->declBus(c+3,"result", false,-1, 31,0);
    tracep->declBus(c+4,"wdata_gpr", false,-1, 31,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+6,"TYPE_type", false,-1, 2,0);
    tracep->declBit(c+115,"wen_gpr", false,-1);
    tracep->declBus(c+116,"dnpc", false,-1, 31,0);
    tracep->declBit(c+11,"rst_delay", false,-1);
    tracep->declBus(c+153,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+2,"wdata_lsu", false,-1, 31,0);
    tracep->declBus(c+7,"waddr_lsu", false,-1, 31,0);
    tracep->declBus(c+7,"raddr_lsu", false,-1, 31,0);
    tracep->declBus(c+154,"rdata_lsu", false,-1, 31,0);
    tracep->declBus(c+155,"rlen_lsu", false,-1, 31,0);
    tracep->declBus(c+155,"wlen_lsu", false,-1, 31,0);
    tracep->declBit(c+8,"wen_lsu", false,-1);
    tracep->declBit(c+156,"ren_lsu", false,-1);
    tracep->declBit(c+9,"is_jalr", false,-1);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+158,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+116,"din", false,-1, 31,0);
    tracep->declBus(c+79,"dout", false,-1, 31,0);
    tracep->declBit(c+11,"wen_gpr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_cpu ");
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+1,"src1", false,-1, 31,0);
    tracep->declBus(c+2,"src2", false,-1, 31,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+79,"pc", false,-1, 31,0);
    tracep->declBus(c+6,"TYPE_type", false,-1, 2,0);
    tracep->declBit(c+9,"is_jalr", false,-1);
    tracep->declBus(c+116,"dnpc", false,-1, 31,0);
    tracep->declBus(c+3,"result", false,-1, 31,0);
    tracep->declBus(c+159,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+160,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+153,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+161,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+162,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+163,"TYPE_N", false,-1, 2,0);
    tracep->declBus(c+117,"snpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpr_cpu ");
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"wdata_gpr", false,-1, 31,0);
    tracep->declBus(c+113,"rs1", false,-1, 4,0);
    tracep->declBus(c+114,"rs2", false,-1, 4,0);
    tracep->declBus(c+1,"src1", false,-1, 31,0);
    tracep->declBus(c+2,"src2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+12+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+112,"waddr_gpr", false,-1, 4,0);
    tracep->declBit(c+115,"wen_gpr", false,-1);
    tracep->pushNamePrefix("GPR32[0] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+44,"dout", false,-1, 31,0);
    tracep->declBit(c+118,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[10] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+45,"dout", false,-1, 31,0);
    tracep->declBit(c+119,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[11] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+46,"dout", false,-1, 31,0);
    tracep->declBit(c+120,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[12] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+47,"dout", false,-1, 31,0);
    tracep->declBit(c+121,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[13] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+48,"dout", false,-1, 31,0);
    tracep->declBit(c+122,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[14] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+49,"dout", false,-1, 31,0);
    tracep->declBit(c+123,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[15] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+50,"dout", false,-1, 31,0);
    tracep->declBit(c+124,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[16] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+51,"dout", false,-1, 31,0);
    tracep->declBit(c+125,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[17] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+52,"dout", false,-1, 31,0);
    tracep->declBit(c+126,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[18] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+53,"dout", false,-1, 31,0);
    tracep->declBit(c+127,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[19] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+54,"dout", false,-1, 31,0);
    tracep->declBit(c+128,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[1] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+55,"dout", false,-1, 31,0);
    tracep->declBit(c+129,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[20] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+56,"dout", false,-1, 31,0);
    tracep->declBit(c+130,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[21] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+57,"dout", false,-1, 31,0);
    tracep->declBit(c+131,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[22] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+58,"dout", false,-1, 31,0);
    tracep->declBit(c+132,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[23] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+59,"dout", false,-1, 31,0);
    tracep->declBit(c+133,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[24] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+60,"dout", false,-1, 31,0);
    tracep->declBit(c+134,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[25] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+61,"dout", false,-1, 31,0);
    tracep->declBit(c+135,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[26] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+62,"dout", false,-1, 31,0);
    tracep->declBit(c+136,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[27] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+63,"dout", false,-1, 31,0);
    tracep->declBit(c+137,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[28] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+64,"dout", false,-1, 31,0);
    tracep->declBit(c+138,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[29] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+65,"dout", false,-1, 31,0);
    tracep->declBit(c+139,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[2] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+66,"dout", false,-1, 31,0);
    tracep->declBit(c+140,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[30] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+67,"dout", false,-1, 31,0);
    tracep->declBit(c+141,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[31] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+68,"dout", false,-1, 31,0);
    tracep->declBit(c+142,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[3] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+69,"dout", false,-1, 31,0);
    tracep->declBit(c+143,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[4] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+70,"dout", false,-1, 31,0);
    tracep->declBit(c+144,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[5] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+71,"dout", false,-1, 31,0);
    tracep->declBit(c+145,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[6] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+72,"dout", false,-1, 31,0);
    tracep->declBit(c+146,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[7] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+73,"dout", false,-1, 31,0);
    tracep->declBit(c+147,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[8] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+74,"dout", false,-1, 31,0);
    tracep->declBit(c+148,"wen_gpr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[9] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+75,"dout", false,-1, 31,0);
    tracep->declBit(c+149,"wen_gpr", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu_cpu ");
    tracep->declBus(c+78,"inst", false,-1, 31,0);
    tracep->declBus(c+113,"rs1", false,-1, 4,0);
    tracep->declBus(c+114,"rs2", false,-1, 4,0);
    tracep->declBus(c+112,"rd", false,-1, 4,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+6,"TYPE_type", false,-1, 2,0);
    tracep->declBus(c+155,"rlen_lsu", false,-1, 31,0);
    tracep->declBus(c+155,"wlen_lsu", false,-1, 31,0);
    tracep->declBit(c+9,"is_jalr", false,-1);
    tracep->declBus(c+160,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+153,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+161,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+162,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+163,"TYPE_N", false,-1, 2,0);
    tracep->declBus(c+164,"TYPE_W", false,-1, 2,0);
    tracep->declBus(c+10,"immI", false,-1, 31,0);
    tracep->declBus(c+150,"immU", false,-1, 31,0);
    tracep->declBus(c+151,"immS", false,-1, 31,0);
    tracep->declBus(c+152,"immJ", false,-1, 31,0);
    tracep->declBus(c+165,"MASKI", false,-1, 31,0);
    tracep->declBus(c+165,"MASKS", false,-1, 31,0);
    tracep->declBus(c+166,"MASKU", false,-1, 31,0);
    tracep->declBus(c+166,"MASKJ", false,-1, 31,0);
    tracep->declBus(c+167,"addi", false,-1, 31,0);
    tracep->declBus(c+168,"jarl", false,-1, 31,0);
    tracep->declBus(c+169,"sw", false,-1, 31,0);
    tracep->declBus(c+170,"auipc", false,-1, 31,0);
    tracep->declBus(c+171,"jal", false,-1, 31,0);
    tracep->declBus(c+172,"ebreak", false,-1, 31,0);
    tracep->declBus(c+154,"waiting", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu_cpu ");
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+79,"pc", false,-1, 31,0);
    tracep->declBus(c+78,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_cpu ");
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+2,"wdata_lsu", false,-1, 31,0);
    tracep->declBus(c+7,"waddr_lsu", false,-1, 31,0);
    tracep->declBus(c+7,"raddr_lsu", false,-1, 31,0);
    tracep->declBus(c+155,"wlen_lsu", false,-1, 31,0);
    tracep->declBus(c+155,"rlen_lsu", false,-1, 31,0);
    tracep->declBit(c+156,"ren_lsu", false,-1);
    tracep->declBit(c+8,"wen_lsu", false,-1);
    tracep->declBus(c+154,"rdata_lsu", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_cpu ");
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+3,"result", false,-1, 31,0);
    tracep->declBus(c+154,"rdata_lsu", false,-1, 31,0);
    tracep->declBus(c+6,"TYPE_type", false,-1, 2,0);
    tracep->declBus(c+4,"wdata_gpr", false,-1, 31,0);
    tracep->declBit(c+115,"wen_gpr", false,-1);
    tracep->declBus(c+159,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+160,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+153,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+161,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+162,"TYPE_J", false,-1, 2,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_25020037_cpu___024root__trace_init_top(Vysyx_25020037_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root__trace_init_top\n"); );
    // Body
    Vysyx_25020037_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25020037_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25020037_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25020037_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_25020037_cpu___024root__trace_register(Vysyx_25020037_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_25020037_cpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_25020037_cpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_25020037_cpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25020037_cpu___024root__trace_full_sub_0(Vysyx_25020037_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25020037_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_25020037_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25020037_cpu___024root*>(voidSelf);
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25020037_cpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25020037_cpu___024root__trace_full_sub_0(Vysyx_25020037_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25020037_cpu__DOT__src1),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25020037_cpu__DOT__src2),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_25020037_cpu__DOT__result),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_25020037_cpu__DOT__imm),32);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type),3);
    bufp->fullIData(oldp+7,((vlSelf->ysyx_25020037_cpu__DOT__imm 
                             + vlSelf->ysyx_25020037_cpu__DOT__src1)),32);
    bufp->fullBit(oldp+8,((2U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_25020037_cpu__DOT__is_jalr));
    bufp->fullIData(oldp+10,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__immI),32);
    bufp->fullBit(oldp+11,(vlSelf->ysyx_25020037_cpu__DOT__rst_delay));
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[1]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[2]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[3]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[4]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[5]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[6]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[7]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[8]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[9]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[10]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[11]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[12]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[13]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[14]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[15]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[16]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[17]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[18]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[19]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[20]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[21]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[22]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[23]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[24]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[25]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[26]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[27]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[28]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[29]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[30]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[31]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullBit(oldp+76,(vlSelf->clk));
    bufp->fullBit(oldp+77,(vlSelf->rst));
    bufp->fullIData(oldp+78,(vlSelf->inst),32);
    bufp->fullIData(oldp+79,(vlSelf->pc),32);
    bufp->fullIData(oldp+80,(vlSelf->regs[0]),32);
    bufp->fullIData(oldp+81,(vlSelf->regs[1]),32);
    bufp->fullIData(oldp+82,(vlSelf->regs[2]),32);
    bufp->fullIData(oldp+83,(vlSelf->regs[3]),32);
    bufp->fullIData(oldp+84,(vlSelf->regs[4]),32);
    bufp->fullIData(oldp+85,(vlSelf->regs[5]),32);
    bufp->fullIData(oldp+86,(vlSelf->regs[6]),32);
    bufp->fullIData(oldp+87,(vlSelf->regs[7]),32);
    bufp->fullIData(oldp+88,(vlSelf->regs[8]),32);
    bufp->fullIData(oldp+89,(vlSelf->regs[9]),32);
    bufp->fullIData(oldp+90,(vlSelf->regs[10]),32);
    bufp->fullIData(oldp+91,(vlSelf->regs[11]),32);
    bufp->fullIData(oldp+92,(vlSelf->regs[12]),32);
    bufp->fullIData(oldp+93,(vlSelf->regs[13]),32);
    bufp->fullIData(oldp+94,(vlSelf->regs[14]),32);
    bufp->fullIData(oldp+95,(vlSelf->regs[15]),32);
    bufp->fullIData(oldp+96,(vlSelf->regs[16]),32);
    bufp->fullIData(oldp+97,(vlSelf->regs[17]),32);
    bufp->fullIData(oldp+98,(vlSelf->regs[18]),32);
    bufp->fullIData(oldp+99,(vlSelf->regs[19]),32);
    bufp->fullIData(oldp+100,(vlSelf->regs[20]),32);
    bufp->fullIData(oldp+101,(vlSelf->regs[21]),32);
    bufp->fullIData(oldp+102,(vlSelf->regs[22]),32);
    bufp->fullIData(oldp+103,(vlSelf->regs[23]),32);
    bufp->fullIData(oldp+104,(vlSelf->regs[24]),32);
    bufp->fullIData(oldp+105,(vlSelf->regs[25]),32);
    bufp->fullIData(oldp+106,(vlSelf->regs[26]),32);
    bufp->fullIData(oldp+107,(vlSelf->regs[27]),32);
    bufp->fullIData(oldp+108,(vlSelf->regs[28]),32);
    bufp->fullIData(oldp+109,(vlSelf->regs[29]),32);
    bufp->fullIData(oldp+110,(vlSelf->regs[30]),32);
    bufp->fullIData(oldp+111,(vlSelf->regs[31]),32);
    bufp->fullCData(oldp+112,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+113,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+114,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+115,(((~ (IData)(vlSelf->rst)) 
                             & ((1U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type)) 
                                | ((4U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type)) 
                                   | ((0U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type)) 
                                      | (5U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))))))));
    bufp->fullIData(oldp+116,(((5U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))
                                ? (vlSelf->pc + vlSelf->ysyx_25020037_cpu__DOT__imm)
                                : ((1U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))
                                    ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__is_jalr)
                                        ? (vlSelf->ysyx_25020037_cpu__DOT__src1 
                                           + vlSelf->ysyx_25020037_cpu__DOT__imm)
                                        : ((IData)(4U) 
                                           + vlSelf->pc))
                                    : ((IData)(4U) 
                                       + vlSelf->pc)))),32);
    bufp->fullIData(oldp+117,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullBit(oldp+118,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x500U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x580U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x600U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x680U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+123,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x700U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+124,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x780U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+125,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x800U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+126,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x880U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x900U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x980U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+130,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0xa00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+131,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0xa80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0xb00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+133,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0xb80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+134,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0xc00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+135,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0xc80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+136,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0xd00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+137,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0xd80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+138,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0xe00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+139,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0xe80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+140,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x100U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+141,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0xf00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+142,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0xf80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+143,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x180U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+144,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x200U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+145,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x280U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+146,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x300U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+147,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x380U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+148,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x400U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+149,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                             & (0x480U == (0xf80U & vlSelf->inst)))));
    bufp->fullIData(oldp+150,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+151,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+152,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->inst) 
                                             | ((0x800U 
                                                 & (vlSelf->inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)))))),32);
    bufp->fullCData(oldp+153,(2U),3);
    bufp->fullIData(oldp+154,(0U),32);
    bufp->fullIData(oldp+155,(4U),32);
    bufp->fullBit(oldp+156,(0U));
    bufp->fullIData(oldp+157,(0x20U),32);
    bufp->fullIData(oldp+158,(0x80000000U),32);
    bufp->fullCData(oldp+159,(0U),3);
    bufp->fullCData(oldp+160,(1U),3);
    bufp->fullCData(oldp+161,(4U),3);
    bufp->fullCData(oldp+162,(5U),3);
    bufp->fullCData(oldp+163,(6U),3);
    bufp->fullCData(oldp+164,(7U),3);
    bufp->fullIData(oldp+165,(0x707fU),32);
    bufp->fullIData(oldp+166,(0x7fU),32);
    bufp->fullIData(oldp+167,(0x13U),32);
    bufp->fullIData(oldp+168,(0x67U),32);
    bufp->fullIData(oldp+169,(0x2023U),32);
    bufp->fullIData(oldp+170,(0x17U),32);
    bufp->fullIData(oldp+171,(0x6fU),32);
    bufp->fullIData(oldp+172,(0x100073U),32);
}
