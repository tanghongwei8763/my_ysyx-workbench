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
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+183,"inst", false,-1, 31,0);
    tracep->declBus(c+184,"pc", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+185+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+217,"mtvec", false,-1, 31,0);
    tracep->declBus(c+218,"mepc", false,-1, 31,0);
    tracep->declBus(c+219,"mstatus", false,-1, 31,0);
    tracep->declBus(c+220,"mcause", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25020037_cpu ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+183,"inst", false,-1, 31,0);
    tracep->declBus(c+184,"pc", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+185+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+217,"mtvec", false,-1, 31,0);
    tracep->declBus(c+218,"mepc", false,-1, 31,0);
    tracep->declBus(c+219,"mstatus", false,-1, 31,0);
    tracep->declBus(c+220,"mcause", false,-1, 31,0);
    tracep->declBus(c+284,"CONFIG_FTRACE", false,-1, 0,0);
    tracep->declBit(c+221,"ftrace_jal", false,-1);
    tracep->declBit(c+1,"ftrace_jalr", false,-1);
    tracep->declBus(c+285,"MSTATUS", false,-1, 31,0);
    tracep->declBus(c+286,"MTVEC", false,-1, 31,0);
    tracep->declBus(c+287,"MEPC", false,-1, 31,0);
    tracep->declBus(c+288,"MCAUSE", false,-1, 31,0);
    tracep->declBus(c+222,"rs1", false,-1, 4,0);
    tracep->declBus(c+223,"rs2", false,-1, 4,0);
    tracep->declBus(c+224,"rd", false,-1, 4,0);
    tracep->declBus(c+2,"src1", false,-1, 31,0);
    tracep->declBus(c+3,"src2", false,-1, 31,0);
    tracep->declBus(c+4,"imm", false,-1, 31,0);
    tracep->declBus(c+225,"alu_op", false,-1, 16,0);
    tracep->declBit(c+226,"gpr_we", false,-1);
    tracep->declBit(c+227,"final_gpr_we", false,-1);
    tracep->declBus(c+5,"rlsu_addr", false,-1, 31,0);
    tracep->declBus(c+6,"rlsu_len", false,-1, 31,0);
    tracep->declBus(c+7,"rlsu_data", false,-1, 31,0);
    tracep->declBus(c+5,"wlsu_addr", false,-1, 31,0);
    tracep->declBus(c+6,"wlsu_len", false,-1, 31,0);
    tracep->declBus(c+3,"wlsu_data", false,-1, 31,0);
    tracep->declBit(c+8,"rlsu_we", false,-1);
    tracep->declBit(c+9,"wlsu_we", false,-1);
    tracep->declBit(c+10,"bit_sext", false,-1);
    tracep->declBit(c+11,"half_sext", false,-1);
    tracep->declBit(c+12,"rw_word_1", false,-1);
    tracep->declBit(c+13,"rw_word_2", false,-1);
    tracep->declBit(c+14,"rw_word_4", false,-1);
    tracep->declBit(c+228,"src1_is_pc", false,-1);
    tracep->declBit(c+229,"src2_is_imm", false,-1);
    tracep->declBit(c+15,"is_pc_jump", false,-1);
    tracep->declBit(c+16,"double_cal", false,-1);
    tracep->declBit(c+230,"exec_is_end", false,-1);
    tracep->declBit(c+231,"inst_not_realize", false,-1);
    tracep->declBit(c+17,"csr_w_gpr_we", false,-1);
    tracep->declBus(c+18,"csr_wgpr_data", false,-1, 31,0);
    tracep->declBus(c+19,"csr_wcsr_data", false,-1, 31,0);
    tracep->declBus(c+289,"csr_mtvec_data", false,-1, 31,0);
    tracep->declBus(c+290,"csr_mepc_data", false,-1, 31,0);
    tracep->declBus(c+291,"csr_mstatus_data", false,-1, 31,0);
    tracep->declBus(c+292,"csr_mcause_data", false,-1, 31,0);
    tracep->declBit(c+20,"csrs_mtvec_wen", false,-1);
    tracep->declBit(c+21,"csrs_mepc_wen", false,-1);
    tracep->declBit(c+22,"csrs_mstatus_wen", false,-1);
    tracep->declBit(c+23,"csrs_mcause_wen", false,-1);
    tracep->declBit(c+24,"csrrw_op", false,-1);
    tracep->declBit(c+25,"csrrs_op", false,-1);
    tracep->declBit(c+26,"ecall_en", false,-1);
    tracep->declBit(c+27,"mret_en", false,-1);
    tracep->declBit(c+28,"is_csr_op", false,-1);
    tracep->declBus(c+5,"result", false,-1, 31,0);
    tracep->declBus(c+29,"final_result", false,-1, 31,0);
    tracep->declBus(c+232,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+294,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+232,"din", false,-1, 31,0);
    tracep->declBus(c+184,"dout", false,-1, 31,0);
    tracep->declBit(c+233,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_cpu ");
    tracep->declBus(c+2,"src1", false,-1, 31,0);
    tracep->declBus(c+3,"src2", false,-1, 31,0);
    tracep->declBus(c+4,"imm", false,-1, 31,0);
    tracep->declBus(c+184,"pc", false,-1, 31,0);
    tracep->declBus(c+225,"alu_op", false,-1, 16,0);
    tracep->declBit(c+228,"src1_is_pc", false,-1);
    tracep->declBit(c+229,"src2_is_imm", false,-1);
    tracep->declBit(c+15,"is_pc_jump", false,-1);
    tracep->declBit(c+16,"double_cal", false,-1);
    tracep->declBit(c+230,"exec_is_end", false,-1);
    tracep->declBit(c+231,"inst_not_realize", false,-1);
    tracep->declBit(c+26,"ecall_en", false,-1);
    tracep->declBit(c+27,"mret_en", false,-1);
    tracep->declBus(c+217,"mtvec", false,-1, 31,0);
    tracep->declBus(c+218,"mepc", false,-1, 31,0);
    tracep->declBus(c+232,"dnpc", false,-1, 31,0);
    tracep->declBus(c+5,"result", false,-1, 31,0);
    tracep->declBus(c+234,"snpc", false,-1, 31,0);
    tracep->declBus(c+30,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+31,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+2,"alu_src3", false,-1, 31,0);
    tracep->declBus(c+3,"alu_src4", false,-1, 31,0);
    tracep->declBus(c+32,"alu_result1", false,-1, 31,0);
    tracep->declBus(c+33,"alu_result2", false,-1, 31,0);
    tracep->pushNamePrefix("alu_cpu ");
    tracep->declBit(c+16,"double_cal", false,-1);
    tracep->declBus(c+225,"alu_op", false,-1, 16,0);
    tracep->declBus(c+30,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+31,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+2,"alu_src3", false,-1, 31,0);
    tracep->declBus(c+3,"alu_src4", false,-1, 31,0);
    tracep->declBus(c+32,"alu_result1", false,-1, 31,0);
    tracep->declBus(c+33,"alu_result2", false,-1, 31,0);
    tracep->declBit(c+235,"op_add", false,-1);
    tracep->declBit(c+34,"op_sub", false,-1);
    tracep->declBit(c+35,"op_slt", false,-1);
    tracep->declBit(c+36,"op_sltu", false,-1);
    tracep->declBit(c+37,"op_and", false,-1);
    tracep->declBit(c+38,"op_or", false,-1);
    tracep->declBit(c+39,"op_xor", false,-1);
    tracep->declBit(c+40,"op_sll", false,-1);
    tracep->declBit(c+41,"op_srl", false,-1);
    tracep->declBit(c+42,"op_sra", false,-1);
    tracep->declBit(c+236,"op_lui", false,-1);
    tracep->declBit(c+43,"op_bne", false,-1);
    tracep->declBit(c+44,"op_beq", false,-1);
    tracep->declBit(c+45,"op_bge", false,-1);
    tracep->declBit(c+46,"op_bgeu", false,-1);
    tracep->declBit(c+47,"op_blt", false,-1);
    tracep->declBit(c+48,"op_bltu", false,-1);
    tracep->declBus(c+49,"add_sub_result", false,-1, 31,0);
    tracep->declBus(c+50,"slt_result", false,-1, 31,0);
    tracep->declBus(c+51,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+52,"and_result", false,-1, 31,0);
    tracep->declBus(c+53,"or_result", false,-1, 31,0);
    tracep->declBus(c+54,"xor_result", false,-1, 31,0);
    tracep->declBus(c+31,"lui_result", false,-1, 31,0);
    tracep->declBus(c+55,"sll_result", false,-1, 31,0);
    tracep->declQuad(c+56,"sr64_result", false,-1, 63,0);
    tracep->declBus(c+58,"sr_result", false,-1, 31,0);
    tracep->declBus(c+295,"aupic_result", false,-1, 31,0);
    tracep->declBus(c+59,"beq_result", false,-1, 31,0);
    tracep->declBus(c+60,"blt_result", false,-1, 31,0);
    tracep->declBus(c+61,"bltu_result", false,-1, 31,0);
    tracep->declBus(c+62,"bge_result", false,-1, 31,0);
    tracep->declBus(c+63,"bgeu_result", false,-1, 31,0);
    tracep->declBus(c+64,"bne_result", false,-1, 31,0);
    tracep->declBus(c+30,"adder_a", false,-1, 31,0);
    tracep->declBus(c+65,"adder_b", false,-1, 31,0);
    tracep->declBus(c+2,"adder_c", false,-1, 31,0);
    tracep->declBus(c+66,"adder_d", false,-1, 31,0);
    tracep->declBit(c+67,"adder_cin", false,-1);
    tracep->declBit(c+68,"adder_cin1", false,-1);
    tracep->declBus(c+49,"adder_result", false,-1, 31,0);
    tracep->declBus(c+69,"adder_result1", false,-1, 31,0);
    tracep->declBit(c+70,"adder_cout", false,-1);
    tracep->declBit(c+71,"adder_cout1", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpr_cpu ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+184,"pc", false,-1, 31,0);
    tracep->declBus(c+29,"gpr_wdata", false,-1, 31,0);
    tracep->declBus(c+222,"rs1", false,-1, 4,0);
    tracep->declBus(c+223,"rs2", false,-1, 4,0);
    tracep->declBus(c+2,"src1", false,-1, 31,0);
    tracep->declBus(c+3,"src2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+117+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+224,"gpr_waddr", false,-1, 4,0);
    tracep->declBit(c+227,"gpr_wen", false,-1);
    tracep->declBus(c+19,"csr_wcsr_data", false,-1, 31,0);
    tracep->declBit(c+20,"csrs_mtvec_wen", false,-1);
    tracep->declBit(c+21,"csrs_mepc_wen", false,-1);
    tracep->declBit(c+22,"csrs_mstatus_wen", false,-1);
    tracep->declBit(c+23,"csrs_mcause_wen", false,-1);
    tracep->declBit(c+26,"ecall_en", false,-1);
    tracep->declBit(c+27,"mret_en", false,-1);
    tracep->declBus(c+217,"mtvec", false,-1, 31,0);
    tracep->declBus(c+218,"mepc", false,-1, 31,0);
    tracep->declBus(c+219,"mstatus", false,-1, 31,0);
    tracep->declBus(c+220,"mcause", false,-1, 31,0);
    tracep->declBit(c+72,"mepc_wen", false,-1);
    tracep->declBit(c+73,"mcause_wen", false,-1);
    tracep->declBit(c+74,"mstatus_wen", false,-1);
    tracep->declBus(c+237,"mepc_data", false,-1, 31,0);
    tracep->declBus(c+75,"mcause_data", false,-1, 31,0);
    tracep->declBus(c+238,"mstatus_data", false,-1, 31,0);
    tracep->pushNamePrefix("CSRS_cause ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+75,"din", false,-1, 31,0);
    tracep->declBus(c+220,"dout", false,-1, 31,0);
    tracep->declBit(c+73,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_mepc ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+237,"din", false,-1, 31,0);
    tracep->declBus(c+218,"dout", false,-1, 31,0);
    tracep->declBit(c+72,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_mstatus ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+238,"din", false,-1, 31,0);
    tracep->declBus(c+219,"dout", false,-1, 31,0);
    tracep->declBit(c+74,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_mtvec ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+19,"din", false,-1, 31,0);
    tracep->declBus(c+217,"dout", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR32[0] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+149,"dout", false,-1, 31,0);
    tracep->declBit(c+239,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[10] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+150,"dout", false,-1, 31,0);
    tracep->declBit(c+240,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[11] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+151,"dout", false,-1, 31,0);
    tracep->declBit(c+241,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[12] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+152,"dout", false,-1, 31,0);
    tracep->declBit(c+242,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[13] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+153,"dout", false,-1, 31,0);
    tracep->declBit(c+243,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[14] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+154,"dout", false,-1, 31,0);
    tracep->declBit(c+244,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[15] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+155,"dout", false,-1, 31,0);
    tracep->declBit(c+245,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[16] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+156,"dout", false,-1, 31,0);
    tracep->declBit(c+246,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[17] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+157,"dout", false,-1, 31,0);
    tracep->declBit(c+247,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[18] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+158,"dout", false,-1, 31,0);
    tracep->declBit(c+248,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[19] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+159,"dout", false,-1, 31,0);
    tracep->declBit(c+249,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[1] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+160,"dout", false,-1, 31,0);
    tracep->declBit(c+250,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[20] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+161,"dout", false,-1, 31,0);
    tracep->declBit(c+251,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[21] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+162,"dout", false,-1, 31,0);
    tracep->declBit(c+252,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[22] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+163,"dout", false,-1, 31,0);
    tracep->declBit(c+253,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[23] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+164,"dout", false,-1, 31,0);
    tracep->declBit(c+254,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[24] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+165,"dout", false,-1, 31,0);
    tracep->declBit(c+255,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[25] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+166,"dout", false,-1, 31,0);
    tracep->declBit(c+256,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[26] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+167,"dout", false,-1, 31,0);
    tracep->declBit(c+257,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[27] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+168,"dout", false,-1, 31,0);
    tracep->declBit(c+258,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[28] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+169,"dout", false,-1, 31,0);
    tracep->declBit(c+259,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[29] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+170,"dout", false,-1, 31,0);
    tracep->declBit(c+260,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[2] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+171,"dout", false,-1, 31,0);
    tracep->declBit(c+261,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[30] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+172,"dout", false,-1, 31,0);
    tracep->declBit(c+262,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[31] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+173,"dout", false,-1, 31,0);
    tracep->declBit(c+263,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[3] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+174,"dout", false,-1, 31,0);
    tracep->declBit(c+264,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[4] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+175,"dout", false,-1, 31,0);
    tracep->declBit(c+265,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[5] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+176,"dout", false,-1, 31,0);
    tracep->declBit(c+266,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[6] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+177,"dout", false,-1, 31,0);
    tracep->declBit(c+267,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[7] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+178,"dout", false,-1, 31,0);
    tracep->declBit(c+268,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[8] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+179,"dout", false,-1, 31,0);
    tracep->declBit(c+269,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[9] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+293,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 31,0);
    tracep->declBus(c+180,"dout", false,-1, 31,0);
    tracep->declBit(c+270,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu_cpu ");
    tracep->declBus(c+183,"inst", false,-1, 31,0);
    tracep->declBus(c+222,"rs1", false,-1, 4,0);
    tracep->declBus(c+223,"rs2", false,-1, 4,0);
    tracep->declBus(c+224,"rd", false,-1, 4,0);
    tracep->declBus(c+4,"imm", false,-1, 31,0);
    tracep->declBus(c+225,"alu_op", false,-1, 16,0);
    tracep->declBit(c+226,"gpr_we", false,-1);
    tracep->declBit(c+8,"rlsu_we", false,-1);
    tracep->declBit(c+9,"wlsu_we", false,-1);
    tracep->declBit(c+10,"bit_sext", false,-1);
    tracep->declBit(c+11,"half_sext", false,-1);
    tracep->declBit(c+12,"rw_word_1", false,-1);
    tracep->declBit(c+13,"rw_word_2", false,-1);
    tracep->declBit(c+14,"rw_word_4", false,-1);
    tracep->declBit(c+228,"src1_is_pc", false,-1);
    tracep->declBit(c+229,"src2_is_imm", false,-1);
    tracep->declBit(c+15,"is_pc_jump", false,-1);
    tracep->declBit(c+16,"double_cal", false,-1);
    tracep->declBit(c+230,"exec_is_end", false,-1);
    tracep->declBit(c+231,"inst_not_realize", false,-1);
    tracep->declBit(c+17,"csr_w_gpr_we", false,-1);
    tracep->declBit(c+24,"csrrw_op", false,-1);
    tracep->declBit(c+25,"csrrs_op", false,-1);
    tracep->declBit(c+26,"ecall_en", false,-1);
    tracep->declBit(c+27,"mret_en", false,-1);
    tracep->declBit(c+28,"is_csr_op", false,-1);
    tracep->declBit(c+1,"ftrace_jalr", false,-1);
    tracep->declBit(c+221,"ftrace_jal", false,-1);
    tracep->declBus(c+271,"opcode_31_25", false,-1, 6,0);
    tracep->declBus(c+272,"opcode_31_26", false,-1, 5,0);
    tracep->declBus(c+273,"opcode_14_12", false,-1, 2,0);
    tracep->declBus(c+274,"opcode_06_00", false,-1, 6,0);
    tracep->declBus(c+275,"immI", false,-1, 31,0);
    tracep->declBus(c+276,"immS", false,-1, 31,0);
    tracep->declBus(c+277,"immB", false,-1, 31,0);
    tracep->declBus(c+278,"immU", false,-1, 31,0);
    tracep->declBus(c+279,"immJ", false,-1, 31,0);
    tracep->declArray(c+76,"opcode_31_25_d", false,-1, 127,0);
    tracep->declQuad(c+80,"opcode_31_26_d", false,-1, 63,0);
    tracep->declBus(c+280,"opcode_14_12_d", false,-1, 7,0);
    tracep->declArray(c+82,"opcode_06_00_d", false,-1, 127,0);
    tracep->declBus(c+86,"rs1_d", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_d", false,-1, 31,0);
    tracep->declBus(c+88,"rd_d", false,-1, 31,0);
    tracep->declBit(c+89,"inst_add", false,-1);
    tracep->declBit(c+90,"inst_and", false,-1);
    tracep->declBit(c+91,"inst_or", false,-1);
    tracep->declBit(c+92,"inst_ori", false,-1);
    tracep->declBit(c+93,"inst_xor", false,-1);
    tracep->declBit(c+94,"inst_xori", false,-1);
    tracep->declBit(c+34,"inst_sub", false,-1);
    tracep->declBit(c+35,"inst_slt", false,-1);
    tracep->declBit(c+95,"inst_sltu", false,-1);
    tracep->declBit(c+96,"inst_addi", false,-1);
    tracep->declBit(c+97,"inst_andi", false,-1);
    tracep->declBit(c+1,"inst_jarl", false,-1);
    tracep->declBit(c+10,"inst_lb", false,-1);
    tracep->declBit(c+98,"inst_lbu", false,-1);
    tracep->declBit(c+11,"inst_lh", false,-1);
    tracep->declBit(c+99,"inst_lhu", false,-1);
    tracep->declBit(c+100,"inst_lw", false,-1);
    tracep->declBit(c+101,"inst_sll", false,-1);
    tracep->declBit(c+102,"inst_slli", false,-1);
    tracep->declBit(c+103,"inst_sltiu", false,-1);
    tracep->declBit(c+104,"inst_sra", false,-1);
    tracep->declBit(c+105,"inst_srai", false,-1);
    tracep->declBit(c+106,"inst_srl", false,-1);
    tracep->declBit(c+107,"inst_srli", false,-1);
    tracep->declBit(c+24,"inst_csrrw", false,-1);
    tracep->declBit(c+25,"inst_csrrs", false,-1);
    tracep->declBit(c+26,"inst_ecall", false,-1);
    tracep->declBit(c+27,"inst_mret", false,-1);
    tracep->declBit(c+108,"inst_sb", false,-1);
    tracep->declBit(c+109,"inst_sh", false,-1);
    tracep->declBit(c+110,"inst_sw", false,-1);
    tracep->declBit(c+44,"inst_beq", false,-1);
    tracep->declBit(c+43,"inst_bne", false,-1);
    tracep->declBit(c+45,"inst_bge", false,-1);
    tracep->declBit(c+46,"inst_bgeu", false,-1);
    tracep->declBit(c+47,"inst_blt", false,-1);
    tracep->declBit(c+48,"inst_bltu", false,-1);
    tracep->declBit(c+281,"inst_auipc", false,-1);
    tracep->declBit(c+236,"inst_lui", false,-1);
    tracep->declBit(c+221,"inst_jal", false,-1);
    tracep->declBit(c+230,"inst_ebreak", false,-1);
    tracep->declBit(c+282,"inst_waiting", false,-1);
    tracep->declBit(c+111,"TYPE_R", false,-1);
    tracep->declBit(c+112,"TYPE_I", false,-1);
    tracep->declBit(c+9,"TYPE_S", false,-1);
    tracep->declBit(c+16,"TYPE_B", false,-1);
    tracep->declBit(c+113,"TYPE_U", false,-1);
    tracep->declBit(c+221,"TYPE_J", false,-1);
    tracep->declBit(c+283,"TYPE_N", false,-1);
    tracep->declBit(c+298,"TYPE_W", false,-1);
    tracep->pushNamePrefix("u_dec0 ");
    tracep->declBus(c+271,"in", false,-1, 6,0);
    tracep->declArray(c+76,"out", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec1 ");
    tracep->declBus(c+272,"in", false,-1, 5,0);
    tracep->declQuad(c+80,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec2 ");
    tracep->declBus(c+273,"in", false,-1, 2,0);
    tracep->declBus(c+280,"out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec3 ");
    tracep->declBus(c+274,"in", false,-1, 6,0);
    tracep->declArray(c+82,"out", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec4 ");
    tracep->declBus(c+222,"in", false,-1, 4,0);
    tracep->declBus(c+86,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec5 ");
    tracep->declBus(c+223,"in", false,-1, 4,0);
    tracep->declBus(c+87,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec6 ");
    tracep->declBus(c+224,"in", false,-1, 4,0);
    tracep->declBus(c+88,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_cpu ");
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+184,"pc", false,-1, 31,0);
    tracep->declBus(c+183,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_cpu ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+5,"rlsu_addr", false,-1, 31,0);
    tracep->declBus(c+6,"rlsu_len", false,-1, 31,0);
    tracep->declBus(c+5,"wlsu_addr", false,-1, 31,0);
    tracep->declBus(c+6,"wlsu_len", false,-1, 31,0);
    tracep->declBus(c+3,"wlsu_data", false,-1, 31,0);
    tracep->declBit(c+8,"rlsu_we", false,-1);
    tracep->declBit(c+9,"wlsu_we", false,-1);
    tracep->declBit(c+10,"bit_sext", false,-1);
    tracep->declBit(c+11,"half_sext", false,-1);
    tracep->declBus(c+7,"rlsu_data", false,-1, 31,0);
    tracep->declBus(c+114,"rlsu_temp_data", false,-1, 31,0);
    tracep->declBus(c+115,"sext_half_word", false,-1, 31,0);
    tracep->declBus(c+116,"sext_bit_word", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_cpu ");
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBit(c+226,"gpr_we", false,-1);
    tracep->declBit(c+8,"rlsu_we", false,-1);
    tracep->declBit(c+17,"csr_w_gpr_we", false,-1);
    tracep->declBus(c+5,"result", false,-1, 31,0);
    tracep->declBus(c+7,"rlsu_data", false,-1, 31,0);
    tracep->declBus(c+18,"csr_wgpr_data", false,-1, 31,0);
    tracep->declBit(c+227,"final_gpr_we", false,-1);
    tracep->declBus(c+29,"final_result", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr));
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_c),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_25020037_cpu__DOT__src2),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_25020037_cpu__DOT__imm),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_25020037_cpu__DOT__rlsu_addr),32);
    bufp->fullIData(oldp+6,(((1U & (- (IData)(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu) 
                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                                  | (IData)(vlSelf->ysyx_25020037_cpu__DOT__bit_sext)))))) 
                             | ((2U & (- (IData)(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__half_sext) 
                                                     | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu)))))) 
                                | (4U & (- (IData)(
                                                   ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                                                    | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw)))))))),32);
    bufp->fullIData(oldp+7,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__half_sext)
                              ? (((- (IData)((1U & 
                                              (vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data 
                                               >> 0xfU)))) 
                                  << 0x10U) | (0xffffU 
                                               & vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data))
                              : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__bit_sext)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data 
                                                     >> 7U)))) 
                                      << 8U) | (0xffU 
                                                & vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data))
                                  : vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data))),32);
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we));
    bufp->fullBit(oldp+10,(vlSelf->ysyx_25020037_cpu__DOT__bit_sext));
    bufp->fullBit(oldp+11,(vlSelf->ysyx_25020037_cpu__DOT__half_sext));
    bufp->fullBit(oldp+12,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu) 
                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__bit_sext)))));
    bufp->fullBit(oldp+13,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__half_sext) 
                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu)))));
    bufp->fullBit(oldp+14,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                            | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw))));
    bufp->fullBit(oldp+15,(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump));
    bufp->fullBit(oldp+16,(vlSelf->ysyx_25020037_cpu__DOT__double_cal));
    bufp->fullBit(oldp+17,(vlSelf->ysyx_25020037_cpu__DOT__csr_w_gpr_we));
    bufp->fullIData(oldp+18,(vlSelf->ysyx_25020037_cpu__DOT__csr_wgpr_data),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data),32);
    bufp->fullBit(oldp+20,(((0x305U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                            & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+21,(((0x341U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                            & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+22,(((0x300U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                            & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+23,(((0x342U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                            & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+24,(vlSelf->ysyx_25020037_cpu__DOT__csrrw_op));
    bufp->fullBit(oldp+25,(vlSelf->ysyx_25020037_cpu__DOT__csrrs_op));
    bufp->fullBit(oldp+26,(vlSelf->ysyx_25020037_cpu__DOT__ecall_en));
    bufp->fullBit(oldp+27,(vlSelf->ysyx_25020037_cpu__DOT__mret_en));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op));
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25020037_cpu__DOT__final_result),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_result1),32);
    bufp->fullIData(oldp+33,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__double_cal)
                               ? (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_beq))) 
                                   & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)) 
                                  | (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_blt))) 
                                      & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)) 
                                     | ((1U & ((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bltu))) 
                                               & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))) 
                                        | ((1U & ((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bge))) 
                                                  & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))) 
                                           | (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bgeu))) 
                                               & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)) 
                                              | (1U 
                                                 & ((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bne))) 
                                                    & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))))))))
                               : 1U)),32);
    bufp->fullBit(oldp+34,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt));
    bufp->fullBit(oldp+36,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu));
    bufp->fullBit(oldp+37,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and) 
                            | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi))));
    bufp->fullBit(oldp+38,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or) 
                            | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori))));
    bufp->fullBit(oldp+39,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor) 
                            | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori))));
    bufp->fullBit(oldp+40,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli) 
                            | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll))));
    bufp->fullBit(oldp+41,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli) 
                            | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl))));
    bufp->fullBit(oldp+42,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra));
    bufp->fullBit(oldp+43,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bne));
    bufp->fullBit(oldp+44,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_beq));
    bufp->fullBit(oldp+45,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bge));
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bgeu));
    bufp->fullBit(oldp+47,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_blt));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bltu));
    bufp->fullIData(oldp+49,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result),32);
    bufp->fullIData(oldp+50,((1U & (((~ (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
                                         >> 0x1fU)) 
                                     & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                        >> 0x1fU)) 
                                    | ((~ ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                            ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                                           >> 0x1fU)) 
                                       & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
                                          >> 0x1fU))))),32);
    bufp->fullIData(oldp+51,((1U & (~ (IData)((1ULL 
                                               & (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                   + 
                                                   ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                    + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                  >> 0x20U)))))),32);
    bufp->fullIData(oldp+52,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                              & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
    bufp->fullIData(oldp+53,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                              | vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
    bufp->fullIData(oldp+54,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                              ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
    bufp->fullIData(oldp+55,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                              << (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),32);
    bufp->fullQData(oldp+56,(((((QData)((IData)((- (IData)(
                                                           ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                                            & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                               >> 0x1fU)))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                              >> (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),64);
    bufp->fullIData(oldp+58,((IData)(((((QData)((IData)(
                                                        (- (IData)(
                                                                   ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                                                    & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                       >> 0x1fU)))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                      >> (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)))),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0),32);
    bufp->fullIData(oldp+61,((1U & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))),32);
    bufp->fullIData(oldp+62,((1U & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1),32);
    bufp->fullIData(oldp+64,((1U & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d),32);
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1));
    bufp->fullIData(oldp+69,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_c 
                              + (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
                                 + (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)))),32);
    bufp->fullBit(oldp+70,((1U & (IData)((1ULL & (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                   + 
                                                   ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                    + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                  >> 0x20U))))));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1));
    bufp->fullBit(oldp+72,((((0x341U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                             & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op)) 
                            | (IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en))));
    bufp->fullBit(oldp+73,((((0x342U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                             & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op)) 
                            | (IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en))));
    bufp->fullBit(oldp+74,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en) 
                            | (((0x300U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op)) 
                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__mret_en)))));
    bufp->fullIData(oldp+75,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en)
                               ? 0xbU : vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data)),32);
    bufp->fullWData(oldp+76,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d),128);
    bufp->fullQData(oldp+80,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_26_d),64);
    bufp->fullWData(oldp+82,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d),128);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1_d),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2_d),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd_d),32);
    bufp->fullBit(oldp+89,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add));
    bufp->fullBit(oldp+90,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and));
    bufp->fullBit(oldp+91,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or));
    bufp->fullBit(oldp+92,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor));
    bufp->fullBit(oldp+94,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori));
    bufp->fullBit(oldp+95,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu));
    bufp->fullBit(oldp+96,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi));
    bufp->fullBit(oldp+97,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi));
    bufp->fullBit(oldp+98,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu));
    bufp->fullBit(oldp+99,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw));
    bufp->fullBit(oldp+101,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll));
    bufp->fullBit(oldp+102,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli));
    bufp->fullBit(oldp+103,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltiu));
    bufp->fullBit(oldp+104,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra));
    bufp->fullBit(oldp+105,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srai));
    bufp->fullBit(oldp+106,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli));
    bufp->fullBit(oldp+108,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb));
    bufp->fullBit(oldp+109,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw));
    bufp->fullBit(oldp+111,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor) 
                                         | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra) 
                                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl) 
                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu) 
                                                     | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll))))))))))));
    bufp->fullBit(oldp+112,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_U));
    bufp->fullIData(oldp+114,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data),32);
    bufp->fullIData(oldp+115,((((- (IData)((1U & (vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data))),32);
    bufp->fullIData(oldp+116,((((- (IData)((1U & (vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data))),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0]),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[1]),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[2]),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[3]),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[4]),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[5]),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[6]),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[7]),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[8]),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[9]),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[10]),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[11]),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[12]),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[13]),32);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[14]),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[15]),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[16]),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[17]),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[18]),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[19]),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[20]),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[21]),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[22]),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[23]),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[24]),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[25]),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[26]),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[27]),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[28]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[29]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[30]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[31]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout),32);
    bufp->fullBit(oldp+181,(vlSelf->clk));
    bufp->fullBit(oldp+182,(vlSelf->rst));
    bufp->fullIData(oldp+183,(vlSelf->inst),32);
    bufp->fullIData(oldp+184,(vlSelf->pc),32);
    bufp->fullIData(oldp+185,(vlSelf->regs[0]),32);
    bufp->fullIData(oldp+186,(vlSelf->regs[1]),32);
    bufp->fullIData(oldp+187,(vlSelf->regs[2]),32);
    bufp->fullIData(oldp+188,(vlSelf->regs[3]),32);
    bufp->fullIData(oldp+189,(vlSelf->regs[4]),32);
    bufp->fullIData(oldp+190,(vlSelf->regs[5]),32);
    bufp->fullIData(oldp+191,(vlSelf->regs[6]),32);
    bufp->fullIData(oldp+192,(vlSelf->regs[7]),32);
    bufp->fullIData(oldp+193,(vlSelf->regs[8]),32);
    bufp->fullIData(oldp+194,(vlSelf->regs[9]),32);
    bufp->fullIData(oldp+195,(vlSelf->regs[10]),32);
    bufp->fullIData(oldp+196,(vlSelf->regs[11]),32);
    bufp->fullIData(oldp+197,(vlSelf->regs[12]),32);
    bufp->fullIData(oldp+198,(vlSelf->regs[13]),32);
    bufp->fullIData(oldp+199,(vlSelf->regs[14]),32);
    bufp->fullIData(oldp+200,(vlSelf->regs[15]),32);
    bufp->fullIData(oldp+201,(vlSelf->regs[16]),32);
    bufp->fullIData(oldp+202,(vlSelf->regs[17]),32);
    bufp->fullIData(oldp+203,(vlSelf->regs[18]),32);
    bufp->fullIData(oldp+204,(vlSelf->regs[19]),32);
    bufp->fullIData(oldp+205,(vlSelf->regs[20]),32);
    bufp->fullIData(oldp+206,(vlSelf->regs[21]),32);
    bufp->fullIData(oldp+207,(vlSelf->regs[22]),32);
    bufp->fullIData(oldp+208,(vlSelf->regs[23]),32);
    bufp->fullIData(oldp+209,(vlSelf->regs[24]),32);
    bufp->fullIData(oldp+210,(vlSelf->regs[25]),32);
    bufp->fullIData(oldp+211,(vlSelf->regs[26]),32);
    bufp->fullIData(oldp+212,(vlSelf->regs[27]),32);
    bufp->fullIData(oldp+213,(vlSelf->regs[28]),32);
    bufp->fullIData(oldp+214,(vlSelf->regs[29]),32);
    bufp->fullIData(oldp+215,(vlSelf->regs[30]),32);
    bufp->fullIData(oldp+216,(vlSelf->regs[31]),32);
    bufp->fullIData(oldp+217,(vlSelf->mtvec),32);
    bufp->fullIData(oldp+218,(vlSelf->mepc),32);
    bufp->fullIData(oldp+219,(vlSelf->mstatus),32);
    bufp->fullIData(oldp+220,(vlSelf->mcause),32);
    bufp->fullBit(oldp+221,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullCData(oldp+222,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+223,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+224,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+225,((((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bltu) 
                                << 0x10U) | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_blt) 
                                              << 0xfU) 
                                             | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bgeu) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bge) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_beq) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bne) 
                                                          << 0xbU) 
                                                         | (((0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->inst)) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                                                << 9U) 
                                                               | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli) 
                                                                    | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl)) 
                                                                   << 8U) 
                                                                  | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli) 
                                                                       | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll)) 
                                                                      << 7U) 
                                                                     | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor) 
                                                                          | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori)) 
                                                                         << 6U) 
                                                                        | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or) 
                                                                             | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori)) 
                                                                            << 5U) 
                                                                           | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and) 
                                                                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi)) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                | ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__half_sext) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                                                                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__bit_sext)))))))))))))))))))))))))))))),17);
    bufp->fullBit(oldp+226,((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
                              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and) 
                                 | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                    | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or) 
                                       | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor) 
                                          | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra) 
                                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl) 
                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu) 
                                                      | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll)))))))))) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelf->inst)) 
                                   | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_U))))));
    bufp->fullBit(oldp+227,(((~ (IData)(vlSelf->rst)) 
                             & (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
                                 | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and) 
                                    | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                       | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or) 
                                          | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor) 
                                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra) 
                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl) 
                                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu) 
                                                         | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll)))))))))) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I) 
                                   | ((0x6fU == (0x7fU 
                                                 & vlSelf->inst)) 
                                      | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_U)))))));
    bufp->fullBit(oldp+228,(((0x6fU == (0x7fU & vlSelf->inst)) 
                             | ((0x17U == (0x7fU & vlSelf->inst)) 
                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__double_cal)))));
    bufp->fullBit(oldp+229,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                      | ((0x37U == 
                                          (0x7fU & vlSelf->inst)) 
                                         | ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->inst)) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__double_cal) 
                                                  | (IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr)))))))))));
    bufp->fullBit(oldp+230,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
                             & (IData)((0x100000U == 
                                        (0xfff00000U 
                                         & vlSelf->inst))))));
    bufp->fullBit(oldp+231,((1U & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__double_cal) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I) 
                                         | ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->inst)) 
                                            | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
                                                 & (IData)(
                                                           (0x100000U 
                                                            == 
                                                            (0xfff00000U 
                                                             & vlSelf->inst)))) 
                                                | (IData)(
                                                          ((0U 
                                                            == 
                                                            (0xfffffU 
                                                             & vlSelf->inst)) 
                                                           & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))) 
                                               | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
                                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and) 
                                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                                         | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or) 
                                                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor) 
                                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra) 
                                                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl) 
                                                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                                                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu) 
                                                                           | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll)))))))))) 
                                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we) 
                                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_U) 
                                                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_W) 
                                                           | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0)))))))))))));
    bufp->fullIData(oldp+232,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en)
                                ? vlSelf->mtvec : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__mret_en)
                                                    ? vlSelf->mepc
                                                    : 
                                                   ((IData)(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump)
                                                     ? 
                                                    ((1U 
                                                      == 
                                                      ((IData)(vlSelf->ysyx_25020037_cpu__DOT__double_cal)
                                                        ? 
                                                       (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_beq))) 
                                                         & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)) 
                                                        | (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_blt))) 
                                                            & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)) 
                                                           | ((1U 
                                                               & ((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bltu))) 
                                                                  & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))) 
                                                              | ((1U 
                                                                  & ((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bge))) 
                                                                     & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))) 
                                                                 | (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bgeu))) 
                                                                     & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)) 
                                                                    | (1U 
                                                                       & ((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bne))) 
                                                                          & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))))))))
                                                        : 1U))
                                                      ? vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_result1
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelf->pc))
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->pc))))),32);
    bufp->fullBit(oldp+233,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullIData(oldp+234,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullBit(oldp+235,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi) 
                                | ((0x17U == (0x7fU 
                                              & vlSelf->inst)) 
                                   | ((0x6fU == (0x7fU 
                                                 & vlSelf->inst)) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                         | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr) 
                                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw) 
                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu) 
                                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__half_sext) 
                                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu) 
                                                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                                                           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                                                              | (IData)(vlSelf->ysyx_25020037_cpu__DOT__bit_sext)))))))))))))));
    bufp->fullBit(oldp+236,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+237,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en)
                                ? vlSelf->pc : vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data)),32);
    bufp->fullIData(oldp+238,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en)
                                ? 0x1800U : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__mret_en)
                                              ? (0xffffe7ffU 
                                                 & (0x80U 
                                                    | ((0xfffffff7U 
                                                        & vlSelf->mstatus) 
                                                       | (8U 
                                                          & (vlSelf->mstatus 
                                                             >> 4U)))))
                                              : vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data))),32);
    bufp->fullBit(oldp+239,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+240,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x500U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+241,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x580U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+242,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x600U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+243,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x680U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+244,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x700U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+245,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x780U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+246,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x800U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+247,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x880U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+248,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x900U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+249,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x980U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+250,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+251,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0xa00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+252,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0xa80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+253,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0xb00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+254,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0xb80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+255,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0xc00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+256,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0xc80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+257,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0xd00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+258,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0xd80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+259,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0xe00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+260,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0xe80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+261,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x100U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+262,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0xf00U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+263,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0xf80U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+264,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x180U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+265,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x200U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+266,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x280U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+267,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x300U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+268,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x380U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+269,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x400U == (0xf80U & vlSelf->inst)))));
    bufp->fullBit(oldp+270,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                             & (0x480U == (0xf80U & vlSelf->inst)))));
    bufp->fullCData(oldp+271,((vlSelf->inst >> 0x19U)),7);
    bufp->fullCData(oldp+272,((vlSelf->inst >> 0x1aU)),6);
    bufp->fullCData(oldp+273,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+274,((0x7fU & vlSelf->inst)),7);
    bufp->fullIData(oldp+275,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+276,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+277,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+278,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+279,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->inst) 
                                             | ((0x800U 
                                                 & (vlSelf->inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)))))),32);
    bufp->fullCData(oldp+280,((((7U == (7U & (vlSelf->inst 
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
    bufp->fullBit(oldp+281,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+282,((IData)(((0U == (0xfffffU 
                                             & vlSelf->inst)) 
                                     & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))));
    bufp->fullBit(oldp+283,((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
                              & (IData)((0x100000U 
                                         == (0xfff00000U 
                                             & vlSelf->inst)))) 
                             | (IData)(((0U == (0xfffffU 
                                                & vlSelf->inst)) 
                                        & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0))))));
    bufp->fullBit(oldp+284,(0U));
    bufp->fullIData(oldp+285,(0x300U),32);
    bufp->fullIData(oldp+286,(0x305U),32);
    bufp->fullIData(oldp+287,(0x341U),32);
    bufp->fullIData(oldp+288,(0x342U),32);
    bufp->fullIData(oldp+289,(vlSelf->ysyx_25020037_cpu__DOT__csr_mtvec_data),32);
    bufp->fullIData(oldp+290,(vlSelf->ysyx_25020037_cpu__DOT__csr_mepc_data),32);
    bufp->fullIData(oldp+291,(vlSelf->ysyx_25020037_cpu__DOT__csr_mstatus_data),32);
    bufp->fullIData(oldp+292,(vlSelf->ysyx_25020037_cpu__DOT__csr_mcause_data),32);
    bufp->fullIData(oldp+293,(0x20U),32);
    bufp->fullIData(oldp+294,(0x80000000U),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__aupic_result),32);
    bufp->fullIData(oldp+296,(0U),32);
    bufp->fullIData(oldp+297,(0x1800U),32);
    bufp->fullBit(oldp+298,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_W));
}
