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
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+344,"inst", false,-1, 31,0);
    tracep->declBus(c+345,"pc", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+346+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+378,"mtvec", false,-1, 31,0);
    tracep->declBus(c+379,"mepc", false,-1, 31,0);
    tracep->declBus(c+380,"mstatus", false,-1, 31,0);
    tracep->declBus(c+381,"mcause", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25020037_cpu ");
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+344,"inst", false,-1, 31,0);
    tracep->declBus(c+345,"pc", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+346+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+378,"mtvec", false,-1, 31,0);
    tracep->declBus(c+379,"mepc", false,-1, 31,0);
    tracep->declBus(c+380,"mstatus", false,-1, 31,0);
    tracep->declBus(c+381,"mcause", false,-1, 31,0);
    tracep->declBus(c+403,"MSTATUS", false,-1, 31,0);
    tracep->declBus(c+404,"MTVEC", false,-1, 31,0);
    tracep->declBus(c+405,"MEPC", false,-1, 31,0);
    tracep->declBus(c+406,"MCAUSE", false,-1, 31,0);
    tracep->declBus(c+407,"CONFIG_FTRACE", false,-1, 0,0);
    tracep->declBit(c+196,"ftrace_jal", false,-1);
    tracep->declBit(c+197,"ftrace_jalr", false,-1);
    tracep->declQuad(c+96,"eu_to_lu_bus", false,-1, 63,0);
    tracep->declQuad(c+46,"wu_to_gu_bus", false,-1, 32,0);
    tracep->declQuad(c+198,"du_to_gu_bus", false,-1, 52,0);
    tracep->declArray(c+382,"gu_to_eu_bus", false,-1, 127,0);
    tracep->declQuad(c+200,"du_to_eu_bus", false,-1, 58,0);
    tracep->declBus(c+202,"du_to_lu_bus", false,-1, 5,0);
    tracep->declBus(c+203,"du_to_wu_bus", false,-1, 8,0);
    tracep->declBus(c+48,"lu_to_wu_bus", false,-1, 31,0);
    tracep->declBus(c+408,"eu_to_wu_bus", false,-1, 31,0);
    tracep->declBus(c+98,"dnpc", false,-1, 31,0);
    tracep->declBus(c+1,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+2,"ifu_arvalid", false,-1);
    tracep->declBit(c+3,"ifu_arready", false,-1);
    tracep->declBus(c+204,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+4,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+205,"ifu_rvalid", false,-1);
    tracep->declBit(c+5,"ifu_rready", false,-1);
    tracep->declBit(c+206,"idu_valid", false,-1);
    tracep->declBit(c+207,"idu_ready", false,-1);
    tracep->declBit(c+99,"exu_valid", false,-1);
    tracep->declBit(c+386,"exu_ready", false,-1);
    tracep->declBit(c+49,"lsu_valid", false,-1);
    tracep->declBit(c+387,"lsu_ready", false,-1);
    tracep->declBit(c+50,"wbu_ready", false,-1);
    tracep->declBit(c+51,"wbu_valid", false,-1);
    tracep->declBit(c+52,"gpr_valid", false,-1);
    tracep->declBit(c+53,"gpr_ready", false,-1);
    tracep->declBus(c+54,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+55,"lsu_arvalid", false,-1);
    tracep->declBit(c+56,"lsu_arready", false,-1);
    tracep->declBus(c+57,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+58,"lsu_awvalid", false,-1);
    tracep->declBit(c+6,"lsu_awready", false,-1);
    tracep->declBus(c+59,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"lsu_wvalid", false,-1);
    tracep->declBit(c+62,"lsu_wready", false,-1);
    tracep->declBus(c+7,"lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+63,"lsu_bvalid", false,-1);
    tracep->declBit(c+64,"lsu_bready", false,-1);
    tracep->declBus(c+65,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+66,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+67,"lsu_rvalid", false,-1);
    tracep->declBit(c+68,"lsu_rready", false,-1);
    tracep->declBus(c+69,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+70,"sram_arvalid", false,-1);
    tracep->declBit(c+8,"sram_arready", false,-1);
    tracep->declBus(c+71,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+72,"sram_awvalid", false,-1);
    tracep->declBit(c+9,"sram_awready", false,-1);
    tracep->declBus(c+73,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+74,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+75,"sram_wvalid", false,-1);
    tracep->declBit(c+10,"sram_wready", false,-1);
    tracep->declBus(c+11,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+12,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+13,"sram_rvalid", false,-1);
    tracep->declBit(c+76,"sram_rready", false,-1);
    tracep->declBus(c+14,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+15,"sram_bvalid", false,-1);
    tracep->declBit(c+77,"sram_bready", false,-1);
    tracep->declBus(c+336,"csr_wgpr_data", false,-1, 31,0);
    tracep->declBus(c+337,"csr_wcsr_data", false,-1, 31,0);
    tracep->declBit(c+208,"inst_s", false,-1);
    tracep->declBit(c+209,"inst_l", false,-1);
    tracep->declBit(c+210,"gpr_we", false,-1);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+98,"din", false,-1, 31,0);
    tracep->declBus(c+345,"dout", false,-1, 31,0);
    tracep->declBit(c+51,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_cpu ");
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBit(c+209,"inst_l", false,-1);
    tracep->declBit(c+208,"inst_s", false,-1);
    tracep->declBit(c+206,"idu_valid", false,-1);
    tracep->declBit(c+387,"lsu_ready", false,-1);
    tracep->declBit(c+99,"exu_valid", false,-1);
    tracep->declBit(c+386,"exu_ready", false,-1);
    tracep->declBus(c+345,"pc", false,-1, 31,0);
    tracep->declArray(c+382,"gu_to_eu_bus", false,-1, 127,0);
    tracep->declQuad(c+200,"du_to_eu_bus", false,-1, 58,0);
    tracep->declQuad(c+96,"eu_to_lu_bus", false,-1, 63,0);
    tracep->declBus(c+98,"dnpc", false,-1, 31,0);
    tracep->declBus(c+407,"IDLE", false,-1, 0,0);
    tracep->declBus(c+411,"BUSY", false,-1, 0,0);
    tracep->declBit(c+100,"state", false,-1);
    tracep->declBit(c+388,"next_state", false,-1);
    tracep->declBus(c+389,"snpc", false,-1, 31,0);
    tracep->declQuad(c+101,"du_to_eu_bus_r", false,-1, 58,0);
    tracep->declArray(c+103,"gu_to_eu_bus_r", false,-1, 127,0);
    tracep->declBus(c+107,"imm", false,-1, 31,0);
    tracep->declBus(c+108,"alu_op", false,-1, 16,0);
    tracep->declBit(c+109,"src1_is_pc", false,-1);
    tracep->declBit(c+110,"src2_is_imm", false,-1);
    tracep->declBit(c+111,"is_pc_jump", false,-1);
    tracep->declBit(c+112,"double_cal", false,-1);
    tracep->declBit(c+113,"ebreak", false,-1);
    tracep->declBit(c+114,"inst_not_realize", false,-1);
    tracep->declBit(c+115,"ecall_en", false,-1);
    tracep->declBit(c+116,"mret_en", false,-1);
    tracep->declBit(c+117,"csrrs_op", false,-1);
    tracep->declBit(c+118,"csrrw_op", false,-1);
    tracep->declBus(c+119,"src1", false,-1, 31,0);
    tracep->declBus(c+120,"src2", false,-1, 31,0);
    tracep->declBus(c+121,"mtvec", false,-1, 31,0);
    tracep->declBus(c+122,"mepc", false,-1, 31,0);
    tracep->declBus(c+390,"dnpc_r", false,-1, 31,0);
    tracep->declBus(c+391,"result", false,-1, 31,0);
    tracep->declBus(c+339,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+123,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+119,"alu_src3", false,-1, 31,0);
    tracep->declBus(c+120,"alu_src4", false,-1, 31,0);
    tracep->declBus(c+340,"alu_result1", false,-1, 31,0);
    tracep->declBus(c+124,"alu_result2", false,-1, 31,0);
    tracep->pushNamePrefix("alu_cpu ");
    tracep->declBit(c+112,"double_cal", false,-1);
    tracep->declBus(c+108,"alu_op", false,-1, 16,0);
    tracep->declBus(c+339,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+123,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+119,"alu_src3", false,-1, 31,0);
    tracep->declBus(c+120,"alu_src4", false,-1, 31,0);
    tracep->declBus(c+340,"alu_result1", false,-1, 31,0);
    tracep->declBus(c+124,"alu_result2", false,-1, 31,0);
    tracep->declBit(c+125,"op_add", false,-1);
    tracep->declBit(c+126,"op_sub", false,-1);
    tracep->declBit(c+127,"op_slt", false,-1);
    tracep->declBit(c+128,"op_sltu", false,-1);
    tracep->declBit(c+129,"op_and", false,-1);
    tracep->declBit(c+130,"op_or", false,-1);
    tracep->declBit(c+131,"op_xor", false,-1);
    tracep->declBit(c+132,"op_sll", false,-1);
    tracep->declBit(c+133,"op_srl", false,-1);
    tracep->declBit(c+134,"op_sra", false,-1);
    tracep->declBit(c+135,"op_lui", false,-1);
    tracep->declBit(c+136,"op_bne", false,-1);
    tracep->declBit(c+137,"op_beq", false,-1);
    tracep->declBit(c+138,"op_bge", false,-1);
    tracep->declBit(c+139,"op_bgeu", false,-1);
    tracep->declBit(c+140,"op_blt", false,-1);
    tracep->declBit(c+141,"op_bltu", false,-1);
    tracep->declBus(c+341,"add_sub_result", false,-1, 31,0);
    tracep->declBus(c+154,"slt_result", false,-1, 31,0);
    tracep->declBus(c+155,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+156,"and_result", false,-1, 31,0);
    tracep->declBus(c+157,"or_result", false,-1, 31,0);
    tracep->declBus(c+158,"xor_result", false,-1, 31,0);
    tracep->declBus(c+123,"lui_result", false,-1, 31,0);
    tracep->declBus(c+159,"sll_result", false,-1, 31,0);
    tracep->declQuad(c+160,"sr64_result", false,-1, 63,0);
    tracep->declBus(c+162,"sr_result", false,-1, 31,0);
    tracep->declBus(c+412,"aupic_result", false,-1, 31,0);
    tracep->declBus(c+142,"beq_result", false,-1, 31,0);
    tracep->declBus(c+143,"blt_result", false,-1, 31,0);
    tracep->declBus(c+144,"bltu_result", false,-1, 31,0);
    tracep->declBus(c+145,"bge_result", false,-1, 31,0);
    tracep->declBus(c+146,"bgeu_result", false,-1, 31,0);
    tracep->declBus(c+147,"bne_result", false,-1, 31,0);
    tracep->declBus(c+339,"adder_a", false,-1, 31,0);
    tracep->declBus(c+148,"adder_b", false,-1, 31,0);
    tracep->declBus(c+119,"adder_c", false,-1, 31,0);
    tracep->declBus(c+149,"adder_d", false,-1, 31,0);
    tracep->declBit(c+150,"adder_cin", false,-1);
    tracep->declBit(c+151,"adder_cin1", false,-1);
    tracep->declBus(c+341,"adder_result", false,-1, 31,0);
    tracep->declBus(c+152,"adder_result1", false,-1, 31,0);
    tracep->declBit(c+163,"adder_cout", false,-1);
    tracep->declBit(c+153,"adder_cout1", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpr_cpu ");
    tracep->declBit(c+206,"idu_valid", false,-1);
    tracep->declBit(c+51,"wbu_valid", false,-1);
    tracep->declBit(c+210,"gpr_we", false,-1);
    tracep->declBit(c+386,"exu_ready", false,-1);
    tracep->declBit(c+53,"gpr_ready", false,-1);
    tracep->declBit(c+52,"gpr_valid", false,-1);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+337,"csr_wcsr_data", false,-1, 31,0);
    tracep->declQuad(c+46,"wu_to_gu_bus", false,-1, 32,0);
    tracep->declQuad(c+198,"du_to_gu_bus", false,-1, 52,0);
    tracep->declArray(c+382,"gu_to_eu_bus", false,-1, 127,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+164+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+378,"mtvec", false,-1, 31,0);
    tracep->declBus(c+379,"mepc", false,-1, 31,0);
    tracep->declBus(c+380,"mstatus", false,-1, 31,0);
    tracep->declBus(c+381,"mcause", false,-1, 31,0);
    tracep->declBus(c+407,"IDLE", false,-1, 0,0);
    tracep->declBus(c+411,"BUSY", false,-1, 0,0);
    tracep->declBit(c+78,"state", false,-1);
    tracep->declBit(c+392,"next_state", false,-1);
    tracep->declQuad(c+79,"wu_to_gu_bus_r", false,-1, 32,0);
    tracep->declBus(c+81,"gpr_wdata", false,-1, 31,0);
    tracep->declBit(c+82,"gpr_wen", false,-1);
    tracep->declBus(c+211,"pc", false,-1, 31,0);
    tracep->declBus(c+212,"rd", false,-1, 4,0);
    tracep->declBus(c+213,"rs1", false,-1, 4,0);
    tracep->declBus(c+214,"rs2", false,-1, 4,0);
    tracep->declBit(c+215,"csrs_mtvec_wen", false,-1);
    tracep->declBit(c+216,"csrs_mepc_wen", false,-1);
    tracep->declBit(c+217,"csrs_mstatus_wen", false,-1);
    tracep->declBit(c+218,"csrs_mcause_wen", false,-1);
    tracep->declBit(c+219,"ecall_en", false,-1);
    tracep->declBit(c+220,"mret_en", false,-1);
    tracep->declBus(c+338,"src1", false,-1, 31,0);
    tracep->declBus(c+393,"src2", false,-1, 31,0);
    tracep->declBit(c+221,"mepc_wen", false,-1);
    tracep->declBit(c+222,"mcause_wen", false,-1);
    tracep->declBit(c+223,"mstatus_wen", false,-1);
    tracep->declBus(c+394,"mepc_data", false,-1, 31,0);
    tracep->declBus(c+395,"mcause_data", false,-1, 31,0);
    tracep->declBus(c+396,"mstatus_data", false,-1, 31,0);
    tracep->pushNamePrefix("CSRS_cause ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+395,"din", false,-1, 31,0);
    tracep->declBus(c+381,"dout", false,-1, 31,0);
    tracep->declBit(c+224,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_mepc ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+394,"din", false,-1, 31,0);
    tracep->declBus(c+379,"dout", false,-1, 31,0);
    tracep->declBit(c+225,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_mstatus ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+414,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+396,"din", false,-1, 31,0);
    tracep->declBus(c+380,"dout", false,-1, 31,0);
    tracep->declBit(c+226,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_mtvec ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+337,"din", false,-1, 31,0);
    tracep->declBus(c+378,"dout", false,-1, 31,0);
    tracep->declBit(c+227,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR32[0] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+30,"dout", false,-1, 31,0);
    tracep->declBit(c+228,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[10] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+31,"dout", false,-1, 31,0);
    tracep->declBit(c+229,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[11] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+32,"dout", false,-1, 31,0);
    tracep->declBit(c+230,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[12] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+33,"dout", false,-1, 31,0);
    tracep->declBit(c+231,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[13] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+34,"dout", false,-1, 31,0);
    tracep->declBit(c+232,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[14] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+35,"dout", false,-1, 31,0);
    tracep->declBit(c+233,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[15] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+36,"dout", false,-1, 31,0);
    tracep->declBit(c+234,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[1] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+37,"dout", false,-1, 31,0);
    tracep->declBit(c+235,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[2] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+38,"dout", false,-1, 31,0);
    tracep->declBit(c+236,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[3] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+39,"dout", false,-1, 31,0);
    tracep->declBit(c+237,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[4] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+40,"dout", false,-1, 31,0);
    tracep->declBit(c+238,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[5] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+41,"dout", false,-1, 31,0);
    tracep->declBit(c+239,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[6] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+42,"dout", false,-1, 31,0);
    tracep->declBit(c+240,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[7] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+43,"dout", false,-1, 31,0);
    tracep->declBit(c+241,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[8] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+44,"dout", false,-1, 31,0);
    tracep->declBit(c+242,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[9] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+45,"dout", false,-1, 31,0);
    tracep->declBit(c+243,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu_cpu ");
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+345,"pc", false,-1, 31,0);
    tracep->declBus(c+204,"inst", false,-1, 31,0);
    tracep->declBit(c+205,"ifu_rvalid", false,-1);
    tracep->declBit(c+386,"exu_ready", false,-1);
    tracep->declBit(c+206,"idu_valid", false,-1);
    tracep->declBit(c+207,"idu_ready", false,-1);
    tracep->declBit(c+209,"inst_l", false,-1);
    tracep->declBit(c+208,"inst_s", false,-1);
    tracep->declBit(c+210,"gpr_we", false,-1);
    tracep->declQuad(c+200,"du_to_eu_bus", false,-1, 58,0);
    tracep->declQuad(c+198,"du_to_gu_bus", false,-1, 52,0);
    tracep->declBus(c+202,"du_to_lu_bus", false,-1, 5,0);
    tracep->declBus(c+203,"du_to_wu_bus", false,-1, 8,0);
    tracep->declBit(c+197,"ftrace_jalr", false,-1);
    tracep->declBit(c+196,"ftrace_jal", false,-1);
    tracep->declBus(c+403,"MSTATUS", false,-1, 31,0);
    tracep->declBus(c+404,"MTVEC", false,-1, 31,0);
    tracep->declBus(c+405,"MEPC", false,-1, 31,0);
    tracep->declBus(c+406,"MCAUSE", false,-1, 31,0);
    tracep->declBus(c+407,"IDLE", false,-1, 0,0);
    tracep->declBus(c+411,"BUSY", false,-1, 0,0);
    tracep->declBit(c+244,"state", false,-1);
    tracep->declBit(c+397,"next_state", false,-1);
    tracep->declBus(c+245,"inst_r", false,-1, 31,0);
    tracep->declBus(c+246,"rs1", false,-1, 4,0);
    tracep->declBus(c+247,"rs2", false,-1, 4,0);
    tracep->declBus(c+248,"rd", false,-1, 4,0);
    tracep->declBus(c+249,"imm", false,-1, 31,0);
    tracep->declBus(c+250,"alu_op", false,-1, 16,0);
    tracep->declBit(c+251,"gpr_we_r", false,-1);
    tracep->declBit(c+252,"rlsu_we", false,-1);
    tracep->declBit(c+253,"wlsu_we", false,-1);
    tracep->declBit(c+254,"bit_sext", false,-1);
    tracep->declBit(c+255,"half_sext", false,-1);
    tracep->declBus(c+256,"rstrb", false,-1, 3,0);
    tracep->declBus(c+256,"wstrb", false,-1, 3,0);
    tracep->declBit(c+257,"src1_is_pc", false,-1);
    tracep->declBit(c+258,"src2_is_imm", false,-1);
    tracep->declBit(c+259,"is_pc_jump", false,-1);
    tracep->declBit(c+260,"double_cal", false,-1);
    tracep->declBit(c+261,"ebreak", false,-1);
    tracep->declBit(c+262,"inst_not_realize", false,-1);
    tracep->declBit(c+263,"csr_w_gpr_we", false,-1);
    tracep->declBit(c+264,"csrrw_op", false,-1);
    tracep->declBit(c+265,"csrrs_op", false,-1);
    tracep->declBit(c+266,"ecall_en", false,-1);
    tracep->declBit(c+267,"mret_en", false,-1);
    tracep->declBit(c+268,"is_csr_op", false,-1);
    tracep->declBit(c+269,"csrs_mtvec_wen", false,-1);
    tracep->declBit(c+270,"csrs_mepc_wen", false,-1);
    tracep->declBit(c+271,"csrs_mstatus_wen", false,-1);
    tracep->declBit(c+272,"csrs_mcause_wen", false,-1);
    tracep->declBus(c+273,"opcode_31_25", false,-1, 6,0);
    tracep->declBus(c+274,"opcode_31_26", false,-1, 5,0);
    tracep->declBus(c+275,"opcode_14_12", false,-1, 2,0);
    tracep->declBus(c+276,"opcode_06_00", false,-1, 6,0);
    tracep->declBus(c+277,"immI", false,-1, 31,0);
    tracep->declBus(c+278,"immS", false,-1, 31,0);
    tracep->declBus(c+279,"immB", false,-1, 31,0);
    tracep->declBus(c+280,"immU", false,-1, 31,0);
    tracep->declBus(c+281,"immJ", false,-1, 31,0);
    tracep->declArray(c+282,"opcode_31_25_d", false,-1, 127,0);
    tracep->declQuad(c+286,"opcode_31_26_d", false,-1, 63,0);
    tracep->declBus(c+288,"opcode_14_12_d", false,-1, 7,0);
    tracep->declArray(c+289,"opcode_06_00_d", false,-1, 127,0);
    tracep->declBus(c+293,"rs1_d", false,-1, 31,0);
    tracep->declBus(c+294,"rs2_d", false,-1, 31,0);
    tracep->declBus(c+295,"rd_d", false,-1, 31,0);
    tracep->declBit(c+296,"rw_word_1", false,-1);
    tracep->declBit(c+297,"rw_word_2", false,-1);
    tracep->declBit(c+298,"rw_word_4", false,-1);
    tracep->declBit(c+299,"inst_add", false,-1);
    tracep->declBit(c+300,"inst_and", false,-1);
    tracep->declBit(c+301,"inst_or", false,-1);
    tracep->declBit(c+302,"inst_ori", false,-1);
    tracep->declBit(c+303,"inst_xor", false,-1);
    tracep->declBit(c+304,"inst_xori", false,-1);
    tracep->declBit(c+305,"inst_sub", false,-1);
    tracep->declBit(c+306,"inst_slt", false,-1);
    tracep->declBit(c+307,"inst_sltu", false,-1);
    tracep->declBit(c+308,"inst_addi", false,-1);
    tracep->declBit(c+309,"inst_andi", false,-1);
    tracep->declBit(c+197,"inst_jarl", false,-1);
    tracep->declBit(c+254,"inst_lb", false,-1);
    tracep->declBit(c+310,"inst_lbu", false,-1);
    tracep->declBit(c+255,"inst_lh", false,-1);
    tracep->declBit(c+311,"inst_lhu", false,-1);
    tracep->declBit(c+312,"inst_lw", false,-1);
    tracep->declBit(c+313,"inst_sll", false,-1);
    tracep->declBit(c+314,"inst_slli", false,-1);
    tracep->declBit(c+315,"inst_sltiu", false,-1);
    tracep->declBit(c+316,"inst_sra", false,-1);
    tracep->declBit(c+317,"inst_srai", false,-1);
    tracep->declBit(c+318,"inst_srl", false,-1);
    tracep->declBit(c+319,"inst_srli", false,-1);
    tracep->declBit(c+264,"inst_csrrw", false,-1);
    tracep->declBit(c+265,"inst_csrrs", false,-1);
    tracep->declBit(c+266,"inst_ecall", false,-1);
    tracep->declBit(c+267,"inst_mret", false,-1);
    tracep->declBit(c+320,"inst_sb", false,-1);
    tracep->declBit(c+321,"inst_sh", false,-1);
    tracep->declBit(c+322,"inst_sw", false,-1);
    tracep->declBit(c+323,"inst_beq", false,-1);
    tracep->declBit(c+324,"inst_bne", false,-1);
    tracep->declBit(c+325,"inst_bge", false,-1);
    tracep->declBit(c+326,"inst_bgeu", false,-1);
    tracep->declBit(c+327,"inst_blt", false,-1);
    tracep->declBit(c+328,"inst_bltu", false,-1);
    tracep->declBit(c+329,"inst_auipc", false,-1);
    tracep->declBit(c+330,"inst_lui", false,-1);
    tracep->declBit(c+196,"inst_jal", false,-1);
    tracep->declBit(c+261,"inst_ebreak", false,-1);
    tracep->declBit(c+331,"inst_waiting", false,-1);
    tracep->declBit(c+332,"TYPE_R", false,-1);
    tracep->declBit(c+333,"TYPE_I", false,-1);
    tracep->declBit(c+253,"TYPE_S", false,-1);
    tracep->declBit(c+260,"TYPE_B", false,-1);
    tracep->declBit(c+334,"TYPE_U", false,-1);
    tracep->declBit(c+196,"TYPE_J", false,-1);
    tracep->declBit(c+335,"TYPE_N", false,-1);
    tracep->declBit(c+415,"TYPE_W", false,-1);
    tracep->pushNamePrefix("u_dec0 ");
    tracep->declBus(c+273,"in", false,-1, 6,0);
    tracep->declArray(c+282,"out", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec1 ");
    tracep->declBus(c+274,"in", false,-1, 5,0);
    tracep->declQuad(c+286,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec2 ");
    tracep->declBus(c+275,"in", false,-1, 2,0);
    tracep->declBus(c+288,"out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec3 ");
    tracep->declBus(c+276,"in", false,-1, 6,0);
    tracep->declArray(c+289,"out", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec4 ");
    tracep->declBus(c+246,"in", false,-1, 4,0);
    tracep->declBus(c+293,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec5 ");
    tracep->declBus(c+247,"in", false,-1, 4,0);
    tracep->declBus(c+294,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec6 ");
    tracep->declBus(c+248,"in", false,-1, 4,0);
    tracep->declBus(c+295,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_cpu ");
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+345,"pc", false,-1, 31,0);
    tracep->declBit(c+207,"idu_ready", false,-1);
    tracep->declBus(c+344,"inst", false,-1, 31,0);
    tracep->declBus(c+1,"araddr", false,-1, 31,0);
    tracep->declBit(c+2,"arvalid", false,-1);
    tracep->declBit(c+3,"arready", false,-1);
    tracep->declBus(c+204,"rdata", false,-1, 31,0);
    tracep->declBus(c+4,"rresp", false,-1, 1,0);
    tracep->declBit(c+205,"rvalid", false,-1);
    tracep->declBit(c+5,"rready", false,-1);
    tracep->declBus(c+407,"IDLE", false,-1, 0,0);
    tracep->declBus(c+411,"BUSY", false,-1, 0,0);
    tracep->declBit(c+16,"state", false,-1);
    tracep->declBit(c+398,"next_state", false,-1);
    tracep->declBus(c+17,"last_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_cpu ");
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBit(c+99,"exu_valid", false,-1);
    tracep->declBit(c+50,"wbu_ready", false,-1);
    tracep->declBit(c+387,"lsu_ready", false,-1);
    tracep->declBit(c+49,"lsu_valid", false,-1);
    tracep->declQuad(c+96,"eu_to_lu_bus", false,-1, 63,0);
    tracep->declBus(c+202,"du_to_lu_bus", false,-1, 5,0);
    tracep->declBus(c+48,"lu_to_wu_bus", false,-1, 31,0);
    tracep->declBus(c+54,"araddr", false,-1, 31,0);
    tracep->declBit(c+55,"arvalid", false,-1);
    tracep->declBit(c+56,"arready", false,-1);
    tracep->declBus(c+57,"awaddr", false,-1, 31,0);
    tracep->declBit(c+58,"awvalid", false,-1);
    tracep->declBit(c+6,"awready", false,-1);
    tracep->declBus(c+59,"wdata", false,-1, 31,0);
    tracep->declBus(c+60,"wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"wvalid", false,-1);
    tracep->declBit(c+62,"wready", false,-1);
    tracep->declBus(c+7,"bresp", false,-1, 1,0);
    tracep->declBit(c+63,"bvalid", false,-1);
    tracep->declBit(c+64,"bready", false,-1);
    tracep->declBus(c+65,"rdata", false,-1, 31,0);
    tracep->declBus(c+66,"rresp", false,-1, 1,0);
    tracep->declBit(c+67,"rvalid", false,-1);
    tracep->declBit(c+68,"rready", false,-1);
    tracep->declBus(c+407,"IDLE", false,-1, 0,0);
    tracep->declBus(c+411,"BUSY", false,-1, 0,0);
    tracep->declBit(c+83,"state", false,-1);
    tracep->declBit(c+399,"next_state", false,-1);
    tracep->declQuad(c+416,"eu_to_lu_bus_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axi_arbiter ");
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+1,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+2,"ifu_arvalid", false,-1);
    tracep->declBit(c+3,"ifu_arready", false,-1);
    tracep->declBus(c+204,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+4,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+205,"ifu_rvalid", false,-1);
    tracep->declBit(c+5,"ifu_rready", false,-1);
    tracep->declBus(c+54,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+55,"lsu_arvalid", false,-1);
    tracep->declBit(c+56,"lsu_arready", false,-1);
    tracep->declBus(c+57,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+58,"lsu_awvalid", false,-1);
    tracep->declBit(c+6,"lsu_awready", false,-1);
    tracep->declBus(c+59,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+60,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+61,"lsu_wvalid", false,-1);
    tracep->declBit(c+62,"lsu_wready", false,-1);
    tracep->declBus(c+7,"lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+63,"lsu_bvalid", false,-1);
    tracep->declBit(c+64,"lsu_bready", false,-1);
    tracep->declBus(c+65,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+66,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+67,"lsu_rvalid", false,-1);
    tracep->declBit(c+68,"lsu_rready", false,-1);
    tracep->declBus(c+69,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+70,"sram_arvalid", false,-1);
    tracep->declBit(c+8,"sram_arready", false,-1);
    tracep->declBus(c+71,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+72,"sram_awvalid", false,-1);
    tracep->declBit(c+9,"sram_awready", false,-1);
    tracep->declBus(c+73,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+74,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+75,"sram_wvalid", false,-1);
    tracep->declBit(c+10,"sram_wready", false,-1);
    tracep->declBus(c+11,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+12,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+13,"sram_rvalid", false,-1);
    tracep->declBit(c+76,"sram_rready", false,-1);
    tracep->declBus(c+14,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+15,"sram_bvalid", false,-1);
    tracep->declBit(c+77,"sram_bready", false,-1);
    tracep->declBus(c+418,"IDLE", false,-1, 1,0);
    tracep->declBus(c+419,"IFU_ACCESS", false,-1, 1,0);
    tracep->declBus(c+420,"LSU_ACCESS", false,-1, 1,0);
    tracep->declBus(c+18,"current_master", false,-1, 1,0);
    tracep->declBus(c+84,"next_master", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_sram ");
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+69,"araddr", false,-1, 31,0);
    tracep->declBit(c+70,"arvalid", false,-1);
    tracep->declBit(c+8,"arready", false,-1);
    tracep->declBus(c+11,"rdata", false,-1, 31,0);
    tracep->declBus(c+12,"rresp", false,-1, 1,0);
    tracep->declBit(c+13,"rvalid", false,-1);
    tracep->declBit(c+76,"rready", false,-1);
    tracep->declBus(c+71,"awaddr", false,-1, 31,0);
    tracep->declBit(c+72,"awvalid", false,-1);
    tracep->declBit(c+9,"awready", false,-1);
    tracep->declBus(c+73,"wdata", false,-1, 31,0);
    tracep->declBus(c+74,"wstrb", false,-1, 3,0);
    tracep->declBit(c+75,"wvalid", false,-1);
    tracep->declBit(c+10,"wready", false,-1);
    tracep->declBus(c+14,"bresp", false,-1, 1,0);
    tracep->declBit(c+15,"bvalid", false,-1);
    tracep->declBit(c+77,"bready", false,-1);
    tracep->declBus(c+407,"IDLE", false,-1, 0,0);
    tracep->declBus(c+411,"BUSY", false,-1, 0,0);
    tracep->declBit(c+19,"state", false,-1);
    tracep->declBit(c+400,"next_state", false,-1);
    tracep->declBus(c+20,"read_addr", false,-1, 31,0);
    tracep->declBus(c+21,"write_addr", false,-1, 31,0);
    tracep->declBus(c+22,"write_data", false,-1, 31,0);
    tracep->declBus(c+23,"write_strb", false,-1, 3,0);
    tracep->declBit(c+24,"is_read_req", false,-1);
    tracep->declBit(c+25,"is_write_req", false,-1);
    tracep->declBus(c+26,"lfsr", false,-1, 7,0);
    tracep->declBus(c+27,"delay_count", false,-1, 7,0);
    tracep->declBus(c+28,"target_delay", false,-1, 7,0);
    tracep->declBit(c+29,"lfsr_tap", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_cpu ");
    tracep->declBit(c+49,"lsu_valid", false,-1);
    tracep->declBit(c+209,"inst_l", false,-1);
    tracep->declBit(c+208,"inst_s", false,-1);
    tracep->declBit(c+53,"gpr_ready", false,-1);
    tracep->declBit(c+51,"wbu_valid", false,-1);
    tracep->declBit(c+50,"wbu_ready", false,-1);
    tracep->declBit(c+342,"clk", false,-1);
    tracep->declBit(c+343,"rst", false,-1);
    tracep->declBus(c+203,"du_to_wu_bus", false,-1, 8,0);
    tracep->declBus(c+408,"eu_to_wu_bus", false,-1, 31,0);
    tracep->declBus(c+48,"lu_to_wu_bus", false,-1, 31,0);
    tracep->declBus(c+336,"csr_wgpr_data", false,-1, 31,0);
    tracep->declQuad(c+46,"wu_to_gu_bus", false,-1, 32,0);
    tracep->declBus(c+407,"IDLE", false,-1, 0,0);
    tracep->declBus(c+411,"BUSY", false,-1, 0,0);
    tracep->declBit(c+85,"state", false,-1);
    tracep->declBit(c+86,"next_state", false,-1);
    tracep->declBus(c+87,"du_to_wu_bus_r", false,-1, 8,0);
    tracep->declBus(c+88,"lu_to_wu_bus_r", false,-1, 31,0);
    tracep->declBus(c+89,"rstrb", false,-1, 3,0);
    tracep->declBit(c+90,"bit_sext", false,-1);
    tracep->declBit(c+91,"half_sext", false,-1);
    tracep->declBit(c+92,"gpr_we", false,-1);
    tracep->declBit(c+93,"rlsu_we", false,-1);
    tracep->declBit(c+94,"csr_w_gpr_we", false,-1);
    tracep->declBus(c+88,"result", false,-1, 31,0);
    tracep->declBus(c+95,"rdata_processed", false,-1, 31,0);
    tracep->declBit(c+401,"final_gpr_we", false,-1);
    tracep->declBus(c+402,"final_result", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp_h9979b62c__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25020037_cpu__DOT__ifu_araddr),32);
    bufp->fullBit(oldp+2,(vlSelf->ysyx_25020037_cpu__DOT__ifu_arvalid));
    bufp->fullBit(oldp+3,(vlSelf->ysyx_25020037_cpu__DOT__ifu_arready));
    bufp->fullCData(oldp+4,(vlSelf->ysyx_25020037_cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_25020037_cpu__DOT__ifu_rready));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_25020037_cpu__DOT__lsu_awready));
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25020037_cpu__DOT__lsu_bresp),2);
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25020037_cpu__DOT__sram_arready));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_25020037_cpu__DOT__sram_awready));
    bufp->fullBit(oldp+10,(vlSelf->ysyx_25020037_cpu__DOT__sram_wready));
    bufp->fullIData(oldp+11,(vlSelf->ysyx_25020037_cpu__DOT__sram_rdata),32);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_25020037_cpu__DOT__sram_rresp),2);
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25020037_cpu__DOT__sram_rvalid));
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25020037_cpu__DOT__sram_bresp),2);
    bufp->fullBit(oldp+15,(vlSelf->ysyx_25020037_cpu__DOT__sram_bvalid));
    bufp->fullBit(oldp+16,(vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__state));
    bufp->fullIData(oldp+17,(vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__last_pc),32);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master),2);
    bufp->fullBit(oldp+19,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__state));
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__read_addr),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__write_addr),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__write_data),32);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__write_strb),4);
    bufp->fullBit(oldp+24,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__is_read_req));
    bufp->fullBit(oldp+25,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__is_write_req));
    bufp->fullCData(oldp+26,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__lfsr),8);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__delay_count),8);
    bufp->fullCData(oldp+28,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__target_delay),8);
    bufp->fullBit(oldp+29,((1U & VL_REDXOR_8((0xb8U 
                                              & (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__lfsr))))));
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout),32);
    bufp->fullQData(oldp+46,(vlSelf->ysyx_25020037_cpu__DOT__wu_to_gu_bus),33);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25020037_cpu__DOT__lu_to_wu_bus),32);
    bufp->fullBit(oldp+49,(vlSelf->ysyx_25020037_cpu__DOT__lsu_valid));
    bufp->fullBit(oldp+50,(vlSelf->ysyx_25020037_cpu__DOT__wbu_ready));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_25020037_cpu__DOT__wbu_valid));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_25020037_cpu__DOT__gpr_valid));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_25020037_cpu__DOT__gpr_ready));
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25020037_cpu__DOT__lsu_araddr),32);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25020037_cpu__DOT__lsu_arvalid));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25020037_cpu__DOT__lsu_arready));
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25020037_cpu__DOT__lsu_awaddr),32);
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25020037_cpu__DOT__lsu_awvalid));
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25020037_cpu__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+60,(vlSelf->ysyx_25020037_cpu__DOT__lsu_wstrb),4);
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25020037_cpu__DOT__lsu_wvalid));
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25020037_cpu__DOT__lsu_wready));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_25020037_cpu__DOT__lsu_bvalid));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_25020037_cpu__DOT__lsu_bready));
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25020037_cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_25020037_cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25020037_cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_25020037_cpu__DOT__lsu_rready));
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25020037_cpu__DOT__sram_araddr),32);
    bufp->fullBit(oldp+70,(vlSelf->ysyx_25020037_cpu__DOT__sram_arvalid));
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25020037_cpu__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+72,(vlSelf->ysyx_25020037_cpu__DOT__sram_awvalid));
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25020037_cpu__DOT__sram_wdata),32);
    bufp->fullCData(oldp+74,(vlSelf->ysyx_25020037_cpu__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+75,(vlSelf->ysyx_25020037_cpu__DOT__sram_wvalid));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_25020037_cpu__DOT__sram_rready));
    bufp->fullBit(oldp+77,(vlSelf->ysyx_25020037_cpu__DOT__sram_bready));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__state));
    bufp->fullQData(oldp+79,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__wu_to_gu_bus_r),33);
    bufp->fullIData(oldp+81,((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__wu_to_gu_bus_r)),32);
    bufp->fullBit(oldp+82,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__wu_to_gu_bus_r 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+83,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__state));
    bufp->fullCData(oldp+84,(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__next_master),2);
    bufp->fullBit(oldp+85,(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__state));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__state) 
                                & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_valid) 
                                      & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_ready))))
                             : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_valid) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_ready)))));
    bufp->fullSData(oldp+87,(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r),9);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r),32);
    bufp->fullCData(oldp+89,((0xfU & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                      >> 5U))),4);
    bufp->fullBit(oldp+90,((1U & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                  >> 4U))));
    bufp->fullBit(oldp+91,((1U & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                  >> 3U))));
    bufp->fullBit(oldp+92,((1U & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                  >> 2U))));
    bufp->fullBit(oldp+93,((1U & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                  >> 1U))));
    bufp->fullBit(oldp+94,((1U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))));
    bufp->fullIData(oldp+95,(((1U == (0xfU & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                              >> 5U)))
                               ? ((0x10U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                   ? (((- (IData)((1U 
                                                   & (vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                      >> 7U)))) 
                                       << 8U) | (0xffU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                   : (0xffU & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                               : ((2U == (0xfU & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                  >> 5U)))
                                   ? ((8U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                       : (0xffffU & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                   : vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))),32);
    bufp->fullQData(oldp+96,(vlSelf->ysyx_25020037_cpu__DOT__eu_to_lu_bus),64);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_25020037_cpu__DOT__dnpc),32);
    bufp->fullBit(oldp+99,(vlSelf->ysyx_25020037_cpu__DOT__exu_valid));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__state));
    bufp->fullQData(oldp+101,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r),59);
    bufp->fullWData(oldp+103,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r),128);
    bufp->fullIData(oldp+107,((IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                       >> 0x1bU))),32);
    bufp->fullIData(oldp+108,((0x1ffffU & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                   >> 0xaU)))),17);
    bufp->fullBit(oldp+109,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 9U)))));
    bufp->fullBit(oldp+110,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 8U)))));
    bufp->fullBit(oldp+111,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 7U)))));
    bufp->fullBit(oldp+112,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 6U)))));
    bufp->fullBit(oldp+113,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 5U)))));
    bufp->fullBit(oldp+114,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 4U)))));
    bufp->fullBit(oldp+115,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 3U)))));
    bufp->fullBit(oldp+116,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 2U)))));
    bufp->fullBit(oldp+117,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 1U)))));
    bufp->fullBit(oldp+118,((1U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r))));
    bufp->fullIData(oldp+119,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U]),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U]),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U]),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result),32);
    bufp->fullIData(oldp+124,(((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 6U)))
                                ? (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                           >> 0x16U))))) 
                                    & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                              >> 0x19U))))) 
                                       & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)) 
                                      | ((1U & ((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                       >> 0x1aU))))) 
                                                & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))) 
                                         | ((1U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                          >> 0x17U))))) 
                                                   & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                       >> 0x18U))))) 
                                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)) 
                                               | (1U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                            >> 0x15U))))) 
                                                     & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))))))))
                                : 1U)),32);
    bufp->fullBit(oldp+125,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+126,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+127,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+128,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+129,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+130,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+131,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+132,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+133,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+134,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+135,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+136,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+137,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+138,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+139,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+140,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+141,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x1aU)))));
    bufp->fullIData(oldp+142,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0),32);
    bufp->fullIData(oldp+144,((1U & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))),32);
    bufp->fullIData(oldp+145,((1U & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1),32);
    bufp->fullIData(oldp+147,((1U & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d),32);
    bufp->fullBit(oldp+150,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin));
    bufp->fullBit(oldp+151,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1));
    bufp->fullIData(oldp+152,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                               + (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
                                  + (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)))),32);
    bufp->fullBit(oldp+153,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1));
    bufp->fullIData(oldp+154,((1U & (((~ (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
                                          >> 0x1fU)) 
                                      & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                         >> 0x1fU)) 
                                     | ((~ ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                             ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                                            >> 0x1fU)) 
                                        & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
                                           >> 0x1fU))))),32);
    bufp->fullIData(oldp+155,((1U & (~ (IData)((1ULL 
                                                & (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                    + 
                                                    ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                     + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                   >> 0x20U)))))),32);
    bufp->fullIData(oldp+156,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                               & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
    bufp->fullIData(oldp+157,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                               | vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
    bufp->fullIData(oldp+158,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                               ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
    bufp->fullIData(oldp+159,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                               << (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),32);
    bufp->fullQData(oldp+160,(((((QData)((IData)((- (IData)((IData)(
                                                                    ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                      >> 0x13U) 
                                                                     & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                               >> (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),64);
    bufp->fullIData(oldp+162,((IData)(((((QData)((IData)(
                                                         (- (IData)((IData)(
                                                                            ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                              >> 0x13U) 
                                                                             & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                       >> (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)))),32);
    bufp->fullBit(oldp+163,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                    + 
                                                    ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                     + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                   >> 0x20U))))));
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[1]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[2]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[3]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[4]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[5]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[6]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[7]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[8]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[9]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[10]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[11]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[12]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[13]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[14]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[15]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[16]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[17]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[18]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[19]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[20]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[21]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[22]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[23]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[24]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[25]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[26]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[27]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[28]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[29]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[30]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[31]),32);
    bufp->fullBit(oldp+196,((0x6fU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r))));
    bufp->fullBit(oldp+197,(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr));
    bufp->fullQData(oldp+198,(vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus),53);
    bufp->fullQData(oldp+200,(vlSelf->ysyx_25020037_cpu__DOT__du_to_eu_bus),59);
    bufp->fullCData(oldp+202,(vlSelf->ysyx_25020037_cpu__DOT__du_to_lu_bus),6);
    bufp->fullSData(oldp+203,(vlSelf->ysyx_25020037_cpu__DOT__du_to_wu_bus),9);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25020037_cpu__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+205,(vlSelf->ysyx_25020037_cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+206,(vlSelf->ysyx_25020037_cpu__DOT__idu_valid));
    bufp->fullBit(oldp+207,(vlSelf->ysyx_25020037_cpu__DOT__idu_ready));
    bufp->fullBit(oldp+208,(vlSelf->ysyx_25020037_cpu__DOT__inst_s));
    bufp->fullBit(oldp+209,(vlSelf->ysyx_25020037_cpu__DOT__inst_l));
    bufp->fullBit(oldp+210,(vlSelf->ysyx_25020037_cpu__DOT__gpr_we));
    bufp->fullIData(oldp+211,((IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                       >> 0x15U))),32);
    bufp->fullCData(oldp+212,((0x1fU & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                                >> 0x10U)))),5);
    bufp->fullCData(oldp+213,((0x1fU & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                                >> 0xbU)))),5);
    bufp->fullCData(oldp+214,((0x1fU & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                                >> 6U)))),5);
    bufp->fullBit(oldp+215,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                           >> 5U)))));
    bufp->fullBit(oldp+216,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                           >> 4U)))));
    bufp->fullBit(oldp+217,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                           >> 3U)))));
    bufp->fullBit(oldp+218,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                           >> 2U)))));
    bufp->fullBit(oldp+219,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                           >> 1U)))));
    bufp->fullBit(oldp+220,((1U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus))));
    bufp->fullBit(oldp+221,((IData)((0ULL != (0x12ULL 
                                              & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+222,((IData)((0ULL != (6ULL 
                                              & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+223,((IData)((0ULL != (0xbULL 
                                              & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+224,(((IData)((0ULL != (6ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus))) 
                             & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
    bufp->fullBit(oldp+225,(((IData)((0ULL != (0x12ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus))) 
                             & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
    bufp->fullBit(oldp+226,(((IData)((0ULL != (0xbULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus))) 
                             & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
    bufp->fullBit(oldp+227,(((IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                      >> 5U)) & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
    bufp->fullBit(oldp+228,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0ULL == (0x1f0000ULL 
                                         & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+229,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0xa0000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+230,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0xb0000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+231,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0xc0000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+232,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0xd0000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+233,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0xe0000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+234,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0xf0000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+235,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x10000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+236,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x20000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+237,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x30000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+238,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x40000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+239,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x50000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+240,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x60000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+241,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x70000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+242,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x80000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+243,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x90000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+244,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__state));
    bufp->fullIData(oldp+245,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r),32);
    bufp->fullCData(oldp+246,((0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+247,((0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+248,((0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                        >> 7U))),5);
    bufp->fullIData(oldp+249,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__imm),32);
    bufp->fullIData(oldp+250,((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bltu) 
                                << 0x10U) | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_blt) 
                                              << 0xfU) 
                                             | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bgeu) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bge) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_beq) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bne) 
                                                          << 0xbU) 
                                                         | (((0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                             << 0xaU) 
                                                            | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srai) 
                                                                 | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra)) 
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
                                                                              | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu) 
                                                                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltiu)) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slt) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sub) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                | ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__half_sext) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                                                                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__bit_sext)))))))))))))))))))))))))))))),17);
    bufp->fullBit(oldp+251,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_R) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltiu) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srai) 
                                         | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi) 
                                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori) 
                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli) 
                                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli) 
                                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori) 
                                                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrw_op) 
                                                           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrs_op) 
                                                              | ((0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                 | ((0x17U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                    | ((0x37U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                       | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rlsu_we))))))))))))))))));
    bufp->fullBit(oldp+252,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rlsu_we));
    bufp->fullBit(oldp+253,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__wlsu_we));
    bufp->fullBit(oldp+254,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__bit_sext));
    bufp->fullBit(oldp+255,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__half_sext));
    bufp->fullCData(oldp+256,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rstrb),4);
    bufp->fullBit(oldp+257,(((0x6fU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                             | ((0x17U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal)))));
    bufp->fullBit(oldp+258,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                      | ((0x37U == 
                                          (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                         | ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal) 
                                                  | (IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr)))))))))));
    bufp->fullBit(oldp+259,(((0x6fU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal) 
                                   | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0))))));
    bufp->fullBit(oldp+260,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal));
    bufp->fullBit(oldp+261,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__ebreak));
    bufp->fullBit(oldp+262,((1U & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I) 
                                         | ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                            | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__ebreak) 
                                                | (IData)(
                                                          ((0U 
                                                            == 
                                                            (0xfffffU 
                                                             & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                           & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))) 
                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_R) 
                                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__wlsu_we) 
                                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_U) 
                                                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_W) 
                                                           | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0)))))))))))));
    bufp->fullBit(oldp+263,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csr_w_gpr_we));
    bufp->fullBit(oldp+264,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrw_op));
    bufp->fullBit(oldp+265,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrs_op));
    bufp->fullBit(oldp+266,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__ecall_en));
    bufp->fullBit(oldp+267,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__mret_en));
    bufp->fullBit(oldp+268,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_csr_op));
    bufp->fullBit(oldp+269,(((0x305U == vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__imm) 
                             & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+270,(((0x341U == vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__imm) 
                             & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+271,(((0x300U == vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__imm) 
                             & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+272,(((0x342U == vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__imm) 
                             & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullCData(oldp+273,((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+274,((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                               >> 0x1aU)),6);
    bufp->fullCData(oldp+275,((7U & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+276,((0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)),7);
    bufp->fullIData(oldp+277,((((- (IData)((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+278,((((- (IData)((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+279,((((- (IData)((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+280,((0xfffff000U & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)),32);
    bufp->fullIData(oldp+281,((((- (IData)((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                      >> 0x14U)))))),32);
    bufp->fullWData(oldp+282,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d),128);
    bufp->fullQData(oldp+286,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_26_d),64);
    bufp->fullCData(oldp+288,((((7U == (7U & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                              >> 0xcU))) 
                                << 7U) | (((6U == (7U 
                                                   & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                      >> 0xcU))) 
                                           << 6U) | 
                                          (((5U == 
                                             (7U & 
                                              (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                               >> 0xcU))) 
                                            << 5U) 
                                           | (((4U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0xcU))) 
                                               << 4U) 
                                              | (((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0xcU))) 
                                                  << 3U) 
                                                 | (((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0xcU))) 
                                                     << 2U) 
                                                    | (((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0xcU))) 
                                                        << 1U) 
                                                       | (0U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0xcU))))))))))),8);
    bufp->fullWData(oldp+289,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d),128);
    bufp->fullIData(oldp+293,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1_d),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2_d),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd_d),32);
    bufp->fullBit(oldp+296,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__bit_sext)))));
    bufp->fullBit(oldp+297,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__half_sext) 
                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu)))));
    bufp->fullBit(oldp+298,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                             | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw))));
    bufp->fullBit(oldp+299,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add));
    bufp->fullBit(oldp+300,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and));
    bufp->fullBit(oldp+301,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or));
    bufp->fullBit(oldp+302,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori));
    bufp->fullBit(oldp+303,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor));
    bufp->fullBit(oldp+304,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori));
    bufp->fullBit(oldp+305,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sub));
    bufp->fullBit(oldp+306,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slt));
    bufp->fullBit(oldp+307,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu));
    bufp->fullBit(oldp+308,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi));
    bufp->fullBit(oldp+309,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi));
    bufp->fullBit(oldp+310,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu));
    bufp->fullBit(oldp+311,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu));
    bufp->fullBit(oldp+312,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw));
    bufp->fullBit(oldp+313,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll));
    bufp->fullBit(oldp+314,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli));
    bufp->fullBit(oldp+315,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltiu));
    bufp->fullBit(oldp+316,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra));
    bufp->fullBit(oldp+317,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srai));
    bufp->fullBit(oldp+318,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl));
    bufp->fullBit(oldp+319,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli));
    bufp->fullBit(oldp+320,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb));
    bufp->fullBit(oldp+321,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh));
    bufp->fullBit(oldp+322,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw));
    bufp->fullBit(oldp+323,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_beq));
    bufp->fullBit(oldp+324,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bne));
    bufp->fullBit(oldp+325,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bge));
    bufp->fullBit(oldp+326,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bgeu));
    bufp->fullBit(oldp+327,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_blt));
    bufp->fullBit(oldp+328,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bltu));
    bufp->fullBit(oldp+329,((0x17U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r))));
    bufp->fullBit(oldp+330,((0x37U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r))));
    bufp->fullBit(oldp+331,((IData)(((0U == (0xfffffU 
                                             & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                     & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))));
    bufp->fullBit(oldp+332,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_R));
    bufp->fullBit(oldp+333,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I));
    bufp->fullBit(oldp+334,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_U));
    bufp->fullBit(oldp+335,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__ebreak) 
                             | (IData)(((0U == (0xfffffU 
                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                        & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0))))));
    bufp->fullIData(oldp+336,(vlSelf->ysyx_25020037_cpu__DOT__csr_wgpr_data),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyx_25020037_cpu__DOT____VdfgTmp_h53724e58__0),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_result1),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result),32);
    bufp->fullBit(oldp+342,(vlSelf->clk));
    bufp->fullBit(oldp+343,(vlSelf->rst));
    bufp->fullIData(oldp+344,(vlSelf->inst),32);
    bufp->fullIData(oldp+345,(vlSelf->pc),32);
    bufp->fullIData(oldp+346,(vlSelf->regs[0]),32);
    bufp->fullIData(oldp+347,(vlSelf->regs[1]),32);
    bufp->fullIData(oldp+348,(vlSelf->regs[2]),32);
    bufp->fullIData(oldp+349,(vlSelf->regs[3]),32);
    bufp->fullIData(oldp+350,(vlSelf->regs[4]),32);
    bufp->fullIData(oldp+351,(vlSelf->regs[5]),32);
    bufp->fullIData(oldp+352,(vlSelf->regs[6]),32);
    bufp->fullIData(oldp+353,(vlSelf->regs[7]),32);
    bufp->fullIData(oldp+354,(vlSelf->regs[8]),32);
    bufp->fullIData(oldp+355,(vlSelf->regs[9]),32);
    bufp->fullIData(oldp+356,(vlSelf->regs[10]),32);
    bufp->fullIData(oldp+357,(vlSelf->regs[11]),32);
    bufp->fullIData(oldp+358,(vlSelf->regs[12]),32);
    bufp->fullIData(oldp+359,(vlSelf->regs[13]),32);
    bufp->fullIData(oldp+360,(vlSelf->regs[14]),32);
    bufp->fullIData(oldp+361,(vlSelf->regs[15]),32);
    bufp->fullIData(oldp+362,(vlSelf->regs[16]),32);
    bufp->fullIData(oldp+363,(vlSelf->regs[17]),32);
    bufp->fullIData(oldp+364,(vlSelf->regs[18]),32);
    bufp->fullIData(oldp+365,(vlSelf->regs[19]),32);
    bufp->fullIData(oldp+366,(vlSelf->regs[20]),32);
    bufp->fullIData(oldp+367,(vlSelf->regs[21]),32);
    bufp->fullIData(oldp+368,(vlSelf->regs[22]),32);
    bufp->fullIData(oldp+369,(vlSelf->regs[23]),32);
    bufp->fullIData(oldp+370,(vlSelf->regs[24]),32);
    bufp->fullIData(oldp+371,(vlSelf->regs[25]),32);
    bufp->fullIData(oldp+372,(vlSelf->regs[26]),32);
    bufp->fullIData(oldp+373,(vlSelf->regs[27]),32);
    bufp->fullIData(oldp+374,(vlSelf->regs[28]),32);
    bufp->fullIData(oldp+375,(vlSelf->regs[29]),32);
    bufp->fullIData(oldp+376,(vlSelf->regs[30]),32);
    bufp->fullIData(oldp+377,(vlSelf->regs[31]),32);
    bufp->fullIData(oldp+378,(vlSelf->mtvec),32);
    bufp->fullIData(oldp+379,(vlSelf->mepc),32);
    bufp->fullIData(oldp+380,(vlSelf->mstatus),32);
    bufp->fullIData(oldp+381,(vlSelf->mcause),32);
    __Vtemp_h9979b62c__0[0U] = vlSelf->mepc;
    __Vtemp_h9979b62c__0[1U] = vlSelf->mtvec;
    __Vtemp_h9979b62c__0[2U] = (IData)((((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT____VdfgTmp_h53724e58__0)) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
                                                          [
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                                                      >> 6U)))]))));
    __Vtemp_h9979b62c__0[3U] = (IData)(((((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT____VdfgTmp_h53724e58__0)) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
                                                           [
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                                                       >> 6U)))]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+382,(__Vtemp_h9979b62c__0),128);
    bufp->fullBit(oldp+386,(vlSelf->ysyx_25020037_cpu__DOT__exu_ready));
    bufp->fullBit(oldp+387,(vlSelf->ysyx_25020037_cpu__DOT__lsu_ready));
    bufp->fullBit(oldp+388,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__state) 
                                 & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_valid) 
                                       & (IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_ready))))
                              : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_valid) 
                                 & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_ready)))));
    bufp->fullIData(oldp+389,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+390,(((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 3U)))
                                ? vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U]
                                : ((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                  >> 2U)))
                                    ? vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U]
                                    : ((1U & (IData)(
                                                     (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                      >> 7U)))
                                        ? ((1U == (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                               >> 6U)))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                            >> 0x16U))))) 
                                                     & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)) 
                                                    | (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                               >> 0x19U))))) 
                                                        & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)) 
                                                       | ((1U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x1aU))))) 
                                                              & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))) 
                                                          | ((1U 
                                                              & ((- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x17U))))) 
                                                                 & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))) 
                                                             | (((- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x18U))))) 
                                                                 & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)) 
                                                                | (1U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x15U))))) 
                                                                      & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))))))))
                                                    : 1U))
                                            ? vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_result1
                                            : ((IData)(4U) 
                                               + vlSelf->pc))
                                        : ((IData)(4U) 
                                           + vlSelf->pc))))),32);
    bufp->fullIData(oldp+391,(((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 7U)))
                                ? ((IData)(4U) + vlSelf->pc)
                                : vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_result1)),32);
    bufp->fullBit(oldp+392,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__state) 
                                 & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_valid) 
                                       & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_ready))))
                              : (((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_valid) 
                                  | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_valid)) 
                                 & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_ready)))));
    bufp->fullIData(oldp+393,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
                              [(0x1fU & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                                 >> 6U)))]),32);
    bufp->fullIData(oldp+394,(((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                              >> 1U)))
                                ? (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                           >> 0x15U))
                                : vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data)),32);
    bufp->fullIData(oldp+395,(((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                              >> 1U)))
                                ? 0xbU : vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data)),32);
    bufp->fullIData(oldp+396,(((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                              >> 1U)))
                                ? 0x1800U : ((1U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus))
                                              ? (0xffffe7ffU 
                                                 & (0x80U 
                                                    | ((0xfffffff7U 
                                                        & vlSelf->mstatus) 
                                                       | (8U 
                                                          & (vlSelf->mstatus 
                                                             >> 4U)))))
                                              : vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data))),32);
    bufp->fullBit(oldp+397,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__state) 
                                 & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_valid) 
                                       & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_ready))))
                              : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_rvalid) 
                                 & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_ready)))));
    bufp->fullBit(oldp+398,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__state) 
                                 & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_rvalid) 
                                       & (IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_rready))))
                              : (vlSelf->pc != vlSelf->ysyx_25020037_cpu__DOT__ifu_araddr))));
    bufp->fullBit(oldp+399,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__state) 
                                 & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_valid) 
                                       & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_ready))))
                              : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_ready) 
                                 & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_valid)))));
    bufp->fullBit(oldp+400,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__state) 
                                 & (~ ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__is_read_req) 
                                         & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_rready)) 
                                        & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_rvalid)) 
                                       | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__is_write_req) 
                                           & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_bready)) 
                                          & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_bvalid)))))
                              : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_arvalid) 
                                 | (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_awvalid)))));
    bufp->fullBit(oldp+401,(((~ (IData)(vlSelf->rst)) 
                             & (0U != (6U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))))));
    bufp->fullIData(oldp+402,(((IData)(vlSelf->rst)
                                ? 0U : ((1U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                         ? vlSelf->ysyx_25020037_cpu__DOT__csr_wgpr_data
                                         : ((1U == 
                                             (0xfU 
                                              & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                 >> 5U)))
                                             ? ((0x10U 
                                                 & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                                 : 
                                                (0xffU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                             : ((2U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                     >> 5U)))
                                                 ? 
                                                ((8U 
                                                  & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                                  : 
                                                 (0xffffU 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                                 : vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))))),32);
    bufp->fullIData(oldp+403,(0x300U),32);
    bufp->fullIData(oldp+404,(0x305U),32);
    bufp->fullIData(oldp+405,(0x341U),32);
    bufp->fullIData(oldp+406,(0x342U),32);
    bufp->fullBit(oldp+407,(0U));
    bufp->fullIData(oldp+408,(vlSelf->ysyx_25020037_cpu__DOT__eu_to_wu_bus),32);
    bufp->fullIData(oldp+409,(0x20U),32);
    bufp->fullIData(oldp+410,(0x80000000U),32);
    bufp->fullBit(oldp+411,(1U));
    bufp->fullIData(oldp+412,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__aupic_result),32);
    bufp->fullIData(oldp+413,(0U),32);
    bufp->fullIData(oldp+414,(0x1800U),32);
    bufp->fullBit(oldp+415,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_W));
    bufp->fullQData(oldp+416,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__eu_to_lu_bus_r),64);
    bufp->fullCData(oldp+418,(0U),2);
    bufp->fullCData(oldp+419,(1U),2);
    bufp->fullCData(oldp+420,(2U),2);
}
