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
    tracep->declBit(c+394,"clock", false,-1);
    tracep->declBit(c+395,"reset", false,-1);
    tracep->declBit(c+396,"io_interrupt", false,-1);
    tracep->pushNamePrefix("ysyx_25020037 ");
    tracep->declBit(c+394,"clock", false,-1);
    tracep->declBit(c+395,"reset", false,-1);
    tracep->declBit(c+396,"io_interrupt", false,-1);
    tracep->declBus(c+422,"MSTATUS", false,-1, 31,0);
    tracep->declBus(c+423,"MTVEC", false,-1, 31,0);
    tracep->declBus(c+424,"MEPC", false,-1, 31,0);
    tracep->declBus(c+425,"MCAUSE", false,-1, 31,0);
    tracep->declBus(c+426,"CONFIG_FTRACE", false,-1, 0,0);
    tracep->declBit(c+248,"ftrace_jal", false,-1);
    tracep->declBit(c+249,"ftrace_jalr", false,-1);
    tracep->declQuad(c+146,"eu_to_lu_bus", false,-1, 63,0);
    tracep->declQuad(c+84,"wu_to_gu_bus", false,-1, 32,0);
    tracep->declQuad(c+250,"du_to_gu_bus", false,-1, 52,0);
    tracep->declArray(c+397,"gu_to_eu_bus", false,-1, 127,0);
    tracep->declQuad(c+252,"du_to_eu_bus", false,-1, 58,0);
    tracep->declBus(c+254,"du_to_lu_bus", false,-1, 5,0);
    tracep->declBus(c+255,"du_to_wu_bus", false,-1, 8,0);
    tracep->declBus(c+86,"lu_to_wu_bus", false,-1, 31,0);
    tracep->declBus(c+427,"eu_to_wu_bus", false,-1, 31,0);
    tracep->declBus(c+401,"pc", false,-1, 31,0);
    tracep->declBus(c+1,"inst", false,-1, 31,0);
    tracep->declBus(c+148,"dnpc", false,-1, 31,0);
    tracep->declBus(c+214,"mtvec", false,-1, 31,0);
    tracep->declBus(c+215,"mepc", false,-1, 31,0);
    tracep->declBus(c+66,"mstatus", false,-1, 31,0);
    tracep->declBus(c+67,"mcause", false,-1, 31,0);
    tracep->declBus(c+2,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+3,"ifu_arvalid", false,-1);
    tracep->declBit(c+4,"ifu_arready", false,-1);
    tracep->declBus(c+256,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+5,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+257,"ifu_rvalid", false,-1);
    tracep->declBit(c+6,"ifu_rready", false,-1);
    tracep->declBit(c+258,"idu_valid", false,-1);
    tracep->declBit(c+259,"idu_ready", false,-1);
    tracep->declBit(c+149,"exu_valid", false,-1);
    tracep->declBit(c+402,"exu_ready", false,-1);
    tracep->declBit(c+87,"lsu_valid", false,-1);
    tracep->declBit(c+403,"lsu_ready", false,-1);
    tracep->declBit(c+88,"wbu_ready", false,-1);
    tracep->declBit(c+89,"wbu_valid", false,-1);
    tracep->declBit(c+90,"gpr_valid", false,-1);
    tracep->declBit(c+91,"gpr_ready", false,-1);
    tracep->declBus(c+92,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+93,"lsu_arvalid", false,-1);
    tracep->declBit(c+94,"lsu_arready", false,-1);
    tracep->declBus(c+95,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+96,"lsu_awvalid", false,-1);
    tracep->declBit(c+97,"lsu_awready", false,-1);
    tracep->declBus(c+98,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+99,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+100,"lsu_wvalid", false,-1);
    tracep->declBit(c+101,"lsu_wready", false,-1);
    tracep->declBus(c+7,"lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+102,"lsu_bvalid", false,-1);
    tracep->declBit(c+103,"lsu_bready", false,-1);
    tracep->declBus(c+104,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+105,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+106,"lsu_rvalid", false,-1);
    tracep->declBit(c+107,"lsu_rready", false,-1);
    tracep->declBus(c+108,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+109,"sram_arvalid", false,-1);
    tracep->declBit(c+8,"sram_arready", false,-1);
    tracep->declBus(c+110,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+111,"sram_awvalid", false,-1);
    tracep->declBit(c+9,"sram_awready", false,-1);
    tracep->declBus(c+112,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+113,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+114,"sram_wvalid", false,-1);
    tracep->declBit(c+10,"sram_wready", false,-1);
    tracep->declBus(c+11,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+12,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+13,"sram_rvalid", false,-1);
    tracep->declBit(c+115,"sram_rready", false,-1);
    tracep->declBus(c+14,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+15,"sram_bvalid", false,-1);
    tracep->declBit(c+116,"sram_bready", false,-1);
    tracep->declBus(c+117,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+118,"uart_arvalid", false,-1);
    tracep->declBit(c+16,"uart_arready", false,-1);
    tracep->declBus(c+119,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+120,"uart_awvalid", false,-1);
    tracep->declBit(c+17,"uart_awready", false,-1);
    tracep->declBus(c+121,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+122,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+123,"uart_wvalid", false,-1);
    tracep->declBit(c+18,"uart_wready", false,-1);
    tracep->declBus(c+19,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+20,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+21,"uart_rvalid", false,-1);
    tracep->declBit(c+124,"uart_rready", false,-1);
    tracep->declBus(c+22,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"uart_bvalid", false,-1);
    tracep->declBit(c+125,"uart_bready", false,-1);
    tracep->declBus(c+126,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+127,"clint_arvalid", false,-1);
    tracep->declBit(c+24,"clint_arready", false,-1);
    tracep->declBus(c+25,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+26,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+27,"clint_rvalid", false,-1);
    tracep->declBit(c+128,"clint_rready", false,-1);
    tracep->declBus(c+388,"csr_wgpr_data", false,-1, 31,0);
    tracep->declBus(c+389,"csr_wcsr_data", false,-1, 31,0);
    tracep->declBit(c+260,"inst_s", false,-1);
    tracep->declBit(c+261,"inst_l", false,-1);
    tracep->declBit(c+262,"gpr_we", false,-1);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+429,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+148,"din", false,-1, 31,0);
    tracep->declBus(c+401,"dout", false,-1, 31,0);
    tracep->declBit(c+89,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_cpu ");
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBit(c+261,"inst_l", false,-1);
    tracep->declBit(c+260,"inst_s", false,-1);
    tracep->declBit(c+258,"idu_valid", false,-1);
    tracep->declBit(c+403,"lsu_ready", false,-1);
    tracep->declBit(c+149,"exu_valid", false,-1);
    tracep->declBit(c+402,"exu_ready", false,-1);
    tracep->declBus(c+401,"pc", false,-1, 31,0);
    tracep->declArray(c+397,"gu_to_eu_bus", false,-1, 127,0);
    tracep->declQuad(c+252,"du_to_eu_bus", false,-1, 58,0);
    tracep->declQuad(c+146,"eu_to_lu_bus", false,-1, 63,0);
    tracep->declBus(c+148,"dnpc", false,-1, 31,0);
    tracep->declBus(c+426,"IDLE", false,-1, 0,0);
    tracep->declBus(c+430,"BUSY", false,-1, 0,0);
    tracep->declBit(c+150,"state", false,-1);
    tracep->declBit(c+404,"next_state", false,-1);
    tracep->declBus(c+405,"snpc", false,-1, 31,0);
    tracep->declQuad(c+151,"du_to_eu_bus_r", false,-1, 58,0);
    tracep->declArray(c+153,"gu_to_eu_bus_r", false,-1, 127,0);
    tracep->declBus(c+157,"imm", false,-1, 31,0);
    tracep->declBus(c+158,"alu_op", false,-1, 16,0);
    tracep->declBit(c+159,"src1_is_pc", false,-1);
    tracep->declBit(c+160,"src2_is_imm", false,-1);
    tracep->declBit(c+161,"is_pc_jump", false,-1);
    tracep->declBit(c+162,"double_cal", false,-1);
    tracep->declBit(c+163,"ebreak", false,-1);
    tracep->declBit(c+164,"inst_not_realize", false,-1);
    tracep->declBit(c+165,"ecall_en", false,-1);
    tracep->declBit(c+166,"mret_en", false,-1);
    tracep->declBit(c+167,"csrrs_op", false,-1);
    tracep->declBit(c+168,"csrrw_op", false,-1);
    tracep->declBus(c+169,"src1", false,-1, 31,0);
    tracep->declBus(c+170,"src2", false,-1, 31,0);
    tracep->declBus(c+171,"mtvec", false,-1, 31,0);
    tracep->declBus(c+172,"mepc", false,-1, 31,0);
    tracep->declBus(c+406,"dnpc_r", false,-1, 31,0);
    tracep->declBus(c+407,"result", false,-1, 31,0);
    tracep->declBus(c+391,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+173,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+169,"alu_src3", false,-1, 31,0);
    tracep->declBus(c+170,"alu_src4", false,-1, 31,0);
    tracep->declBus(c+392,"alu_result1", false,-1, 31,0);
    tracep->declBus(c+174,"alu_result2", false,-1, 31,0);
    tracep->pushNamePrefix("alu_cpu ");
    tracep->declBit(c+162,"double_cal", false,-1);
    tracep->declBus(c+158,"alu_op", false,-1, 16,0);
    tracep->declBus(c+391,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+173,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+169,"alu_src3", false,-1, 31,0);
    tracep->declBus(c+170,"alu_src4", false,-1, 31,0);
    tracep->declBus(c+392,"alu_result1", false,-1, 31,0);
    tracep->declBus(c+174,"alu_result2", false,-1, 31,0);
    tracep->declBit(c+175,"op_add", false,-1);
    tracep->declBit(c+176,"op_sub", false,-1);
    tracep->declBit(c+177,"op_slt", false,-1);
    tracep->declBit(c+178,"op_sltu", false,-1);
    tracep->declBit(c+179,"op_and", false,-1);
    tracep->declBit(c+180,"op_or", false,-1);
    tracep->declBit(c+181,"op_xor", false,-1);
    tracep->declBit(c+182,"op_sll", false,-1);
    tracep->declBit(c+183,"op_srl", false,-1);
    tracep->declBit(c+184,"op_sra", false,-1);
    tracep->declBit(c+185,"op_lui", false,-1);
    tracep->declBit(c+186,"op_bne", false,-1);
    tracep->declBit(c+187,"op_beq", false,-1);
    tracep->declBit(c+188,"op_bge", false,-1);
    tracep->declBit(c+189,"op_bgeu", false,-1);
    tracep->declBit(c+190,"op_blt", false,-1);
    tracep->declBit(c+191,"op_bltu", false,-1);
    tracep->declBus(c+393,"add_sub_result", false,-1, 31,0);
    tracep->declBus(c+204,"slt_result", false,-1, 31,0);
    tracep->declBus(c+205,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+206,"and_result", false,-1, 31,0);
    tracep->declBus(c+207,"or_result", false,-1, 31,0);
    tracep->declBus(c+208,"xor_result", false,-1, 31,0);
    tracep->declBus(c+173,"lui_result", false,-1, 31,0);
    tracep->declBus(c+209,"sll_result", false,-1, 31,0);
    tracep->declQuad(c+210,"sr64_result", false,-1, 63,0);
    tracep->declBus(c+212,"sr_result", false,-1, 31,0);
    tracep->declBus(c+431,"aupic_result", false,-1, 31,0);
    tracep->declBus(c+192,"beq_result", false,-1, 31,0);
    tracep->declBus(c+193,"blt_result", false,-1, 31,0);
    tracep->declBus(c+194,"bltu_result", false,-1, 31,0);
    tracep->declBus(c+195,"bge_result", false,-1, 31,0);
    tracep->declBus(c+196,"bgeu_result", false,-1, 31,0);
    tracep->declBus(c+197,"bne_result", false,-1, 31,0);
    tracep->declBus(c+391,"adder_a", false,-1, 31,0);
    tracep->declBus(c+198,"adder_b", false,-1, 31,0);
    tracep->declBus(c+169,"adder_c", false,-1, 31,0);
    tracep->declBus(c+199,"adder_d", false,-1, 31,0);
    tracep->declBit(c+200,"adder_cin", false,-1);
    tracep->declBit(c+201,"adder_cin1", false,-1);
    tracep->declBus(c+393,"adder_result", false,-1, 31,0);
    tracep->declBus(c+202,"adder_result1", false,-1, 31,0);
    tracep->declBit(c+213,"adder_cout", false,-1);
    tracep->declBit(c+203,"adder_cout1", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpr_cpu ");
    tracep->declBit(c+258,"idu_valid", false,-1);
    tracep->declBit(c+89,"wbu_valid", false,-1);
    tracep->declBit(c+262,"gpr_we", false,-1);
    tracep->declBit(c+402,"exu_ready", false,-1);
    tracep->declBit(c+91,"gpr_ready", false,-1);
    tracep->declBit(c+90,"gpr_valid", false,-1);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+389,"csr_wcsr_data", false,-1, 31,0);
    tracep->declQuad(c+84,"wu_to_gu_bus", false,-1, 32,0);
    tracep->declQuad(c+250,"du_to_gu_bus", false,-1, 52,0);
    tracep->declArray(c+397,"gu_to_eu_bus", false,-1, 127,0);
    tracep->declBus(c+214,"mtvec", false,-1, 31,0);
    tracep->declBus(c+215,"mepc", false,-1, 31,0);
    tracep->declBus(c+66,"mstatus", false,-1, 31,0);
    tracep->declBus(c+67,"mcause", false,-1, 31,0);
    tracep->declBus(c+426,"IDLE", false,-1, 0,0);
    tracep->declBus(c+430,"BUSY", false,-1, 0,0);
    tracep->declBit(c+129,"state", false,-1);
    tracep->declBit(c+408,"next_state", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+216+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declQuad(c+130,"wu_to_gu_bus_r", false,-1, 32,0);
    tracep->declBus(c+132,"gpr_wdata", false,-1, 31,0);
    tracep->declBit(c+133,"gpr_wen", false,-1);
    tracep->declBus(c+263,"pc", false,-1, 31,0);
    tracep->declBus(c+264,"rd", false,-1, 4,0);
    tracep->declBus(c+265,"rs1", false,-1, 4,0);
    tracep->declBus(c+266,"rs2", false,-1, 4,0);
    tracep->declBit(c+267,"csrs_mtvec_wen", false,-1);
    tracep->declBit(c+268,"csrs_mepc_wen", false,-1);
    tracep->declBit(c+269,"csrs_mstatus_wen", false,-1);
    tracep->declBit(c+270,"csrs_mcause_wen", false,-1);
    tracep->declBit(c+271,"ecall_en", false,-1);
    tracep->declBit(c+272,"mret_en", false,-1);
    tracep->declBus(c+390,"src1", false,-1, 31,0);
    tracep->declBus(c+409,"src2", false,-1, 31,0);
    tracep->declBit(c+273,"mepc_wen", false,-1);
    tracep->declBit(c+274,"mcause_wen", false,-1);
    tracep->declBit(c+275,"mstatus_wen", false,-1);
    tracep->declBus(c+410,"mepc_data", false,-1, 31,0);
    tracep->declBus(c+411,"mcause_data", false,-1, 31,0);
    tracep->declBus(c+412,"mstatus_data", false,-1, 31,0);
    tracep->pushNamePrefix("CSRS_cause ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+411,"din", false,-1, 31,0);
    tracep->declBus(c+67,"dout", false,-1, 31,0);
    tracep->declBit(c+276,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_mepc ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+410,"din", false,-1, 31,0);
    tracep->declBus(c+215,"dout", false,-1, 31,0);
    tracep->declBit(c+277,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_mstatus ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+433,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+412,"din", false,-1, 31,0);
    tracep->declBus(c+66,"dout", false,-1, 31,0);
    tracep->declBit(c+278,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRS_mtvec ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+389,"din", false,-1, 31,0);
    tracep->declBus(c+214,"dout", false,-1, 31,0);
    tracep->declBit(c+279,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR32[0] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+68,"dout", false,-1, 31,0);
    tracep->declBit(c+280,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[10] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+69,"dout", false,-1, 31,0);
    tracep->declBit(c+281,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[11] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+70,"dout", false,-1, 31,0);
    tracep->declBit(c+282,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[12] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+71,"dout", false,-1, 31,0);
    tracep->declBit(c+283,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[13] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+72,"dout", false,-1, 31,0);
    tracep->declBit(c+284,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[14] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+73,"dout", false,-1, 31,0);
    tracep->declBit(c+285,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[15] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+74,"dout", false,-1, 31,0);
    tracep->declBit(c+286,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[1] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+75,"dout", false,-1, 31,0);
    tracep->declBit(c+287,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[2] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+76,"dout", false,-1, 31,0);
    tracep->declBit(c+288,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[3] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+77,"dout", false,-1, 31,0);
    tracep->declBit(c+289,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[4] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+78,"dout", false,-1, 31,0);
    tracep->declBit(c+290,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[5] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+79,"dout", false,-1, 31,0);
    tracep->declBit(c+291,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[6] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+80,"dout", false,-1, 31,0);
    tracep->declBit(c+292,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[7] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+81,"dout", false,-1, 31,0);
    tracep->declBit(c+293,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[8] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+82,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR32[9] ");
    tracep->pushNamePrefix("gpr32 ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+83,"dout", false,-1, 31,0);
    tracep->declBit(c+295,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu_cpu ");
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+401,"pc", false,-1, 31,0);
    tracep->declBus(c+256,"inst", false,-1, 31,0);
    tracep->declBit(c+257,"ifu_rvalid", false,-1);
    tracep->declBit(c+402,"exu_ready", false,-1);
    tracep->declBit(c+258,"idu_valid", false,-1);
    tracep->declBit(c+259,"idu_ready", false,-1);
    tracep->declBit(c+261,"inst_l", false,-1);
    tracep->declBit(c+260,"inst_s", false,-1);
    tracep->declBit(c+262,"gpr_we", false,-1);
    tracep->declQuad(c+252,"du_to_eu_bus", false,-1, 58,0);
    tracep->declQuad(c+250,"du_to_gu_bus", false,-1, 52,0);
    tracep->declBus(c+254,"du_to_lu_bus", false,-1, 5,0);
    tracep->declBus(c+255,"du_to_wu_bus", false,-1, 8,0);
    tracep->declBit(c+249,"ftrace_jalr", false,-1);
    tracep->declBit(c+248,"ftrace_jal", false,-1);
    tracep->declBus(c+422,"MSTATUS", false,-1, 31,0);
    tracep->declBus(c+423,"MTVEC", false,-1, 31,0);
    tracep->declBus(c+424,"MEPC", false,-1, 31,0);
    tracep->declBus(c+425,"MCAUSE", false,-1, 31,0);
    tracep->declBus(c+426,"IDLE", false,-1, 0,0);
    tracep->declBus(c+430,"BUSY", false,-1, 0,0);
    tracep->declBit(c+296,"state", false,-1);
    tracep->declBit(c+413,"next_state", false,-1);
    tracep->declBus(c+297,"inst_r", false,-1, 31,0);
    tracep->declBus(c+298,"rs1", false,-1, 4,0);
    tracep->declBus(c+299,"rs2", false,-1, 4,0);
    tracep->declBus(c+300,"rd", false,-1, 4,0);
    tracep->declBus(c+301,"imm", false,-1, 31,0);
    tracep->declBus(c+302,"alu_op", false,-1, 16,0);
    tracep->declBit(c+303,"gpr_we_r", false,-1);
    tracep->declBit(c+304,"rlsu_we", false,-1);
    tracep->declBit(c+305,"wlsu_we", false,-1);
    tracep->declBit(c+306,"bit_sext", false,-1);
    tracep->declBit(c+307,"half_sext", false,-1);
    tracep->declBus(c+308,"rstrb", false,-1, 3,0);
    tracep->declBus(c+308,"wstrb", false,-1, 3,0);
    tracep->declBit(c+309,"src1_is_pc", false,-1);
    tracep->declBit(c+310,"src2_is_imm", false,-1);
    tracep->declBit(c+311,"is_pc_jump", false,-1);
    tracep->declBit(c+312,"double_cal", false,-1);
    tracep->declBit(c+313,"ebreak", false,-1);
    tracep->declBit(c+314,"inst_not_realize", false,-1);
    tracep->declBit(c+315,"csr_w_gpr_we", false,-1);
    tracep->declBit(c+316,"csrrw_op", false,-1);
    tracep->declBit(c+317,"csrrs_op", false,-1);
    tracep->declBit(c+318,"ecall_en", false,-1);
    tracep->declBit(c+319,"mret_en", false,-1);
    tracep->declBit(c+320,"is_csr_op", false,-1);
    tracep->declBit(c+321,"csrs_mtvec_wen", false,-1);
    tracep->declBit(c+322,"csrs_mepc_wen", false,-1);
    tracep->declBit(c+323,"csrs_mstatus_wen", false,-1);
    tracep->declBit(c+324,"csrs_mcause_wen", false,-1);
    tracep->declBus(c+325,"opcode_31_25", false,-1, 6,0);
    tracep->declBus(c+326,"opcode_31_26", false,-1, 5,0);
    tracep->declBus(c+327,"opcode_14_12", false,-1, 2,0);
    tracep->declBus(c+328,"opcode_06_00", false,-1, 6,0);
    tracep->declBus(c+329,"immI", false,-1, 31,0);
    tracep->declBus(c+330,"immS", false,-1, 31,0);
    tracep->declBus(c+331,"immB", false,-1, 31,0);
    tracep->declBus(c+332,"immU", false,-1, 31,0);
    tracep->declBus(c+333,"immJ", false,-1, 31,0);
    tracep->declArray(c+334,"opcode_31_25_d", false,-1, 127,0);
    tracep->declQuad(c+338,"opcode_31_26_d", false,-1, 63,0);
    tracep->declBus(c+340,"opcode_14_12_d", false,-1, 7,0);
    tracep->declArray(c+341,"opcode_06_00_d", false,-1, 127,0);
    tracep->declBus(c+345,"rs1_d", false,-1, 31,0);
    tracep->declBus(c+346,"rs2_d", false,-1, 31,0);
    tracep->declBus(c+347,"rd_d", false,-1, 31,0);
    tracep->declBit(c+348,"rw_word_1", false,-1);
    tracep->declBit(c+349,"rw_word_2", false,-1);
    tracep->declBit(c+350,"rw_word_4", false,-1);
    tracep->declBit(c+351,"inst_add", false,-1);
    tracep->declBit(c+352,"inst_and", false,-1);
    tracep->declBit(c+353,"inst_or", false,-1);
    tracep->declBit(c+354,"inst_ori", false,-1);
    tracep->declBit(c+355,"inst_xor", false,-1);
    tracep->declBit(c+356,"inst_xori", false,-1);
    tracep->declBit(c+357,"inst_sub", false,-1);
    tracep->declBit(c+358,"inst_slt", false,-1);
    tracep->declBit(c+359,"inst_sltu", false,-1);
    tracep->declBit(c+360,"inst_addi", false,-1);
    tracep->declBit(c+361,"inst_andi", false,-1);
    tracep->declBit(c+249,"inst_jarl", false,-1);
    tracep->declBit(c+306,"inst_lb", false,-1);
    tracep->declBit(c+362,"inst_lbu", false,-1);
    tracep->declBit(c+307,"inst_lh", false,-1);
    tracep->declBit(c+363,"inst_lhu", false,-1);
    tracep->declBit(c+364,"inst_lw", false,-1);
    tracep->declBit(c+365,"inst_sll", false,-1);
    tracep->declBit(c+366,"inst_slli", false,-1);
    tracep->declBit(c+367,"inst_sltiu", false,-1);
    tracep->declBit(c+368,"inst_sra", false,-1);
    tracep->declBit(c+369,"inst_srai", false,-1);
    tracep->declBit(c+370,"inst_srl", false,-1);
    tracep->declBit(c+371,"inst_srli", false,-1);
    tracep->declBit(c+316,"inst_csrrw", false,-1);
    tracep->declBit(c+317,"inst_csrrs", false,-1);
    tracep->declBit(c+318,"inst_ecall", false,-1);
    tracep->declBit(c+319,"inst_mret", false,-1);
    tracep->declBit(c+372,"inst_sb", false,-1);
    tracep->declBit(c+373,"inst_sh", false,-1);
    tracep->declBit(c+374,"inst_sw", false,-1);
    tracep->declBit(c+375,"inst_beq", false,-1);
    tracep->declBit(c+376,"inst_bne", false,-1);
    tracep->declBit(c+377,"inst_bge", false,-1);
    tracep->declBit(c+378,"inst_bgeu", false,-1);
    tracep->declBit(c+379,"inst_blt", false,-1);
    tracep->declBit(c+380,"inst_bltu", false,-1);
    tracep->declBit(c+381,"inst_auipc", false,-1);
    tracep->declBit(c+382,"inst_lui", false,-1);
    tracep->declBit(c+248,"inst_jal", false,-1);
    tracep->declBit(c+313,"inst_ebreak", false,-1);
    tracep->declBit(c+383,"inst_waiting", false,-1);
    tracep->declBit(c+384,"TYPE_R", false,-1);
    tracep->declBit(c+385,"TYPE_I", false,-1);
    tracep->declBit(c+305,"TYPE_S", false,-1);
    tracep->declBit(c+312,"TYPE_B", false,-1);
    tracep->declBit(c+386,"TYPE_U", false,-1);
    tracep->declBit(c+248,"TYPE_J", false,-1);
    tracep->declBit(c+387,"TYPE_N", false,-1);
    tracep->declBit(c+434,"TYPE_W", false,-1);
    tracep->pushNamePrefix("u_dec0 ");
    tracep->declBus(c+325,"in", false,-1, 6,0);
    tracep->declArray(c+334,"out", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec1 ");
    tracep->declBus(c+326,"in", false,-1, 5,0);
    tracep->declQuad(c+338,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec2 ");
    tracep->declBus(c+327,"in", false,-1, 2,0);
    tracep->declBus(c+340,"out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec3 ");
    tracep->declBus(c+328,"in", false,-1, 6,0);
    tracep->declArray(c+341,"out", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec4 ");
    tracep->declBus(c+298,"in", false,-1, 4,0);
    tracep->declBus(c+345,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec5 ");
    tracep->declBus(c+299,"in", false,-1, 4,0);
    tracep->declBus(c+346,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dec6 ");
    tracep->declBus(c+300,"in", false,-1, 4,0);
    tracep->declBus(c+347,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_cpu ");
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+401,"pc", false,-1, 31,0);
    tracep->declBit(c+259,"idu_ready", false,-1);
    tracep->declBus(c+1,"inst", false,-1, 31,0);
    tracep->declBus(c+2,"araddr", false,-1, 31,0);
    tracep->declBit(c+3,"arvalid", false,-1);
    tracep->declBit(c+4,"arready", false,-1);
    tracep->declBus(c+256,"rdata", false,-1, 31,0);
    tracep->declBus(c+5,"rresp", false,-1, 1,0);
    tracep->declBit(c+257,"rvalid", false,-1);
    tracep->declBit(c+6,"rready", false,-1);
    tracep->declBus(c+426,"IDLE", false,-1, 0,0);
    tracep->declBus(c+430,"BUSY", false,-1, 0,0);
    tracep->declBit(c+28,"state", false,-1);
    tracep->declBit(c+414,"next_state", false,-1);
    tracep->declBus(c+29,"last_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_cpu ");
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBit(c+149,"exu_valid", false,-1);
    tracep->declBit(c+88,"wbu_ready", false,-1);
    tracep->declBit(c+403,"lsu_ready", false,-1);
    tracep->declBit(c+87,"lsu_valid", false,-1);
    tracep->declQuad(c+146,"eu_to_lu_bus", false,-1, 63,0);
    tracep->declBus(c+254,"du_to_lu_bus", false,-1, 5,0);
    tracep->declBus(c+86,"lu_to_wu_bus", false,-1, 31,0);
    tracep->declBus(c+92,"araddr", false,-1, 31,0);
    tracep->declBit(c+93,"arvalid", false,-1);
    tracep->declBit(c+94,"arready", false,-1);
    tracep->declBus(c+95,"awaddr", false,-1, 31,0);
    tracep->declBit(c+96,"awvalid", false,-1);
    tracep->declBit(c+97,"awready", false,-1);
    tracep->declBus(c+98,"wdata", false,-1, 31,0);
    tracep->declBus(c+99,"wstrb", false,-1, 3,0);
    tracep->declBit(c+100,"wvalid", false,-1);
    tracep->declBit(c+101,"wready", false,-1);
    tracep->declBus(c+7,"bresp", false,-1, 1,0);
    tracep->declBit(c+102,"bvalid", false,-1);
    tracep->declBit(c+103,"bready", false,-1);
    tracep->declBus(c+104,"rdata", false,-1, 31,0);
    tracep->declBus(c+105,"rresp", false,-1, 1,0);
    tracep->declBit(c+106,"rvalid", false,-1);
    tracep->declBit(c+107,"rready", false,-1);
    tracep->declBus(c+426,"IDLE", false,-1, 0,0);
    tracep->declBus(c+430,"BUSY", false,-1, 0,0);
    tracep->declBit(c+134,"state", false,-1);
    tracep->declBit(c+415,"next_state", false,-1);
    tracep->declQuad(c+435,"eu_to_lu_bus_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axi_crossbar ");
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+2,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+3,"ifu_arvalid", false,-1);
    tracep->declBit(c+4,"ifu_arready", false,-1);
    tracep->declBus(c+256,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+5,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+257,"ifu_rvalid", false,-1);
    tracep->declBit(c+6,"ifu_rready", false,-1);
    tracep->declBus(c+92,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+93,"lsu_arvalid", false,-1);
    tracep->declBit(c+94,"lsu_arready", false,-1);
    tracep->declBus(c+95,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+96,"lsu_awvalid", false,-1);
    tracep->declBit(c+97,"lsu_awready", false,-1);
    tracep->declBus(c+98,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+99,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+100,"lsu_wvalid", false,-1);
    tracep->declBit(c+101,"lsu_wready", false,-1);
    tracep->declBus(c+7,"lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+102,"lsu_bvalid", false,-1);
    tracep->declBit(c+103,"lsu_bready", false,-1);
    tracep->declBus(c+104,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+105,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+106,"lsu_rvalid", false,-1);
    tracep->declBit(c+107,"lsu_rready", false,-1);
    tracep->declBus(c+108,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+109,"sram_arvalid", false,-1);
    tracep->declBit(c+8,"sram_arready", false,-1);
    tracep->declBus(c+110,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+111,"sram_awvalid", false,-1);
    tracep->declBit(c+9,"sram_awready", false,-1);
    tracep->declBus(c+112,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+113,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+114,"sram_wvalid", false,-1);
    tracep->declBit(c+10,"sram_wready", false,-1);
    tracep->declBus(c+11,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+12,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+13,"sram_rvalid", false,-1);
    tracep->declBit(c+115,"sram_rready", false,-1);
    tracep->declBus(c+14,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+15,"sram_bvalid", false,-1);
    tracep->declBit(c+116,"sram_bready", false,-1);
    tracep->declBus(c+117,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+118,"uart_arvalid", false,-1);
    tracep->declBit(c+16,"uart_arready", false,-1);
    tracep->declBus(c+119,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+120,"uart_awvalid", false,-1);
    tracep->declBit(c+17,"uart_awready", false,-1);
    tracep->declBus(c+121,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+122,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+123,"uart_wvalid", false,-1);
    tracep->declBit(c+18,"uart_wready", false,-1);
    tracep->declBus(c+19,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+20,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+21,"uart_rvalid", false,-1);
    tracep->declBit(c+124,"uart_rready", false,-1);
    tracep->declBus(c+22,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"uart_bvalid", false,-1);
    tracep->declBit(c+125,"uart_bready", false,-1);
    tracep->declBus(c+126,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+127,"clint_arvalid", false,-1);
    tracep->declBit(c+24,"clint_arready", false,-1);
    tracep->declBus(c+25,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+26,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+27,"clint_rvalid", false,-1);
    tracep->declBit(c+128,"clint_rready", false,-1);
    tracep->declBus(c+429,"SRAM_BASE_START", false,-1, 31,0);
    tracep->declBus(c+437,"SRAM_BASE_END", false,-1, 31,0);
    tracep->declBus(c+438,"UART_BASE", false,-1, 31,0);
    tracep->declBus(c+439,"CLINT_BASE", false,-1, 31,0);
    tracep->declBus(c+440,"IDLE", false,-1, 1,0);
    tracep->declBus(c+441,"IFU_ACCESS", false,-1, 1,0);
    tracep->declBus(c+442,"LSU_ACCESS", false,-1, 1,0);
    tracep->declBit(c+30,"is_clint_addr", false,-1);
    tracep->declBit(c+31,"is_uart_addr", false,-1);
    tracep->declBit(c+32,"is_sram_addr", false,-1);
    tracep->declBus(c+33,"current_master", false,-1, 1,0);
    tracep->declBus(c+416,"next_master", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_clint ");
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+126,"araddr", false,-1, 31,0);
    tracep->declBit(c+127,"arvalid", false,-1);
    tracep->declBit(c+24,"arready", false,-1);
    tracep->declBus(c+25,"rdata", false,-1, 31,0);
    tracep->declBus(c+26,"rresp", false,-1, 1,0);
    tracep->declBit(c+27,"rvalid", false,-1);
    tracep->declBit(c+128,"rready", false,-1);
    tracep->declBus(c+432,"awaddr", false,-1, 31,0);
    tracep->declBit(c+443,"awvalid", false,-1);
    tracep->declBit(c+34,"awready", false,-1);
    tracep->declBus(c+432,"wdata", false,-1, 31,0);
    tracep->declBus(c+444,"wstrb", false,-1, 3,0);
    tracep->declBit(c+443,"wvalid", false,-1);
    tracep->declBit(c+35,"wready", false,-1);
    tracep->declBus(c+36,"bresp", false,-1, 1,0);
    tracep->declBit(c+37,"bvalid", false,-1);
    tracep->declBit(c+443,"bready", false,-1);
    tracep->declBus(c+38,"mtimel", false,-1, 31,0);
    tracep->declBus(c+39,"mtimeh", false,-1, 31,0);
    tracep->declBus(c+40,"clint_offset", false,-1, 31,0);
    tracep->declBus(c+439,"CLINT_BASE", false,-1, 31,0);
    tracep->declBus(c+426,"IDLE", false,-1, 0,0);
    tracep->declBus(c+430,"BUSY", false,-1, 0,0);
    tracep->declBit(c+41,"state", false,-1);
    tracep->declBit(c+417,"next_state", false,-1);
    tracep->declBus(c+42,"read_addr", false,-1, 31,0);
    tracep->declBus(c+445,"write_addr", false,-1, 31,0);
    tracep->declBus(c+446,"write_data", false,-1, 31,0);
    tracep->declBus(c+447,"write_strb", false,-1, 3,0);
    tracep->declBit(c+43,"is_read_req", false,-1);
    tracep->declBit(c+44,"is_write_req", false,-1);
    tracep->declBit(c+45,"wvalid_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_sram ");
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+108,"araddr", false,-1, 31,0);
    tracep->declBit(c+109,"arvalid", false,-1);
    tracep->declBit(c+8,"arready", false,-1);
    tracep->declBus(c+11,"rdata", false,-1, 31,0);
    tracep->declBus(c+12,"rresp", false,-1, 1,0);
    tracep->declBit(c+13,"rvalid", false,-1);
    tracep->declBit(c+115,"rready", false,-1);
    tracep->declBus(c+110,"awaddr", false,-1, 31,0);
    tracep->declBit(c+111,"awvalid", false,-1);
    tracep->declBit(c+9,"awready", false,-1);
    tracep->declBus(c+112,"wdata", false,-1, 31,0);
    tracep->declBus(c+113,"wstrb", false,-1, 3,0);
    tracep->declBit(c+114,"wvalid", false,-1);
    tracep->declBit(c+10,"wready", false,-1);
    tracep->declBus(c+14,"bresp", false,-1, 1,0);
    tracep->declBit(c+15,"bvalid", false,-1);
    tracep->declBit(c+116,"bready", false,-1);
    tracep->declBus(c+426,"IDLE", false,-1, 0,0);
    tracep->declBus(c+430,"BUSY", false,-1, 0,0);
    tracep->declBit(c+46,"state", false,-1);
    tracep->declBit(c+418,"next_state", false,-1);
    tracep->declBus(c+47,"read_addr", false,-1, 31,0);
    tracep->declBus(c+48,"write_addr", false,-1, 31,0);
    tracep->declBus(c+49,"write_data", false,-1, 31,0);
    tracep->declBus(c+50,"write_strb", false,-1, 3,0);
    tracep->declBit(c+51,"is_read_req", false,-1);
    tracep->declBit(c+52,"is_write_req", false,-1);
    tracep->declBit(c+53,"wvalid_reg", false,-1);
    tracep->declBus(c+54,"lfsr", false,-1, 7,0);
    tracep->declBus(c+55,"delay_count", false,-1, 7,0);
    tracep->declBus(c+56,"target_delay", false,-1, 7,0);
    tracep->declBit(c+57,"lfsr_tap", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_uart ");
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+117,"araddr", false,-1, 31,0);
    tracep->declBit(c+118,"arvalid", false,-1);
    tracep->declBit(c+16,"arready", false,-1);
    tracep->declBus(c+19,"rdata", false,-1, 31,0);
    tracep->declBus(c+20,"rresp", false,-1, 1,0);
    tracep->declBit(c+21,"rvalid", false,-1);
    tracep->declBit(c+124,"rready", false,-1);
    tracep->declBus(c+119,"awaddr", false,-1, 31,0);
    tracep->declBit(c+120,"awvalid", false,-1);
    tracep->declBit(c+17,"awready", false,-1);
    tracep->declBus(c+121,"wdata", false,-1, 31,0);
    tracep->declBus(c+122,"wstrb", false,-1, 3,0);
    tracep->declBit(c+123,"wvalid", false,-1);
    tracep->declBit(c+18,"wready", false,-1);
    tracep->declBus(c+22,"bresp", false,-1, 1,0);
    tracep->declBit(c+23,"bvalid", false,-1);
    tracep->declBit(c+125,"bready", false,-1);
    tracep->declBus(c+426,"IDLE", false,-1, 0,0);
    tracep->declBus(c+430,"BUSY", false,-1, 0,0);
    tracep->declBit(c+58,"state", false,-1);
    tracep->declBit(c+419,"next_state", false,-1);
    tracep->declBus(c+59,"read_addr", false,-1, 31,0);
    tracep->declBus(c+60,"write_addr", false,-1, 31,0);
    tracep->declBus(c+61,"write_data", false,-1, 31,0);
    tracep->declBus(c+62,"write_strb", false,-1, 3,0);
    tracep->declBit(c+63,"is_read_req", false,-1);
    tracep->declBit(c+64,"is_write_req", false,-1);
    tracep->declBit(c+65,"wvalid_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_cpu ");
    tracep->declBit(c+87,"lsu_valid", false,-1);
    tracep->declBit(c+261,"inst_l", false,-1);
    tracep->declBit(c+260,"inst_s", false,-1);
    tracep->declBit(c+91,"gpr_ready", false,-1);
    tracep->declBit(c+89,"wbu_valid", false,-1);
    tracep->declBit(c+88,"wbu_ready", false,-1);
    tracep->declBit(c+394,"clk", false,-1);
    tracep->declBit(c+395,"rst", false,-1);
    tracep->declBus(c+255,"du_to_wu_bus", false,-1, 8,0);
    tracep->declBus(c+427,"eu_to_wu_bus", false,-1, 31,0);
    tracep->declBus(c+86,"lu_to_wu_bus", false,-1, 31,0);
    tracep->declBus(c+388,"csr_wgpr_data", false,-1, 31,0);
    tracep->declQuad(c+84,"wu_to_gu_bus", false,-1, 32,0);
    tracep->declBus(c+426,"IDLE", false,-1, 0,0);
    tracep->declBus(c+430,"BUSY", false,-1, 0,0);
    tracep->declBit(c+135,"state", false,-1);
    tracep->declBit(c+136,"next_state", false,-1);
    tracep->declBus(c+137,"du_to_wu_bus_r", false,-1, 8,0);
    tracep->declBus(c+138,"lu_to_wu_bus_r", false,-1, 31,0);
    tracep->declBus(c+139,"rstrb", false,-1, 3,0);
    tracep->declBit(c+140,"bit_sext", false,-1);
    tracep->declBit(c+141,"half_sext", false,-1);
    tracep->declBit(c+142,"gpr_we", false,-1);
    tracep->declBit(c+143,"rlsu_we", false,-1);
    tracep->declBit(c+144,"csr_w_gpr_we", false,-1);
    tracep->declBus(c+138,"result", false,-1, 31,0);
    tracep->declBus(c+145,"rdata_processed", false,-1, 31,0);
    tracep->declBit(c+420,"final_gpr_we", false,-1);
    tracep->declBus(c+421,"final_result", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp_hfcb396d7__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25020037__DOT__inst),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25020037__DOT__ifu_araddr),32);
    bufp->fullBit(oldp+3,(vlSelf->ysyx_25020037__DOT__ifu_arvalid));
    bufp->fullBit(oldp+4,(vlSelf->ysyx_25020037__DOT__ifu_arready));
    bufp->fullCData(oldp+5,(vlSelf->ysyx_25020037__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+6,(vlSelf->ysyx_25020037__DOT__ifu_rready));
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25020037__DOT__lsu_bresp),2);
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25020037__DOT__sram_arready));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_25020037__DOT__sram_awready));
    bufp->fullBit(oldp+10,(vlSelf->ysyx_25020037__DOT__sram_wready));
    bufp->fullIData(oldp+11,(vlSelf->ysyx_25020037__DOT__sram_rdata),32);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_25020037__DOT__sram_rresp),2);
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25020037__DOT__sram_rvalid));
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25020037__DOT__sram_bresp),2);
    bufp->fullBit(oldp+15,(vlSelf->ysyx_25020037__DOT__sram_bvalid));
    bufp->fullBit(oldp+16,(vlSelf->ysyx_25020037__DOT__uart_arready));
    bufp->fullBit(oldp+17,(vlSelf->ysyx_25020037__DOT__uart_awready));
    bufp->fullBit(oldp+18,(vlSelf->ysyx_25020037__DOT__uart_wready));
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25020037__DOT__uart_rdata),32);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_25020037__DOT__uart_rresp),2);
    bufp->fullBit(oldp+21,(vlSelf->ysyx_25020037__DOT__uart_rvalid));
    bufp->fullCData(oldp+22,(vlSelf->ysyx_25020037__DOT__uart_bresp),2);
    bufp->fullBit(oldp+23,(vlSelf->ysyx_25020037__DOT__uart_bvalid));
    bufp->fullBit(oldp+24,(vlSelf->ysyx_25020037__DOT__clint_arready));
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25020037__DOT__clint_rdata),32);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_25020037__DOT__clint_rresp),2);
    bufp->fullBit(oldp+27,(vlSelf->ysyx_25020037__DOT__clint_rvalid));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__state));
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__last_pc),32);
    bufp->fullBit(oldp+30,(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_clint_addr));
    bufp->fullBit(oldp+31,(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_uart_addr));
    bufp->fullBit(oldp+32,(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_sram_addr));
    bufp->fullCData(oldp+33,(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master),2);
    bufp->fullBit(oldp+34,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__awready));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__wready));
    bufp->fullCData(oldp+36,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__bresp),2);
    bufp->fullBit(oldp+37,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__bvalid));
    bufp->fullIData(oldp+38,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__mtimel),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__mtimeh),32);
    bufp->fullIData(oldp+40,((vlSelf->ysyx_25020037__DOT__u_clint__DOT__read_addr 
                              - (IData)(0xa0000048U))),32);
    bufp->fullBit(oldp+41,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__state));
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__read_addr),32);
    bufp->fullBit(oldp+43,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__is_read_req));
    bufp->fullBit(oldp+44,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__is_write_req));
    bufp->fullBit(oldp+45,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__wvalid_reg));
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__state));
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__read_addr),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_addr),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_data),32);
    bufp->fullCData(oldp+50,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_strb),4);
    bufp->fullBit(oldp+51,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_read_req));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_write_req));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__wvalid_reg));
    bufp->fullCData(oldp+54,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__lfsr),8);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__delay_count),8);
    bufp->fullCData(oldp+56,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__target_delay),8);
    bufp->fullBit(oldp+57,((1U & VL_REDXOR_8((0xb8U 
                                              & (IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__lfsr))))));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__state));
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__read_addr),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__write_addr),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__write_data),32);
    bufp->fullCData(oldp+62,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__write_strb),4);
    bufp->fullBit(oldp+63,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_read_req));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_write_req));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__wvalid_reg));
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25020037__DOT__mstatus),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_25020037__DOT__mcause),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout),32);
    bufp->fullQData(oldp+84,(vlSelf->ysyx_25020037__DOT__wu_to_gu_bus),33);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_25020037__DOT__lu_to_wu_bus),32);
    bufp->fullBit(oldp+87,(vlSelf->ysyx_25020037__DOT__lsu_valid));
    bufp->fullBit(oldp+88,(vlSelf->ysyx_25020037__DOT__wbu_ready));
    bufp->fullBit(oldp+89,(vlSelf->ysyx_25020037__DOT__wbu_valid));
    bufp->fullBit(oldp+90,(vlSelf->ysyx_25020037__DOT__gpr_valid));
    bufp->fullBit(oldp+91,(vlSelf->ysyx_25020037__DOT__gpr_ready));
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25020037__DOT__lsu_araddr),32);
    bufp->fullBit(oldp+93,(vlSelf->ysyx_25020037__DOT__lsu_arvalid));
    bufp->fullBit(oldp+94,(vlSelf->ysyx_25020037__DOT__lsu_arready));
    bufp->fullIData(oldp+95,(vlSelf->ysyx_25020037__DOT__lsu_awaddr),32);
    bufp->fullBit(oldp+96,(vlSelf->ysyx_25020037__DOT__lsu_awvalid));
    bufp->fullBit(oldp+97,(vlSelf->ysyx_25020037__DOT__lsu_awready));
    bufp->fullIData(oldp+98,(vlSelf->ysyx_25020037__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+99,(vlSelf->ysyx_25020037__DOT__lsu_wstrb),4);
    bufp->fullBit(oldp+100,(vlSelf->ysyx_25020037__DOT__lsu_wvalid));
    bufp->fullBit(oldp+101,(vlSelf->ysyx_25020037__DOT__lsu_wready));
    bufp->fullBit(oldp+102,(vlSelf->ysyx_25020037__DOT__lsu_bvalid));
    bufp->fullBit(oldp+103,(vlSelf->ysyx_25020037__DOT__lsu_bready));
    bufp->fullIData(oldp+104,(vlSelf->ysyx_25020037__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+105,(vlSelf->ysyx_25020037__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+106,(vlSelf->ysyx_25020037__DOT__lsu_rvalid));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_25020037__DOT__lsu_rready));
    bufp->fullIData(oldp+108,(vlSelf->ysyx_25020037__DOT__sram_araddr),32);
    bufp->fullBit(oldp+109,(vlSelf->ysyx_25020037__DOT__sram_arvalid));
    bufp->fullIData(oldp+110,(vlSelf->ysyx_25020037__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+111,(vlSelf->ysyx_25020037__DOT__sram_awvalid));
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25020037__DOT__sram_wdata),32);
    bufp->fullCData(oldp+113,(vlSelf->ysyx_25020037__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+114,(vlSelf->ysyx_25020037__DOT__sram_wvalid));
    bufp->fullBit(oldp+115,(vlSelf->ysyx_25020037__DOT__sram_rready));
    bufp->fullBit(oldp+116,(vlSelf->ysyx_25020037__DOT__sram_bready));
    bufp->fullIData(oldp+117,(vlSelf->ysyx_25020037__DOT__uart_araddr),32);
    bufp->fullBit(oldp+118,(vlSelf->ysyx_25020037__DOT__uart_arvalid));
    bufp->fullIData(oldp+119,(vlSelf->ysyx_25020037__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+120,(vlSelf->ysyx_25020037__DOT__uart_awvalid));
    bufp->fullIData(oldp+121,(vlSelf->ysyx_25020037__DOT__uart_wdata),32);
    bufp->fullCData(oldp+122,(vlSelf->ysyx_25020037__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+123,(vlSelf->ysyx_25020037__DOT__uart_wvalid));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_25020037__DOT__uart_rready));
    bufp->fullBit(oldp+125,(vlSelf->ysyx_25020037__DOT__uart_bready));
    bufp->fullIData(oldp+126,(vlSelf->ysyx_25020037__DOT__clint_araddr),32);
    bufp->fullBit(oldp+127,(vlSelf->ysyx_25020037__DOT__clint_arvalid));
    bufp->fullBit(oldp+128,(vlSelf->ysyx_25020037__DOT__clint_rready));
    bufp->fullBit(oldp+129,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__state));
    bufp->fullQData(oldp+130,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r),33);
    bufp->fullIData(oldp+132,((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r)),32);
    bufp->fullBit(oldp+133,((1U & (IData)((vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__state));
    bufp->fullBit(oldp+135,(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__state));
    bufp->fullBit(oldp+136,(((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__state) 
                                 & (~ ((IData)(vlSelf->ysyx_25020037__DOT__wbu_valid) 
                                       & (IData)(vlSelf->ysyx_25020037__DOT__gpr_ready))))
                              : ((IData)(vlSelf->ysyx_25020037__DOT__lsu_valid) 
                                 & (IData)(vlSelf->ysyx_25020037__DOT__wbu_ready)))));
    bufp->fullSData(oldp+137,(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r),9);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r),32);
    bufp->fullCData(oldp+139,((0xfU & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                       >> 5U))),4);
    bufp->fullBit(oldp+140,((1U & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                   >> 4U))));
    bufp->fullBit(oldp+141,((1U & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                   >> 3U))));
    bufp->fullBit(oldp+142,((1U & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                   >> 2U))));
    bufp->fullBit(oldp+143,((1U & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                   >> 1U))));
    bufp->fullBit(oldp+144,((1U & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))));
    bufp->fullIData(oldp+145,(((1U == (0xfU & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                               >> 5U)))
                                ? ((0x10U & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                       >> 7U)))) 
                                        << 8U) | (0xffU 
                                                  & vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                    : (0xffU & vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                : ((2U == (0xfU & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                   >> 5U)))
                                    ? ((8U & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                        : (0xffffU 
                                           & vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                    : vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))),32);
    bufp->fullQData(oldp+146,(vlSelf->ysyx_25020037__DOT__eu_to_lu_bus),64);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25020037__DOT__dnpc),32);
    bufp->fullBit(oldp+149,(vlSelf->ysyx_25020037__DOT__exu_valid));
    bufp->fullBit(oldp+150,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__state));
    bufp->fullQData(oldp+151,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r),59);
    bufp->fullWData(oldp+153,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r),128);
    bufp->fullIData(oldp+157,((IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                       >> 0x1bU))),32);
    bufp->fullIData(oldp+158,((0x1ffffU & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                   >> 0xaU)))),17);
    bufp->fullBit(oldp+159,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 9U)))));
    bufp->fullBit(oldp+160,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 8U)))));
    bufp->fullBit(oldp+161,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 7U)))));
    bufp->fullBit(oldp+162,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 6U)))));
    bufp->fullBit(oldp+163,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 5U)))));
    bufp->fullBit(oldp+164,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 4U)))));
    bufp->fullBit(oldp+165,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 3U)))));
    bufp->fullBit(oldp+166,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 2U)))));
    bufp->fullBit(oldp+167,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 1U)))));
    bufp->fullBit(oldp+168,((1U & (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r))));
    bufp->fullIData(oldp+169,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result),32);
    bufp->fullIData(oldp+174,(((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 6U)))
                                ? (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                           >> 0x16U))))) 
                                    & (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                              >> 0x19U))))) 
                                       & (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)) 
                                      | ((1U & ((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                       >> 0x1aU))))) 
                                                & (~ (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))) 
                                         | ((1U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                          >> 0x17U))))) 
                                                   & (~ (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                       >> 0x18U))))) 
                                                & (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)) 
                                               | (1U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                            >> 0x15U))))) 
                                                     & (~ (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))))))))
                                : 1U)),32);
    bufp->fullBit(oldp+175,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+176,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+177,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+178,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+179,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+180,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+181,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+182,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+183,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+184,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+185,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+186,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+187,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+188,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+189,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+190,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+191,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                           >> 0x1aU)))));
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0),32);
    bufp->fullIData(oldp+194,((1U & (~ (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))),32);
    bufp->fullIData(oldp+195,((1U & (~ (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1),32);
    bufp->fullIData(oldp+197,((1U & (~ (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d),32);
    bufp->fullBit(oldp+200,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin));
    bufp->fullBit(oldp+201,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1));
    bufp->fullIData(oldp+202,((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                               + (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
                                  + (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)))),32);
    bufp->fullBit(oldp+203,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1));
    bufp->fullIData(oldp+204,((1U & (((~ (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
                                          >> 0x1fU)) 
                                      & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                         >> 0x1fU)) 
                                     | ((~ ((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                             ^ vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                                            >> 0x1fU)) 
                                        & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
                                           >> 0x1fU))))),32);
    bufp->fullIData(oldp+205,((1U & (~ (IData)((1ULL 
                                                & (((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                    + 
                                                    ((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                     + (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                   >> 0x20U)))))),32);
    bufp->fullIData(oldp+206,((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                               & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
    bufp->fullIData(oldp+207,((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                               | vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
    bufp->fullIData(oldp+208,((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                               ^ vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
    bufp->fullIData(oldp+209,((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                               << (0x1fU & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),32);
    bufp->fullQData(oldp+210,(((((QData)((IData)((- (IData)((IData)(
                                                                    ((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                      >> 0x13U) 
                                                                     & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                               >> (0x1fU & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),64);
    bufp->fullIData(oldp+212,((IData)(((((QData)((IData)(
                                                         (- (IData)((IData)(
                                                                            ((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                              >> 0x13U) 
                                                                             & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                       >> (0x1fU & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)))),32);
    bufp->fullBit(oldp+213,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                    + 
                                                    ((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                     + (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                   >> 0x20U))))));
    bufp->fullIData(oldp+214,(vlSelf->ysyx_25020037__DOT__mtvec),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_25020037__DOT__mepc),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[1]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[2]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[3]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[4]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[5]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[6]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[7]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[8]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[9]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[10]),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[11]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[12]),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[13]),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[14]),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[15]),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[16]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[17]),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[18]),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[19]),32);
    bufp->fullIData(oldp+236,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[20]),32);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[21]),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[22]),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[23]),32);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[24]),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[25]),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[26]),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[27]),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[28]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[29]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[30]),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[31]),32);
    bufp->fullBit(oldp+248,((0x6fU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r))));
    bufp->fullBit(oldp+249,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl));
    bufp->fullQData(oldp+250,(vlSelf->ysyx_25020037__DOT__du_to_gu_bus),53);
    bufp->fullQData(oldp+252,(vlSelf->ysyx_25020037__DOT__du_to_eu_bus),59);
    bufp->fullCData(oldp+254,(vlSelf->ysyx_25020037__DOT__du_to_lu_bus),6);
    bufp->fullSData(oldp+255,(vlSelf->ysyx_25020037__DOT__du_to_wu_bus),9);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_25020037__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+257,(vlSelf->ysyx_25020037__DOT__ifu_rvalid));
    bufp->fullBit(oldp+258,(vlSelf->ysyx_25020037__DOT__idu_valid));
    bufp->fullBit(oldp+259,(vlSelf->ysyx_25020037__DOT__idu_ready));
    bufp->fullBit(oldp+260,(vlSelf->ysyx_25020037__DOT__inst_s));
    bufp->fullBit(oldp+261,(vlSelf->ysyx_25020037__DOT__inst_l));
    bufp->fullBit(oldp+262,(vlSelf->ysyx_25020037__DOT__gpr_we));
    bufp->fullIData(oldp+263,((IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                       >> 0x15U))),32);
    bufp->fullCData(oldp+264,((0x1fU & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                >> 0x10U)))),5);
    bufp->fullCData(oldp+265,((0x1fU & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                >> 0xbU)))),5);
    bufp->fullCData(oldp+266,((0x1fU & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                >> 6U)))),5);
    bufp->fullBit(oldp+267,((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                           >> 5U)))));
    bufp->fullBit(oldp+268,((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                           >> 4U)))));
    bufp->fullBit(oldp+269,((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                           >> 3U)))));
    bufp->fullBit(oldp+270,((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                           >> 2U)))));
    bufp->fullBit(oldp+271,((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                           >> 1U)))));
    bufp->fullBit(oldp+272,((1U & (IData)(vlSelf->ysyx_25020037__DOT__du_to_gu_bus))));
    bufp->fullBit(oldp+273,((IData)((0ULL != (0x12ULL 
                                              & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+274,((IData)((0ULL != (6ULL 
                                              & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+275,((IData)((0ULL != (0xbULL 
                                              & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+276,(((IData)((0ULL != (6ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus))) 
                             & (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
    bufp->fullBit(oldp+277,(((IData)((0ULL != (0x12ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus))) 
                             & (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
    bufp->fullBit(oldp+278,(((IData)((0ULL != (0xbULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus))) 
                             & (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
    bufp->fullBit(oldp+279,(((IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                      >> 5U)) & (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
    bufp->fullBit(oldp+280,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0ULL == (0x1f0000ULL 
                                         & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+281,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0xa0000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+282,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0xb0000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+283,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0xc0000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+284,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0xd0000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+285,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0xe0000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+286,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0xf0000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+287,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x10000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+288,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x20000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+289,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x30000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+290,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x40000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+291,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x50000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+292,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x60000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+293,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x70000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+294,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x80000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+295,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                             & (0x90000ULL == (0x1f0000ULL 
                                               & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
    bufp->fullBit(oldp+296,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__state));
    bufp->fullIData(oldp+297,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r),32);
    bufp->fullCData(oldp+298,((0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+299,((0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+300,((0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                        >> 7U))),5);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm),32);
    bufp->fullIData(oldp+302,((((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bltu) 
                                << 0x10U) | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_blt) 
                                              << 0xfU) 
                                             | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bgeu) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bge) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_beq) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bne) 
                                                          << 0xbU) 
                                                         | (((0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                             << 0xaU) 
                                                            | ((((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srai) 
                                                                 | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sra)) 
                                                                << 9U) 
                                                               | ((((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srli) 
                                                                    | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srl)) 
                                                                   << 8U) 
                                                                  | ((((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_slli) 
                                                                       | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sll)) 
                                                                      << 7U) 
                                                                     | ((((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_xor) 
                                                                          | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_xori)) 
                                                                         << 6U) 
                                                                        | ((((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_or) 
                                                                             | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_ori)) 
                                                                            << 5U) 
                                                                           | ((((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_and) 
                                                                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_andi)) 
                                                                               << 4U) 
                                                                              | ((((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sltu) 
                                                                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sltiu)) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_slt) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sub) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                | ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__half_sext) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lhu) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sh) 
                                                                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__bit_sext)))))))))))))))))))))))))))))),17);
    bufp->fullBit(oldp+303,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_R) 
                             | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi) 
                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
                                   | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sltiu) 
                                      | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srai) 
                                         | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_andi) 
                                            | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_xori) 
                                               | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srli) 
                                                  | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_slli) 
                                                     | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_ori) 
                                                        | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csrrw_op) 
                                                           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csrrs_op) 
                                                              | ((0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                 | ((0x17U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                    | ((0x37U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                       | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rlsu_we))))))))))))))))));
    bufp->fullBit(oldp+304,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rlsu_we));
    bufp->fullBit(oldp+305,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__wlsu_we));
    bufp->fullBit(oldp+306,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__bit_sext));
    bufp->fullBit(oldp+307,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__half_sext));
    bufp->fullCData(oldp+308,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rstrb),4);
    bufp->fullBit(oldp+309,(((0x6fU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                             | ((0x17U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal)))));
    bufp->fullBit(oldp+310,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                             | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sh) 
                                   | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                                      | ((0x37U == 
                                          (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                         | ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                               | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal) 
                                                  | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl)))))))))));
    bufp->fullBit(oldp+311,(((0x6fU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                             | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal) 
                                   | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0))))));
    bufp->fullBit(oldp+312,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal));
    bufp->fullBit(oldp+313,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ebreak));
    bufp->fullBit(oldp+314,((1U & (~ ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal) 
                                      | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                                         | ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                            | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ebreak) 
                                                | (IData)(
                                                          ((0U 
                                                            == 
                                                            (0xfffffU 
                                                             & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                           & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))) 
                                               | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_R) 
                                                  | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__wlsu_we) 
                                                     | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_U) 
                                                        | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_W) 
                                                           | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0)))))))))))));
    bufp->fullBit(oldp+315,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csr_w_gpr_we));
    bufp->fullBit(oldp+316,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csrrw_op));
    bufp->fullBit(oldp+317,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csrrs_op));
    bufp->fullBit(oldp+318,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ecall_en));
    bufp->fullBit(oldp+319,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__mret_en));
    bufp->fullBit(oldp+320,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op));
    bufp->fullBit(oldp+321,(((0x305U == vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm) 
                             & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+322,(((0x341U == vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm) 
                             & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+323,(((0x300U == vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm) 
                             & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullBit(oldp+324,(((0x342U == vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm) 
                             & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op))));
    bufp->fullCData(oldp+325,((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+326,((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                               >> 0x1aU)),6);
    bufp->fullCData(oldp+327,((7U & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+328,((0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)),7);
    bufp->fullIData(oldp+329,((((- (IData)((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+330,((((- (IData)((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+331,((((- (IData)((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+332,((0xfffff000U & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)),32);
    bufp->fullIData(oldp+333,((((- (IData)((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                      >> 0x14U)))))),32);
    bufp->fullWData(oldp+334,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_25_d),128);
    bufp->fullQData(oldp+338,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_26_d),64);
    bufp->fullCData(oldp+340,((((7U == (7U & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                              >> 0xcU))) 
                                << 7U) | (((6U == (7U 
                                                   & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                      >> 0xcU))) 
                                           << 6U) | 
                                          (((5U == 
                                             (7U & 
                                              (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                               >> 0xcU))) 
                                            << 5U) 
                                           | (((4U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0xcU))) 
                                               << 4U) 
                                              | (((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0xcU))) 
                                                  << 3U) 
                                                 | (((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0xcU))) 
                                                     << 2U) 
                                                    | (((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0xcU))) 
                                                        << 1U) 
                                                       | (0U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0xcU))))))))))),8);
    bufp->fullWData(oldp+341,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_06_00_d),128);
    bufp->fullIData(oldp+345,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs1_d),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs2_d),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rd_d),32);
    bufp->fullBit(oldp+348,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                             | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__bit_sext)))));
    bufp->fullBit(oldp+349,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sh) 
                             | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__half_sext) 
                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lhu)))));
    bufp->fullBit(oldp+350,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                             | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw))));
    bufp->fullBit(oldp+351,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add));
    bufp->fullBit(oldp+352,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_and));
    bufp->fullBit(oldp+353,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_or));
    bufp->fullBit(oldp+354,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_ori));
    bufp->fullBit(oldp+355,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_xor));
    bufp->fullBit(oldp+356,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_xori));
    bufp->fullBit(oldp+357,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sub));
    bufp->fullBit(oldp+358,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_slt));
    bufp->fullBit(oldp+359,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sltu));
    bufp->fullBit(oldp+360,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi));
    bufp->fullBit(oldp+361,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_andi));
    bufp->fullBit(oldp+362,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu));
    bufp->fullBit(oldp+363,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lhu));
    bufp->fullBit(oldp+364,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw));
    bufp->fullBit(oldp+365,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sll));
    bufp->fullBit(oldp+366,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_slli));
    bufp->fullBit(oldp+367,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sltiu));
    bufp->fullBit(oldp+368,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sra));
    bufp->fullBit(oldp+369,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srai));
    bufp->fullBit(oldp+370,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srl));
    bufp->fullBit(oldp+371,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srli));
    bufp->fullBit(oldp+372,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb));
    bufp->fullBit(oldp+373,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sh));
    bufp->fullBit(oldp+374,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw));
    bufp->fullBit(oldp+375,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_beq));
    bufp->fullBit(oldp+376,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bne));
    bufp->fullBit(oldp+377,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bge));
    bufp->fullBit(oldp+378,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bgeu));
    bufp->fullBit(oldp+379,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_blt));
    bufp->fullBit(oldp+380,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bltu));
    bufp->fullBit(oldp+381,((0x17U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r))));
    bufp->fullBit(oldp+382,((0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r))));
    bufp->fullBit(oldp+383,((IData)(((0U == (0xfffffU 
                                             & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                     & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))));
    bufp->fullBit(oldp+384,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_R));
    bufp->fullBit(oldp+385,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I));
    bufp->fullBit(oldp+386,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_U));
    bufp->fullBit(oldp+387,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ebreak) 
                             | (IData)(((0U == (0xfffffU 
                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                        & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0))))));
    bufp->fullIData(oldp+388,(vlSelf->ysyx_25020037__DOT__csr_wgpr_data),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyx_25020037__DOT__csr_wcsr_data),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__src1),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result),32);
    bufp->fullBit(oldp+394,(vlSelf->clock));
    bufp->fullBit(oldp+395,(vlSelf->reset));
    bufp->fullBit(oldp+396,(vlSelf->io_interrupt));
    __Vtemp_hfcb396d7__0[0U] = vlSelf->ysyx_25020037__DOT__mepc;
    __Vtemp_hfcb396d7__0[1U] = vlSelf->ysyx_25020037__DOT__mtvec;
    __Vtemp_hfcb396d7__0[2U] = (IData)((((QData)((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__src1)) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
                                                          [
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                                      >> 6U)))]))));
    __Vtemp_hfcb396d7__0[3U] = (IData)(((((QData)((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__src1)) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
                                                           [
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                                       >> 6U)))]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+397,(__Vtemp_hfcb396d7__0),128);
    bufp->fullIData(oldp+401,(vlSelf->ysyx_25020037__DOT__pc),32);
    bufp->fullBit(oldp+402,(vlSelf->ysyx_25020037__DOT__exu_ready));
    bufp->fullBit(oldp+403,(vlSelf->ysyx_25020037__DOT__lsu_ready));
    bufp->fullBit(oldp+404,(((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__state) 
                                 & (~ ((IData)(vlSelf->ysyx_25020037__DOT__exu_valid) 
                                       & (IData)(vlSelf->ysyx_25020037__DOT__lsu_ready))))
                              : ((IData)(vlSelf->ysyx_25020037__DOT__idu_valid) 
                                 & (IData)(vlSelf->ysyx_25020037__DOT__exu_ready)))));
    bufp->fullIData(oldp+405,(((IData)(4U) + vlSelf->ysyx_25020037__DOT__pc)),32);
    bufp->fullIData(oldp+406,(((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 3U)))
                                ? vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U]
                                : ((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                  >> 2U)))
                                    ? vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U]
                                    : ((1U & (IData)(
                                                     (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                      >> 7U)))
                                        ? ((1U == (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                               >> 6U)))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                            >> 0x16U))))) 
                                                     & (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)) 
                                                    | (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                               >> 0x19U))))) 
                                                        & (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)) 
                                                       | ((1U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x1aU))))) 
                                                              & (~ (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))) 
                                                          | ((1U 
                                                              & ((- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x17U))))) 
                                                                 & (~ (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))) 
                                                             | (((- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x18U))))) 
                                                                 & (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)) 
                                                                | (1U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x15U))))) 
                                                                      & (~ (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))))))))
                                                    : 1U))
                                            ? vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1
                                            : ((IData)(4U) 
                                               + vlSelf->ysyx_25020037__DOT__pc))
                                        : ((IData)(4U) 
                                           + vlSelf->ysyx_25020037__DOT__pc))))),32);
    bufp->fullIData(oldp+407,(((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 7U)))
                                ? ((IData)(4U) + vlSelf->ysyx_25020037__DOT__pc)
                                : vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1)),32);
    bufp->fullBit(oldp+408,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__state) 
                                 & (~ ((IData)(vlSelf->ysyx_25020037__DOT__gpr_valid) 
                                       & (IData)(vlSelf->ysyx_25020037__DOT__exu_ready))))
                              : (((IData)(vlSelf->ysyx_25020037__DOT__wbu_valid) 
                                  | (IData)(vlSelf->ysyx_25020037__DOT__idu_valid)) 
                                 & (IData)(vlSelf->ysyx_25020037__DOT__gpr_ready)))));
    bufp->fullIData(oldp+409,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
                              [(0x1fU & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                 >> 6U)))]),32);
    bufp->fullIData(oldp+410,(((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                              >> 1U)))
                                ? (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                           >> 0x15U))
                                : vlSelf->ysyx_25020037__DOT__csr_wcsr_data)),32);
    bufp->fullIData(oldp+411,(((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                              >> 1U)))
                                ? 0xbU : vlSelf->ysyx_25020037__DOT__csr_wcsr_data)),32);
    bufp->fullIData(oldp+412,(((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                              >> 1U)))
                                ? 0x1800U : ((1U & (IData)(vlSelf->ysyx_25020037__DOT__du_to_gu_bus))
                                              ? (0xffffe7ffU 
                                                 & (0x80U 
                                                    | ((0xfffffff7U 
                                                        & vlSelf->ysyx_25020037__DOT__mstatus) 
                                                       | (8U 
                                                          & (vlSelf->ysyx_25020037__DOT__mstatus 
                                                             >> 4U)))))
                                              : vlSelf->ysyx_25020037__DOT__csr_wcsr_data))),32);
    bufp->fullBit(oldp+413,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__state) 
                                 & (~ ((IData)(vlSelf->ysyx_25020037__DOT__idu_valid) 
                                       & (IData)(vlSelf->ysyx_25020037__DOT__exu_ready))))
                              : ((IData)(vlSelf->ysyx_25020037__DOT__ifu_rvalid) 
                                 & (IData)(vlSelf->ysyx_25020037__DOT__idu_ready)))));
    bufp->fullBit(oldp+414,(((IData)(vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__state) 
                                 & (~ ((IData)(vlSelf->ysyx_25020037__DOT__ifu_rvalid) 
                                       & (IData)(vlSelf->ysyx_25020037__DOT__ifu_rready))))
                              : (vlSelf->ysyx_25020037__DOT__pc 
                                 != vlSelf->ysyx_25020037__DOT__ifu_araddr))));
    bufp->fullBit(oldp+415,(((IData)(vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__state) 
                                 & (~ ((IData)(vlSelf->ysyx_25020037__DOT__lsu_valid) 
                                       & (IData)(vlSelf->ysyx_25020037__DOT__wbu_ready))))
                              : ((IData)(vlSelf->ysyx_25020037__DOT__lsu_ready) 
                                 & (IData)(vlSelf->ysyx_25020037__DOT__exu_valid)))));
    bufp->fullCData(oldp+416,(((0U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))
                                ? (((IData)(vlSelf->ysyx_25020037__DOT__lsu_arvalid) 
                                    | (IData)(vlSelf->ysyx_25020037__DOT__lsu_awvalid))
                                    ? 2U : ((IData)(vlSelf->ysyx_25020037__DOT__ifu_arvalid)
                                             ? 1U : 0U))
                                : ((1U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))
                                    ? (((IData)(vlSelf->ysyx_25020037__DOT__sram_rvalid) 
                                        & (IData)(vlSelf->ysyx_25020037__DOT__sram_rready))
                                        ? 0U : 1U) : 
                                   ((2U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))
                                     ? ((((((IData)(vlSelf->ysyx_25020037__DOT__sram_rvalid) 
                                            & (IData)(vlSelf->ysyx_25020037__DOT__sram_rready)) 
                                           | ((IData)(vlSelf->ysyx_25020037__DOT__sram_bvalid) 
                                              & (IData)(vlSelf->ysyx_25020037__DOT__sram_bready))) 
                                          | (((IData)(vlSelf->ysyx_25020037__DOT__uart_rvalid) 
                                              & (IData)(vlSelf->ysyx_25020037__DOT__uart_rready)) 
                                             | ((IData)(vlSelf->ysyx_25020037__DOT__uart_bvalid) 
                                                & (IData)(vlSelf->ysyx_25020037__DOT__uart_bready)))) 
                                         | ((IData)(vlSelf->ysyx_25020037__DOT__clint_rvalid) 
                                            & (IData)(vlSelf->ysyx_25020037__DOT__clint_rready)))
                                         ? 0U : 2U)
                                     : 0U)))),2);
    bufp->fullBit(oldp+417,(((IData)(vlSelf->ysyx_25020037__DOT__u_clint__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037__DOT__u_clint__DOT__state) 
                                 & (~ (((IData)(vlSelf->ysyx_25020037__DOT__u_clint__DOT__is_read_req) 
                                        & (IData)(vlSelf->ysyx_25020037__DOT__clint_rready)) 
                                       & (IData)(vlSelf->ysyx_25020037__DOT__clint_rvalid))))
                              : (IData)(vlSelf->ysyx_25020037__DOT__clint_arvalid))));
    bufp->fullBit(oldp+418,(((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__state) 
                                 & (~ ((((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_read_req) 
                                         & (IData)(vlSelf->ysyx_25020037__DOT__sram_rready)) 
                                        & (IData)(vlSelf->ysyx_25020037__DOT__sram_rvalid)) 
                                       | (((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_write_req) 
                                           & (IData)(vlSelf->ysyx_25020037__DOT__sram_bready)) 
                                          & (IData)(vlSelf->ysyx_25020037__DOT__sram_bvalid)))))
                              : ((IData)(vlSelf->ysyx_25020037__DOT__sram_arvalid) 
                                 | (IData)(vlSelf->ysyx_25020037__DOT__sram_awvalid)))));
    bufp->fullBit(oldp+419,(((IData)(vlSelf->ysyx_25020037__DOT__u_uart__DOT__state)
                              ? ((IData)(vlSelf->ysyx_25020037__DOT__u_uart__DOT__state) 
                                 & (~ ((((IData)(vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_read_req) 
                                         & (IData)(vlSelf->ysyx_25020037__DOT__uart_rready)) 
                                        & (IData)(vlSelf->ysyx_25020037__DOT__uart_rvalid)) 
                                       | (((IData)(vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_write_req) 
                                           & (IData)(vlSelf->ysyx_25020037__DOT__uart_bready)) 
                                          & (IData)(vlSelf->ysyx_25020037__DOT__uart_bvalid)))))
                              : ((IData)(vlSelf->ysyx_25020037__DOT__uart_arvalid) 
                                 | (IData)(vlSelf->ysyx_25020037__DOT__uart_awvalid)))));
    bufp->fullBit(oldp+420,(((~ (IData)(vlSelf->reset)) 
                             & (0U != (6U & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))))));
    bufp->fullIData(oldp+421,(((IData)(vlSelf->reset)
                                ? 0U : ((1U & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                         ? vlSelf->ysyx_25020037__DOT__csr_wgpr_data
                                         : ((1U == 
                                             (0xfU 
                                              & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                 >> 5U)))
                                             ? ((0x10U 
                                                 & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                                 : 
                                                (0xffU 
                                                 & vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                             : ((2U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                     >> 5U)))
                                                 ? 
                                                ((8U 
                                                  & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                                  : 
                                                 (0xffffU 
                                                  & vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                                 : vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))))),32);
    bufp->fullIData(oldp+422,(0x300U),32);
    bufp->fullIData(oldp+423,(0x305U),32);
    bufp->fullIData(oldp+424,(0x341U),32);
    bufp->fullIData(oldp+425,(0x342U),32);
    bufp->fullBit(oldp+426,(0U));
    bufp->fullIData(oldp+427,(vlSelf->ysyx_25020037__DOT__eu_to_wu_bus),32);
    bufp->fullIData(oldp+428,(0x20U),32);
    bufp->fullIData(oldp+429,(0x80000000U),32);
    bufp->fullBit(oldp+430,(1U));
    bufp->fullIData(oldp+431,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__aupic_result),32);
    bufp->fullIData(oldp+432,(0U),32);
    bufp->fullIData(oldp+433,(0x1800U),32);
    bufp->fullBit(oldp+434,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_W));
    bufp->fullQData(oldp+435,(vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__eu_to_lu_bus_r),64);
    bufp->fullIData(oldp+437,(0x8fffffffU),32);
    bufp->fullIData(oldp+438,(0xa00003f8U),32);
    bufp->fullIData(oldp+439,(0xa0000048U),32);
    bufp->fullCData(oldp+440,(0U),2);
    bufp->fullCData(oldp+441,(1U),2);
    bufp->fullCData(oldp+442,(2U),2);
    bufp->fullBit(oldp+443,(0U));
    bufp->fullCData(oldp+444,(0U),4);
    bufp->fullIData(oldp+445,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__write_addr),32);
    bufp->fullIData(oldp+446,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__write_data),32);
    bufp->fullCData(oldp+447,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__write_strb),4);
}
