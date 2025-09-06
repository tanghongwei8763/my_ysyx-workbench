// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25020037__Syms.h"


void Vysyx_25020037___024root__trace_chg_sub_0(Vysyx_25020037___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_25020037___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_25020037___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25020037___024root*>(voidSelf);
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25020037___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25020037___024root__trace_chg_sub_0(Vysyx_25020037___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_25020037__DOT__inst),32);
        bufp->chgCData(oldp+1,((0xfU & (vlSelf->ysyx_25020037__DOT__inst 
                                        >> 0xfU))),4);
        bufp->chgCData(oldp+2,((0xfU & (vlSelf->ysyx_25020037__DOT__inst 
                                        >> 0x14U))),4);
        bufp->chgCData(oldp+3,((0xfU & (vlSelf->ysyx_25020037__DOT__inst 
                                        >> 7U))),4);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
                               [(0xfU & (vlSelf->ysyx_25020037__DOT__inst 
                                         >> 0x14U))]),32);
        bufp->chgIData(oldp+6,((((- (IData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I))) 
                                 & (((- (IData)((vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 0x1fU))) 
                                     << 0xcU) | (vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 0x14U))) 
                                | (((- (IData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S))) 
                                    & (((- (IData)(
                                                   (vlSelf->ysyx_25020037__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSelf->ysyx_25020037__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_25020037__DOT__inst 
                                            >> 7U))))) 
                                   | (0xfffff000U & 
                                      ((- (IData)((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__inst)))) 
                                       & vlSelf->ysyx_25020037__DOT__inst))))),32);
        bufp->chgCData(oldp+7,((((0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                                 << 1U) | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                                           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi) 
                                              | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                                                 | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
                                                    | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw) 
                                                       | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                                          | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw))))))))),2);
        bufp->chgBit(oldp+8,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                              | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                                 | (0x37U == (0x7fU 
                                              & vlSelf->ysyx_25020037__DOT__inst))))));
        bufp->chgIData(oldp+9,(vlSelf->ysyx_25020037__DOT__rlsu_addr),32);
        bufp->chgIData(oldp+10,(((1U & (- (IData)(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                                   | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb))))) 
                                 | (4U & (- (IData)(
                                                    ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                                                     | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw))))))),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_25020037__DOT__rlsu_data),32);
        bufp->chgBit(oldp+12,(vlSelf->ysyx_25020037__DOT__rlsu_we));
        bufp->chgBit(oldp+13,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S));
        bufp->chgBit(oldp+14,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                               | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb))));
        bufp->chgBit(oldp+15,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                               | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw))));
        bufp->chgBit(oldp+16,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                               | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                                  | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                                     | ((0x37U == (0x7fU 
                                                   & vlSelf->ysyx_25020037__DOT__inst)) 
                                        | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl)))))));
        bufp->chgBit(oldp+17,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl));
        bufp->chgBit(oldp+18,((IData)((0x100073U == vlSelf->ysyx_25020037__DOT__inst))));
        bufp->chgBit(oldp+19,((1U & (~ ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                                        | (((IData)(
                                                    (0x100073U 
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
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25020037__DOT__final_result),32);
        bufp->chgIData(oldp+21,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl)
                                  ? vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1
                                  : ((IData)(4U) + vlSelf->ysyx_25020037__DOT__pc))),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1),32);
        bufp->chgBit(oldp+24,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                               | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi) 
                                  | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                                     | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
                                        | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw) 
                                           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                              | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw)))))))));
        bufp->chgBit(oldp+25,((0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst))));
        bufp->chgIData(oldp+26,((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                 + vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
        bufp->chgBit(oldp+27,((1U & (IData)((1ULL & 
                                             (((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                               + (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))) 
                                              >> 0x20U))))));
        bufp->chgBit(oldp+28,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+29,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x500U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+30,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x580U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+31,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x600U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+32,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x680U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+33,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x700U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+34,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x780U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+35,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x80U == (0x780U 
                                            & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+36,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x100U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+37,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x180U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+38,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x200U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+39,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x280U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+40,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x300U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+41,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x380U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+42,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x400U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgBit(oldp+43,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
                               & (0x480U == (0x780U 
                                             & vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgCData(oldp+44,((vlSelf->ysyx_25020037__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+45,((vlSelf->ysyx_25020037__DOT__inst 
                                 >> 0x1aU)),6);
        bufp->chgCData(oldp+46,((7U & (vlSelf->ysyx_25020037__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+47,((0x7fU & vlSelf->ysyx_25020037__DOT__inst)),7);
        bufp->chgIData(oldp+48,((((- (IData)((vlSelf->ysyx_25020037__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->ysyx_25020037__DOT__inst 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+49,((((- (IData)((vlSelf->ysyx_25020037__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->ysyx_25020037__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->ysyx_25020037__DOT__inst 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+50,((0xfffff000U & vlSelf->ysyx_25020037__DOT__inst)),32);
        bufp->chgBit(oldp+51,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add));
        bufp->chgBit(oldp+52,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi));
        bufp->chgBit(oldp+53,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu));
        bufp->chgBit(oldp+54,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw));
        bufp->chgBit(oldp+55,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw));
        bufp->chgBit(oldp+57,((IData)((0U == vlSelf->ysyx_25020037__DOT__inst))));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I));
        bufp->chgBit(oldp+59,(((IData)((0x100073U == vlSelf->ysyx_25020037__DOT__inst)) 
                               | (IData)((0U == vlSelf->ysyx_25020037__DOT__inst)))));
        bufp->chgCData(oldp+60,((0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+61,((0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+62,((0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                          >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25020037__DOT__pc),32);
        bufp->chgIData(oldp+64,(((IData)(4U) + vlSelf->ysyx_25020037__DOT__pc)),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[1]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[2]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[3]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[4]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[5]),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[6]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[7]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[8]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[9]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[10]),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[11]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[12]),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[13]),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[14]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[15]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout),32);
    }
    bufp->chgBit(oldp+97,(vlSelf->clock));
    bufp->chgBit(oldp+98,(vlSelf->reset));
    bufp->chgBit(oldp+99,(((~ (IData)(vlSelf->reset)) 
                           & ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                              | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                                 | (0x37U == (0x7fU 
                                              & vlSelf->ysyx_25020037__DOT__inst)))))));
    bufp->chgBit(oldp+100,((1U & (~ (IData)(vlSelf->reset)))));
}

void Vysyx_25020037___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25020037___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25020037___024root*>(voidSelf);
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
