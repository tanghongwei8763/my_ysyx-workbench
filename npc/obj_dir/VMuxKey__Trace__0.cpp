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
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->MuxKey__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->MuxKey__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgBit(oldp+2,(vlSelf->MuxKey__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+3,(vlSelf->MuxKey__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+4,(vlSelf->MuxKey__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+5,(vlSelf->MuxKey__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+6,(vlSelf->MuxKey__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+7,(vlSelf->MuxKey__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+8,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgCData(oldp+9,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgBit(oldp+10,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+11,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+12,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+13,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+14,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+15,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+16,(vlSelf->cpu__DOT__pc),32);
        bufp->chgIData(oldp+17,(vlSelf->cpu__DOT__s),32);
        bufp->chgCData(oldp+18,((0x1fU & (vlSelf->cpu__DOT__s 
                                          >> 7U))),5);
        bufp->chgCData(oldp+19,((0x1fU & (vlSelf->cpu__DOT__s 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+20,((0x1fU & (vlSelf->cpu__DOT__s 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+21,((((- (IData)((vlSelf->cpu__DOT__s 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->cpu__DOT__s 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+22,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs
                                [(0x1fU & (vlSelf->cpu__DOT__s 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs
                                [(0x1fU & (vlSelf->cpu__DOT__s 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__result),32);
        bufp->chgIData(oldp+25,(((IData)(4U) + vlSelf->cpu__DOT__pc)),32);
        bufp->chgIData(oldp+26,((((- (IData)((vlSelf->cpu__DOT__s 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->cpu__DOT__s 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->cpu__DOT__s 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+27,((((- (IData)((vlSelf->cpu__DOT__s 
                                              >> 0x1fU))) 
                                  << 0x14U) | (vlSelf->cpu__DOT__s 
                                               >> 0xcU))),32);
        bufp->chgIData(oldp+28,((((- (IData)((vlSelf->cpu__DOT__s 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelf->cpu__DOT__s 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->cpu__DOT__s 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->cpu__DOT__s 
                                                       >> 7U)))))),32);
        bufp->chgIData(oldp+29,((((- (IData)((vlSelf->cpu__DOT__s 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->cpu__DOT__s) 
                                               | ((0x800U 
                                                   & (vlSelf->cpu__DOT__s 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->cpu__DOT__s 
                                                        >> 0x14U)))))),32);
        bufp->chgIData(oldp+30,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[1]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[2]),32);
        bufp->chgIData(oldp+33,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[3]),32);
        bufp->chgIData(oldp+34,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[4]),32);
        bufp->chgIData(oldp+35,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[5]),32);
        bufp->chgIData(oldp+36,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[6]),32);
        bufp->chgIData(oldp+37,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[7]),32);
        bufp->chgIData(oldp+38,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[8]),32);
        bufp->chgIData(oldp+39,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[9]),32);
        bufp->chgIData(oldp+40,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[10]),32);
        bufp->chgIData(oldp+41,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[11]),32);
        bufp->chgIData(oldp+42,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[12]),32);
        bufp->chgIData(oldp+43,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[13]),32);
        bufp->chgIData(oldp+44,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[14]),32);
        bufp->chgIData(oldp+45,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[15]),32);
        bufp->chgIData(oldp+46,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[16]),32);
        bufp->chgIData(oldp+47,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[17]),32);
        bufp->chgIData(oldp+48,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[18]),32);
        bufp->chgIData(oldp+49,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[19]),32);
        bufp->chgIData(oldp+50,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[20]),32);
        bufp->chgIData(oldp+51,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[21]),32);
        bufp->chgIData(oldp+52,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[22]),32);
        bufp->chgIData(oldp+53,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[23]),32);
        bufp->chgIData(oldp+54,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[24]),32);
        bufp->chgIData(oldp+55,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[25]),32);
        bufp->chgIData(oldp+56,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[26]),32);
        bufp->chgIData(oldp+57,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[27]),32);
        bufp->chgIData(oldp+58,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[28]),32);
        bufp->chgIData(oldp+59,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[29]),32);
        bufp->chgIData(oldp+60,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[30]),32);
        bufp->chgIData(oldp+61,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[31]),32);
        bufp->chgIData(oldp+62,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgBit(oldp+63,((1U == (0x1fU & (vlSelf->cpu__DOT__s 
                                               >> 7U)))));
        bufp->chgIData(oldp+64,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+65,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+66,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+67,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+68,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+69,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+70,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+71,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+72,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+73,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+74,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+75,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+76,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+77,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+78,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+79,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+80,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+81,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+82,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+83,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+84,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+85,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+86,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+87,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+88,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+89,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+90,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+91,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+92,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+93,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+94,(vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4),32);
    }
    bufp->chgBit(oldp+95,(vlSelf->MuxKey__02Eout));
    bufp->chgBit(oldp+96,(vlSelf->MuxKey__02Ekey));
    bufp->chgCData(oldp+97,(vlSelf->MuxKey__02Elut),4);
    bufp->chgBit(oldp+98,(vlSelf->MuxKeyWithDefault__02Eout));
    bufp->chgBit(oldp+99,(vlSelf->MuxKeyWithDefault__02Ekey));
    bufp->chgBit(oldp+100,(vlSelf->default_out));
    bufp->chgCData(oldp+101,(vlSelf->MuxKeyWithDefault__02Elut),4);
    bufp->chgBit(oldp+102,(vlSelf->clk));
    bufp->chgBit(oldp+103,(vlSelf->rst));
    bufp->chgIData(oldp+104,(vlSelf->dnpc),32);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
