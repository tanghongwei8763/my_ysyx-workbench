// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtools__Syms.h"


VL_ATTR_COLD void Vtools___024root__trace_init_sub__TOP__0(Vtools___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+117,"decoder_2_4.in", false,-1, 1,0);
    tracep->declBus(c+118,"decoder_2_4.out", false,-1, 3,0);
    tracep->declBus(c+119,"decoder_4_16.in", false,-1, 3,0);
    tracep->declBus(c+120,"decoder_4_16.out", false,-1, 15,0);
    tracep->declBus(c+121,"encoder_32_5.in", false,-1, 31,0);
    tracep->declBus(c+122,"encoder_32_5.out", false,-1, 4,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+125,"inst", false,-1, 31,0);
    tracep->declBus(c+126,"pc", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+127+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("decoder_2_4 ");
    tracep->declBus(c+117,"in", false,-1, 1,0);
    tracep->declBus(c+118,"out", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_4_16 ");
    tracep->declBus(c+119,"in", false,-1, 3,0);
    tracep->declBus(c+120,"out", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("encoder_32_5 ");
    tracep->declBus(c+121,"in", false,-1, 31,0);
    tracep->declBus(c+122,"out", false,-1, 4,0);
    tracep->declBus(c+159,"out_0", false,-1, 3,0);
    tracep->declBus(c+160,"out_1", false,-1, 3,0);
    tracep->pushNamePrefix("one ");
    tracep->declBus(c+161,"in", false,-1, 15,0);
    tracep->declBus(c+159,"out", false,-1, 3,0);
    tracep->declBus(c+162,"out_0", false,-1, 1,0);
    tracep->declBus(c+163,"out_1", false,-1, 1,0);
    tracep->declBus(c+164,"out_2", false,-1, 1,0);
    tracep->declBus(c+165,"out_3", false,-1, 1,0);
    tracep->pushNamePrefix("fou ");
    tracep->declBus(c+166,"in", false,-1, 3,0);
    tracep->declBus(c+165,"out", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("one ");
    tracep->declBus(c+167,"in", false,-1, 3,0);
    tracep->declBus(c+162,"out", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thr ");
    tracep->declBus(c+168,"in", false,-1, 3,0);
    tracep->declBus(c+164,"out", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("two ");
    tracep->declBus(c+169,"in", false,-1, 3,0);
    tracep->declBus(c+163,"out", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("two ");
    tracep->declBus(c+170,"in", false,-1, 15,0);
    tracep->declBus(c+160,"out", false,-1, 3,0);
    tracep->declBus(c+171,"out_0", false,-1, 1,0);
    tracep->declBus(c+172,"out_1", false,-1, 1,0);
    tracep->declBus(c+173,"out_2", false,-1, 1,0);
    tracep->declBus(c+174,"out_3", false,-1, 1,0);
    tracep->pushNamePrefix("fou ");
    tracep->declBus(c+175,"in", false,-1, 3,0);
    tracep->declBus(c+174,"out", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("one ");
    tracep->declBus(c+176,"in", false,-1, 3,0);
    tracep->declBus(c+171,"out", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thr ");
    tracep->declBus(c+177,"in", false,-1, 3,0);
    tracep->declBus(c+173,"out", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("two ");
    tracep->declBus(c+178,"in", false,-1, 3,0);
    tracep->declBus(c+172,"out", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_25020037_cpu ");
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+125,"inst", false,-1, 31,0);
    tracep->declBus(c+126,"pc", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+127+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+179,"rs1", false,-1, 4,0);
    tracep->declBus(c+180,"rs2", false,-1, 4,0);
    tracep->declBus(c+181,"rd", false,-1, 4,0);
    tracep->declBus(c+182,"src1", false,-1, 31,0);
    tracep->declBus(c+183,"src2", false,-1, 31,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+184,"alu_op", false,-1, 10,0);
    tracep->declBit(c+185,"gpr_we", false,-1);
    tracep->declBit(c+186,"final_gpr_we", false,-1);
    tracep->declBus(c+2,"rlsu_addr", false,-1, 31,0);
    tracep->declBus(c+3,"rlsu_len", false,-1, 31,0);
    tracep->declBus(c+4,"rlsu_data", false,-1, 31,0);
    tracep->declBus(c+2,"wlsu_addr", false,-1, 31,0);
    tracep->declBus(c+3,"wlsu_len", false,-1, 31,0);
    tracep->declBus(c+183,"wlsu_data", false,-1, 31,0);
    tracep->declBit(c+5,"rlsu_we", false,-1);
    tracep->declBit(c+6,"wlsu_we", false,-1);
    tracep->declBit(c+242,"rw_word_1", false,-1);
    tracep->declBit(c+243,"rw_word_2", false,-1);
    tracep->declBit(c+7,"rw_word_4", false,-1);
    tracep->declBit(c+187,"src1_is_pc", false,-1);
    tracep->declBit(c+188,"src2_is_imm", false,-1);
    tracep->declBit(c+8,"is_pc_jump", false,-1);
    tracep->declBit(c+189,"exec_is_end", false,-1);
    tracep->declBus(c+2,"result", false,-1, 31,0);
    tracep->declBus(c+9,"final_result", false,-1, 31,0);
    tracep->declBus(c+190,"dnpc", false,-1, 31,0);
    tracep->declBit(c+52,"rst_delay", false,-1);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+245,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+190,"din", false,-1, 31,0);
    tracep->declBus(c+126,"dout", false,-1, 31,0);
    tracep->declBit(c+52,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_cpu ");
    tracep->declBus(c+182,"src1", false,-1, 31,0);
    tracep->declBus(c+183,"src2", false,-1, 31,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+126,"pc", false,-1, 31,0);
    tracep->declBus(c+184,"alu_op", false,-1, 10,0);
    tracep->declBit(c+187,"src1_is_pc", false,-1);
    tracep->declBit(c+188,"src2_is_imm", false,-1);
    tracep->declBit(c+8,"is_pc_jump", false,-1);
    tracep->declBit(c+189,"exec_is_end", false,-1);
    tracep->declBus(c+190,"dnpc", false,-1, 31,0);
    tracep->declBus(c+2,"result", false,-1, 31,0);
    tracep->declBus(c+191,"snpc", false,-1, 31,0);
    tracep->declBus(c+10,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+11,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+2,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu_cpu ");
    tracep->declBus(c+184,"alu_op", false,-1, 10,0);
    tracep->declBus(c+10,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+11,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+2,"alu_result", false,-1, 31,0);
    tracep->declBit(c+192,"op_add", false,-1);
    tracep->declBit(c+12,"op_sub", false,-1);
    tracep->declBit(c+13,"op_slt", false,-1);
    tracep->declBit(c+14,"op_sltu", false,-1);
    tracep->declBit(c+15,"op_and", false,-1);
    tracep->declBit(c+16,"op_or", false,-1);
    tracep->declBit(c+17,"op_xor", false,-1);
    tracep->declBit(c+18,"op_sll", false,-1);
    tracep->declBit(c+19,"op_srl", false,-1);
    tracep->declBit(c+20,"op_sra", false,-1);
    tracep->declBit(c+193,"op_lui", false,-1);
    tracep->declBus(c+21,"add_sub_result", false,-1, 31,0);
    tracep->declBus(c+22,"slt_result", false,-1, 31,0);
    tracep->declBus(c+23,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+24,"and_result", false,-1, 31,0);
    tracep->declBus(c+25,"or_result", false,-1, 31,0);
    tracep->declBus(c+26,"xor_result", false,-1, 31,0);
    tracep->declBus(c+11,"lui_result", false,-1, 31,0);
    tracep->declBus(c+27,"sll_result", false,-1, 31,0);
    tracep->declQuad(c+28,"sr64_result", false,-1, 63,0);
    tracep->declBus(c+30,"sr_result", false,-1, 31,0);
    tracep->declBus(c+10,"adder_a", false,-1, 31,0);
    tracep->declBus(c+31,"adder_b", false,-1, 31,0);
    tracep->declBit(c+32,"adder_cin", false,-1);
    tracep->declBus(c+21,"adder_result", false,-1, 31,0);
    tracep->declBit(c+33,"adder_cout", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpr_cpu ");
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"wdata", false,-1, 31,0);
    tracep->declBus(c+179,"rs1", false,-1, 4,0);
    tracep->declBus(c+180,"rs2", false,-1, 4,0);
    tracep->declBus(c+182,"src1", false,-1, 31,0);
    tracep->declBus(c+183,"src2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+53+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+181,"waddr", false,-1, 4,0);
    tracep->declBit(c+186,"wen", false,-1);
    tracep->pushNamePrefix("GPR32[0] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+85,"dout", false,-1, 31,0);
    tracep->declBit(c+194,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[10] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+86,"dout", false,-1, 31,0);
    tracep->declBit(c+195,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[11] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+87,"dout", false,-1, 31,0);
    tracep->declBit(c+196,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[12] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+88,"dout", false,-1, 31,0);
    tracep->declBit(c+197,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[13] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+89,"dout", false,-1, 31,0);
    tracep->declBit(c+198,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[14] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+90,"dout", false,-1, 31,0);
    tracep->declBit(c+199,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[15] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+91,"dout", false,-1, 31,0);
    tracep->declBit(c+200,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[16] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+92,"dout", false,-1, 31,0);
    tracep->declBit(c+201,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[17] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+93,"dout", false,-1, 31,0);
    tracep->declBit(c+202,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[18] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+94,"dout", false,-1, 31,0);
    tracep->declBit(c+203,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[19] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+95,"dout", false,-1, 31,0);
    tracep->declBit(c+204,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[1] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+96,"dout", false,-1, 31,0);
    tracep->declBit(c+205,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[20] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+97,"dout", false,-1, 31,0);
    tracep->declBit(c+206,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[21] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+98,"dout", false,-1, 31,0);
    tracep->declBit(c+207,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[22] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+99,"dout", false,-1, 31,0);
    tracep->declBit(c+208,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[23] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+100,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[24] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+101,"dout", false,-1, 31,0);
    tracep->declBit(c+210,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[25] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+102,"dout", false,-1, 31,0);
    tracep->declBit(c+211,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[26] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+103,"dout", false,-1, 31,0);
    tracep->declBit(c+212,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[27] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+104,"dout", false,-1, 31,0);
    tracep->declBit(c+213,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[28] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+105,"dout", false,-1, 31,0);
    tracep->declBit(c+214,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[29] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+106,"dout", false,-1, 31,0);
    tracep->declBit(c+215,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[2] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+107,"dout", false,-1, 31,0);
    tracep->declBit(c+216,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[30] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+108,"dout", false,-1, 31,0);
    tracep->declBit(c+217,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[31] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+109,"dout", false,-1, 31,0);
    tracep->declBit(c+218,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[3] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+110,"dout", false,-1, 31,0);
    tracep->declBit(c+219,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[4] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+111,"dout", false,-1, 31,0);
    tracep->declBit(c+220,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[5] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+112,"dout", false,-1, 31,0);
    tracep->declBit(c+221,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[6] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+113,"dout", false,-1, 31,0);
    tracep->declBit(c+222,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[7] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+114,"dout", false,-1, 31,0);
    tracep->declBit(c+223,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[8] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+115,"dout", false,-1, 31,0);
    tracep->declBit(c+224,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[9] ");
    tracep->pushNamePrefix("reg_inst ");
    tracep->declBus(c+244,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+116,"dout", false,-1, 31,0);
    tracep->declBit(c+225,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu_cpu ");
    tracep->declBus(c+125,"inst", false,-1, 31,0);
    tracep->declBus(c+179,"rs1", false,-1, 4,0);
    tracep->declBus(c+180,"rs2", false,-1, 4,0);
    tracep->declBus(c+181,"rd", false,-1, 4,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+184,"alu_op", false,-1, 10,0);
    tracep->declBit(c+185,"gpr_we", false,-1);
    tracep->declBit(c+5,"rlsu_we", false,-1);
    tracep->declBit(c+6,"wlsu_we", false,-1);
    tracep->declBit(c+7,"rw_word_4", false,-1);
    tracep->declBit(c+187,"src1_is_pc", false,-1);
    tracep->declBit(c+188,"src2_is_imm", false,-1);
    tracep->declBit(c+8,"is_pc_jump", false,-1);
    tracep->declBit(c+189,"exec_is_end", false,-1);
    tracep->declBus(c+226,"opcode_31_25", false,-1, 6,0);
    tracep->declBus(c+227,"opcode_31_26", false,-1, 5,0);
    tracep->declBus(c+228,"opcode_14_12", false,-1, 2,0);
    tracep->declBus(c+229,"opcode_06_00", false,-1, 6,0);
    tracep->declBus(c+230,"immI", false,-1, 31,0);
    tracep->declBus(c+231,"immS", false,-1, 31,0);
    tracep->declBus(c+232,"immB", false,-1, 31,0);
    tracep->declBus(c+233,"immU", false,-1, 31,0);
    tracep->declBus(c+234,"immJ", false,-1, 31,0);
    tracep->declArray(c+34,"opcode_31_25_d", false,-1, 127,0);
    tracep->declQuad(c+38,"opcode_31_26_d", false,-1, 63,0);
    tracep->declBus(c+235,"opcode_14_12_d", false,-1, 7,0);
    tracep->declArray(c+40,"opcode_06_00_d", false,-1, 127,0);
    tracep->declBus(c+44,"rs1_d", false,-1, 31,0);
    tracep->declBus(c+45,"rs2_d", false,-1, 31,0);
    tracep->declBus(c+46,"rd_d", false,-1, 31,0);
    tracep->declBit(c+47,"inst_add", false,-1);
    tracep->declBit(c+15,"inst_and", false,-1);
    tracep->declBit(c+16,"inst_or", false,-1);
    tracep->declBit(c+17,"inst_xor", false,-1);
    tracep->declBit(c+12,"inst_sub", false,-1);
    tracep->declBit(c+13,"inst_slt", false,-1);
    tracep->declBit(c+14,"inst_sltu", false,-1);
    tracep->declBit(c+48,"inst_addi", false,-1);
    tracep->declBit(c+49,"inst_jarl", false,-1);
    tracep->declBit(c+5,"inst_lw", false,-1);
    tracep->declBit(c+18,"inst_slli", false,-1);
    tracep->declBit(c+20,"inst_srai", false,-1);
    tracep->declBit(c+19,"inst_srli", false,-1);
    tracep->declBit(c+6,"inst_sw", false,-1);
    tracep->declBit(c+236,"inst_bne", false,-1);
    tracep->declBit(c+237,"inst_auipc", false,-1);
    tracep->declBit(c+193,"inst_lui", false,-1);
    tracep->declBit(c+238,"inst_jal", false,-1);
    tracep->declBit(c+189,"inst_ebreak", false,-1);
    tracep->declBit(c+239,"inst_waiting", false,-1);
    tracep->declBit(c+50,"TYPE_R", false,-1);
    tracep->declBit(c+51,"TYPE_I", false,-1);
    tracep->declBit(c+6,"TYPE_S", false,-1);
    tracep->declBit(c+236,"TYPE_B", false,-1);
    tracep->declBit(c+240,"TYPE_U", false,-1);
    tracep->declBit(c+238,"TYPE_J", false,-1);
    tracep->declBit(c+241,"TYPE_N", false,-1);
    tracep->declBit(c+247,"TYPE_W", false,-1);
    tracep->pushNamePrefix("u_dec0 ");
    tracep->declBus(c+226,"in", false,-1, 6,0);
    tracep->declArray(c+34,"out", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec1 ");
    tracep->declBus(c+227,"in", false,-1, 5,0);
    tracep->declQuad(c+38,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec2 ");
    tracep->declBus(c+228,"in", false,-1, 2,0);
    tracep->declBus(c+235,"out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec3 ");
    tracep->declBus(c+229,"in", false,-1, 6,0);
    tracep->declArray(c+40,"out", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec4 ");
    tracep->declBus(c+179,"in", false,-1, 4,0);
    tracep->declBus(c+44,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec5 ");
    tracep->declBus(c+180,"in", false,-1, 4,0);
    tracep->declBus(c+45,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec6 ");
    tracep->declBus(c+181,"in", false,-1, 4,0);
    tracep->declBus(c+46,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_cpu ");
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+126,"pc", false,-1, 31,0);
    tracep->declBus(c+125,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_cpu ");
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+2,"rlsu_addr", false,-1, 31,0);
    tracep->declBus(c+3,"rlsu_len", false,-1, 31,0);
    tracep->declBus(c+2,"wlsu_addr", false,-1, 31,0);
    tracep->declBus(c+3,"wlsu_len", false,-1, 31,0);
    tracep->declBus(c+183,"wlsu_data", false,-1, 31,0);
    tracep->declBit(c+5,"rlsu_we", false,-1);
    tracep->declBit(c+6,"wlsu_we", false,-1);
    tracep->declBus(c+4,"rlsu_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_cpu ");
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBit(c+185,"gpr_we", false,-1);
    tracep->declBit(c+5,"rlsu_we", false,-1);
    tracep->declBus(c+2,"result", false,-1, 31,0);
    tracep->declBus(c+4,"rlsu_data", false,-1, 31,0);
    tracep->declBit(c+186,"final_gpr_we", false,-1);
    tracep->declBus(c+9,"final_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtools___024root__trace_init_top(Vtools___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root__trace_init_top\n"); );
    // Body
    Vtools___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtools___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtools___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtools___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtools___024root__trace_register(Vtools___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtools___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtools___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtools___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtools___024root__trace_full_sub_0(Vtools___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtools___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root__trace_full_top_0\n"); );
    // Init
    Vtools___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtools___024root*>(voidSelf);
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtools___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtools___024root__trace_full_sub_0(Vtools___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25020037_cpu__DOT__imm),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25020037_cpu__DOT__rlsu_addr),32);
    bufp->fullIData(oldp+3,(((1U & (- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__rw_word_1)))) 
                             | ((2U & (- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__rw_word_2)))) 
                                | (4U & (- (IData)(
                                                   ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we) 
                                                    | (IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we)))))))),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_25020037_cpu__DOT__rlsu_data),32);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we));
    bufp->fullBit(oldp+7,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we) 
                           | (IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we))));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump));
    bufp->fullIData(oldp+9,(vlSelf->ysyx_25020037_cpu__DOT__final_result),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result),32);
    bufp->fullBit(oldp+12,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub));
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt));
    bufp->fullBit(oldp+14,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu));
    bufp->fullBit(oldp+15,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and));
    bufp->fullBit(oldp+16,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or));
    bufp->fullBit(oldp+17,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor));
    bufp->fullBit(oldp+18,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll));
    bufp->fullBit(oldp+19,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl));
    bufp->fullBit(oldp+20,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra));
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result),32);
    bufp->fullIData(oldp+22,((1U & (((~ (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
                                         >> 0x1fU)) 
                                     & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                        >> 0x1fU)) 
                                    | ((~ ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                            ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                                           >> 0x1fU)) 
                                       & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
                                          >> 0x1fU))))),32);
    bufp->fullIData(oldp+23,((1U & (~ (IData)((1ULL 
                                               & (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                   + 
                                                   ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                    + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                  >> 0x20U)))))),32);
    bufp->fullIData(oldp+24,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                              & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
    bufp->fullIData(oldp+25,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                              | vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
    bufp->fullIData(oldp+26,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                              ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
    bufp->fullIData(oldp+27,(((0x1fU >= vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)
                               ? (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                  << vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)
                               : 0U)),32);
    bufp->fullQData(oldp+28,(((((QData)((IData)((- (IData)(
                                                           ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                                            & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                               >> 0x1fU)))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                              >> (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),64);
    bufp->fullIData(oldp+30,((IData)(((((QData)((IData)(
                                                        (- (IData)(
                                                                   ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                                                    & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                       >> 0x1fU)))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                      >> (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)))),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b),32);
    bufp->fullBit(oldp+32,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin));
    bufp->fullBit(oldp+33,((1U & (IData)((1ULL & (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                   + 
                                                   ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                    + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                  >> 0x20U))))));
    bufp->fullWData(oldp+34,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d),128);
    bufp->fullQData(oldp+38,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_26_d),64);
    bufp->fullWData(oldp+40,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d),128);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1_d),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2_d),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd_d),32);
    bufp->fullBit(oldp+47,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi));
    bufp->fullBit(oldp+49,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and) 
                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or) 
                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor) 
                                        | (IData)(vlSelf->__VdfgTmp_h39165432__0))))))));
    bufp->fullBit(oldp+51,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi) 
                            | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl))));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_25020037_cpu__DOT__rst_delay));
    bufp->fullIData(oldp+53,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[1]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[2]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[3]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[4]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[5]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[6]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[7]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[8]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[9]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[10]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[11]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[12]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[13]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[14]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[15]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[16]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[17]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[18]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[19]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[20]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[21]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[22]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[23]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[24]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[25]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[26]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[27]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[28]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[29]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[30]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[31]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst__dout),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst__dout),32);
    bufp->fullCData(oldp+117,(vlSelf->decoder_2_4__02Ein),2);
    bufp->fullCData(oldp+118,(vlSelf->decoder_2_4__02Eout),4);
    bufp->fullCData(oldp+119,(vlSelf->decoder_4_16__02Ein),4);
    bufp->fullSData(oldp+120,(vlSelf->decoder_4_16__02Eout),16);
    bufp->fullIData(oldp+121,(vlSelf->encoder_32_5__02Ein),32);
    bufp->fullCData(oldp+122,(vlSelf->encoder_32_5__02Eout),5);
    bufp->fullBit(oldp+123,(vlSelf->clk));
    bufp->fullBit(oldp+124,(vlSelf->rst));
    bufp->fullIData(oldp+125,(vlSelf->inst),32);
    bufp->fullIData(oldp+126,(vlSelf->pc),32);
    bufp->fullIData(oldp+127,(vlSelf->regs[0]),32);
    bufp->fullIData(oldp+128,(vlSelf->regs[1]),32);
    bufp->fullIData(oldp+129,(vlSelf->regs[2]),32);
    bufp->fullIData(oldp+130,(vlSelf->regs[3]),32);
    bufp->fullIData(oldp+131,(vlSelf->regs[4]),32);
    bufp->fullIData(oldp+132,(vlSelf->regs[5]),32);
    bufp->fullIData(oldp+133,(vlSelf->regs[6]),32);
    bufp->fullIData(oldp+134,(vlSelf->regs[7]),32);
    bufp->fullIData(oldp+135,(vlSelf->regs[8]),32);
    bufp->fullIData(oldp+136,(vlSelf->regs[9]),32);
    bufp->fullIData(oldp+137,(vlSelf->regs[10]),32);
    bufp->fullIData(oldp+138,(vlSelf->regs[11]),32);
    bufp->fullIData(oldp+139,(vlSelf->regs[12]),32);
    bufp->fullIData(oldp+140,(vlSelf->regs[13]),32);
    bufp->fullIData(oldp+141,(vlSelf->regs[14]),32);
    bufp->fullIData(oldp+142,(vlSelf->regs[15]),32);
    bufp->fullIData(oldp+143,(vlSelf->regs[16]),32);
    bufp->fullIData(oldp+144,(vlSelf->regs[17]),32);
    bufp->fullIData(oldp+145,(vlSelf->regs[18]),32);
    bufp->fullIData(oldp+146,(vlSelf->regs[19]),32);
    bufp->fullIData(oldp+147,(vlSelf->regs[20]),32);
    bufp->fullIData(oldp+148,(vlSelf->regs[21]),32);
    bufp->fullIData(oldp+149,(vlSelf->regs[22]),32);
    bufp->fullIData(oldp+150,(vlSelf->regs[23]),32);
    bufp->fullIData(oldp+151,(vlSelf->regs[24]),32);
    bufp->fullIData(oldp+152,(vlSelf->regs[25]),32);
    bufp->fullIData(oldp+153,(vlSelf->regs[26]),32);
    bufp->fullIData(oldp+154,(vlSelf->regs[27]),32);
    bufp->fullIData(oldp+155,(vlSelf->regs[28]),32);
    bufp->fullIData(oldp+156,(vlSelf->regs[29]),32);
    bufp->fullIData(oldp+157,(vlSelf->regs[30]),32);
    bufp->fullIData(oldp+158,(vlSelf->regs[31]),32);
    bufp->fullCData(oldp+159,(((3U & ((- (IData)((0U 
                                                  != 
                                                  (0xfU 
                                                   & vlSelf->encoder_32_5__02Ein)))) 
                                      & ((1U & (- (IData)(
                                                          (1U 
                                                           & (vlSelf->encoder_32_5__02Ein 
                                                              >> 1U))))) 
                                         | ((2U & (- (IData)(
                                                             (1U 
                                                              & (vlSelf->encoder_32_5__02Ein 
                                                                 >> 2U))))) 
                                            | (- (IData)(
                                                         (1U 
                                                          & (vlSelf->encoder_32_5__02Ein 
                                                             >> 3U)))))))) 
                               | (((- (IData)((0U != 
                                               (0xfU 
                                                & (vlSelf->encoder_32_5__02Ein 
                                                   >> 4U))))) 
                                   & (4U | (3U & ((1U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelf->encoder_32_5__02Ein 
                                                                    >> 5U))))) 
                                                  | ((2U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->encoder_32_5__02Ein 
                                                                       >> 6U))))) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->encoder_32_5__02Ein 
                                                                      >> 7U))))))))) 
                                  | (((- (IData)((0U 
                                                  != 
                                                  (0xfU 
                                                   & (vlSelf->encoder_32_5__02Ein 
                                                      >> 8U))))) 
                                      & (8U | (3U & 
                                               ((1U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelf->encoder_32_5__02Ein 
                                                                  >> 9U))))) 
                                                | ((2U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->encoder_32_5__02Ein 
                                                                     >> 0xaU))))) 
                                                   | (- (IData)(
                                                                (1U 
                                                                 & (vlSelf->encoder_32_5__02Ein 
                                                                    >> 0xbU))))))))) 
                                     | ((- (IData)(
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & (vlSelf->encoder_32_5__02Ein 
                                                        >> 0xcU))))) 
                                        & (0xcU | (3U 
                                                   & ((1U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->encoder_32_5__02Ein 
                                                                        >> 0xdU))))) 
                                                      | ((2U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->encoder_32_5__02Ein 
                                                                           >> 0xeU))))) 
                                                         | (- (IData)(
                                                                      (1U 
                                                                       & (vlSelf->encoder_32_5__02Ein 
                                                                          >> 0xfU))))))))))))),4);
    bufp->fullCData(oldp+160,(((3U & ((- (IData)((0U 
                                                  != 
                                                  (0xfU 
                                                   & (vlSelf->encoder_32_5__02Ein 
                                                      >> 0x10U))))) 
                                      & ((1U & (- (IData)(
                                                          (1U 
                                                           & (vlSelf->encoder_32_5__02Ein 
                                                              >> 0x11U))))) 
                                         | ((2U & (- (IData)(
                                                             (1U 
                                                              & (vlSelf->encoder_32_5__02Ein 
                                                                 >> 0x12U))))) 
                                            | (- (IData)(
                                                         (1U 
                                                          & (vlSelf->encoder_32_5__02Ein 
                                                             >> 0x13U)))))))) 
                               | (((- (IData)((0U != 
                                               (0xfU 
                                                & (vlSelf->encoder_32_5__02Ein 
                                                   >> 0x14U))))) 
                                   & (4U | (3U & ((1U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelf->encoder_32_5__02Ein 
                                                                    >> 0x15U))))) 
                                                  | ((2U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->encoder_32_5__02Ein 
                                                                       >> 0x16U))))) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->encoder_32_5__02Ein 
                                                                      >> 0x17U))))))))) 
                                  | (((- (IData)((0U 
                                                  != 
                                                  (0xfU 
                                                   & (vlSelf->encoder_32_5__02Ein 
                                                      >> 0x18U))))) 
                                      & (8U | (3U & 
                                               ((1U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelf->encoder_32_5__02Ein 
                                                                  >> 0x19U))))) 
                                                | ((2U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->encoder_32_5__02Ein 
                                                                     >> 0x1aU))))) 
                                                   | (- (IData)(
                                                                (1U 
                                                                 & (vlSelf->encoder_32_5__02Ein 
                                                                    >> 0x1bU))))))))) 
                                     | ((- (IData)(
                                                   (0U 
                                                    != 
                                                    (vlSelf->encoder_32_5__02Ein 
                                                     >> 0x1cU)))) 
                                        & (0xcU | (3U 
                                                   & ((1U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->encoder_32_5__02Ein 
                                                                        >> 0x1dU))))) 
                                                      | ((2U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->encoder_32_5__02Ein 
                                                                           >> 0x1eU))))) 
                                                         | (- (IData)(
                                                                      (vlSelf->encoder_32_5__02Ein 
                                                                       >> 0x1fU)))))))))))),4);
    bufp->fullSData(oldp+161,((0xffffU & vlSelf->encoder_32_5__02Ein)),16);
    bufp->fullCData(oldp+162,((3U & ((1U & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->encoder_32_5__02Ein 
                                                          >> 1U))))) 
                                     | ((2U & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->encoder_32_5__02Ein 
                                                             >> 2U))))) 
                                        | (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 3U)))))))),2);
    bufp->fullCData(oldp+163,((3U & ((1U & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->encoder_32_5__02Ein 
                                                          >> 5U))))) 
                                     | ((2U & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->encoder_32_5__02Ein 
                                                             >> 6U))))) 
                                        | (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 7U)))))))),2);
    bufp->fullCData(oldp+164,((3U & ((1U & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->encoder_32_5__02Ein 
                                                          >> 9U))))) 
                                     | ((2U & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->encoder_32_5__02Ein 
                                                             >> 0xaU))))) 
                                        | (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 0xbU)))))))),2);
    bufp->fullCData(oldp+165,((3U & ((1U & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->encoder_32_5__02Ein 
                                                          >> 0xdU))))) 
                                     | ((2U & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->encoder_32_5__02Ein 
                                                             >> 0xeU))))) 
                                        | (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 0xfU)))))))),2);
    bufp->fullCData(oldp+166,((0xfU & (vlSelf->encoder_32_5__02Ein 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+167,((0xfU & vlSelf->encoder_32_5__02Ein)),4);
    bufp->fullCData(oldp+168,((0xfU & (vlSelf->encoder_32_5__02Ein 
                                       >> 8U))),4);
    bufp->fullCData(oldp+169,((0xfU & (vlSelf->encoder_32_5__02Ein 
                                       >> 4U))),4);
    bufp->fullSData(oldp+170,((vlSelf->encoder_32_5__02Ein 
                               >> 0x10U)),16);
    bufp->fullCData(oldp+171,((3U & ((1U & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->encoder_32_5__02Ein 
                                                          >> 0x11U))))) 
                                     | ((2U & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->encoder_32_5__02Ein 
                                                             >> 0x12U))))) 
                                        | (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 0x13U)))))))),2);
    bufp->fullCData(oldp+172,((3U & ((1U & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->encoder_32_5__02Ein 
                                                          >> 0x15U))))) 
                                     | ((2U & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->encoder_32_5__02Ein 
                                                             >> 0x16U))))) 
                                        | (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 0x17U)))))))),2);
    bufp->fullCData(oldp+173,((3U & ((1U & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->encoder_32_5__02Ein 
                                                          >> 0x19U))))) 
                                     | ((2U & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->encoder_32_5__02Ein 
                                                             >> 0x1aU))))) 
                                        | (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 0x1bU)))))))),2);
    bufp->fullCData(oldp+174,((3U & ((1U & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->encoder_32_5__02Ein 
                                                          >> 0x1dU))))) 
                                     | ((2U & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->encoder_32_5__02Ein 
                                                             >> 0x1eU))))) 
                                        | (- (IData)(
                                                     (vlSelf->encoder_32_5__02Ein 
                                                      >> 0x1fU))))))),2);
    bufp->fullCData(oldp+175,((vlSelf->encoder_32_5__02Ein 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+176,((0xfU & (vlSelf->encoder_32_5__02Ein 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+177,((0xfU & (vlSelf->encoder_32_5__02Ein 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+178,((0xfU & (vlSelf->encoder_32_5__02Ein 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+179,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+180,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+181,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
                              [(0x1fU & (vlSelf->inst 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
                              [(0x1fU & (vlSelf->inst 
                                         >> 0x14U))]),32);
    bufp->fullSData(oldp+184,((((0x37U == (0x7fU & vlSelf->inst)) 
                                << 0xaU) | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                             << 9U) 
                                            | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl) 
                                                << 8U) 
                                               | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h04762d85__0) 
                                                                       | ((0x17U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->inst)) 
                                                                          | ((0x6fU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->inst)) 
                                                                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl) 
                                                                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we)))))))))))))))))))),11);
    bufp->fullBit(oldp+185,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h04762d85__0) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and) 
                                         | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or) 
                                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor) 
                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                                  | ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst)) 
                                                     | (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->inst)))))))))))));
    bufp->fullBit(oldp+186,(((~ (IData)(vlSelf->rst)) 
                             & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h04762d85__0) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu) 
                                         | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and) 
                                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or) 
                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor) 
                                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                                     | ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst)) 
                                                        | (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->inst))))))))))))));
    bufp->fullBit(oldp+187,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump) 
                             | (0x17U == (0x7fU & vlSelf->inst)))));
    bufp->fullBit(oldp+188,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we) 
                                         | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we) 
                                            | ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump))))))))));
    bufp->fullBit(oldp+189,((IData)((0x8073U == vlSelf->inst))));
    bufp->fullIData(oldp+190,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump)
                                ? (vlSelf->ysyx_25020037_cpu__DOT__imm 
                                   + vlSelf->pc) : 
                               ((IData)(4U) + vlSelf->pc))),32);
    bufp->fullIData(oldp+191,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullBit(oldp+192,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h04762d85__0) 
                             | ((0x17U == (0x7fU & vlSelf->inst)) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelf->inst)) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we) 
                                         | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll) 
                                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl) 
                                                  | (IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we)))))))))));
    bufp->fullBit(oldp+193,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+194,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+195,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x500U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+196,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x580U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+197,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x600U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+198,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x680U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+199,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x700U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+200,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x780U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+201,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x800U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+202,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x880U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+203,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x900U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+204,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x980U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+205,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+206,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0xa00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+207,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0xa80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+208,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0xb00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+209,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0xb80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+210,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0xc00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+211,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0xc80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+212,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0xd00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+213,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0xd80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+214,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0xe00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+215,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0xe80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+216,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x100U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+217,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0xf00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+218,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0xf80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+219,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x180U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+220,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x200U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+221,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x280U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+222,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x300U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+223,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x380U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+224,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x400U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+225,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                             & (0x480U == (0xf80U & vlSelf->inst)))));
    bufp->fullCData(oldp+226,((vlSelf->inst >> 0x19U)),7);
    bufp->fullCData(oldp+227,((vlSelf->inst >> 0x1aU)),6);
    bufp->fullCData(oldp+228,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+229,((0x7fU & vlSelf->inst)),7);
    bufp->fullIData(oldp+230,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+231,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+232,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->inst 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+233,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+234,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->inst) 
                                             | ((0x800U 
                                                 & (vlSelf->inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)))))),32);
    bufp->fullCData(oldp+235,((((7U == (7U & (vlSelf->inst 
                                              >> 0xcU))) 
                                << 7U) | (((6U == (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU))) 
                                           << 6U) | 
                                          (((5U == 
                                             (7U & 
                                              (vlSelf->inst 
                                               >> 0xcU))) 
                                            << 5U) 
                                           | (((4U 
                                                == 
                                                (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))) 
                                               << 4U) 
                                              | (((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU))) 
                                                  << 3U) 
                                                 | (((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->inst 
                                                          >> 0xcU))) 
                                                     << 2U) 
                                                    | (((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->inst 
                                                             >> 0xcU))) 
                                                        << 1U) 
                                                       | (0U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->inst 
                                                              >> 0xcU))))))))))),8);
    bufp->fullBit(oldp+236,((IData)((0x1063U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+237,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+238,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+239,((IData)((0U == vlSelf->inst))));
    bufp->fullBit(oldp+240,(((0x17U == (0x7fU & vlSelf->inst)) 
                             | (0x37U == (0x7fU & vlSelf->inst)))));
    bufp->fullBit(oldp+241,(((IData)((0x8073U == vlSelf->inst)) 
                             | (IData)((0U == vlSelf->inst)))));
    bufp->fullBit(oldp+242,(vlSelf->ysyx_25020037_cpu__DOT__rw_word_1));
    bufp->fullBit(oldp+243,(vlSelf->ysyx_25020037_cpu__DOT__rw_word_2));
    bufp->fullIData(oldp+244,(0x20U),32);
    bufp->fullIData(oldp+245,(0x80000000U),32);
    bufp->fullIData(oldp+246,(0U),32);
    bufp->fullBit(oldp+247,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_W));
}
