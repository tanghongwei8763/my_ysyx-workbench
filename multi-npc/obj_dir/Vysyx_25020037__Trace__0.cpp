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
    VlWide<4>/*127:0*/ __Vtemp_hfcb396d7__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_25020037__DOT__inst),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_25020037__DOT__ifu_araddr),32);
        bufp->chgBit(oldp+2,(vlSelf->ysyx_25020037__DOT__ifu_arvalid));
        bufp->chgBit(oldp+3,(vlSelf->ysyx_25020037__DOT__ifu_arready));
        bufp->chgCData(oldp+4,(vlSelf->ysyx_25020037__DOT__ifu_rresp),2);
        bufp->chgBit(oldp+5,(vlSelf->ysyx_25020037__DOT__ifu_rready));
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25020037__DOT__lsu_bresp),2);
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25020037__DOT__sram_arready));
        bufp->chgBit(oldp+8,(vlSelf->ysyx_25020037__DOT__sram_awready));
        bufp->chgBit(oldp+9,(vlSelf->ysyx_25020037__DOT__sram_wready));
        bufp->chgIData(oldp+10,(vlSelf->ysyx_25020037__DOT__sram_rdata),32);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_25020037__DOT__sram_rresp),2);
        bufp->chgBit(oldp+12,(vlSelf->ysyx_25020037__DOT__sram_rvalid));
        bufp->chgCData(oldp+13,(vlSelf->ysyx_25020037__DOT__sram_bresp),2);
        bufp->chgBit(oldp+14,(vlSelf->ysyx_25020037__DOT__sram_bvalid));
        bufp->chgBit(oldp+15,(vlSelf->ysyx_25020037__DOT__uart_arready));
        bufp->chgBit(oldp+16,(vlSelf->ysyx_25020037__DOT__uart_awready));
        bufp->chgBit(oldp+17,(vlSelf->ysyx_25020037__DOT__uart_wready));
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25020037__DOT__uart_rdata),32);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_25020037__DOT__uart_rresp),2);
        bufp->chgBit(oldp+20,(vlSelf->ysyx_25020037__DOT__uart_rvalid));
        bufp->chgCData(oldp+21,(vlSelf->ysyx_25020037__DOT__uart_bresp),2);
        bufp->chgBit(oldp+22,(vlSelf->ysyx_25020037__DOT__uart_bvalid));
        bufp->chgBit(oldp+23,(vlSelf->ysyx_25020037__DOT__clint_arready));
        bufp->chgIData(oldp+24,(vlSelf->ysyx_25020037__DOT__clint_rdata),32);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_25020037__DOT__clint_rresp),2);
        bufp->chgBit(oldp+26,(vlSelf->ysyx_25020037__DOT__clint_rvalid));
        bufp->chgBit(oldp+27,(vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__state));
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__last_pc),32);
        bufp->chgBit(oldp+29,(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_clint_addr));
        bufp->chgBit(oldp+30,(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_uart_addr));
        bufp->chgBit(oldp+31,(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_sram_addr));
        bufp->chgCData(oldp+32,(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master),2);
        bufp->chgBit(oldp+33,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__awready));
        bufp->chgBit(oldp+34,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__wready));
        bufp->chgCData(oldp+35,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__bresp),2);
        bufp->chgBit(oldp+36,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__bvalid));
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__mtimel),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__mtimeh),32);
        bufp->chgIData(oldp+39,((vlSelf->ysyx_25020037__DOT__u_clint__DOT__read_addr 
                                 - (IData)(0xa0000048U))),32);
        bufp->chgBit(oldp+40,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__state));
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__read_addr),32);
        bufp->chgBit(oldp+42,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__is_read_req));
        bufp->chgBit(oldp+43,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__is_write_req));
        bufp->chgBit(oldp+44,(vlSelf->ysyx_25020037__DOT__u_clint__DOT__wvalid_reg));
        bufp->chgBit(oldp+45,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__state));
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__read_addr),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_addr),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_data),32);
        bufp->chgCData(oldp+49,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_strb),4);
        bufp->chgBit(oldp+50,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_read_req));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_write_req));
        bufp->chgBit(oldp+52,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__wvalid_reg));
        bufp->chgCData(oldp+53,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__lfsr),8);
        bufp->chgCData(oldp+54,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__delay_count),8);
        bufp->chgCData(oldp+55,(vlSelf->ysyx_25020037__DOT__u_sram__DOT__target_delay),8);
        bufp->chgBit(oldp+56,((1U & VL_REDXOR_8((0xb8U 
                                                 & (IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__lfsr))))));
        bufp->chgBit(oldp+57,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__state));
        bufp->chgIData(oldp+58,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__read_addr),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__write_addr),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__write_data),32);
        bufp->chgCData(oldp+61,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__write_strb),4);
        bufp->chgBit(oldp+62,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_read_req));
        bufp->chgBit(oldp+63,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_write_req));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_25020037__DOT__u_uart__DOT__wvalid_reg));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+65,(vlSelf->ysyx_25020037__DOT__mstatus),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_25020037__DOT__mcause),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+83,(vlSelf->ysyx_25020037__DOT__wu_to_gu_bus),33);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_25020037__DOT__lu_to_wu_bus),32);
        bufp->chgBit(oldp+86,(vlSelf->ysyx_25020037__DOT__lsu_valid));
        bufp->chgBit(oldp+87,(vlSelf->ysyx_25020037__DOT__wbu_ready));
        bufp->chgBit(oldp+88,(vlSelf->ysyx_25020037__DOT__wbu_valid));
        bufp->chgBit(oldp+89,(vlSelf->ysyx_25020037__DOT__gpr_valid));
        bufp->chgBit(oldp+90,(vlSelf->ysyx_25020037__DOT__gpr_ready));
        bufp->chgIData(oldp+91,(vlSelf->ysyx_25020037__DOT__lsu_araddr),32);
        bufp->chgBit(oldp+92,(vlSelf->ysyx_25020037__DOT__lsu_arvalid));
        bufp->chgBit(oldp+93,(vlSelf->ysyx_25020037__DOT__lsu_arready));
        bufp->chgIData(oldp+94,(vlSelf->ysyx_25020037__DOT__lsu_awaddr),32);
        bufp->chgBit(oldp+95,(vlSelf->ysyx_25020037__DOT__lsu_awvalid));
        bufp->chgBit(oldp+96,(vlSelf->ysyx_25020037__DOT__lsu_awready));
        bufp->chgIData(oldp+97,(vlSelf->ysyx_25020037__DOT__lsu_wdata),32);
        bufp->chgCData(oldp+98,(vlSelf->ysyx_25020037__DOT__lsu_wstrb),4);
        bufp->chgBit(oldp+99,(vlSelf->ysyx_25020037__DOT__lsu_wvalid));
        bufp->chgBit(oldp+100,(vlSelf->ysyx_25020037__DOT__lsu_wready));
        bufp->chgBit(oldp+101,(vlSelf->ysyx_25020037__DOT__lsu_bvalid));
        bufp->chgBit(oldp+102,(vlSelf->ysyx_25020037__DOT__lsu_bready));
        bufp->chgIData(oldp+103,(vlSelf->ysyx_25020037__DOT__lsu_rdata),32);
        bufp->chgCData(oldp+104,(vlSelf->ysyx_25020037__DOT__lsu_rresp),2);
        bufp->chgBit(oldp+105,(vlSelf->ysyx_25020037__DOT__lsu_rvalid));
        bufp->chgBit(oldp+106,(vlSelf->ysyx_25020037__DOT__lsu_rready));
        bufp->chgIData(oldp+107,(vlSelf->ysyx_25020037__DOT__sram_araddr),32);
        bufp->chgBit(oldp+108,(vlSelf->ysyx_25020037__DOT__sram_arvalid));
        bufp->chgIData(oldp+109,(vlSelf->ysyx_25020037__DOT__sram_awaddr),32);
        bufp->chgBit(oldp+110,(vlSelf->ysyx_25020037__DOT__sram_awvalid));
        bufp->chgIData(oldp+111,(vlSelf->ysyx_25020037__DOT__sram_wdata),32);
        bufp->chgCData(oldp+112,(vlSelf->ysyx_25020037__DOT__sram_wstrb),4);
        bufp->chgBit(oldp+113,(vlSelf->ysyx_25020037__DOT__sram_wvalid));
        bufp->chgBit(oldp+114,(vlSelf->ysyx_25020037__DOT__sram_rready));
        bufp->chgBit(oldp+115,(vlSelf->ysyx_25020037__DOT__sram_bready));
        bufp->chgIData(oldp+116,(vlSelf->ysyx_25020037__DOT__uart_araddr),32);
        bufp->chgBit(oldp+117,(vlSelf->ysyx_25020037__DOT__uart_arvalid));
        bufp->chgIData(oldp+118,(vlSelf->ysyx_25020037__DOT__uart_awaddr),32);
        bufp->chgBit(oldp+119,(vlSelf->ysyx_25020037__DOT__uart_awvalid));
        bufp->chgIData(oldp+120,(vlSelf->ysyx_25020037__DOT__uart_wdata),32);
        bufp->chgCData(oldp+121,(vlSelf->ysyx_25020037__DOT__uart_wstrb),4);
        bufp->chgBit(oldp+122,(vlSelf->ysyx_25020037__DOT__uart_wvalid));
        bufp->chgBit(oldp+123,(vlSelf->ysyx_25020037__DOT__uart_rready));
        bufp->chgBit(oldp+124,(vlSelf->ysyx_25020037__DOT__uart_bready));
        bufp->chgIData(oldp+125,(vlSelf->ysyx_25020037__DOT__clint_araddr),32);
        bufp->chgBit(oldp+126,(vlSelf->ysyx_25020037__DOT__clint_arvalid));
        bufp->chgBit(oldp+127,(vlSelf->ysyx_25020037__DOT__clint_rready));
        bufp->chgBit(oldp+128,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__state));
        bufp->chgQData(oldp+129,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r),33);
        bufp->chgIData(oldp+131,((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r)),32);
        bufp->chgBit(oldp+132,((1U & (IData)((vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+133,(vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__state));
        bufp->chgBit(oldp+134,(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__state));
        bufp->chgBit(oldp+135,(((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__state)
                                 ? ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__state) 
                                    & (~ ((IData)(vlSelf->ysyx_25020037__DOT__wbu_valid) 
                                          & (IData)(vlSelf->ysyx_25020037__DOT__gpr_ready))))
                                 : ((IData)(vlSelf->ysyx_25020037__DOT__lsu_valid) 
                                    & (IData)(vlSelf->ysyx_25020037__DOT__wbu_ready)))));
        bufp->chgSData(oldp+136,(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r),9);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r),32);
        bufp->chgCData(oldp+138,((0xfU & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                          >> 5U))),4);
        bufp->chgBit(oldp+139,((1U & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                      >> 4U))));
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                      >> 3U))));
        bufp->chgBit(oldp+141,((1U & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                      >> 2U))));
        bufp->chgBit(oldp+142,((1U & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                      >> 1U))));
        bufp->chgBit(oldp+143,((1U & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))));
        bufp->chgIData(oldp+144,(((1U == (0xfU & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                  >> 5U)))
                                   ? ((0x10U & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                       : (0xffU & vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                   : ((2U == (0xfU 
                                              & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
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
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgQData(oldp+145,(vlSelf->ysyx_25020037__DOT__eu_to_lu_bus),64);
        bufp->chgIData(oldp+147,(vlSelf->ysyx_25020037__DOT__dnpc),32);
        bufp->chgBit(oldp+148,(vlSelf->ysyx_25020037__DOT__exu_valid));
        bufp->chgBit(oldp+149,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__state));
        bufp->chgQData(oldp+150,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r),59);
        bufp->chgWData(oldp+152,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r),128);
        bufp->chgIData(oldp+156,((IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                          >> 0x1bU))),32);
        bufp->chgIData(oldp+157,((0x1ffffU & (IData)(
                                                     (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                      >> 0xaU)))),17);
        bufp->chgBit(oldp+158,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 9U)))));
        bufp->chgBit(oldp+159,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 8U)))));
        bufp->chgBit(oldp+160,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 7U)))));
        bufp->chgBit(oldp+161,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 6U)))));
        bufp->chgBit(oldp+162,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 5U)))));
        bufp->chgBit(oldp+163,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 4U)))));
        bufp->chgBit(oldp+164,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 3U)))));
        bufp->chgBit(oldp+165,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 2U)))));
        bufp->chgBit(oldp+166,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 1U)))));
        bufp->chgBit(oldp+167,((1U & (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r))));
        bufp->chgIData(oldp+168,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U]),32);
        bufp->chgIData(oldp+169,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]),32);
        bufp->chgIData(oldp+170,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U]),32);
        bufp->chgIData(oldp+171,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U]),32);
        bufp->chgIData(oldp+172,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result),32);
        bufp->chgIData(oldp+173,(((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                 >> 6U)))
                                   ? (((- (IData)((1U 
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
                                         | ((1U & (
                                                   (- (IData)(
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
                                   : 1U)),32);
        bufp->chgBit(oldp+174,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+175,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+176,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+177,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+178,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+179,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+180,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+181,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+182,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+183,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+184,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+185,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+186,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+187,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+188,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+189,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+190,((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x1aU)))));
        bufp->chgIData(oldp+191,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0),32);
        bufp->chgIData(oldp+193,((1U & (~ (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))),32);
        bufp->chgIData(oldp+194,((1U & (~ (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))),32);
        bufp->chgIData(oldp+195,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1),32);
        bufp->chgIData(oldp+196,((1U & (~ (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))),32);
        bufp->chgIData(oldp+197,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b),32);
        bufp->chgIData(oldp+198,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d),32);
        bufp->chgBit(oldp+199,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin));
        bufp->chgBit(oldp+200,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1));
        bufp->chgIData(oldp+201,((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                                  + (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
                                     + (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)))),32);
        bufp->chgBit(oldp+202,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+203,((1U & (((~ (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
                                             >> 0x1fU)) 
                                         & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                            >> 0x1fU)) 
                                        | ((~ ((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                ^ vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                                               >> 0x1fU)) 
                                           & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
                                              >> 0x1fU))))),32);
        bufp->chgIData(oldp+204,((1U & (~ (IData)((1ULL 
                                                   & (((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                       + 
                                                       ((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                        + (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                      >> 0x20U)))))),32);
        bufp->chgIData(oldp+205,((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                  & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
        bufp->chgIData(oldp+206,((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                  | vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
        bufp->chgIData(oldp+207,((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                  ^ vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
        bufp->chgIData(oldp+208,((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                  << (0x1fU & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),32);
        bufp->chgQData(oldp+209,(((((QData)((IData)(
                                                    (- (IData)((IData)(
                                                                       ((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                         >> 0x13U) 
                                                                        & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                  >> (0x1fU & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),64);
        bufp->chgIData(oldp+211,((IData)(((((QData)((IData)(
                                                            (- (IData)((IData)(
                                                                               ((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x13U) 
                                                                                & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                          >> (0x1fU 
                                              & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)))),32);
        bufp->chgBit(oldp+212,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                  + 
                                                  ((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                   + (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                 >> 0x20U))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+213,(vlSelf->ysyx_25020037__DOT__mtvec),32);
        bufp->chgIData(oldp+214,(vlSelf->ysyx_25020037__DOT__mepc),32);
        bufp->chgIData(oldp+215,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0]),32);
        bufp->chgIData(oldp+216,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[1]),32);
        bufp->chgIData(oldp+217,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[2]),32);
        bufp->chgIData(oldp+218,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[3]),32);
        bufp->chgIData(oldp+219,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[4]),32);
        bufp->chgIData(oldp+220,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[5]),32);
        bufp->chgIData(oldp+221,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[6]),32);
        bufp->chgIData(oldp+222,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[7]),32);
        bufp->chgIData(oldp+223,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[8]),32);
        bufp->chgIData(oldp+224,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[9]),32);
        bufp->chgIData(oldp+225,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[10]),32);
        bufp->chgIData(oldp+226,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[11]),32);
        bufp->chgIData(oldp+227,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[12]),32);
        bufp->chgIData(oldp+228,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[13]),32);
        bufp->chgIData(oldp+229,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[14]),32);
        bufp->chgIData(oldp+230,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[15]),32);
        bufp->chgIData(oldp+231,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[16]),32);
        bufp->chgIData(oldp+232,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[17]),32);
        bufp->chgIData(oldp+233,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[18]),32);
        bufp->chgIData(oldp+234,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[19]),32);
        bufp->chgIData(oldp+235,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[20]),32);
        bufp->chgIData(oldp+236,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[21]),32);
        bufp->chgIData(oldp+237,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[22]),32);
        bufp->chgIData(oldp+238,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[23]),32);
        bufp->chgIData(oldp+239,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[24]),32);
        bufp->chgIData(oldp+240,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[25]),32);
        bufp->chgIData(oldp+241,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[26]),32);
        bufp->chgIData(oldp+242,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[27]),32);
        bufp->chgIData(oldp+243,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[28]),32);
        bufp->chgIData(oldp+244,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[29]),32);
        bufp->chgIData(oldp+245,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[30]),32);
        bufp->chgIData(oldp+246,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+247,((0x6fU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r))));
        bufp->chgBit(oldp+248,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl));
        bufp->chgQData(oldp+249,(vlSelf->ysyx_25020037__DOT__du_to_gu_bus),53);
        bufp->chgQData(oldp+251,(vlSelf->ysyx_25020037__DOT__du_to_eu_bus),59);
        bufp->chgCData(oldp+253,(vlSelf->ysyx_25020037__DOT__du_to_lu_bus),6);
        bufp->chgSData(oldp+254,(vlSelf->ysyx_25020037__DOT__du_to_wu_bus),9);
        bufp->chgIData(oldp+255,(vlSelf->ysyx_25020037__DOT__ifu_rdata),32);
        bufp->chgBit(oldp+256,(vlSelf->ysyx_25020037__DOT__ifu_rvalid));
        bufp->chgBit(oldp+257,(vlSelf->ysyx_25020037__DOT__idu_valid));
        bufp->chgBit(oldp+258,(vlSelf->ysyx_25020037__DOT__idu_ready));
        bufp->chgBit(oldp+259,(vlSelf->ysyx_25020037__DOT__inst_s));
        bufp->chgBit(oldp+260,(vlSelf->ysyx_25020037__DOT__inst_l));
        bufp->chgBit(oldp+261,(vlSelf->ysyx_25020037__DOT__gpr_we));
        bufp->chgIData(oldp+262,((IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                          >> 0x15U))),32);
        bufp->chgCData(oldp+263,((0x1fU & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                   >> 0x10U)))),5);
        bufp->chgCData(oldp+264,((0x1fU & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                   >> 0xbU)))),5);
        bufp->chgCData(oldp+265,((0x1fU & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                   >> 6U)))),5);
        bufp->chgBit(oldp+266,((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                              >> 5U)))));
        bufp->chgBit(oldp+267,((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                              >> 4U)))));
        bufp->chgBit(oldp+268,((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                              >> 3U)))));
        bufp->chgBit(oldp+269,((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                              >> 2U)))));
        bufp->chgBit(oldp+270,((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                              >> 1U)))));
        bufp->chgBit(oldp+271,((1U & (IData)(vlSelf->ysyx_25020037__DOT__du_to_gu_bus))));
        bufp->chgBit(oldp+272,((IData)((0ULL != (0x12ULL 
                                                 & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+273,((IData)((0ULL != (6ULL 
                                                 & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+274,((IData)((0ULL != (0xbULL 
                                                 & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+275,(((IData)((0ULL != (6ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus))) 
                                & (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
        bufp->chgBit(oldp+276,(((IData)((0ULL != (0x12ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus))) 
                                & (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
        bufp->chgBit(oldp+277,(((IData)((0ULL != (0xbULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus))) 
                                & (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
        bufp->chgBit(oldp+278,(((IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                         >> 5U)) & (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))));
        bufp->chgBit(oldp+279,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0ULL == (0x1f0000ULL 
                                            & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+280,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0xa0000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+281,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0xb0000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+282,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0xc0000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+283,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0xd0000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+284,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0xe0000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+285,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0xf0000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+286,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x10000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+287,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x20000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+288,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x30000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+289,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x40000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+290,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x50000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+291,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x60000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+292,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x70000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+293,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x80000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+294,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
                                & (0x90000ULL == (0x1f0000ULL 
                                                  & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))));
        bufp->chgBit(oldp+295,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__state));
        bufp->chgIData(oldp+296,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r),32);
        bufp->chgCData(oldp+297,((0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+298,((0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+299,((0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                           >> 7U))),5);
        bufp->chgIData(oldp+300,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm),32);
        bufp->chgIData(oldp+301,((((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bltu) 
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
        bufp->chgBit(oldp+302,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_R) 
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
        bufp->chgBit(oldp+303,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rlsu_we));
        bufp->chgBit(oldp+304,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__wlsu_we));
        bufp->chgBit(oldp+305,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__bit_sext));
        bufp->chgBit(oldp+306,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__half_sext));
        bufp->chgCData(oldp+307,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rstrb),4);
        bufp->chgBit(oldp+308,(((0x6fU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                | ((0x17U == (0x7fU 
                                              & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                   | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal)))));
        bufp->chgBit(oldp+309,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                                   | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sh) 
                                      | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                                         | ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                            | ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                               | ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                  | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal) 
                                                     | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl)))))))))));
        bufp->chgBit(oldp+310,(((0x6fU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
                                   | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal) 
                                      | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0))))));
        bufp->chgBit(oldp+311,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal));
        bufp->chgBit(oldp+312,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ebreak));
        bufp->chgBit(oldp+313,((1U & (~ ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal) 
                                         | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
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
        bufp->chgBit(oldp+314,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csr_w_gpr_we));
        bufp->chgBit(oldp+315,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csrrw_op));
        bufp->chgBit(oldp+316,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csrrs_op));
        bufp->chgBit(oldp+317,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ecall_en));
        bufp->chgBit(oldp+318,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__mret_en));
        bufp->chgBit(oldp+319,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op));
        bufp->chgBit(oldp+320,(((0x305U == vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm) 
                                & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op))));
        bufp->chgBit(oldp+321,(((0x341U == vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm) 
                                & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op))));
        bufp->chgBit(oldp+322,(((0x300U == vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm) 
                                & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op))));
        bufp->chgBit(oldp+323,(((0x342U == vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm) 
                                & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op))));
        bufp->chgCData(oldp+324,((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+325,((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                  >> 0x1aU)),6);
        bufp->chgCData(oldp+326,((7U & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+327,((0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)),7);
        bufp->chgIData(oldp+328,((((- (IData)((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                               >> 0x14U))),32);
        bufp->chgIData(oldp+329,((((- (IData)((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+330,((((- (IData)((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
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
        bufp->chgIData(oldp+331,((0xfffff000U & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)),32);
        bufp->chgIData(oldp+332,((((- (IData)((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                         >> 0x14U)))))),32);
        bufp->chgWData(oldp+333,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_25_d),128);
        bufp->chgQData(oldp+337,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_26_d),64);
        bufp->chgCData(oldp+339,((((7U == (7U & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0xcU))) 
                                   << 7U) | (((6U == 
                                               (7U 
                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                   >> 0xcU))) 
                                              << 6U) 
                                             | (((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
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
        bufp->chgWData(oldp+340,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_06_00_d),128);
        bufp->chgIData(oldp+344,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs1_d),32);
        bufp->chgIData(oldp+345,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs2_d),32);
        bufp->chgIData(oldp+346,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rd_d),32);
        bufp->chgBit(oldp+347,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                                   | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__bit_sext)))));
        bufp->chgBit(oldp+348,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sh) 
                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__half_sext) 
                                   | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lhu)))));
        bufp->chgBit(oldp+349,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw))));
        bufp->chgBit(oldp+350,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add));
        bufp->chgBit(oldp+351,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_and));
        bufp->chgBit(oldp+352,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_or));
        bufp->chgBit(oldp+353,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_ori));
        bufp->chgBit(oldp+354,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_xor));
        bufp->chgBit(oldp+355,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_xori));
        bufp->chgBit(oldp+356,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sub));
        bufp->chgBit(oldp+357,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_slt));
        bufp->chgBit(oldp+358,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sltu));
        bufp->chgBit(oldp+359,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi));
        bufp->chgBit(oldp+360,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_andi));
        bufp->chgBit(oldp+361,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu));
        bufp->chgBit(oldp+362,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lhu));
        bufp->chgBit(oldp+363,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw));
        bufp->chgBit(oldp+364,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sll));
        bufp->chgBit(oldp+365,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_slli));
        bufp->chgBit(oldp+366,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sltiu));
        bufp->chgBit(oldp+367,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sra));
        bufp->chgBit(oldp+368,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srai));
        bufp->chgBit(oldp+369,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srl));
        bufp->chgBit(oldp+370,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srli));
        bufp->chgBit(oldp+371,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb));
        bufp->chgBit(oldp+372,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sh));
        bufp->chgBit(oldp+373,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw));
        bufp->chgBit(oldp+374,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_beq));
        bufp->chgBit(oldp+375,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bne));
        bufp->chgBit(oldp+376,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bge));
        bufp->chgBit(oldp+377,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bgeu));
        bufp->chgBit(oldp+378,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_blt));
        bufp->chgBit(oldp+379,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bltu));
        bufp->chgBit(oldp+380,((0x17U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r))));
        bufp->chgBit(oldp+381,((0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r))));
        bufp->chgBit(oldp+382,((IData)(((0U == (0xfffffU 
                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                        & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))));
        bufp->chgBit(oldp+383,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_R));
        bufp->chgBit(oldp+384,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I));
        bufp->chgBit(oldp+385,(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_U));
        bufp->chgBit(oldp+386,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ebreak) 
                                | (IData)(((0U == (0xfffffU 
                                                   & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                           & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+387,(vlSelf->ysyx_25020037__DOT__csr_wgpr_data),32);
        bufp->chgIData(oldp+388,(vlSelf->ysyx_25020037__DOT__csr_wcsr_data),32);
        bufp->chgIData(oldp+389,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__src1),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+390,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a),32);
        bufp->chgIData(oldp+391,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1),32);
        bufp->chgIData(oldp+392,(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result),32);
    }
    bufp->chgBit(oldp+393,(vlSelf->clock));
    bufp->chgBit(oldp+394,(vlSelf->reset));
    bufp->chgBit(oldp+395,(vlSelf->io_interrupt));
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
    bufp->chgWData(oldp+396,(__Vtemp_hfcb396d7__0),128);
    bufp->chgIData(oldp+400,(vlSelf->ysyx_25020037__DOT__pc),32);
    bufp->chgBit(oldp+401,(vlSelf->ysyx_25020037__DOT__exu_ready));
    bufp->chgBit(oldp+402,(vlSelf->ysyx_25020037__DOT__lsu_ready));
    bufp->chgBit(oldp+403,(((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__state) 
                                & (~ ((IData)(vlSelf->ysyx_25020037__DOT__exu_valid) 
                                      & (IData)(vlSelf->ysyx_25020037__DOT__lsu_ready))))
                             : ((IData)(vlSelf->ysyx_25020037__DOT__idu_valid) 
                                & (IData)(vlSelf->ysyx_25020037__DOT__exu_ready)))));
    bufp->chgIData(oldp+404,(((IData)(4U) + vlSelf->ysyx_25020037__DOT__pc)),32);
    bufp->chgIData(oldp+405,(((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                             >> 3U)))
                               ? vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U]
                               : ((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                 >> 2U)))
                                   ? vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U]
                                   : ((1U & (IData)(
                                                    (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                     >> 7U)))
                                       ? ((1U == ((1U 
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
    bufp->chgIData(oldp+406,(((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                             >> 7U)))
                               ? ((IData)(4U) + vlSelf->ysyx_25020037__DOT__pc)
                               : vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1)),32);
    bufp->chgBit(oldp+407,(((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__state) 
                                & (~ ((IData)(vlSelf->ysyx_25020037__DOT__gpr_valid) 
                                      & (IData)(vlSelf->ysyx_25020037__DOT__exu_ready))))
                             : (((IData)(vlSelf->ysyx_25020037__DOT__wbu_valid) 
                                 | (IData)(vlSelf->ysyx_25020037__DOT__idu_valid)) 
                                & (IData)(vlSelf->ysyx_25020037__DOT__gpr_ready)))));
    bufp->chgIData(oldp+408,(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
                             [(0x1fU & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                >> 6U)))]),32);
    bufp->chgIData(oldp+409,(((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                             >> 1U)))
                               ? (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                          >> 0x15U))
                               : vlSelf->ysyx_25020037__DOT__csr_wcsr_data)),32);
    bufp->chgIData(oldp+410,(((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                             >> 1U)))
                               ? 0xbU : vlSelf->ysyx_25020037__DOT__csr_wcsr_data)),32);
    bufp->chgIData(oldp+411,(((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
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
    bufp->chgBit(oldp+412,(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__state) 
                                & (~ ((IData)(vlSelf->ysyx_25020037__DOT__idu_valid) 
                                      & (IData)(vlSelf->ysyx_25020037__DOT__exu_ready))))
                             : ((IData)(vlSelf->ysyx_25020037__DOT__ifu_rvalid) 
                                & (IData)(vlSelf->ysyx_25020037__DOT__idu_ready)))));
    bufp->chgBit(oldp+413,(((IData)(vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__state) 
                                & (~ ((IData)(vlSelf->ysyx_25020037__DOT__ifu_rvalid) 
                                      & (IData)(vlSelf->ysyx_25020037__DOT__ifu_rready))))
                             : (vlSelf->ysyx_25020037__DOT__pc 
                                != vlSelf->ysyx_25020037__DOT__ifu_araddr))));
    bufp->chgBit(oldp+414,(((IData)(vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__state) 
                                & (~ ((IData)(vlSelf->ysyx_25020037__DOT__lsu_valid) 
                                      & (IData)(vlSelf->ysyx_25020037__DOT__wbu_ready))))
                             : ((IData)(vlSelf->ysyx_25020037__DOT__lsu_ready) 
                                & (IData)(vlSelf->ysyx_25020037__DOT__exu_valid)))));
    bufp->chgCData(oldp+415,(((0U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))
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
                                        ? 0U : 2U) : 0U)))),2);
    bufp->chgBit(oldp+416,(((IData)(vlSelf->ysyx_25020037__DOT__u_clint__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037__DOT__u_clint__DOT__state) 
                                & (~ (((IData)(vlSelf->ysyx_25020037__DOT__u_clint__DOT__is_read_req) 
                                       & (IData)(vlSelf->ysyx_25020037__DOT__clint_rready)) 
                                      & (IData)(vlSelf->ysyx_25020037__DOT__clint_rvalid))))
                             : (IData)(vlSelf->ysyx_25020037__DOT__clint_arvalid))));
    bufp->chgBit(oldp+417,(((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__state) 
                                & (~ ((((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_read_req) 
                                        & (IData)(vlSelf->ysyx_25020037__DOT__sram_rready)) 
                                       & (IData)(vlSelf->ysyx_25020037__DOT__sram_rvalid)) 
                                      | (((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_write_req) 
                                          & (IData)(vlSelf->ysyx_25020037__DOT__sram_bready)) 
                                         & (IData)(vlSelf->ysyx_25020037__DOT__sram_bvalid)))))
                             : ((IData)(vlSelf->ysyx_25020037__DOT__sram_arvalid) 
                                | (IData)(vlSelf->ysyx_25020037__DOT__sram_awvalid)))));
    bufp->chgBit(oldp+418,(((IData)(vlSelf->ysyx_25020037__DOT__u_uart__DOT__state)
                             ? ((IData)(vlSelf->ysyx_25020037__DOT__u_uart__DOT__state) 
                                & (~ ((((IData)(vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_read_req) 
                                        & (IData)(vlSelf->ysyx_25020037__DOT__uart_rready)) 
                                       & (IData)(vlSelf->ysyx_25020037__DOT__uart_rvalid)) 
                                      | (((IData)(vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_write_req) 
                                          & (IData)(vlSelf->ysyx_25020037__DOT__uart_bready)) 
                                         & (IData)(vlSelf->ysyx_25020037__DOT__uart_bvalid)))))
                             : ((IData)(vlSelf->ysyx_25020037__DOT__uart_arvalid) 
                                | (IData)(vlSelf->ysyx_25020037__DOT__uart_awvalid)))));
    bufp->chgBit(oldp+419,(((~ (IData)(vlSelf->reset)) 
                            & (0U != (6U & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))))));
    bufp->chgIData(oldp+420,(((IData)(vlSelf->reset)
                               ? 0U : ((1U & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                        ? vlSelf->ysyx_25020037__DOT__csr_wgpr_data
                                        : ((1U == (0xfU 
                                                   & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                      >> 5U)))
                                            ? ((0x10U 
                                                & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                                : (0xffU 
                                                   & vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                            : ((2U 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                    >> 5U)))
                                                ? (
                                                   (8U 
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
