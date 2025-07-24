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
    VlWide<4>/*127:0*/ __Vtemp_h9979b62c__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_25020037_cpu__DOT__ifu_araddr),32);
        bufp->chgBit(oldp+1,(vlSelf->ysyx_25020037_cpu__DOT__ifu_arvalid));
        bufp->chgBit(oldp+2,(vlSelf->ysyx_25020037_cpu__DOT__ifu_arready));
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25020037_cpu__DOT__ifu_rresp),2);
        bufp->chgBit(oldp+4,(vlSelf->ysyx_25020037_cpu__DOT__ifu_rready));
        bufp->chgBit(oldp+5,(vlSelf->ysyx_25020037_cpu__DOT__lsu_awready));
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25020037_cpu__DOT__lsu_bresp),2);
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25020037_cpu__DOT__sram_arready));
        bufp->chgBit(oldp+8,(vlSelf->ysyx_25020037_cpu__DOT__sram_awready));
        bufp->chgBit(oldp+9,(vlSelf->ysyx_25020037_cpu__DOT__sram_wready));
        bufp->chgIData(oldp+10,(vlSelf->ysyx_25020037_cpu__DOT__sram_rdata),32);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_25020037_cpu__DOT__sram_rresp),2);
        bufp->chgBit(oldp+12,(vlSelf->ysyx_25020037_cpu__DOT__sram_rvalid));
        bufp->chgCData(oldp+13,(vlSelf->ysyx_25020037_cpu__DOT__sram_bresp),2);
        bufp->chgBit(oldp+14,(vlSelf->ysyx_25020037_cpu__DOT__sram_bvalid));
        bufp->chgBit(oldp+15,(vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__state));
        bufp->chgIData(oldp+16,(vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__last_pc),32);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master),2);
        bufp->chgBit(oldp+18,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__state));
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__read_addr),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__write_addr),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__write_data),32);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__write_strb),4);
        bufp->chgBit(oldp+23,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__is_read_req));
        bufp->chgBit(oldp+24,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__is_write_req));
        bufp->chgCData(oldp+25,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__lfsr),8);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__delay_count),8);
        bufp->chgCData(oldp+27,(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__target_delay),8);
        bufp->chgBit(oldp+28,((1U & VL_REDXOR_8((0xb8U 
                                                 & (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__lfsr))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+29,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+45,(vlSelf->ysyx_25020037_cpu__DOT__wu_to_gu_bus),33);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25020037_cpu__DOT__lu_to_wu_bus),32);
        bufp->chgBit(oldp+48,(vlSelf->ysyx_25020037_cpu__DOT__lsu_valid));
        bufp->chgBit(oldp+49,(vlSelf->ysyx_25020037_cpu__DOT__wbu_ready));
        bufp->chgBit(oldp+50,(vlSelf->ysyx_25020037_cpu__DOT__wbu_valid));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_25020037_cpu__DOT__gpr_valid));
        bufp->chgBit(oldp+52,(vlSelf->ysyx_25020037_cpu__DOT__gpr_ready));
        bufp->chgIData(oldp+53,(vlSelf->ysyx_25020037_cpu__DOT__lsu_araddr),32);
        bufp->chgBit(oldp+54,(vlSelf->ysyx_25020037_cpu__DOT__lsu_arvalid));
        bufp->chgBit(oldp+55,(vlSelf->ysyx_25020037_cpu__DOT__lsu_arready));
        bufp->chgIData(oldp+56,(vlSelf->ysyx_25020037_cpu__DOT__lsu_awaddr),32);
        bufp->chgBit(oldp+57,(vlSelf->ysyx_25020037_cpu__DOT__lsu_awvalid));
        bufp->chgIData(oldp+58,(vlSelf->ysyx_25020037_cpu__DOT__lsu_wdata),32);
        bufp->chgCData(oldp+59,(vlSelf->ysyx_25020037_cpu__DOT__lsu_wstrb),4);
        bufp->chgBit(oldp+60,(vlSelf->ysyx_25020037_cpu__DOT__lsu_wvalid));
        bufp->chgBit(oldp+61,(vlSelf->ysyx_25020037_cpu__DOT__lsu_wready));
        bufp->chgBit(oldp+62,(vlSelf->ysyx_25020037_cpu__DOT__lsu_bvalid));
        bufp->chgBit(oldp+63,(vlSelf->ysyx_25020037_cpu__DOT__lsu_bready));
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25020037_cpu__DOT__lsu_rdata),32);
        bufp->chgCData(oldp+65,(vlSelf->ysyx_25020037_cpu__DOT__lsu_rresp),2);
        bufp->chgBit(oldp+66,(vlSelf->ysyx_25020037_cpu__DOT__lsu_rvalid));
        bufp->chgBit(oldp+67,(vlSelf->ysyx_25020037_cpu__DOT__lsu_rready));
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25020037_cpu__DOT__sram_araddr),32);
        bufp->chgBit(oldp+69,(vlSelf->ysyx_25020037_cpu__DOT__sram_arvalid));
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25020037_cpu__DOT__sram_awaddr),32);
        bufp->chgBit(oldp+71,(vlSelf->ysyx_25020037_cpu__DOT__sram_awvalid));
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25020037_cpu__DOT__sram_wdata),32);
        bufp->chgCData(oldp+73,(vlSelf->ysyx_25020037_cpu__DOT__sram_wstrb),4);
        bufp->chgBit(oldp+74,(vlSelf->ysyx_25020037_cpu__DOT__sram_wvalid));
        bufp->chgBit(oldp+75,(vlSelf->ysyx_25020037_cpu__DOT__sram_rready));
        bufp->chgBit(oldp+76,(vlSelf->ysyx_25020037_cpu__DOT__sram_bready));
        bufp->chgBit(oldp+77,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__state));
        bufp->chgQData(oldp+78,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__wu_to_gu_bus_r),33);
        bufp->chgIData(oldp+80,((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__wu_to_gu_bus_r)),32);
        bufp->chgBit(oldp+81,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__wu_to_gu_bus_r 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+82,(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__state));
        bufp->chgCData(oldp+83,(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__next_master),2);
        bufp->chgBit(oldp+84,(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__state));
        bufp->chgBit(oldp+85,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__state)
                                ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__state) 
                                   & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_valid) 
                                         & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_ready))))
                                : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_valid) 
                                   & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_ready)))));
        bufp->chgSData(oldp+86,(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r),9);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r),32);
        bufp->chgCData(oldp+88,((0xfU & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                         >> 5U))),4);
        bufp->chgBit(oldp+89,((1U & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                     >> 4U))));
        bufp->chgBit(oldp+90,((1U & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                     >> 3U))));
        bufp->chgBit(oldp+91,((1U & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                     >> 2U))));
        bufp->chgBit(oldp+92,((1U & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                     >> 1U))));
        bufp->chgBit(oldp+93,((1U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))));
        bufp->chgIData(oldp+94,(((1U == (0xfU & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                 >> 5U)))
                                  ? ((0x10U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                         >> 7U)))) 
                                          << 8U) | 
                                         (0xffU & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                      : (0xffU & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                  : ((2U == (0xfU & 
                                             ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                              >> 5U)))
                                      ? ((8U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                          : (0xffffU 
                                             & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                      : vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgQData(oldp+95,(vlSelf->ysyx_25020037_cpu__DOT__eu_to_lu_bus),64);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_25020037_cpu__DOT__dnpc),32);
        bufp->chgBit(oldp+98,(vlSelf->ysyx_25020037_cpu__DOT__exu_valid));
        bufp->chgBit(oldp+99,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__state));
        bufp->chgQData(oldp+100,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r),59);
        bufp->chgWData(oldp+102,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r),128);
        bufp->chgIData(oldp+106,((IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                          >> 0x1bU))),32);
        bufp->chgIData(oldp+107,((0x1ffffU & (IData)(
                                                     (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                      >> 0xaU)))),17);
        bufp->chgBit(oldp+108,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 9U)))));
        bufp->chgBit(oldp+109,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 8U)))));
        bufp->chgBit(oldp+110,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 7U)))));
        bufp->chgBit(oldp+111,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 6U)))));
        bufp->chgBit(oldp+112,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 5U)))));
        bufp->chgBit(oldp+113,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 4U)))));
        bufp->chgBit(oldp+114,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 3U)))));
        bufp->chgBit(oldp+115,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 2U)))));
        bufp->chgBit(oldp+116,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 1U)))));
        bufp->chgBit(oldp+117,((1U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r))));
        bufp->chgIData(oldp+118,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U]),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]),32);
        bufp->chgIData(oldp+120,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U]),32);
        bufp->chgIData(oldp+121,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U]),32);
        bufp->chgIData(oldp+122,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result),32);
        bufp->chgIData(oldp+123,(((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                 >> 6U)))
                                   ? (((- (IData)((1U 
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
                                         | ((1U & (
                                                   (- (IData)(
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
                                   : 1U)),32);
        bufp->chgBit(oldp+124,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+125,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+126,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+127,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+128,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+129,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+130,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+131,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+132,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+133,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+134,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+135,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+136,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+137,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+138,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+139,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+140,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x1aU)))));
        bufp->chgIData(oldp+141,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0),32);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0),32);
        bufp->chgIData(oldp+143,((1U & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))),32);
        bufp->chgIData(oldp+144,((1U & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))),32);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1),32);
        bufp->chgIData(oldp+146,((1U & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))),32);
        bufp->chgIData(oldp+147,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b),32);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d),32);
        bufp->chgBit(oldp+149,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin));
        bufp->chgBit(oldp+150,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1));
        bufp->chgIData(oldp+151,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                                  + (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
                                     + (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)))),32);
        bufp->chgBit(oldp+152,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+153,((1U & (((~ (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
                                             >> 0x1fU)) 
                                         & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                            >> 0x1fU)) 
                                        | ((~ ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                                               >> 0x1fU)) 
                                           & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
                                              >> 0x1fU))))),32);
        bufp->chgIData(oldp+154,((1U & (~ (IData)((1ULL 
                                                   & (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                       + 
                                                       ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                        + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                      >> 0x20U)))))),32);
        bufp->chgIData(oldp+155,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                  & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
        bufp->chgIData(oldp+156,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                  | vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
        bufp->chgIData(oldp+157,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                  ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
        bufp->chgIData(oldp+158,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                  << (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),32);
        bufp->chgQData(oldp+159,(((((QData)((IData)(
                                                    (- (IData)((IData)(
                                                                       ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                         >> 0x13U) 
                                                                        & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                  >> (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),64);
        bufp->chgIData(oldp+161,((IData)(((((QData)((IData)(
                                                            (- (IData)((IData)(
                                                                               ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x13U) 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                          >> (0x1fU 
                                              & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)))),32);
        bufp->chgBit(oldp+162,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                  + 
                                                  ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                   + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                 >> 0x20U))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+163,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0]),32);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[1]),32);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[2]),32);
        bufp->chgIData(oldp+166,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[3]),32);
        bufp->chgIData(oldp+167,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[4]),32);
        bufp->chgIData(oldp+168,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[5]),32);
        bufp->chgIData(oldp+169,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[6]),32);
        bufp->chgIData(oldp+170,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[7]),32);
        bufp->chgIData(oldp+171,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[8]),32);
        bufp->chgIData(oldp+172,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[9]),32);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[10]),32);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[11]),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[12]),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[13]),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[14]),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[15]),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[16]),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[17]),32);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[18]),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[19]),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[20]),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[21]),32);
        bufp->chgIData(oldp+185,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[22]),32);
        bufp->chgIData(oldp+186,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[23]),32);
        bufp->chgIData(oldp+187,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[24]),32);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[25]),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[26]),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[27]),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[28]),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[29]),32);
        bufp->chgIData(oldp+193,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[30]),32);
        bufp->chgIData(oldp+194,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+195,((0x6fU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r))));
        bufp->chgBit(oldp+196,(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr));
        bufp->chgQData(oldp+197,(vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus),53);
        bufp->chgQData(oldp+199,(vlSelf->ysyx_25020037_cpu__DOT__du_to_eu_bus),59);
        bufp->chgCData(oldp+201,(vlSelf->ysyx_25020037_cpu__DOT__du_to_lu_bus),6);
        bufp->chgSData(oldp+202,(vlSelf->ysyx_25020037_cpu__DOT__du_to_wu_bus),9);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_25020037_cpu__DOT__ifu_rdata),32);
        bufp->chgBit(oldp+204,(vlSelf->ysyx_25020037_cpu__DOT__ifu_rvalid));
        bufp->chgBit(oldp+205,(vlSelf->ysyx_25020037_cpu__DOT__idu_valid));
        bufp->chgBit(oldp+206,(vlSelf->ysyx_25020037_cpu__DOT__idu_ready));
        bufp->chgBit(oldp+207,(vlSelf->ysyx_25020037_cpu__DOT__inst_s));
        bufp->chgBit(oldp+208,(vlSelf->ysyx_25020037_cpu__DOT__inst_l));
        bufp->chgBit(oldp+209,(vlSelf->ysyx_25020037_cpu__DOT__gpr_we));
        bufp->chgIData(oldp+210,((IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                          >> 0x15U))),32);
        bufp->chgCData(oldp+211,((0x1fU & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                                   >> 0x10U)))),5);
        bufp->chgCData(oldp+212,((0x1fU & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                                   >> 0xbU)))),5);
        bufp->chgCData(oldp+213,((0x1fU & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                                   >> 6U)))),5);
        bufp->chgBit(oldp+214,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                              >> 5U)))));
        bufp->chgBit(oldp+215,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                              >> 4U)))));
        bufp->chgBit(oldp+216,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                              >> 3U)))));
        bufp->chgBit(oldp+217,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                              >> 2U)))));
        bufp->chgBit(oldp+218,((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                              >> 1U)))));
        bufp->chgBit(oldp+219,((1U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus))));
        bufp->chgBit(oldp+220,((IData)((0ULL != (0x12ULL 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+221,((IData)((0ULL != (6ULL 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+222,((IData)((0ULL != (0xbULL 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+223,(((IData)((0ULL != (6ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus))) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
        bufp->chgBit(oldp+224,(((IData)((0ULL != (0x12ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus))) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
        bufp->chgBit(oldp+225,(((IData)((0ULL != (0xbULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus))) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
        bufp->chgBit(oldp+226,(((IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                         >> 5U)) & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
        bufp->chgBit(oldp+227,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0ULL == (0x1f0000ULL 
                                            & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+228,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0xa0000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+229,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0xb0000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+230,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0xc0000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+231,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0xd0000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+232,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0xe0000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+233,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0xf0000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+234,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x10000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+235,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x20000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+236,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x30000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+237,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x40000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+238,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x50000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+239,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x60000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+240,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x70000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+241,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x80000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+242,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x90000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+243,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__state));
        bufp->chgIData(oldp+244,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r),32);
        bufp->chgCData(oldp+245,((0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+246,((0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+247,((0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                           >> 7U))),5);
        bufp->chgIData(oldp+248,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__imm),32);
        bufp->chgIData(oldp+249,((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bltu) 
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
        bufp->chgBit(oldp+250,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_R) 
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
        bufp->chgBit(oldp+251,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rlsu_we));
        bufp->chgBit(oldp+252,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__wlsu_we));
        bufp->chgBit(oldp+253,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__bit_sext));
        bufp->chgBit(oldp+254,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__half_sext));
        bufp->chgCData(oldp+255,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rstrb),4);
        bufp->chgBit(oldp+256,(((0x6fU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                | ((0x17U == (0x7fU 
                                              & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                   | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal)))));
        bufp->chgBit(oldp+257,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                         | ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                            | ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               | ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal) 
                                                     | (IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr)))))))))));
        bufp->chgBit(oldp+258,(((0x6fU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal) 
                                      | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0))))));
        bufp->chgBit(oldp+259,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal));
        bufp->chgBit(oldp+260,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__ebreak));
        bufp->chgBit(oldp+261,((1U & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal) 
                                         | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
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
        bufp->chgBit(oldp+262,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csr_w_gpr_we));
        bufp->chgBit(oldp+263,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrw_op));
        bufp->chgBit(oldp+264,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrs_op));
        bufp->chgBit(oldp+265,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__ecall_en));
        bufp->chgBit(oldp+266,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__mret_en));
        bufp->chgBit(oldp+267,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_csr_op));
        bufp->chgBit(oldp+268,(((0x305U == vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__imm) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_csr_op))));
        bufp->chgBit(oldp+269,(((0x341U == vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__imm) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_csr_op))));
        bufp->chgBit(oldp+270,(((0x300U == vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__imm) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_csr_op))));
        bufp->chgBit(oldp+271,(((0x342U == vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__imm) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_csr_op))));
        bufp->chgCData(oldp+272,((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+273,((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                  >> 0x1aU)),6);
        bufp->chgCData(oldp+274,((7U & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+275,((0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)),7);
        bufp->chgIData(oldp+276,((((- (IData)((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                               >> 0x14U))),32);
        bufp->chgIData(oldp+277,((((- (IData)((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+278,((((- (IData)((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
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
        bufp->chgIData(oldp+279,((0xfffff000U & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)),32);
        bufp->chgIData(oldp+280,((((- (IData)((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                         >> 0x14U)))))),32);
        bufp->chgWData(oldp+281,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d),128);
        bufp->chgQData(oldp+285,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_26_d),64);
        bufp->chgCData(oldp+287,((((7U == (7U & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0xcU))) 
                                   << 7U) | (((6U == 
                                               (7U 
                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                   >> 0xcU))) 
                                              << 6U) 
                                             | (((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
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
        bufp->chgWData(oldp+288,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d),128);
        bufp->chgIData(oldp+292,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1_d),32);
        bufp->chgIData(oldp+293,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2_d),32);
        bufp->chgIData(oldp+294,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd_d),32);
        bufp->chgBit(oldp+295,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                   | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__bit_sext)))));
        bufp->chgBit(oldp+296,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__half_sext) 
                                   | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu)))));
        bufp->chgBit(oldp+297,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw))));
        bufp->chgBit(oldp+298,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add));
        bufp->chgBit(oldp+299,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and));
        bufp->chgBit(oldp+300,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or));
        bufp->chgBit(oldp+301,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori));
        bufp->chgBit(oldp+302,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor));
        bufp->chgBit(oldp+303,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori));
        bufp->chgBit(oldp+304,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sub));
        bufp->chgBit(oldp+305,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slt));
        bufp->chgBit(oldp+306,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu));
        bufp->chgBit(oldp+307,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi));
        bufp->chgBit(oldp+308,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi));
        bufp->chgBit(oldp+309,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu));
        bufp->chgBit(oldp+310,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu));
        bufp->chgBit(oldp+311,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw));
        bufp->chgBit(oldp+312,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll));
        bufp->chgBit(oldp+313,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli));
        bufp->chgBit(oldp+314,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltiu));
        bufp->chgBit(oldp+315,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra));
        bufp->chgBit(oldp+316,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srai));
        bufp->chgBit(oldp+317,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl));
        bufp->chgBit(oldp+318,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli));
        bufp->chgBit(oldp+319,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb));
        bufp->chgBit(oldp+320,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh));
        bufp->chgBit(oldp+321,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw));
        bufp->chgBit(oldp+322,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_beq));
        bufp->chgBit(oldp+323,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bne));
        bufp->chgBit(oldp+324,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bge));
        bufp->chgBit(oldp+325,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bgeu));
        bufp->chgBit(oldp+326,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_blt));
        bufp->chgBit(oldp+327,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bltu));
        bufp->chgBit(oldp+328,((0x17U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r))));
        bufp->chgBit(oldp+329,((0x37U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r))));
        bufp->chgBit(oldp+330,((IData)(((0U == (0xfffffU 
                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                        & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))));
        bufp->chgBit(oldp+331,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_R));
        bufp->chgBit(oldp+332,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I));
        bufp->chgBit(oldp+333,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_U));
        bufp->chgBit(oldp+334,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__ebreak) 
                                | (IData)(((0U == (0xfffffU 
                                                   & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                           & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+335,(vlSelf->ysyx_25020037_cpu__DOT__csr_wgpr_data),32);
        bufp->chgIData(oldp+336,(vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data),32);
        bufp->chgIData(oldp+337,(vlSelf->ysyx_25020037_cpu__DOT____VdfgTmp_h53724e58__0),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+338,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a),32);
        bufp->chgIData(oldp+339,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_result1),32);
        bufp->chgIData(oldp+340,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result),32);
    }
    bufp->chgBit(oldp+341,(vlSelf->clk));
    bufp->chgBit(oldp+342,(vlSelf->rst));
    bufp->chgIData(oldp+343,(vlSelf->inst),32);
    bufp->chgIData(oldp+344,(vlSelf->pc),32);
    bufp->chgIData(oldp+345,(vlSelf->regs[0]),32);
    bufp->chgIData(oldp+346,(vlSelf->regs[1]),32);
    bufp->chgIData(oldp+347,(vlSelf->regs[2]),32);
    bufp->chgIData(oldp+348,(vlSelf->regs[3]),32);
    bufp->chgIData(oldp+349,(vlSelf->regs[4]),32);
    bufp->chgIData(oldp+350,(vlSelf->regs[5]),32);
    bufp->chgIData(oldp+351,(vlSelf->regs[6]),32);
    bufp->chgIData(oldp+352,(vlSelf->regs[7]),32);
    bufp->chgIData(oldp+353,(vlSelf->regs[8]),32);
    bufp->chgIData(oldp+354,(vlSelf->regs[9]),32);
    bufp->chgIData(oldp+355,(vlSelf->regs[10]),32);
    bufp->chgIData(oldp+356,(vlSelf->regs[11]),32);
    bufp->chgIData(oldp+357,(vlSelf->regs[12]),32);
    bufp->chgIData(oldp+358,(vlSelf->regs[13]),32);
    bufp->chgIData(oldp+359,(vlSelf->regs[14]),32);
    bufp->chgIData(oldp+360,(vlSelf->regs[15]),32);
    bufp->chgIData(oldp+361,(vlSelf->regs[16]),32);
    bufp->chgIData(oldp+362,(vlSelf->regs[17]),32);
    bufp->chgIData(oldp+363,(vlSelf->regs[18]),32);
    bufp->chgIData(oldp+364,(vlSelf->regs[19]),32);
    bufp->chgIData(oldp+365,(vlSelf->regs[20]),32);
    bufp->chgIData(oldp+366,(vlSelf->regs[21]),32);
    bufp->chgIData(oldp+367,(vlSelf->regs[22]),32);
    bufp->chgIData(oldp+368,(vlSelf->regs[23]),32);
    bufp->chgIData(oldp+369,(vlSelf->regs[24]),32);
    bufp->chgIData(oldp+370,(vlSelf->regs[25]),32);
    bufp->chgIData(oldp+371,(vlSelf->regs[26]),32);
    bufp->chgIData(oldp+372,(vlSelf->regs[27]),32);
    bufp->chgIData(oldp+373,(vlSelf->regs[28]),32);
    bufp->chgIData(oldp+374,(vlSelf->regs[29]),32);
    bufp->chgIData(oldp+375,(vlSelf->regs[30]),32);
    bufp->chgIData(oldp+376,(vlSelf->regs[31]),32);
    bufp->chgIData(oldp+377,(vlSelf->mtvec),32);
    bufp->chgIData(oldp+378,(vlSelf->mepc),32);
    bufp->chgIData(oldp+379,(vlSelf->mstatus),32);
    bufp->chgIData(oldp+380,(vlSelf->mcause),32);
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
    bufp->chgWData(oldp+381,(__Vtemp_h9979b62c__0),128);
    bufp->chgBit(oldp+385,(vlSelf->ysyx_25020037_cpu__DOT__exu_ready));
    bufp->chgBit(oldp+386,(vlSelf->ysyx_25020037_cpu__DOT__lsu_ready));
    bufp->chgBit(oldp+387,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__state) 
                                & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_valid) 
                                      & (IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_ready))))
                             : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_valid) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_ready)))));
    bufp->chgIData(oldp+388,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgIData(oldp+389,(((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                             >> 3U)))
                               ? vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U]
                               : ((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                 >> 2U)))
                                   ? vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U]
                                   : ((1U & (IData)(
                                                    (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                     >> 7U)))
                                       ? ((1U == ((1U 
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
    bufp->chgIData(oldp+390,(((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                             >> 7U)))
                               ? ((IData)(4U) + vlSelf->pc)
                               : vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_result1)),32);
    bufp->chgBit(oldp+391,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__state) 
                                & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_valid) 
                                      & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_ready))))
                             : (((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_valid) 
                                 | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_valid)) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_ready)))));
    bufp->chgIData(oldp+392,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
                             [(0x1fU & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                                >> 6U)))]),32);
    bufp->chgIData(oldp+393,(((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                             >> 1U)))
                               ? (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                          >> 0x15U))
                               : vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data)),32);
    bufp->chgIData(oldp+394,(((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                             >> 1U)))
                               ? 0xbU : vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data)),32);
    bufp->chgIData(oldp+395,(((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
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
    bufp->chgBit(oldp+396,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__state) 
                                & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_valid) 
                                      & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_ready))))
                             : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_rvalid) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_ready)))));
    bufp->chgBit(oldp+397,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__state) 
                                & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_rvalid) 
                                      & (IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_rready))))
                             : (vlSelf->pc != vlSelf->ysyx_25020037_cpu__DOT__ifu_araddr))));
    bufp->chgBit(oldp+398,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__state) 
                                & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_valid) 
                                      & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_ready))))
                             : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_ready) 
                                & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_valid)))));
    bufp->chgBit(oldp+399,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__state) 
                                & (~ ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__is_read_req) 
                                        & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_rready)) 
                                       & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_rvalid)) 
                                      | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__is_write_req) 
                                          & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_bready)) 
                                         & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_bvalid)))))
                             : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_arvalid) 
                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_awvalid)))));
    bufp->chgBit(oldp+400,(((~ (IData)(vlSelf->rst)) 
                            & (0U != (6U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))))));
    bufp->chgIData(oldp+401,(((IData)(vlSelf->rst) ? 0U
                               : ((1U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                   ? vlSelf->ysyx_25020037_cpu__DOT__csr_wgpr_data
                                   : ((1U == (0xfU 
                                              & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                 >> 5U)))
                                       ? ((0x10U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                           : (0xffU 
                                              & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                       : ((2U == (0xfU 
                                                  & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                     >> 5U)))
                                           ? ((8U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                               : (0xffffU 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                           : vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))))),32);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
