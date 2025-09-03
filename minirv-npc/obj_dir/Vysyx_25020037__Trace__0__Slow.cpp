// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25020037__Syms.h"


VL_ATTR_COLD void Vysyx_25020037___024root__trace_init_sub__TOP__0(Vysyx_25020037___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+125,"clock", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->pushNamePrefix("ysyx_25020037 ");
    tracep->declBit(c+125,"clock", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+129,"MSTATUS", false,-1, 31,0);
    tracep->declBus(c+130,"MTVEC", false,-1, 31,0);
    tracep->declBus(c+131,"MEPC", false,-1, 31,0);
    tracep->declBus(c+132,"MCAUSE", false,-1, 31,0);
    tracep->declBus(c+75,"pc", false,-1, 31,0);
    tracep->declBus(c+1,"inst", false,-1, 31,0);
    tracep->declBus(c+2,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"rs2", false,-1, 4,0);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBus(c+5,"src1", false,-1, 31,0);
    tracep->declBus(c+6,"src2", false,-1, 31,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+8,"alu_op", false,-1, 1,0);
    tracep->declBit(c+9,"gpr_we", false,-1);
    tracep->declBit(c+127,"final_gpr_we", false,-1);
    tracep->declBus(c+10,"rlsu_addr", false,-1, 31,0);
    tracep->declBus(c+11,"rlsu_len", false,-1, 31,0);
    tracep->declBus(c+12,"rlsu_data", false,-1, 31,0);
    tracep->declBus(c+10,"wlsu_addr", false,-1, 31,0);
    tracep->declBus(c+11,"wlsu_len", false,-1, 31,0);
    tracep->declBus(c+6,"wlsu_data", false,-1, 31,0);
    tracep->declBit(c+13,"rlsu_we", false,-1);
    tracep->declBit(c+14,"wlsu_we", false,-1);
    tracep->declBit(c+15,"rw_word_1", false,-1);
    tracep->declBit(c+16,"rw_word_4", false,-1);
    tracep->declBit(c+17,"src2_is_imm", false,-1);
    tracep->declBit(c+18,"is_pc_jump", false,-1);
    tracep->declBit(c+19,"exec_is_end", false,-1);
    tracep->declBit(c+20,"inst_not_realize", false,-1);
    tracep->declBus(c+10,"result", false,-1, 31,0);
    tracep->declBus(c+21,"final_result", false,-1, 31,0);
    tracep->declBus(c+22,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+134,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+22,"din", false,-1, 31,0);
    tracep->declBus(c+75,"dout", false,-1, 31,0);
    tracep->declBit(c+128,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_cpu ");
    tracep->declBus(c+5,"src1", false,-1, 31,0);
    tracep->declBus(c+6,"src2", false,-1, 31,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+75,"pc", false,-1, 31,0);
    tracep->declBus(c+8,"alu_op", false,-1, 1,0);
    tracep->declBit(c+17,"src2_is_imm", false,-1);
    tracep->declBit(c+18,"is_pc_jump", false,-1);
    tracep->declBit(c+19,"exec_is_end", false,-1);
    tracep->declBit(c+20,"inst_not_realize", false,-1);
    tracep->declBus(c+22,"dnpc", false,-1, 31,0);
    tracep->declBus(c+10,"result", false,-1, 31,0);
    tracep->declBus(c+76,"snpc", false,-1, 31,0);
    tracep->declBus(c+5,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+23,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+24,"alu_result1", false,-1, 31,0);
    tracep->pushNamePrefix("alu_cpu ");
    tracep->declBus(c+8,"alu_op", false,-1, 1,0);
    tracep->declBus(c+5,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+23,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+24,"alu_result1", false,-1, 31,0);
    tracep->declBit(c+25,"op_add", false,-1);
    tracep->declBit(c+26,"op_lui", false,-1);
    tracep->declBit(c+135,"op_bne", false,-1);
    tracep->declBit(c+136,"op_beq", false,-1);
    tracep->declBit(c+137,"op_bge", false,-1);
    tracep->declBit(c+138,"op_bgeu", false,-1);
    tracep->declBit(c+139,"op_blt", false,-1);
    tracep->declBit(c+140,"op_bltu", false,-1);
    tracep->declBus(c+27,"add_sub_result", false,-1, 31,0);
    tracep->declBus(c+23,"lui_result", false,-1, 31,0);
    tracep->declBus(c+5,"adder_a", false,-1, 31,0);
    tracep->declBus(c+23,"adder_b", false,-1, 31,0);
    tracep->declBit(c+141,"adder_cin", false,-1);
    tracep->declBus(c+27,"adder_result", false,-1, 31,0);
    tracep->declBit(c+28,"adder_cout", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpr_cpu ");
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+75,"pc", false,-1, 31,0);
    tracep->declBus(c+21,"gpr_wdata", false,-1, 31,0);
    tracep->declBus(c+2,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"rs2", false,-1, 4,0);
    tracep->declBus(c+5,"src1", false,-1, 31,0);
    tracep->declBus(c+6,"src2", false,-1, 31,0);
    tracep->declBus(c+4,"gpr_waddr", false,-1, 4,0);
    tracep->declBit(c+127,"gpr_wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+77+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("GPR32[0] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+109,"dout", false,-1, 31,0);
    tracep->declBit(c+29,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[10] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+110,"dout", false,-1, 31,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[11] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+111,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[12] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+112,"dout", false,-1, 31,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[13] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+113,"dout", false,-1, 31,0);
    tracep->declBit(c+33,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[14] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+114,"dout", false,-1, 31,0);
    tracep->declBit(c+34,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[15] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+115,"dout", false,-1, 31,0);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[1] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+116,"dout", false,-1, 31,0);
    tracep->declBit(c+36,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[2] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+117,"dout", false,-1, 31,0);
    tracep->declBit(c+37,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[3] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+118,"dout", false,-1, 31,0);
    tracep->declBit(c+38,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[4] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+119,"dout", false,-1, 31,0);
    tracep->declBit(c+39,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[5] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+120,"dout", false,-1, 31,0);
    tracep->declBit(c+40,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[6] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+121,"dout", false,-1, 31,0);
    tracep->declBit(c+41,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[7] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+122,"dout", false,-1, 31,0);
    tracep->declBit(c+42,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[8] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+123,"dout", false,-1, 31,0);
    tracep->declBit(c+43,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[9] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+124,"dout", false,-1, 31,0);
    tracep->declBit(c+44,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu_cpu ");
    tracep->declBus(c+1,"inst", false,-1, 31,0);
    tracep->declBus(c+2,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"rs2", false,-1, 4,0);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+8,"alu_op", false,-1, 1,0);
    tracep->declBit(c+9,"gpr_we", false,-1);
    tracep->declBit(c+13,"rlsu_we", false,-1);
    tracep->declBit(c+14,"wlsu_we", false,-1);
    tracep->declBit(c+15,"rw_word_1", false,-1);
    tracep->declBit(c+16,"rw_word_4", false,-1);
    tracep->declBit(c+17,"src2_is_imm", false,-1);
    tracep->declBit(c+18,"is_pc_jump", false,-1);
    tracep->declBit(c+19,"exec_is_end", false,-1);
    tracep->declBit(c+20,"inst_not_realize", false,-1);
    tracep->declBus(c+45,"opcode_31_25", false,-1, 6,0);
    tracep->declBus(c+46,"opcode_31_26", false,-1, 5,0);
    tracep->declBus(c+47,"opcode_14_12", false,-1, 2,0);
    tracep->declBus(c+48,"opcode_06_00", false,-1, 6,0);
    tracep->declBus(c+49,"immI", false,-1, 31,0);
    tracep->declBus(c+50,"immS", false,-1, 31,0);
    tracep->declBus(c+51,"immU", false,-1, 31,0);
    tracep->declArray(c+52,"opcode_31_25_d", false,-1, 127,0);
    tracep->declQuad(c+56,"opcode_31_26_d", false,-1, 63,0);
    tracep->declBus(c+58,"opcode_14_12_d", false,-1, 7,0);
    tracep->declArray(c+59,"opcode_06_00_d", false,-1, 127,0);
    tracep->declBus(c+63,"rs1_d", false,-1, 31,0);
    tracep->declBus(c+64,"rs2_d", false,-1, 31,0);
    tracep->declBus(c+65,"rd_d", false,-1, 31,0);
    tracep->declBit(c+66,"inst_add", false,-1);
    tracep->declBit(c+67,"inst_addi", false,-1);
    tracep->declBit(c+18,"inst_jarl", false,-1);
    tracep->declBit(c+68,"inst_lbu", false,-1);
    tracep->declBit(c+69,"inst_lw", false,-1);
    tracep->declBit(c+70,"inst_sb", false,-1);
    tracep->declBit(c+71,"inst_sw", false,-1);
    tracep->declBit(c+26,"inst_lui", false,-1);
    tracep->declBit(c+19,"inst_ebreak", false,-1);
    tracep->declBit(c+72,"inst_waiting", false,-1);
    tracep->declBit(c+66,"TYPE_R", false,-1);
    tracep->declBit(c+73,"TYPE_I", false,-1);
    tracep->declBit(c+14,"TYPE_S", false,-1);
    tracep->declBit(c+26,"TYPE_U", false,-1);
    tracep->declBit(c+74,"TYPE_N", false,-1);
    tracep->pushNamePrefix("u_dec0 ");
    tracep->declBus(c+45,"in", false,-1, 6,0);
    tracep->declArray(c+52,"out", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec1 ");
    tracep->declBus(c+46,"in", false,-1, 5,0);
    tracep->declQuad(c+56,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec2 ");
    tracep->declBus(c+47,"in", false,-1, 2,0);
    tracep->declBus(c+58,"out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec3 ");
    tracep->declBus(c+48,"in", false,-1, 6,0);
    tracep->declArray(c+59,"out", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec4 ");
    tracep->declBus(c+2,"in", false,-1, 4,0);
    tracep->declBus(c+63,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec5 ");
    tracep->declBus(c+3,"in", false,-1, 4,0);
    tracep->declBus(c+64,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec6 ");
    tracep->declBus(c+4,"in", false,-1, 4,0);
    tracep->declBus(c+65,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_cpu ");
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+75,"pc", false,-1, 31,0);
    tracep->declBus(c+1,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_cpu ");
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+10,"rlsu_addr", false,-1, 31,0);
    tracep->declBus(c+11,"rlsu_len", false,-1, 31,0);
    tracep->declBus(c+10,"wlsu_addr", false,-1, 31,0);
    tracep->declBus(c+11,"wlsu_len", false,-1, 31,0);
    tracep->declBus(c+6,"wlsu_data", false,-1, 31,0);
    tracep->declBit(c+13,"rlsu_we", false,-1);
    tracep->declBit(c+14,"wlsu_we", false,-1);
    tracep->declBus(c+12,"rlsu_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_cpu ");
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBit(c+9,"gpr_we", false,-1);
    tracep->declBit(c+13,"rlsu_we", false,-1);
    tracep->declBus(c+10,"result", false,-1, 31,0);
    tracep->declBus(c+12,"rlsu_data", false,-1, 31,0);
    tracep->declBit(c+127,"final_gpr_we", false,-1);
    tracep->declBus(c+21,"final_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_25020037___024root__trace_init_top(Vysyx_25020037___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root__trace_init_top\n"); );
    // Body
    Vysyx_25020037___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25020037___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25020037___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25020037___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_25020037___024root__trace_register(Vysyx_25020037___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_25020037___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_25020037___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_25020037___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25020037___024root__trace_full_sub_0(Vysyx_25020037___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25020037___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_25020037___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25020037___024root*>(voidSelf);
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25020037___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25020037___024root__trace_full_sub_0(Vysyx_25020037___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25020037__DOT__inst),32);
    bufp->fullCData(oldp+2,((0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+3,((0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+4,((0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                      >> 7U))),5);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
                            [(0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                       >> 0x14U))]),32);
    bufp->fullIData(oldp+7,((((- (IData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I))) 
                              & (((- (IData)((vlSelf->ysyx_25020037__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->ysyx_25020037__DOT__inst 
                                              >> 0x14U))) 
                             | (((- (IData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S))) 
                                 & (((- (IData)((vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 0x1fU))) 
                                     << 0xcU) | ((0xfe0U 
                                                  & (vlSelf->ysyx_25020037__DOT__inst 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->ysyx_25020037__DOT__inst 
                                                       >> 7U))))) 
                                | (0xfffff000U & ((- (IData)(
                                                             (0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                  & vlSelf->ysyx_25020037__DOT__inst))))),32);
    bufp->fullCData(oldp+8,((((0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                              << 1U) | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                                        | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi) 
                                           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                                              | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
                                                 | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw) 
                                                    | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                                       | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw))))))))),2);
    bufp->fullBit(oldp+9,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                              | (0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst))))));
    bufp->fullIData(oldp+10,(vlSelf->ysyx_25020037__DOT__rlsu_addr),32);
    bufp->fullIData(oldp+11,(((1U & (- (IData)(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb))))) 
                              | (4U & (- (IData)(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                                                  | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw))))))),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25020037__DOT__rlsu_data),32);
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25020037__DOT__rlsu_we));
    bufp->fullBit(oldp+14,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S));
    bufp->fullBit(oldp+15,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                            | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb))));
    bufp->fullBit(oldp+16,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                            | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw))));
    bufp->fullBit(oldp+17,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                            | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                               | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                                  | ((0x37U == (0x7fU 
                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                     | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl)))))));
    bufp->fullBit(oldp+18,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl));
    bufp->fullBit(oldp+19,((IData)((0x100073U == vlSelf->ysyx_25020037__DOT__inst))));
    bufp->fullBit(oldp+20,((1U & (~ ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                                     | (((IData)((0x100073U 
                                                  == vlSelf->ysyx_25020037__DOT__inst)) 
                                         | (IData)(
                                                   (0U 
                                                    == vlSelf->ysyx_25020037__DOT__inst))) 
                                        | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                                           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S) 
                                              | (0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_25020037__DOT__inst))))))))));
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25020037__DOT__final_result),32);
    bufp->fullIData(oldp+22,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl)
                               ? vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1
                               : ((IData)(4U) + vlSelf->ysyx_25020037__DOT__pc))),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1),32);
    bufp->fullBit(oldp+25,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                            | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi) 
                               | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                                  | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
                                     | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw) 
                                        | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                           | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw)))))))));
    bufp->fullBit(oldp+26,((0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst))));
    bufp->fullIData(oldp+27,((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                              + vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
    bufp->fullBit(oldp+28,((1U & (IData)((1ULL & (((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                   + (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))) 
                                                  >> 0x20U))))));
    bufp->fullBit(oldp+29,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+30,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x500U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+31,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x580U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+32,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x600U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+33,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x680U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+34,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x700U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+35,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x780U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+36,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x80U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+37,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x100U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+38,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x180U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+39,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x200U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+40,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x280U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+41,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x300U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+42,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x380U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+43,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x400U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullBit(oldp+44,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x480U == (0xf80U & vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullCData(oldp+45,((vlSelf->ysyx_25020037__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+46,((vlSelf->ysyx_25020037__DOT__inst 
                              >> 0x1aU)),6);
    bufp->fullCData(oldp+47,((7U & (vlSelf->ysyx_25020037__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+48,((0x7fU & vlSelf->ysyx_25020037__DOT__inst)),7);
    bufp->fullIData(oldp+49,((((- (IData)((vlSelf->ysyx_25020037__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->ysyx_25020037__DOT__inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+50,((((- (IData)((vlSelf->ysyx_25020037__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->ysyx_25020037__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+51,((0xfffff000U & vlSelf->ysyx_25020037__DOT__inst)),32);
    bufp->fullWData(oldp+52,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_25_d),128);
    bufp->fullQData(oldp+56,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_26_d),64);
    bufp->fullCData(oldp+58,((((7U == (7U & (vlSelf->ysyx_25020037__DOT__inst 
                                             >> 0xcU))) 
                               << 7U) | (((6U == (7U 
                                                  & (vlSelf->ysyx_25020037__DOT__inst 
                                                     >> 0xcU))) 
                                          << 6U) | 
                                         (((5U == (7U 
                                                   & (vlSelf->ysyx_25020037__DOT__inst 
                                                      >> 0xcU))) 
                                           << 5U) | 
                                          (((4U == 
                                             (7U & 
                                              (vlSelf->ysyx_25020037__DOT__inst 
                                               >> 0xcU))) 
                                            << 4U) 
                                           | (((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25020037__DOT__inst 
                                                    >> 0xcU))) 
                                               << 3U) 
                                              | (((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_25020037__DOT__inst 
                                                       >> 0xcU))) 
                                                  << 2U) 
                                                 | (((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_25020037__DOT__inst 
                                                          >> 0xcU))) 
                                                     << 1U) 
                                                    | (0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_25020037__DOT__inst 
                                                           >> 0xcU))))))))))),8);
    bufp->fullWData(oldp+59,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_06_00_d),128);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs1_d),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs2_d),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rd_d),32);
    bufp->fullBit(oldp+66,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw));
    bufp->fullBit(oldp+72,((IData)((0U == vlSelf->ysyx_25020037__DOT__inst))));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I));
    bufp->fullBit(oldp+74,(((IData)((0x100073U == vlSelf->ysyx_25020037__DOT__inst)) 
                            | (IData)((0U == vlSelf->ysyx_25020037__DOT__inst)))));
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25020037__DOT__pc),32);
    bufp->fullIData(oldp+76,(((IData)(4U) + vlSelf->ysyx_25020037__DOT__pc)),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[1]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[2]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[3]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[4]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[5]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[6]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[7]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[8]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[9]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[10]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[11]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[12]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[13]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[14]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[15]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[16]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[17]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[18]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[19]),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[20]),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[21]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[22]),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[23]),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[24]),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[25]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[26]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[27]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[28]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[29]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[30]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[31]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout),32);
    bufp->fullBit(oldp+125,(vlSelf->clock));
    bufp->fullBit(oldp+126,(vlSelf->reset));
    bufp->fullBit(oldp+127,(((~ (IData)(vlSelf->reset)) 
                             & ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                                   | (0x37U == (0x7fU 
                                                & vlSelf->ysyx_25020037__DOT__inst)))))));
    bufp->fullBit(oldp+128,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullIData(oldp+129,(0x300U),32);
    bufp->fullIData(oldp+130,(0x305U),32);
    bufp->fullIData(oldp+131,(0x341U),32);
    bufp->fullIData(oldp+132,(0x342U),32);
    bufp->fullIData(oldp+133,(0x20U),32);
    bufp->fullIData(oldp+134,(0x80000000U),32);
    bufp->fullBit(oldp+135,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bne));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_beq));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bge));
    bufp->fullBit(oldp+138,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bgeu));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_blt));
    bufp->fullBit(oldp+140,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bltu));
    bufp->fullBit(oldp+141,(0U));
    bufp->fullIData(oldp+142,(0U),32);
}
