// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMuxKey__Syms.h"


void VMuxKey___024root__trace_chg_sub_0(VMuxKey___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMuxKey___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_chg_top_0\n"); );
    // Init
    VMuxKey___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMuxKey___024root*>(voidSelf);
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMuxKey___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VMuxKey___024root__trace_chg_sub_0(VMuxKey___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h71831438__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgQData(oldp+0,(vlSelf->cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgBit(oldp+2,(vlSelf->cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__key_list[0]));
        bufp->chgIData(oldp+3,(vlSelf->cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__data_list[0]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+4,(vlSelf->cpu__DOT__pc),32);
        bufp->chgIData(oldp+5,(vlSelf->cpu__DOT__s),32);
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->cpu__DOT__s 
                                         >> 7U))),5);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->cpu__DOT__s 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+8,((0x1fU & (vlSelf->cpu__DOT__s 
                                         >> 0x14U))),5);
        bufp->chgIData(oldp+9,((((- (IData)((vlSelf->cpu__DOT__s 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->cpu__DOT__s 
                                             >> 0x14U))),32);
        bufp->chgIData(oldp+10,(vlSelf->cpu__DOT__src1),32);
        bufp->chgIData(oldp+11,(vlSelf->cpu__DOT__src2),32);
        bufp->chgIData(oldp+12,(vlSelf->cpu__DOT__result),32);
        bufp->chgBit(oldp+13,((1U & vlSelf->cpu__DOT__idu_cpu__DOT____Vcellout__INSTPAT_code____pinNumber1)));
        bufp->chgIData(oldp+14,(((IData)(4U) + vlSelf->cpu__DOT__pc)),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu__DOT__exu_cpu__DOT__result1),32);
        bufp->chgIData(oldp+16,(vlSelf->cpu__DOT__exu_cpu__DOT__result2),32);
        bufp->chgCData(oldp+17,((1U & vlSelf->cpu__DOT__idu_cpu__DOT____Vcellout__INSTPAT_code____pinNumber1)),3);
        __Vtemp_h71831438__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->cpu__DOT__exu_cpu__DOT__result2))));
        __Vtemp_h71831438__0[1U] = ((vlSelf->cpu__DOT__exu_cpu__DOT__result1 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->cpu__DOT__exu_cpu__DOT__result2))) 
                                                       >> 0x20U)));
        __Vtemp_h71831438__0[2U] = (vlSelf->cpu__DOT__exu_cpu__DOT__result1 
                                    >> 0x1fU);
        bufp->chgWData(oldp+18,(__Vtemp_h71831438__0),70);
        bufp->chgQData(oldp+21,(vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+23,(vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgCData(oldp+25,(vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+26,(vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__key_list[1]),3);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+28,(vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+30,(vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__idu_cpu__DOT____Vcellout__INSTPAT_code____pinNumber1),32);
        bufp->chgBit(oldp+32,((1U & vlSelf->cpu__DOT__s)));
        bufp->chgIData(oldp+33,(vlSelf->cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+34,(((1U & vlSelf->cpu__DOT__s) 
                               == vlSelf->cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__key_list
                               [0U])));
        bufp->chgIData(oldp+35,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0]),32);
        bufp->chgIData(oldp+36,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[1]),32);
        bufp->chgIData(oldp+37,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[2]),32);
        bufp->chgIData(oldp+38,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[3]),32);
        bufp->chgIData(oldp+39,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[4]),32);
        bufp->chgIData(oldp+40,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[5]),32);
        bufp->chgIData(oldp+41,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[6]),32);
        bufp->chgIData(oldp+42,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[7]),32);
        bufp->chgIData(oldp+43,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[8]),32);
        bufp->chgIData(oldp+44,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[9]),32);
        bufp->chgIData(oldp+45,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[10]),32);
        bufp->chgIData(oldp+46,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[11]),32);
        bufp->chgIData(oldp+47,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[12]),32);
        bufp->chgIData(oldp+48,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[13]),32);
        bufp->chgIData(oldp+49,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[14]),32);
        bufp->chgIData(oldp+50,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[15]),32);
        bufp->chgIData(oldp+51,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[16]),32);
        bufp->chgIData(oldp+52,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[17]),32);
        bufp->chgIData(oldp+53,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[18]),32);
        bufp->chgIData(oldp+54,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[19]),32);
        bufp->chgIData(oldp+55,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[20]),32);
        bufp->chgIData(oldp+56,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[21]),32);
        bufp->chgIData(oldp+57,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[22]),32);
        bufp->chgIData(oldp+58,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[23]),32);
        bufp->chgIData(oldp+59,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[24]),32);
        bufp->chgIData(oldp+60,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[25]),32);
        bufp->chgIData(oldp+61,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[26]),32);
        bufp->chgIData(oldp+62,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[27]),32);
        bufp->chgIData(oldp+63,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[28]),32);
        bufp->chgIData(oldp+64,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[29]),32);
        bufp->chgIData(oldp+65,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[30]),32);
        bufp->chgIData(oldp+66,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[31]),32);
        bufp->chgIData(oldp+67,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgBit(oldp+68,((1U == (0x1fU & (vlSelf->cpu__DOT__s 
                                               >> 7U)))));
        bufp->chgIData(oldp+69,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+70,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+71,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+72,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+73,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+74,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+75,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+76,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+77,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+78,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+79,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+80,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+81,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+82,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+83,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+84,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+85,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+86,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+87,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+88,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+89,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+90,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+91,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+92,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+93,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+94,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+95,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+96,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+97,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+98,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+99,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4),32);
    }
    bufp->chgBit(oldp+100,(vlSelf->clk));
    bufp->chgBit(oldp+101,(vlSelf->rst));
}

void VMuxKey___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_cleanup\n"); );
    // Init
    VMuxKey___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMuxKey___024root*>(voidSelf);
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
