// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25020037_cpu__Syms.h"


void Vysyx_25020037_cpu___024root__trace_chg_sub_0(Vysyx_25020037_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_25020037_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_25020037_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25020037_cpu___024root*>(voidSelf);
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25020037_cpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25020037_cpu___024root__trace_chg_sub_0(Vysyx_25020037_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr));
        bufp->chgIData(oldp+1,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_c),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_25020037_cpu__DOT__src2),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_25020037_cpu__DOT__imm),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_25020037_cpu__DOT__rlsu_addr),32);
        bufp->chgIData(oldp+5,(((1U & (- (IData)(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu) 
                                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                                     | (IData)(vlSelf->ysyx_25020037_cpu__DOT__bit_sext)))))) 
                                | ((2U & (- (IData)(
                                                    ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__half_sext) 
                                                        | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu)))))) 
                                   | (4U & (- (IData)(
                                                      ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                                                       | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw)))))))),32);
        bufp->chgIData(oldp+6,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__half_sext)
                                 ? (((- (IData)((1U 
                                                 & (vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data 
                                                    >> 0xfU)))) 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data))
                                 : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__bit_sext)
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data 
                                                        >> 7U)))) 
                                         << 8U) | (0xffU 
                                                   & vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data))
                                     : vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data))),32);
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we));
        bufp->chgBit(oldp+8,(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we));
        bufp->chgBit(oldp+9,(vlSelf->ysyx_25020037_cpu__DOT__bit_sext));
        bufp->chgBit(oldp+10,(vlSelf->ysyx_25020037_cpu__DOT__half_sext));
        bufp->chgBit(oldp+11,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu) 
                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                  | (IData)(vlSelf->ysyx_25020037_cpu__DOT__bit_sext)))));
        bufp->chgBit(oldp+12,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__half_sext) 
                                  | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu)))));
        bufp->chgBit(oldp+13,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw))));
        bufp->chgBit(oldp+14,(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump));
        bufp->chgBit(oldp+15,(vlSelf->ysyx_25020037_cpu__DOT__double_cal));
        bufp->chgBit(oldp+16,(vlSelf->ysyx_25020037_cpu__DOT__csr_w_gpr_we));
        bufp->chgIData(oldp+17,(vlSelf->ysyx_25020037_cpu__DOT__csr_wgpr_data),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data),32);
        bufp->chgBit(oldp+19,(((0x305U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                               & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op))));
        bufp->chgBit(oldp+20,(((0x341U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                               & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op))));
        bufp->chgBit(oldp+21,(((0x300U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                               & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op))));
        bufp->chgBit(oldp+22,(((0x342U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                               & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op))));
        bufp->chgBit(oldp+23,(vlSelf->ysyx_25020037_cpu__DOT__csrrw_op));
        bufp->chgBit(oldp+24,(vlSelf->ysyx_25020037_cpu__DOT__csrrs_op));
        bufp->chgBit(oldp+25,(vlSelf->ysyx_25020037_cpu__DOT__ecall_en));
        bufp->chgBit(oldp+26,(vlSelf->ysyx_25020037_cpu__DOT__mret_en));
        bufp->chgBit(oldp+27,(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op));
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25020037_cpu__DOT__final_result),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_result1),32);
        bufp->chgIData(oldp+32,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__double_cal)
                                  ? (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_beq))) 
                                      & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)) 
                                     | (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_blt))) 
                                         & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)) 
                                        | ((1U & ((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bltu))) 
                                                  & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))) 
                                           | ((1U & 
                                               ((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bge))) 
                                                & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))) 
                                              | (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bgeu))) 
                                                  & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)) 
                                                 | (1U 
                                                    & ((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bne))) 
                                                       & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))))))))
                                  : 1U)),32);
        bufp->chgBit(oldp+33,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub));
        bufp->chgBit(oldp+34,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt));
        bufp->chgBit(oldp+35,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu));
        bufp->chgBit(oldp+36,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and) 
                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi))));
        bufp->chgBit(oldp+37,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or) 
                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori))));
        bufp->chgBit(oldp+38,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor) 
                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori))));
        bufp->chgBit(oldp+39,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli) 
                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll))));
        bufp->chgBit(oldp+40,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli) 
                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl))));
        bufp->chgBit(oldp+41,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra));
        bufp->chgBit(oldp+42,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bne));
        bufp->chgBit(oldp+43,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_beq));
        bufp->chgBit(oldp+44,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bge));
        bufp->chgBit(oldp+45,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bgeu));
        bufp->chgBit(oldp+46,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_blt));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bltu));
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result),32);
        bufp->chgIData(oldp+49,((1U & (((~ (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
                                            >> 0x1fU)) 
                                        & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                           >> 0x1fU)) 
                                       | ((~ ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                               ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                                              >> 0x1fU)) 
                                          & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
                                             >> 0x1fU))))),32);
        bufp->chgIData(oldp+50,((1U & (~ (IData)((1ULL 
                                                  & (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                      + 
                                                      ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                       + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                     >> 0x20U)))))),32);
        bufp->chgIData(oldp+51,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                 & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
        bufp->chgIData(oldp+52,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                 | vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
        bufp->chgIData(oldp+53,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                 ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
        bufp->chgIData(oldp+54,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                 << (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),32);
        bufp->chgQData(oldp+55,(((((QData)((IData)(
                                                   (- (IData)(
                                                              ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                                               & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                  >> 0x1fU)))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                 >> (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),64);
        bufp->chgIData(oldp+57,((IData)(((((QData)((IData)(
                                                           (- (IData)(
                                                                      ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                                                       & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                          >> 0x1fU)))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                         >> (0x1fU 
                                             & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)))),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0),32);
        bufp->chgIData(oldp+60,((1U & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))),32);
        bufp->chgIData(oldp+61,((1U & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1),32);
        bufp->chgIData(oldp+63,((1U & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d),32);
        bufp->chgBit(oldp+66,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin));
        bufp->chgBit(oldp+67,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1));
        bufp->chgIData(oldp+68,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_c 
                                 + (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
                                    + (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)))),32);
        bufp->chgBit(oldp+69,((1U & (IData)((1ULL & 
                                             (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                               + ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                  + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                              >> 0x20U))))));
        bufp->chgBit(oldp+70,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1));
        bufp->chgBit(oldp+71,((((0x341U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op)) 
                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en))));
        bufp->chgBit(oldp+72,((((0x342U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op)) 
                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en))));
        bufp->chgBit(oldp+73,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en) 
                               | (((0x300U == vlSelf->ysyx_25020037_cpu__DOT__imm) 
                                   & (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_csr_op)) 
                                  | (IData)(vlSelf->ysyx_25020037_cpu__DOT__mret_en)))));
        bufp->chgIData(oldp+74,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en)
                                  ? 0xbU : vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data)),32);
        bufp->chgWData(oldp+75,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d),128);
        bufp->chgQData(oldp+79,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_26_d),64);
        bufp->chgWData(oldp+81,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d),128);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1_d),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2_d),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd_d),32);
        bufp->chgBit(oldp+88,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add));
        bufp->chgBit(oldp+89,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and));
        bufp->chgBit(oldp+90,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or));
        bufp->chgBit(oldp+91,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori));
        bufp->chgBit(oldp+92,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor));
        bufp->chgBit(oldp+93,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori));
        bufp->chgBit(oldp+94,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu));
        bufp->chgBit(oldp+95,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi));
        bufp->chgBit(oldp+96,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi));
        bufp->chgBit(oldp+97,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu));
        bufp->chgBit(oldp+98,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu));
        bufp->chgBit(oldp+99,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw));
        bufp->chgBit(oldp+100,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll));
        bufp->chgBit(oldp+101,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli));
        bufp->chgBit(oldp+102,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltiu));
        bufp->chgBit(oldp+103,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra));
        bufp->chgBit(oldp+104,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srai));
        bufp->chgBit(oldp+105,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl));
        bufp->chgBit(oldp+106,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli));
        bufp->chgBit(oldp+107,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb));
        bufp->chgBit(oldp+108,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh));
        bufp->chgBit(oldp+109,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw));
        bufp->chgBit(oldp+110,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or) 
                                         | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor) 
                                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra) 
                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl) 
                                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu) 
                                                        | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll))))))))))));
        bufp->chgBit(oldp+111,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I));
        bufp->chgBit(oldp+112,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_U));
        bufp->chgIData(oldp+113,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data),32);
        bufp->chgIData(oldp+114,((((- (IData)((1U & 
                                               (vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data 
                                                >> 0xfU)))) 
                                   << 0x10U) | (0xffffU 
                                                & vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data))),32);
        bufp->chgIData(oldp+115,((((- (IData)((1U & 
                                               (vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__rlsu_temp_data))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+116,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0]),32);
        bufp->chgIData(oldp+117,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[1]),32);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[2]),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[3]),32);
        bufp->chgIData(oldp+120,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[4]),32);
        bufp->chgIData(oldp+121,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[5]),32);
        bufp->chgIData(oldp+122,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[6]),32);
        bufp->chgIData(oldp+123,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[7]),32);
        bufp->chgIData(oldp+124,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[8]),32);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[9]),32);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[10]),32);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[11]),32);
        bufp->chgIData(oldp+128,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[12]),32);
        bufp->chgIData(oldp+129,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[13]),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[14]),32);
        bufp->chgIData(oldp+131,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[15]),32);
        bufp->chgIData(oldp+132,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[16]),32);
        bufp->chgIData(oldp+133,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[17]),32);
        bufp->chgIData(oldp+134,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[18]),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[19]),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[20]),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[21]),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[22]),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[23]),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[24]),32);
        bufp->chgIData(oldp+141,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[25]),32);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[26]),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[27]),32);
        bufp->chgIData(oldp+144,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[28]),32);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[29]),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[30]),32);
        bufp->chgIData(oldp+147,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[31]),32);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+149,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+150,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+153,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+155,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+156,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+157,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+158,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+159,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+160,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+161,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+162,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+163,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+166,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+167,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+168,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+169,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+170,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+171,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+172,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout),32);
    }
    bufp->chgBit(oldp+180,(vlSelf->clk));
    bufp->chgBit(oldp+181,(vlSelf->rst));
    bufp->chgIData(oldp+182,(vlSelf->inst),32);
    bufp->chgIData(oldp+183,(vlSelf->pc),32);
    bufp->chgIData(oldp+184,(vlSelf->regs[0]),32);
    bufp->chgIData(oldp+185,(vlSelf->regs[1]),32);
    bufp->chgIData(oldp+186,(vlSelf->regs[2]),32);
    bufp->chgIData(oldp+187,(vlSelf->regs[3]),32);
    bufp->chgIData(oldp+188,(vlSelf->regs[4]),32);
    bufp->chgIData(oldp+189,(vlSelf->regs[5]),32);
    bufp->chgIData(oldp+190,(vlSelf->regs[6]),32);
    bufp->chgIData(oldp+191,(vlSelf->regs[7]),32);
    bufp->chgIData(oldp+192,(vlSelf->regs[8]),32);
    bufp->chgIData(oldp+193,(vlSelf->regs[9]),32);
    bufp->chgIData(oldp+194,(vlSelf->regs[10]),32);
    bufp->chgIData(oldp+195,(vlSelf->regs[11]),32);
    bufp->chgIData(oldp+196,(vlSelf->regs[12]),32);
    bufp->chgIData(oldp+197,(vlSelf->regs[13]),32);
    bufp->chgIData(oldp+198,(vlSelf->regs[14]),32);
    bufp->chgIData(oldp+199,(vlSelf->regs[15]),32);
    bufp->chgIData(oldp+200,(vlSelf->regs[16]),32);
    bufp->chgIData(oldp+201,(vlSelf->regs[17]),32);
    bufp->chgIData(oldp+202,(vlSelf->regs[18]),32);
    bufp->chgIData(oldp+203,(vlSelf->regs[19]),32);
    bufp->chgIData(oldp+204,(vlSelf->regs[20]),32);
    bufp->chgIData(oldp+205,(vlSelf->regs[21]),32);
    bufp->chgIData(oldp+206,(vlSelf->regs[22]),32);
    bufp->chgIData(oldp+207,(vlSelf->regs[23]),32);
    bufp->chgIData(oldp+208,(vlSelf->regs[24]),32);
    bufp->chgIData(oldp+209,(vlSelf->regs[25]),32);
    bufp->chgIData(oldp+210,(vlSelf->regs[26]),32);
    bufp->chgIData(oldp+211,(vlSelf->regs[27]),32);
    bufp->chgIData(oldp+212,(vlSelf->regs[28]),32);
    bufp->chgIData(oldp+213,(vlSelf->regs[29]),32);
    bufp->chgIData(oldp+214,(vlSelf->regs[30]),32);
    bufp->chgIData(oldp+215,(vlSelf->regs[31]),32);
    bufp->chgIData(oldp+216,(vlSelf->mtvec),32);
    bufp->chgIData(oldp+217,(vlSelf->mepc),32);
    bufp->chgIData(oldp+218,(vlSelf->mstatus),32);
    bufp->chgIData(oldp+219,(vlSelf->mcause),32);
    bufp->chgBit(oldp+220,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->chgCData(oldp+221,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+222,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+223,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgIData(oldp+224,((((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bltu) 
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
    bufp->chgBit(oldp+225,((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
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
    bufp->chgBit(oldp+226,(((~ (IData)(vlSelf->rst)) 
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
    bufp->chgBit(oldp+227,(((0x6fU == (0x7fU & vlSelf->inst)) 
                            | ((0x17U == (0x7fU & vlSelf->inst)) 
                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__double_cal)))));
    bufp->chgBit(oldp+228,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I) 
                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                     | ((0x37U == (0x7fU 
                                                   & vlSelf->inst)) 
                                        | ((0x17U == 
                                            (0x7fU 
                                             & vlSelf->inst)) 
                                           | ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->inst)) 
                                              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__double_cal) 
                                                 | (IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr)))))))))));
    bufp->chgBit(oldp+229,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
                            & (IData)((0x100000U == 
                                       (0xfff00000U 
                                        & vlSelf->inst))))));
    bufp->chgBit(oldp+230,((1U & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__double_cal) 
                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I) 
                                        | ((0x6fU == 
                                            (0x7fU 
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
    bufp->chgIData(oldp+231,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en)
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
    bufp->chgBit(oldp+232,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->chgIData(oldp+233,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgBit(oldp+234,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
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
    bufp->chgBit(oldp+235,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->chgIData(oldp+236,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en)
                               ? vlSelf->pc : vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data)),32);
    bufp->chgIData(oldp+237,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__ecall_en)
                               ? 0x1800U : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__mret_en)
                                             ? (0xffffe7ffU 
                                                & (0x80U 
                                                   | ((0xfffffff7U 
                                                       & vlSelf->mstatus) 
                                                      | (8U 
                                                         & (vlSelf->mstatus 
                                                            >> 4U)))))
                                             : vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data))),32);
    bufp->chgBit(oldp+238,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+239,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x500U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+240,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x580U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+241,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x600U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+242,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x680U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+243,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x700U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+244,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x780U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+245,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x800U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+246,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x880U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+247,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x900U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+248,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x980U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+249,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+250,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0xa00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+251,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0xa80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+252,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0xb00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+253,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0xb80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+254,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0xc00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+255,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0xc80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+256,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0xd00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+257,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0xd80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+258,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0xe00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+259,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0xe80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+260,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x100U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+261,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0xf00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+262,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0xf80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+263,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x180U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+264,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x200U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+265,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x280U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+266,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x300U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+267,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x380U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+268,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x400U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+269,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0) 
                            & (0x480U == (0xf80U & vlSelf->inst)))));
    bufp->chgCData(oldp+270,((vlSelf->inst >> 0x19U)),7);
    bufp->chgCData(oldp+271,((vlSelf->inst >> 0x1aU)),6);
    bufp->chgCData(oldp+272,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+273,((0x7fU & vlSelf->inst)),7);
    bufp->chgIData(oldp+274,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->chgIData(oldp+275,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+276,((((- (IData)((vlSelf->inst 
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
    bufp->chgIData(oldp+277,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+278,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->inst) 
                                            | ((0x800U 
                                                & (vlSelf->inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)))))),32);
    bufp->chgCData(oldp+279,((((7U == (7U & (vlSelf->inst 
                                             >> 0xcU))) 
                               << 7U) | (((6U == (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                          << 6U) | 
                                         (((5U == (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU))) 
                                           << 5U) | 
                                          (((4U == 
                                             (7U & 
                                              (vlSelf->inst 
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
    bufp->chgBit(oldp+280,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+281,((IData)(((0U == (0xfffffU 
                                            & vlSelf->inst)) 
                                    & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))));
    bufp->chgBit(oldp+282,((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
                             & (IData)((0x100000U == 
                                        (0xfff00000U 
                                         & vlSelf->inst)))) 
                            | (IData)(((0U == (0xfffffU 
                                               & vlSelf->inst)) 
                                       & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0))))));
}

void Vysyx_25020037_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25020037_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25020037_cpu___024root*>(voidSelf);
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
