// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25020037_cpu.h for the primary calling header

#ifndef VERILATED_VYSYX_25020037_CPU___024ROOT_H_
#define VERILATED_VYSYX_25020037_CPU___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_25020037_cpu__Syms;

class Vysyx_25020037_cpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ ysyx_25020037_cpu__DOT__ftrace_jalr;
        CData/*5:0*/ ysyx_25020037_cpu__DOT__du_to_lu_bus;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__ifu_arvalid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__ifu_arready;
        CData/*1:0*/ ysyx_25020037_cpu__DOT__ifu_rresp;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__ifu_rvalid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__ifu_rready;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_valid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_ready;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_valid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_ready;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_valid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_ready;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__wbu_ready;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__wbu_valid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__gpr_valid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__gpr_ready;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_arvalid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_arready;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_awvalid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_awready;
        CData/*3:0*/ ysyx_25020037_cpu__DOT__lsu_wstrb;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_wvalid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_wready;
        CData/*1:0*/ ysyx_25020037_cpu__DOT__lsu_bresp;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_bvalid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_bready;
        CData/*1:0*/ ysyx_25020037_cpu__DOT__lsu_rresp;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_rvalid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_rready;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__sram_arvalid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__sram_arready;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__sram_awvalid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__sram_awready;
        CData/*3:0*/ ysyx_25020037_cpu__DOT__sram_wstrb;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__sram_wvalid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__sram_wready;
        CData/*1:0*/ ysyx_25020037_cpu__DOT__sram_rresp;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__sram_rvalid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__sram_rready;
        CData/*1:0*/ ysyx_25020037_cpu__DOT__sram_bresp;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__sram_bvalid;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__sram_bready;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__inst_s;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__inst_l;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__gpr_we;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT__state;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT__next_state;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__ifu_cpu__DOT__state;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__ifu_cpu__DOT__next_state;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__state;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__next_state;
        CData/*4:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1;
        CData/*4:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2;
        CData/*4:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__gpr_we_r;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__rlsu_we;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__wlsu_we;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__bit_sext;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__half_sext;
    };
    struct {
        CData/*3:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__rstrb;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__src1_is_pc;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__src2_is_imm;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_pc_jump;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__ebreak;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_not_realize;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__csr_w_gpr_we;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrw_op;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrs_op;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__ecall_en;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__mret_en;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_csr_op;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sub;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slt;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltiu;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srai;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_beq;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bne;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bge;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bgeu;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_blt;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bltu;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_R;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_U;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_W;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h6b17a27c__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__state;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__next_state;
        CData/*1:0*/ ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master;
        CData/*1:0*/ ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__next_master;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__u_sram__DOT__state;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__u_sram__DOT__next_state;
        CData/*3:0*/ ysyx_25020037_cpu__DOT__u_sram__DOT__write_strb;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__u_sram__DOT__is_read_req;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__u_sram__DOT__is_write_req;
        CData/*7:0*/ ysyx_25020037_cpu__DOT__u_sram__DOT__lfsr;
        CData/*7:0*/ ysyx_25020037_cpu__DOT__u_sram__DOT__delay_count;
    };
    struct {
        CData/*7:0*/ ysyx_25020037_cpu__DOT__u_sram__DOT__target_delay;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__u_sram__DOT__lfsr_tap;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__state;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__next_state;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__wbu_cpu__DOT__state;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__wbu_cpu__DOT__next_state;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__wbu_cpu__DOT__final_gpr_we;
        CData/*0:0*/ __Vdly__ysyx_25020037_cpu__DOT__gpr_ready;
        CData/*0:0*/ __Vdly__ysyx_25020037_cpu__DOT__idu_ready;
        CData/*0:0*/ __Vdly__ysyx_25020037_cpu__DOT__lsu_ready;
        CData/*0:0*/ __Vdly__ysyx_25020037_cpu__DOT__lsu_arvalid;
        CData/*0:0*/ __Vdly__ysyx_25020037_cpu__DOT__lsu_rready;
        CData/*0:0*/ __Vdly__ysyx_25020037_cpu__DOT__lsu_awvalid;
        CData/*0:0*/ __Vdly__ysyx_25020037_cpu__DOT__lsu_bready;
        CData/*0:0*/ __Vdly__ysyx_25020037_cpu__DOT__exu_ready;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__rst;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ ysyx_25020037_cpu__DOT__du_to_wu_bus;
        SData/*8:0*/ ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r;
        SData/*8:0*/ __Vtableidx1;
        VL_OUT(inst,31,0);
        VL_OUT(pc,31,0);
        VL_OUT(mtvec,31,0);
        VL_OUT(mepc,31,0);
        VL_OUT(mstatus,31,0);
        VL_OUT(mcause,31,0);
        IData/*31:0*/ ysyx_25020037_cpu__DOT__lu_to_wu_bus;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__eu_to_wu_bus;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__dnpc;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__ifu_araddr;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__ifu_rdata;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_araddr;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_awaddr;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_wdata;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_rdata;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__sram_araddr;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__sram_awaddr;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__sram_wdata;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__sram_rdata;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__csr_wgpr_data;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__csr_wcsr_data;
        IData/*31:0*/ ysyx_25020037_cpu__DOT____VdfgTmp_h53724e58__0;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT__mstatus_data;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout;
    };
    struct {
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__ifu_cpu__DOT__last_pc;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__imm;
        IData/*16:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__alu_op;
        VlWide<4>/*127:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d;
        VlWide<4>/*127:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1_d;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2_d;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd_d;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__u_sram__DOT__read_addr;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__u_sram__DOT__write_addr;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__u_sram__DOT__write_data;
        VlWide<4>/*127:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__src2;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__dnpc_r;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__result;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_result1;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__aupic_result;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__wbu_cpu__DOT__final_result;
        IData/*31:0*/ __Vdly__pc;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_25020037_cpu__DOT__eu_to_lu_bus;
        QData/*32:0*/ ysyx_25020037_cpu__DOT__wu_to_gu_bus;
        QData/*52:0*/ ysyx_25020037_cpu__DOT__du_to_gu_bus;
        QData/*58:0*/ ysyx_25020037_cpu__DOT__du_to_eu_bus;
        QData/*32:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT__wu_to_gu_bus_r;
        QData/*63:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_26_d;
        QData/*63:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__eu_to_lu_bus_r;
        QData/*58:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r;
        VL_OUT(regs[32],31,0);
        VlUnpacked<IData/*31:0*/, 32> ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs;
        VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25020037_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25020037_cpu___024root(Vysyx_25020037_cpu__Syms* symsp, const char* v__name);
    ~Vysyx_25020037_cpu___024root();
    VL_UNCOPYABLE(Vysyx_25020037_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
