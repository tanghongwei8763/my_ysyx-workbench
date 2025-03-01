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
    VlWide<3>/*95:0*/ __Vtemp_h673d4cb1__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__key_list[1]));
        bufp->chgQData(oldp+2,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__key_list[0]),32);
        bufp->chgBit(oldp+5,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__data_list[0]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+6,(vlSelf->ysyx_25020037_cpu__DOT__pc),32);
        bufp->chgIData(oldp+7,(vlSelf->ysyx_25020037_cpu__DOT__inst),32);
        bufp->chgCData(oldp+8,((0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__inst 
                                         >> 7U))),5);
        bufp->chgCData(oldp+9,((0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__inst 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_25020037_cpu__DOT__imm),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_25020037_cpu__DOT__src1),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_25020037_cpu__DOT__src2),32);
        bufp->chgBit(oldp+14,(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type));
        bufp->chgIData(oldp+15,(((IData)(4U) + vlSelf->ysyx_25020037_cpu__DOT__pc)),32);
        bufp->chgIData(oldp+16,((vlSelf->ysyx_25020037_cpu__DOT__imm 
                                 + vlSelf->ysyx_25020037_cpu__DOT__src1)),32);
        bufp->chgIData(oldp+17,((vlSelf->ysyx_25020037_cpu__DOT__src1 
                                 + vlSelf->ysyx_25020037_cpu__DOT__src2)),32);
        __Vtemp_h673d4cb1__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(
                                                              (vlSelf->ysyx_25020037_cpu__DOT__src1 
                                                               + vlSelf->ysyx_25020037_cpu__DOT__src2)))));
        __Vtemp_h673d4cb1__0[1U] = (((vlSelf->ysyx_25020037_cpu__DOT__imm 
                                      + vlSelf->ysyx_25020037_cpu__DOT__src1) 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(
                                                                          (vlSelf->ysyx_25020037_cpu__DOT__src1 
                                                                           + vlSelf->ysyx_25020037_cpu__DOT__src2)))) 
                                                       >> 0x20U)));
        __Vtemp_h673d4cb1__0[2U] = ((vlSelf->ysyx_25020037_cpu__DOT__imm 
                                     + vlSelf->ysyx_25020037_cpu__DOT__src1) 
                                    >> 0x1fU);
        bufp->chgWData(oldp+18,(__Vtemp_h673d4cb1__0),66);
        bufp->chgQData(oldp+21,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+23,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+28,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+29,((((- (IData)((vlSelf->ysyx_25020037_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->ysyx_25020037_cpu__DOT__inst 
                                              >> 0x14U))),32);
        bufp->chgBit(oldp+30,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+31,((vlSelf->ysyx_25020037_cpu__DOT__inst 
                               == vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__key_list
                               [0U])));
        bufp->chgIData(oldp+32,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[1]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[2]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[3]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[4]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[5]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[6]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[7]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[8]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[9]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[10]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[11]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[12]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[13]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[14]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[15]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[16]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[17]),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[18]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[19]),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[20]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[21]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[22]),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[23]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[24]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[25]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[26]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[27]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[28]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[29]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[30]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[31]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgBit(oldp+65,((1U == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__inst 
                                               >> 7U)))));
        bufp->chgIData(oldp+66,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4),32);
    }
    bufp->chgBit(oldp+97,(vlSelf->clk));
    bufp->chgBit(oldp+98,(vlSelf->rst));
    bufp->chgIData(oldp+99,(vlSelf->result),32);
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
}
