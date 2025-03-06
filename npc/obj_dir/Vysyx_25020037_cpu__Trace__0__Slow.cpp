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
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+99,"inst", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+100+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("ysyx_25020037_cpu ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+99,"inst", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+100+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+132,"rd", false,-1, 4,0);
    tracep->declBus(c+133,"rs1", false,-1, 4,0);
    tracep->declBus(c+134,"rs2", false,-1, 4,0);
    tracep->declBus(c+135,"src1", false,-1, 31,0);
    tracep->declBus(c+136,"src2", false,-1, 31,0);
    tracep->declBus(c+137,"result", false,-1, 31,0);
    tracep->declBus(c+138,"imm", false,-1, 31,0);
    tracep->declBus(c+139,"TYPE_type", false,-1, 2,0);
    tracep->declBit(c+140,"wen", false,-1);
    tracep->pushNamePrefix("exu_cpu ");
    tracep->declBus(c+135,"src1", false,-1, 31,0);
    tracep->declBus(c+136,"src2", false,-1, 31,0);
    tracep->declBus(c+138,"imm", false,-1, 31,0);
    tracep->declBus(c+139,"TYPE_type", false,-1, 2,0);
    tracep->declBus(c+137,"result", false,-1, 31,0);
    tracep->declBit(c+140,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu_cpu ");
    tracep->declBus(c+99,"inst", false,-1, 31,0);
    tracep->declBus(c+133,"rs1", false,-1, 4,0);
    tracep->declBus(c+134,"rs2", false,-1, 4,0);
    tracep->declBus(c+132,"rd", false,-1, 4,0);
    tracep->declBus(c+138,"imm", false,-1, 31,0);
    tracep->declBus(c+139,"TYPE_type", false,-1, 2,0);
    tracep->declBus(c+175,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+141,"immI", false,-1, 31,0);
    tracep->declBus(c+176,"MASKI", false,-1, 31,0);
    tracep->declBus(c+177,"addi", false,-1, 31,0);
    tracep->declBus(c+178,"ebreak", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_cpu ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"d", false,-1, 31,0);
    tracep->declBus(c+133,"rs1", false,-1, 4,0);
    tracep->declBus(c+134,"rs2", false,-1, 4,0);
    tracep->declBus(c+135,"src1", false,-1, 31,0);
    tracep->declBus(c+136,"src2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+132,"rd", false,-1, 4,0);
    tracep->declBit(c+142,"wen", false,-1);
    tracep->pushNamePrefix("lsu_gpr ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"d", false,-1, 31,0);
    tracep->declBus(c+133,"rs1", false,-1, 4,0);
    tracep->declBus(c+134,"rs2", false,-1, 4,0);
    tracep->declBus(c+135,"src1", false,-1, 31,0);
    tracep->declBus(c+136,"src2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+33+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+132,"waddr", false,-1, 4,0);
    tracep->declBit(c+142,"wen", false,-1);
    tracep->pushNamePrefix("GPR32[0] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+65,"dout", false,-1, 31,0);
    tracep->declBit(c+143,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[10] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+66,"dout", false,-1, 31,0);
    tracep->declBit(c+144,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[11] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+67,"dout", false,-1, 31,0);
    tracep->declBit(c+145,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[12] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+68,"dout", false,-1, 31,0);
    tracep->declBit(c+146,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[13] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+69,"dout", false,-1, 31,0);
    tracep->declBit(c+147,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[14] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+70,"dout", false,-1, 31,0);
    tracep->declBit(c+148,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[15] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+71,"dout", false,-1, 31,0);
    tracep->declBit(c+149,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[16] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+72,"dout", false,-1, 31,0);
    tracep->declBit(c+150,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[17] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+73,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[18] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+74,"dout", false,-1, 31,0);
    tracep->declBit(c+152,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[19] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+75,"dout", false,-1, 31,0);
    tracep->declBit(c+153,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[1] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+76,"dout", false,-1, 31,0);
    tracep->declBit(c+154,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[20] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+77,"dout", false,-1, 31,0);
    tracep->declBit(c+155,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[21] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+78,"dout", false,-1, 31,0);
    tracep->declBit(c+156,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[22] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+79,"dout", false,-1, 31,0);
    tracep->declBit(c+157,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[23] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+80,"dout", false,-1, 31,0);
    tracep->declBit(c+158,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[24] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+81,"dout", false,-1, 31,0);
    tracep->declBit(c+159,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[25] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+82,"dout", false,-1, 31,0);
    tracep->declBit(c+160,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[26] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+83,"dout", false,-1, 31,0);
    tracep->declBit(c+161,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[27] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+84,"dout", false,-1, 31,0);
    tracep->declBit(c+162,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[28] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+85,"dout", false,-1, 31,0);
    tracep->declBit(c+163,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[29] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+86,"dout", false,-1, 31,0);
    tracep->declBit(c+164,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[2] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+87,"dout", false,-1, 31,0);
    tracep->declBit(c+165,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[30] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+88,"dout", false,-1, 31,0);
    tracep->declBit(c+166,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[31] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+89,"dout", false,-1, 31,0);
    tracep->declBit(c+167,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[3] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+90,"dout", false,-1, 31,0);
    tracep->declBit(c+168,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[4] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+91,"dout", false,-1, 31,0);
    tracep->declBit(c+169,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[5] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+92,"dout", false,-1, 31,0);
    tracep->declBit(c+170,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[6] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+93,"dout", false,-1, 31,0);
    tracep->declBit(c+171,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[7] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+94,"dout", false,-1, 31,0);
    tracep->declBit(c+172,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[8] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+95,"dout", false,-1, 31,0);
    tracep->declBit(c+173,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[9] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+137,"din", false,-1, 31,0);
    tracep->declBus(c+96,"dout", false,-1, 31,0);
    tracep->declBit(c+174,"wen", false,-1);
    tracep->popNamePrefix(5);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[1]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[2]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[3]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[4]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[5]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[6]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[7]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[8]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[9]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[10]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[11]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[12]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[13]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[14]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[15]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[16]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[17]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[18]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[19]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[20]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[21]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[22]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[23]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[24]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[25]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[26]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[27]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[28]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[29]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[30]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs[31]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4),32);
    bufp->fullBit(oldp+97,(vlSelf->clk));
    bufp->fullBit(oldp+98,(vlSelf->rst));
    bufp->fullIData(oldp+99,(vlSelf->inst),32);
    bufp->fullIData(oldp+100,(vlSelf->regs[0]),32);
    bufp->fullIData(oldp+101,(vlSelf->regs[1]),32);
    bufp->fullIData(oldp+102,(vlSelf->regs[2]),32);
    bufp->fullIData(oldp+103,(vlSelf->regs[3]),32);
    bufp->fullIData(oldp+104,(vlSelf->regs[4]),32);
    bufp->fullIData(oldp+105,(vlSelf->regs[5]),32);
    bufp->fullIData(oldp+106,(vlSelf->regs[6]),32);
    bufp->fullIData(oldp+107,(vlSelf->regs[7]),32);
    bufp->fullIData(oldp+108,(vlSelf->regs[8]),32);
    bufp->fullIData(oldp+109,(vlSelf->regs[9]),32);
    bufp->fullIData(oldp+110,(vlSelf->regs[10]),32);
    bufp->fullIData(oldp+111,(vlSelf->regs[11]),32);
    bufp->fullIData(oldp+112,(vlSelf->regs[12]),32);
    bufp->fullIData(oldp+113,(vlSelf->regs[13]),32);
    bufp->fullIData(oldp+114,(vlSelf->regs[14]),32);
    bufp->fullIData(oldp+115,(vlSelf->regs[15]),32);
    bufp->fullIData(oldp+116,(vlSelf->regs[16]),32);
    bufp->fullIData(oldp+117,(vlSelf->regs[17]),32);
    bufp->fullIData(oldp+118,(vlSelf->regs[18]),32);
    bufp->fullIData(oldp+119,(vlSelf->regs[19]),32);
    bufp->fullIData(oldp+120,(vlSelf->regs[20]),32);
    bufp->fullIData(oldp+121,(vlSelf->regs[21]),32);
    bufp->fullIData(oldp+122,(vlSelf->regs[22]),32);
    bufp->fullIData(oldp+123,(vlSelf->regs[23]),32);
    bufp->fullIData(oldp+124,(vlSelf->regs[24]),32);
    bufp->fullIData(oldp+125,(vlSelf->regs[25]),32);
    bufp->fullIData(oldp+126,(vlSelf->regs[26]),32);
    bufp->fullIData(oldp+127,(vlSelf->regs[27]),32);
    bufp->fullIData(oldp+128,(vlSelf->regs[28]),32);
    bufp->fullIData(oldp+129,(vlSelf->regs[29]),32);
    bufp->fullIData(oldp+130,(vlSelf->regs[30]),32);
    bufp->fullIData(oldp+131,(vlSelf->regs[31]),32);
    bufp->fullCData(oldp+132,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+133,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+134,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_25020037_cpu__DOT__src1),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs
                              [(0x1fU & (vlSelf->inst 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_25020037_cpu__DOT__result),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_25020037_cpu__DOT__imm),32);
    bufp->fullCData(oldp+139,(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type),3);
    bufp->fullBit(oldp+140,(vlSelf->ysyx_25020037_cpu__DOT__wen));
    bufp->fullIData(oldp+141,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullBit(oldp+142,(((~ (IData)(vlSelf->rst)) 
                             & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wen))));
    bufp->fullBit(oldp+143,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+144,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x500U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+145,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x580U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+146,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x600U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+147,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x680U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+148,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x700U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+149,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x780U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+150,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x800U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+151,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x880U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+152,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x900U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+153,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x980U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+154,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+155,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0xa00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+156,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0xa80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+157,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0xb00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+158,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0xb80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+159,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0xc00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+160,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0xc80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+161,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0xd00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+162,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0xd80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+163,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0xe00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+164,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0xe80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+165,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x100U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+166,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0xf00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+167,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0xf80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+168,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x180U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+169,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x200U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+170,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x280U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+171,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x300U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+172,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x380U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+173,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x400U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+174,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____VdfgTmp_h2e704ce2__0) 
                             & (0x480U == (0xf80U & vlSelf->inst)))));
    bufp->fullCData(oldp+175,(1U),3);
    bufp->fullIData(oldp+176,(0x707fU),32);
    bufp->fullIData(oldp+177,(0x13U),32);
    bufp->fullIData(oldp+178,(0x100073U),32);
    bufp->fullIData(oldp+179,(0x20U),32);
    bufp->fullIData(oldp+180,(0U),32);
}
