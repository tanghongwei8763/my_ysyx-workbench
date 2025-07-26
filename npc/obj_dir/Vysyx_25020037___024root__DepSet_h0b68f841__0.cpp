// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25020037.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25020037___024root.h"

VL_INLINE_OPT void Vysyx_25020037___024root___ico_sequent__TOP__0(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__final_gpr_we 
        = ((~ (IData)(vlSelf->reset)) & (0U != (6U 
                                                & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))));
    vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__final_result 
        = ((IData)(vlSelf->reset) ? 0U : ((1U & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
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
                                                   : vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))));
}

void Vysyx_25020037___024root___eval_ico(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_25020037___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vysyx_25020037___024root___eval_act(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_act\n"); );
}

void Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__u_uart__DOT__difftest_skip_ref_TOP();
void Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__u_sram__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ trace_on, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__u_sram__DOT__pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data, IData/*31:0*/ trace_on);

VL_INLINE_OPT void Vysyx_25020037___024root___nba_sequent__TOP__0(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__0__Vfuncout;
    __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__0__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__0__lfsr_value;
    __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__0__lfsr_value = 0;
    CData/*7:0*/ __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__1__Vfuncout;
    __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__1__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__1__lfsr_value;
    __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__1__lfsr_value = 0;
    IData/*31:0*/ __Vfunc_ysyx_25020037__DOT__u_sram__DOT__pmem_read__2__Vfuncout;
    __Vfunc_ysyx_25020037__DOT__u_sram__DOT__pmem_read__2__Vfuncout = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__ifu_arvalid;
    __Vdly__ysyx_25020037__DOT__ifu_arvalid = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__ifu_rready;
    __Vdly__ysyx_25020037__DOT__ifu_rready = 0;
    IData/*31:0*/ __Vdly__ysyx_25020037__DOT__ifu_cpu__DOT__last_pc;
    __Vdly__ysyx_25020037__DOT__ifu_cpu__DOT__last_pc = 0;
    CData/*7:0*/ __Vdly__ysyx_25020037__DOT__u_sram__DOT__lfsr;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__lfsr = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__u_sram__DOT__state;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__state = 0;
    CData/*7:0*/ __Vdly__ysyx_25020037__DOT__u_sram__DOT__delay_count;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__delay_count = 0;
    CData/*7:0*/ __Vdly__ysyx_25020037__DOT__u_sram__DOT__target_delay;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__target_delay = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__sram_arready;
    __Vdly__ysyx_25020037__DOT__sram_arready = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__sram_awready;
    __Vdly__ysyx_25020037__DOT__sram_awready = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__sram_wready;
    __Vdly__ysyx_25020037__DOT__sram_wready = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__u_sram__DOT__wvalid_reg;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__wvalid_reg = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_read_req;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_read_req = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_write_req;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_write_req = 0;
    IData/*31:0*/ __Vdly__ysyx_25020037__DOT__u_sram__DOT__write_data;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__write_data = 0;
    CData/*3:0*/ __Vdly__ysyx_25020037__DOT__u_sram__DOT__write_strb;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__write_strb = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__u_uart__DOT__state;
    __Vdly__ysyx_25020037__DOT__u_uart__DOT__state = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__uart_arready;
    __Vdly__ysyx_25020037__DOT__uart_arready = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__uart_awready;
    __Vdly__ysyx_25020037__DOT__uart_awready = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__uart_wready;
    __Vdly__ysyx_25020037__DOT__uart_wready = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__u_uart__DOT__wvalid_reg;
    __Vdly__ysyx_25020037__DOT__u_uart__DOT__wvalid_reg = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_read_req;
    __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_read_req = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_write_req;
    __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_write_req = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__u_clint__DOT__state;
    __Vdly__ysyx_25020037__DOT__u_clint__DOT__state = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__clint_arready;
    __Vdly__ysyx_25020037__DOT__clint_arready = 0;
    IData/*31:0*/ __Vdly__ysyx_25020037__DOT__u_clint__DOT__mtimel;
    __Vdly__ysyx_25020037__DOT__u_clint__DOT__mtimel = 0;
    IData/*31:0*/ __Vdly__ysyx_25020037__DOT__u_clint__DOT__mtimeh;
    __Vdly__ysyx_25020037__DOT__u_clint__DOT__mtimeh = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__u_clint__DOT__wvalid_reg;
    __Vdly__ysyx_25020037__DOT__u_clint__DOT__wvalid_reg = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_read_req;
    __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_read_req = 0;
    CData/*0:0*/ __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_write_req;
    __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_write_req = 0;
    // Body
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__lfsr = vlSelf->ysyx_25020037__DOT__u_sram__DOT__lfsr;
    __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_write_req 
        = vlSelf->ysyx_25020037__DOT__u_clint__DOT__is_write_req;
    __Vdly__ysyx_25020037__DOT__u_clint__DOT__wvalid_reg 
        = vlSelf->ysyx_25020037__DOT__u_clint__DOT__wvalid_reg;
    __Vdly__ysyx_25020037__DOT__u_clint__DOT__mtimeh 
        = vlSelf->ysyx_25020037__DOT__u_clint__DOT__mtimeh;
    __Vdly__ysyx_25020037__DOT__u_clint__DOT__mtimel 
        = vlSelf->ysyx_25020037__DOT__u_clint__DOT__mtimel;
    __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_read_req 
        = vlSelf->ysyx_25020037__DOT__u_clint__DOT__is_read_req;
    __Vdly__ysyx_25020037__DOT__u_clint__DOT__state 
        = vlSelf->ysyx_25020037__DOT__u_clint__DOT__state;
    __Vdly__ysyx_25020037__DOT__clint_arready = vlSelf->ysyx_25020037__DOT__clint_arready;
    __Vdly__ysyx_25020037__DOT__u_uart__DOT__wvalid_reg 
        = vlSelf->ysyx_25020037__DOT__u_uart__DOT__wvalid_reg;
    __Vdly__ysyx_25020037__DOT__uart_wready = vlSelf->ysyx_25020037__DOT__uart_wready;
    __Vdly__ysyx_25020037__DOT__uart_awready = vlSelf->ysyx_25020037__DOT__uart_awready;
    __Vdly__ysyx_25020037__DOT__uart_arready = vlSelf->ysyx_25020037__DOT__uart_arready;
    __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_write_req 
        = vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_write_req;
    __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_read_req 
        = vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_read_req;
    __Vdly__ysyx_25020037__DOT__u_uart__DOT__state 
        = vlSelf->ysyx_25020037__DOT__u_uart__DOT__state;
    __Vdly__ysyx_25020037__DOT__ifu_cpu__DOT__last_pc 
        = vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__last_pc;
    __Vdly__ysyx_25020037__DOT__ifu_arvalid = vlSelf->ysyx_25020037__DOT__ifu_arvalid;
    __Vdly__ysyx_25020037__DOT__ifu_rready = vlSelf->ysyx_25020037__DOT__ifu_rready;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__write_strb 
        = vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_strb;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__write_data 
        = vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_data;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__wvalid_reg 
        = vlSelf->ysyx_25020037__DOT__u_sram__DOT__wvalid_reg;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__target_delay 
        = vlSelf->ysyx_25020037__DOT__u_sram__DOT__target_delay;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__delay_count 
        = vlSelf->ysyx_25020037__DOT__u_sram__DOT__delay_count;
    __Vdly__ysyx_25020037__DOT__sram_wready = vlSelf->ysyx_25020037__DOT__sram_wready;
    __Vdly__ysyx_25020037__DOT__sram_awready = vlSelf->ysyx_25020037__DOT__sram_awready;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_write_req 
        = vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_write_req;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_read_req 
        = vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_read_req;
    __Vdly__ysyx_25020037__DOT__u_sram__DOT__state 
        = vlSelf->ysyx_25020037__DOT__u_sram__DOT__state;
    __Vdly__ysyx_25020037__DOT__sram_arready = vlSelf->ysyx_25020037__DOT__sram_arready;
    vlSelf->__Vdly__ysyx_25020037__DOT__idu_ready = vlSelf->ysyx_25020037__DOT__idu_ready;
    vlSelf->__Vdly__ysyx_25020037__DOT__lsu_ready = vlSelf->ysyx_25020037__DOT__lsu_ready;
    vlSelf->__Vdly__ysyx_25020037__DOT__lsu_awvalid 
        = vlSelf->ysyx_25020037__DOT__lsu_awvalid;
    vlSelf->__Vdly__ysyx_25020037__DOT__lsu_arvalid 
        = vlSelf->ysyx_25020037__DOT__lsu_arvalid;
    vlSelf->__Vdly__ysyx_25020037__DOT__lsu_bready 
        = vlSelf->ysyx_25020037__DOT__lsu_bready;
    vlSelf->__Vdly__ysyx_25020037__DOT__lsu_rready 
        = vlSelf->ysyx_25020037__DOT__lsu_rready;
    vlSelf->__Vdly__ysyx_25020037__DOT__gpr_ready = vlSelf->ysyx_25020037__DOT__gpr_ready;
    if (vlSelf->reset) {
        __Vdly__ysyx_25020037__DOT__u_sram__DOT__lfsr = 1U;
    } else if (((~ (IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__state)) 
                & ((IData)(vlSelf->ysyx_25020037__DOT__sram_arvalid) 
                   | ((IData)(vlSelf->ysyx_25020037__DOT__sram_awvalid) 
                      & (IData)(vlSelf->ysyx_25020037__DOT__sram_wvalid))))) {
        __Vdly__ysyx_25020037__DOT__u_sram__DOT__lfsr 
            = ((0xfeU & ((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__lfsr) 
                         << 1U)) | (IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__lfsr_tap));
    }
    if (vlSelf->reset) {
        __Vdly__ysyx_25020037__DOT__u_clint__DOT__state = 0U;
        __Vdly__ysyx_25020037__DOT__clint_arready = 1U;
        vlSelf->ysyx_25020037__DOT__clint_rdata = 0U;
        vlSelf->ysyx_25020037__DOT__clint_rresp = 0U;
        vlSelf->ysyx_25020037__DOT__clint_rvalid = 0U;
        vlSelf->ysyx_25020037__DOT__u_clint__DOT__awready = 1U;
        vlSelf->ysyx_25020037__DOT__u_clint__DOT__wready = 0U;
        vlSelf->ysyx_25020037__DOT__u_clint__DOT__bresp = 0U;
        vlSelf->ysyx_25020037__DOT__u_clint__DOT__bvalid = 0U;
        __Vdly__ysyx_25020037__DOT__u_clint__DOT__mtimel = 0U;
        __Vdly__ysyx_25020037__DOT__u_clint__DOT__mtimeh = 0U;
        __Vdly__ysyx_25020037__DOT__u_clint__DOT__wvalid_reg = 0U;
        __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_read_req = 0U;
        __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_write_req = 0U;
    } else {
        if ((0xffffffffU == vlSelf->ysyx_25020037__DOT__u_clint__DOT__mtimel)) {
            __Vdly__ysyx_25020037__DOT__u_clint__DOT__mtimeh 
                = ((IData)(1U) + vlSelf->ysyx_25020037__DOT__u_clint__DOT__mtimeh);
            __Vdly__ysyx_25020037__DOT__u_clint__DOT__mtimel = 0U;
        } else {
            __Vdly__ysyx_25020037__DOT__u_clint__DOT__mtimel 
                = ((IData)(1U) + vlSelf->ysyx_25020037__DOT__u_clint__DOT__mtimel);
        }
        if (vlSelf->ysyx_25020037__DOT__u_clint__DOT__state) {
            if (vlSelf->ysyx_25020037__DOT__u_clint__DOT__state) {
                if (vlSelf->ysyx_25020037__DOT__u_clint__DOT__is_read_req) {
                    Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__u_uart__DOT__difftest_skip_ref_TOP();
                    __Vdly__ysyx_25020037__DOT__clint_arready = 1U;
                    vlSelf->ysyx_25020037__DOT__clint_rdata 
                        = ((0U == vlSelf->ysyx_25020037__DOT__u_clint__DOT__clint_offset)
                            ? vlSelf->ysyx_25020037__DOT__u_clint__DOT__mtimel
                            : ((4U == vlSelf->ysyx_25020037__DOT__u_clint__DOT__clint_offset)
                                ? vlSelf->ysyx_25020037__DOT__u_clint__DOT__mtimeh
                                : 0U));
                    vlSelf->ysyx_25020037__DOT__clint_rvalid = 1U;
                    vlSelf->ysyx_25020037__DOT__clint_rresp = 0U;
                } else if (vlSelf->ysyx_25020037__DOT__u_clint__DOT__is_write_req) {
                    if (vlSelf->ysyx_25020037__DOT__u_clint__DOT__wvalid_reg) {
                        Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__u_uart__DOT__difftest_skip_ref_TOP();
                        __Vdly__ysyx_25020037__DOT__u_clint__DOT__wvalid_reg = 0U;
                        vlSelf->ysyx_25020037__DOT__u_clint__DOT__bvalid = 1U;
                        vlSelf->ysyx_25020037__DOT__u_clint__DOT__bresp = 0U;
                    }
                }
            }
        } else {
            if (((IData)(vlSelf->ysyx_25020037__DOT__clint_arvalid) 
                 & (IData)(vlSelf->ysyx_25020037__DOT__clint_arready))) {
                vlSelf->ysyx_25020037__DOT__u_clint__DOT__read_addr 
                    = vlSelf->ysyx_25020037__DOT__clint_araddr;
                __Vdly__ysyx_25020037__DOT__clint_arready = 0U;
                __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_read_req = 1U;
                __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_write_req = 0U;
            } else {
                __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_read_req = 0U;
                __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_write_req = 0U;
            }
            vlSelf->ysyx_25020037__DOT__clint_rvalid = 0U;
            vlSelf->ysyx_25020037__DOT__u_clint__DOT__bvalid = 0U;
        }
        __Vdly__ysyx_25020037__DOT__u_clint__DOT__state 
            = vlSelf->ysyx_25020037__DOT__u_clint__DOT__next_state;
    }
    if (vlSelf->reset) {
        __Vdly__ysyx_25020037__DOT__u_uart__DOT__state = 0U;
        __Vdly__ysyx_25020037__DOT__uart_arready = 1U;
        vlSelf->ysyx_25020037__DOT__uart_rdata = 0U;
        vlSelf->ysyx_25020037__DOT__uart_rresp = 0U;
        vlSelf->ysyx_25020037__DOT__uart_rvalid = 0U;
        __Vdly__ysyx_25020037__DOT__uart_awready = 1U;
        __Vdly__ysyx_25020037__DOT__uart_wready = 0U;
        vlSelf->ysyx_25020037__DOT__uart_bresp = 0U;
        vlSelf->ysyx_25020037__DOT__uart_bvalid = 0U;
        __Vdly__ysyx_25020037__DOT__u_uart__DOT__wvalid_reg = 0U;
        __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_read_req = 0U;
        __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_write_req = 0U;
    } else {
        if (vlSelf->ysyx_25020037__DOT__u_uart__DOT__state) {
            if (vlSelf->ysyx_25020037__DOT__u_uart__DOT__state) {
                if (vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_read_req) {
                    Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__u_uart__DOT__difftest_skip_ref_TOP();
                    __Vdly__ysyx_25020037__DOT__uart_arready = 1U;
                    vlSelf->ysyx_25020037__DOT__uart_rdata = 0U;
                    vlSelf->ysyx_25020037__DOT__uart_rvalid = 1U;
                    vlSelf->ysyx_25020037__DOT__uart_rresp = 0U;
                } else if (vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_write_req) {
                    if (((IData)(vlSelf->ysyx_25020037__DOT__uart_wvalid) 
                         & (IData)(vlSelf->ysyx_25020037__DOT__uart_wready))) {
                        __Vdly__ysyx_25020037__DOT__uart_awready = 1U;
                        __Vdly__ysyx_25020037__DOT__uart_wready = 0U;
                        vlSelf->ysyx_25020037__DOT__u_uart__DOT__write_data 
                            = vlSelf->ysyx_25020037__DOT__uart_wdata;
                        __Vdly__ysyx_25020037__DOT__u_uart__DOT__wvalid_reg 
                            = vlSelf->ysyx_25020037__DOT__uart_wvalid;
                        vlSelf->ysyx_25020037__DOT__u_uart__DOT__write_strb 
                            = vlSelf->ysyx_25020037__DOT__uart_wstrb;
                    } else if (VL_UNLIKELY(vlSelf->ysyx_25020037__DOT__u_uart__DOT__wvalid_reg)) {
                        Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__u_uart__DOT__difftest_skip_ref_TOP();
                        __Vdly__ysyx_25020037__DOT__u_uart__DOT__wvalid_reg = 0U;
                        VL_WRITEF("%c",8,(0xffU & vlSelf->ysyx_25020037__DOT__uart_wdata));
                        vlSelf->ysyx_25020037__DOT__uart_bvalid = 1U;
                        vlSelf->ysyx_25020037__DOT__uart_bresp = 0U;
                        Verilated::runFlushCallbacks();
                    }
                }
            }
        } else {
            if (((IData)(vlSelf->ysyx_25020037__DOT__uart_arvalid) 
                 & (IData)(vlSelf->ysyx_25020037__DOT__uart_arready))) {
                vlSelf->ysyx_25020037__DOT__u_uart__DOT__read_addr 
                    = vlSelf->ysyx_25020037__DOT__uart_araddr;
                __Vdly__ysyx_25020037__DOT__uart_arready = 0U;
                __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_read_req = 1U;
                __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_write_req = 0U;
            } else if (((IData)(vlSelf->ysyx_25020037__DOT__uart_awvalid) 
                        & (IData)(vlSelf->ysyx_25020037__DOT__uart_awready))) {
                vlSelf->ysyx_25020037__DOT__u_uart__DOT__write_addr 
                    = vlSelf->ysyx_25020037__DOT__uart_awaddr;
                __Vdly__ysyx_25020037__DOT__uart_awready = 0U;
                __Vdly__ysyx_25020037__DOT__uart_wready = 1U;
                __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_read_req = 0U;
                __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_write_req = 1U;
            } else {
                __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_read_req = 0U;
                __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_write_req = 0U;
            }
            vlSelf->ysyx_25020037__DOT__uart_rvalid = 0U;
            vlSelf->ysyx_25020037__DOT__uart_bvalid = 0U;
        }
        __Vdly__ysyx_25020037__DOT__u_uart__DOT__state 
            = vlSelf->ysyx_25020037__DOT__u_uart__DOT__next_state;
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25020037__DOT__inst = 0U;
        vlSelf->ysyx_25020037__DOT__ifu_araddr = 0U;
        __Vdly__ysyx_25020037__DOT__ifu_arvalid = 0U;
        __Vdly__ysyx_25020037__DOT__ifu_rready = 0U;
        __Vdly__ysyx_25020037__DOT__ifu_cpu__DOT__last_pc = 0U;
    } else if (vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__state) {
        if (vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__state) {
            if (((IData)(vlSelf->ysyx_25020037__DOT__ifu_arvalid) 
                 & (IData)(vlSelf->ysyx_25020037__DOT__ifu_arready))) {
                __Vdly__ysyx_25020037__DOT__ifu_arvalid = 0U;
                __Vdly__ysyx_25020037__DOT__ifu_rready = 1U;
            }
            if ((((IData)(vlSelf->ysyx_25020037__DOT__ifu_rvalid) 
                  & (IData)(vlSelf->ysyx_25020037__DOT__ifu_rready)) 
                 & (0U == (IData)(vlSelf->ysyx_25020037__DOT__ifu_rresp)))) {
                vlSelf->ysyx_25020037__DOT__inst = vlSelf->ysyx_25020037__DOT__ifu_rdata;
                __Vdly__ysyx_25020037__DOT__ifu_rready = 0U;
            }
        }
    } else if ((vlSelf->ysyx_25020037__DOT__pc != vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__last_pc)) {
        __Vdly__ysyx_25020037__DOT__ifu_rready = 0U;
        vlSelf->ysyx_25020037__DOT__ifu_araddr = vlSelf->ysyx_25020037__DOT__pc;
        __Vdly__ysyx_25020037__DOT__ifu_arvalid = 1U;
        __Vdly__ysyx_25020037__DOT__ifu_cpu__DOT__last_pc 
            = vlSelf->ysyx_25020037__DOT__pc;
    }
    if (vlSelf->reset) {
        __Vdly__ysyx_25020037__DOT__u_sram__DOT__state = 0U;
        __Vdly__ysyx_25020037__DOT__u_sram__DOT__delay_count = 0U;
        __Vdly__ysyx_25020037__DOT__u_sram__DOT__target_delay = 0U;
        __Vdly__ysyx_25020037__DOT__sram_arready = 1U;
        vlSelf->ysyx_25020037__DOT__sram_rdata = 0U;
        vlSelf->ysyx_25020037__DOT__sram_rresp = 0U;
        vlSelf->ysyx_25020037__DOT__sram_rvalid = 0U;
        __Vdly__ysyx_25020037__DOT__sram_awready = 1U;
        __Vdly__ysyx_25020037__DOT__sram_wready = 0U;
        vlSelf->ysyx_25020037__DOT__sram_bresp = 0U;
        vlSelf->ysyx_25020037__DOT__sram_bvalid = 0U;
        __Vdly__ysyx_25020037__DOT__u_sram__DOT__wvalid_reg = 0U;
        __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_read_req = 0U;
        __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_write_req = 0U;
    } else {
        if (vlSelf->ysyx_25020037__DOT__u_sram__DOT__state) {
            if (vlSelf->ysyx_25020037__DOT__u_sram__DOT__state) {
                if (vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_read_req) {
                    __Vdly__ysyx_25020037__DOT__sram_arready = 1U;
                    if (((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__delay_count) 
                         < (IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__target_delay))) {
                        __Vdly__ysyx_25020037__DOT__u_sram__DOT__delay_count 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__delay_count)));
                        if (((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__delay_count) 
                             == ((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__target_delay) 
                                 - (IData)(1U)))) {
                            Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__u_sram__DOT__pmem_read_TOP(vlSelf->ysyx_25020037__DOT__u_sram__DOT__read_addr, 4U, 1U, __Vfunc_ysyx_25020037__DOT__u_sram__DOT__pmem_read__2__Vfuncout);
                            vlSelf->ysyx_25020037__DOT__sram_rdata 
                                = __Vfunc_ysyx_25020037__DOT__u_sram__DOT__pmem_read__2__Vfuncout;
                            vlSelf->ysyx_25020037__DOT__sram_rvalid = 1U;
                            vlSelf->ysyx_25020037__DOT__sram_rresp = 0U;
                        }
                    }
                } else if (vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_write_req) {
                    if (((IData)(vlSelf->ysyx_25020037__DOT__sram_wvalid) 
                         & (IData)(vlSelf->ysyx_25020037__DOT__sram_wready))) {
                        __Vdly__ysyx_25020037__DOT__sram_awready = 1U;
                        __Vdly__ysyx_25020037__DOT__sram_wready = 0U;
                        __Vdly__ysyx_25020037__DOT__u_sram__DOT__write_data 
                            = vlSelf->ysyx_25020037__DOT__sram_wdata;
                        __Vdly__ysyx_25020037__DOT__u_sram__DOT__wvalid_reg 
                            = vlSelf->ysyx_25020037__DOT__sram_wvalid;
                        __Vdly__ysyx_25020037__DOT__u_sram__DOT__write_strb 
                            = vlSelf->ysyx_25020037__DOT__sram_wstrb;
                    }
                    if (((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__delay_count) 
                         < (IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__target_delay))) {
                        __Vdly__ysyx_25020037__DOT__u_sram__DOT__delay_count 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__delay_count)));
                        if ((((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__delay_count) 
                              == ((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__target_delay) 
                                  - (IData)(1U))) & (IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__wvalid_reg))) {
                            Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__u_sram__DOT__pmem_write_TOP(vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_addr, (IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_strb), vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_data, 1U);
                            __Vdly__ysyx_25020037__DOT__u_sram__DOT__wvalid_reg = 0U;
                            vlSelf->ysyx_25020037__DOT__sram_bvalid = 1U;
                            vlSelf->ysyx_25020037__DOT__sram_bresp = 0U;
                        }
                    }
                }
            }
        } else {
            if (((IData)(vlSelf->ysyx_25020037__DOT__sram_arvalid) 
                 & (IData)(vlSelf->ysyx_25020037__DOT__sram_arready))) {
                __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__0__lfsr_value 
                    = vlSelf->ysyx_25020037__DOT__u_sram__DOT__lfsr;
                __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__0__Vfuncout 
                    = ((0U == (3U & ((IData)(__Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__0__lfsr_value) 
                                     >> 6U))) ? 5U : 
                       ((1U == (3U & ((IData)(__Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__0__lfsr_value) 
                                      >> 6U))) ? 0xaU
                         : ((2U == (3U & ((IData)(__Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__0__lfsr_value) 
                                          >> 6U))) ? 0x14U
                             : 0xfU)));
                vlSelf->ysyx_25020037__DOT__u_sram__DOT__read_addr 
                    = vlSelf->ysyx_25020037__DOT__sram_araddr;
                __Vdly__ysyx_25020037__DOT__u_sram__DOT__target_delay 
                    = __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__0__Vfuncout;
                __Vdly__ysyx_25020037__DOT__u_sram__DOT__delay_count = 0U;
                __Vdly__ysyx_25020037__DOT__sram_arready = 0U;
                __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_read_req = 1U;
                __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_write_req = 0U;
            } else if (((IData)(vlSelf->ysyx_25020037__DOT__sram_awvalid) 
                        & (IData)(vlSelf->ysyx_25020037__DOT__sram_awready))) {
                __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__1__lfsr_value 
                    = vlSelf->ysyx_25020037__DOT__u_sram__DOT__lfsr;
                __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__1__Vfuncout 
                    = ((0U == (3U & ((IData)(__Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__1__lfsr_value) 
                                     >> 6U))) ? 5U : 
                       ((1U == (3U & ((IData)(__Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__1__lfsr_value) 
                                      >> 6U))) ? 0xaU
                         : ((2U == (3U & ((IData)(__Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__1__lfsr_value) 
                                          >> 6U))) ? 0x14U
                             : 0xfU)));
                vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_addr 
                    = vlSelf->ysyx_25020037__DOT__sram_awaddr;
                __Vdly__ysyx_25020037__DOT__u_sram__DOT__target_delay 
                    = __Vfunc_ysyx_25020037__DOT__u_sram__DOT__calculate_delay__1__Vfuncout;
                __Vdly__ysyx_25020037__DOT__u_sram__DOT__delay_count = 0U;
                __Vdly__ysyx_25020037__DOT__sram_awready = 0U;
                __Vdly__ysyx_25020037__DOT__sram_wready = 1U;
                __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_read_req = 0U;
                __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_write_req = 1U;
            } else {
                __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_read_req = 0U;
                __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_write_req = 0U;
            }
            vlSelf->ysyx_25020037__DOT__sram_rvalid = 0U;
            vlSelf->ysyx_25020037__DOT__sram_bvalid = 0U;
        }
        __Vdly__ysyx_25020037__DOT__u_sram__DOT__state 
            = vlSelf->ysyx_25020037__DOT__u_sram__DOT__next_state;
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_sram_addr = 0U;
        vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_uart_addr = 0U;
        vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master = 0U;
    } else {
        if ((0U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))) {
            vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_clint_addr 
                = ((IData)(vlSelf->ysyx_25020037__DOT__lsu_arvalid) 
                   & ((0xa0000048U == vlSelf->ysyx_25020037__DOT__lsu_araddr) 
                      | (0xa000004cU == vlSelf->ysyx_25020037__DOT__lsu_araddr)));
            vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_uart_addr 
                = (((IData)(vlSelf->ysyx_25020037__DOT__lsu_arvalid) 
                    & (0xa00003f8U == vlSelf->ysyx_25020037__DOT__lsu_araddr)) 
                   | ((IData)(vlSelf->ysyx_25020037__DOT__lsu_awvalid) 
                      & (0xa00003f8U == vlSelf->ysyx_25020037__DOT__lsu_awaddr)));
            vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_sram_addr 
                = (((IData)(vlSelf->ysyx_25020037__DOT__lsu_arvalid) 
                    & ((0x80000000U <= vlSelf->ysyx_25020037__DOT__lsu_araddr) 
                       & (0x8fffffffU >= vlSelf->ysyx_25020037__DOT__lsu_araddr))) 
                   | ((IData)(vlSelf->ysyx_25020037__DOT__lsu_awvalid) 
                      & ((0x80000000U <= vlSelf->ysyx_25020037__DOT__lsu_awaddr) 
                         & (0x8fffffffU >= vlSelf->ysyx_25020037__DOT__lsu_awaddr))));
        }
        vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master 
            = vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__next_master;
    }
    vlSelf->ysyx_25020037__DOT__u_clint__DOT__mtimel 
        = __Vdly__ysyx_25020037__DOT__u_clint__DOT__mtimel;
    vlSelf->ysyx_25020037__DOT__u_clint__DOT__mtimeh 
        = __Vdly__ysyx_25020037__DOT__u_clint__DOT__mtimeh;
    vlSelf->ysyx_25020037__DOT__u_clint__DOT__wvalid_reg 
        = __Vdly__ysyx_25020037__DOT__u_clint__DOT__wvalid_reg;
    vlSelf->ysyx_25020037__DOT__u_clint__DOT__is_write_req 
        = __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_write_req;
    vlSelf->ysyx_25020037__DOT__u_clint__DOT__state 
        = __Vdly__ysyx_25020037__DOT__u_clint__DOT__state;
    vlSelf->ysyx_25020037__DOT__u_clint__DOT__is_read_req 
        = __Vdly__ysyx_25020037__DOT__u_clint__DOT__is_read_req;
    vlSelf->ysyx_25020037__DOT__clint_arready = __Vdly__ysyx_25020037__DOT__clint_arready;
    vlSelf->ysyx_25020037__DOT__u_uart__DOT__wvalid_reg 
        = __Vdly__ysyx_25020037__DOT__u_uart__DOT__wvalid_reg;
    vlSelf->ysyx_25020037__DOT__uart_awready = __Vdly__ysyx_25020037__DOT__uart_awready;
    vlSelf->ysyx_25020037__DOT__uart_wready = __Vdly__ysyx_25020037__DOT__uart_wready;
    vlSelf->ysyx_25020037__DOT__uart_arready = __Vdly__ysyx_25020037__DOT__uart_arready;
    vlSelf->ysyx_25020037__DOT__u_uart__DOT__state 
        = __Vdly__ysyx_25020037__DOT__u_uart__DOT__state;
    vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_read_req 
        = __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_read_req;
    vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_write_req 
        = __Vdly__ysyx_25020037__DOT__u_uart__DOT__is_write_req;
    vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__last_pc 
        = __Vdly__ysyx_25020037__DOT__ifu_cpu__DOT__last_pc;
    vlSelf->ysyx_25020037__DOT__ifu_arvalid = __Vdly__ysyx_25020037__DOT__ifu_arvalid;
    vlSelf->ysyx_25020037__DOT__ifu_rready = __Vdly__ysyx_25020037__DOT__ifu_rready;
    vlSelf->ysyx_25020037__DOT__u_sram__DOT__delay_count 
        = __Vdly__ysyx_25020037__DOT__u_sram__DOT__delay_count;
    vlSelf->ysyx_25020037__DOT__u_sram__DOT__target_delay 
        = __Vdly__ysyx_25020037__DOT__u_sram__DOT__target_delay;
    vlSelf->ysyx_25020037__DOT__u_sram__DOT__wvalid_reg 
        = __Vdly__ysyx_25020037__DOT__u_sram__DOT__wvalid_reg;
    vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_data 
        = __Vdly__ysyx_25020037__DOT__u_sram__DOT__write_data;
    vlSelf->ysyx_25020037__DOT__u_sram__DOT__write_strb 
        = __Vdly__ysyx_25020037__DOT__u_sram__DOT__write_strb;
    vlSelf->ysyx_25020037__DOT__u_sram__DOT__lfsr = __Vdly__ysyx_25020037__DOT__u_sram__DOT__lfsr;
    vlSelf->ysyx_25020037__DOT__sram_awready = __Vdly__ysyx_25020037__DOT__sram_awready;
    vlSelf->ysyx_25020037__DOT__sram_wready = __Vdly__ysyx_25020037__DOT__sram_wready;
    vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_read_req 
        = __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_read_req;
    vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_write_req 
        = __Vdly__ysyx_25020037__DOT__u_sram__DOT__is_write_req;
    vlSelf->ysyx_25020037__DOT__u_sram__DOT__state 
        = __Vdly__ysyx_25020037__DOT__u_sram__DOT__state;
    vlSelf->ysyx_25020037__DOT__sram_arready = __Vdly__ysyx_25020037__DOT__sram_arready;
    vlSelf->ysyx_25020037__DOT__u_clint__DOT__clint_offset 
        = (vlSelf->ysyx_25020037__DOT__u_clint__DOT__read_addr 
           - (IData)(0xa0000048U));
    vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__next_state));
    vlSelf->ysyx_25020037__DOT__u_sram__DOT__lfsr_tap 
        = (1U & VL_REDXOR_8((0xb8U & (IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__lfsr))));
    vlSelf->ysyx_25020037__DOT__ifu_arready = 0U;
    vlSelf->ysyx_25020037__DOT__ifu_rresp = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))) {
        vlSelf->ysyx_25020037__DOT__ifu_arready = vlSelf->ysyx_25020037__DOT__sram_arready;
        vlSelf->ysyx_25020037__DOT__ifu_rresp = vlSelf->ysyx_25020037__DOT__sram_rresp;
    }
    vlSelf->ysyx_25020037__DOT__lsu_awready = 0U;
    vlSelf->ysyx_25020037__DOT__lsu_bresp = 0U;
    if (((2U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master)) 
         & (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_sram_addr))) {
        vlSelf->ysyx_25020037__DOT__lsu_awready = vlSelf->ysyx_25020037__DOT__sram_awready;
        vlSelf->ysyx_25020037__DOT__lsu_bresp = vlSelf->ysyx_25020037__DOT__sram_bresp;
    } else if (((2U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master)) 
                & (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_uart_addr))) {
        vlSelf->ysyx_25020037__DOT__lsu_awready = vlSelf->ysyx_25020037__DOT__uart_awready;
        vlSelf->ysyx_25020037__DOT__lsu_bresp = vlSelf->ysyx_25020037__DOT__uart_bresp;
    }
}

VL_INLINE_OPT void Vysyx_25020037___024root___nba_sequent__TOP__1(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__ysyx_25020037__DOT__exu_ready = vlSelf->ysyx_25020037__DOT__exu_ready;
}

VL_INLINE_OPT void Vysyx_25020037___024root___nba_sequent__TOP__2(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__ysyx_25020037__DOT__pc = vlSelf->ysyx_25020037__DOT__pc;
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_25020037__DOT__pc = 0x80000000U;
        vlSelf->ysyx_25020037__DOT__mcause = 0U;
        vlSelf->ysyx_25020037__DOT__mstatus = 0x1800U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout = 0U;
    } else {
        if (vlSelf->ysyx_25020037__DOT__wbu_valid) {
            vlSelf->__Vdly__ysyx_25020037__DOT__pc 
                = vlSelf->ysyx_25020037__DOT__dnpc;
        }
        if (((IData)((0ULL != (6ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus))) 
             & (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))) {
            vlSelf->ysyx_25020037__DOT__mcause = ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                              >> 1U)))
                                                   ? 0xbU
                                                   : vlSelf->ysyx_25020037__DOT__csr_wcsr_data);
        }
        if (((IData)((0ULL != (0xbULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus))) 
             & (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))) {
            vlSelf->ysyx_25020037__DOT__mstatus = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__mstatus_data;
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0xf0000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0xe0000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0xd0000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0xc0000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0xb0000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0xa0000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0x90000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0x80000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0x70000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0x60000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0x50000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0x40000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0x30000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0x20000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0x10000ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0) 
             & (0ULL == (0x1f0000ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout 
                = (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r);
        }
    }
}

VL_INLINE_OPT void Vysyx_25020037___024root___nba_sequent__TOP__4(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->ysyx_25020037__DOT__gpr_valid = 0U;
        vlSelf->__Vdly__ysyx_25020037__DOT__gpr_ready = 1U;
        vlSelf->ysyx_25020037__DOT__wbu_valid = 0U;
        vlSelf->ysyx_25020037__DOT__wbu_ready = 1U;
        vlSelf->ysyx_25020037__DOT__wu_to_gu_bus = 0ULL;
        vlSelf->__Vdly__ysyx_25020037__DOT__lsu_ready = 1U;
        vlSelf->ysyx_25020037__DOT__lsu_valid = 0U;
        vlSelf->ysyx_25020037__DOT__lsu_araddr = 0U;
        vlSelf->__Vdly__ysyx_25020037__DOT__lsu_arvalid = 0U;
        vlSelf->__Vdly__ysyx_25020037__DOT__lsu_rready = 0U;
        vlSelf->ysyx_25020037__DOT__lsu_awaddr = 0U;
        vlSelf->__Vdly__ysyx_25020037__DOT__lsu_awvalid = 0U;
        vlSelf->ysyx_25020037__DOT__lsu_wdata = 0U;
        vlSelf->ysyx_25020037__DOT__lsu_wstrb = 0U;
        vlSelf->ysyx_25020037__DOT__lsu_wvalid = 0U;
        vlSelf->__Vdly__ysyx_25020037__DOT__lsu_bready = 0U;
    } else {
        if (vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__state) {
            if (vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__state) {
                if (vlSelf->ysyx_25020037__DOT__exu_ready) {
                    vlSelf->__Vdly__ysyx_25020037__DOT__gpr_ready = 1U;
                    vlSelf->ysyx_25020037__DOT__gpr_valid = 1U;
                }
            }
        } else {
            if (((IData)(vlSelf->ysyx_25020037__DOT__wbu_valid) 
                 & (IData)(vlSelf->ysyx_25020037__DOT__gpr_ready))) {
                vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__wu_to_gu_bus_r 
                    = vlSelf->ysyx_25020037__DOT__wu_to_gu_bus;
                vlSelf->__Vdly__ysyx_25020037__DOT__gpr_ready = 0U;
            }
            vlSelf->ysyx_25020037__DOT__gpr_valid = 0U;
        }
        if (vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__state) {
            if (vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__state) {
                if (vlSelf->ysyx_25020037__DOT__gpr_ready) {
                    vlSelf->ysyx_25020037__DOT__wu_to_gu_bus 
                        = (((QData)((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__final_gpr_we)) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__final_result)));
                    vlSelf->ysyx_25020037__DOT__wbu_valid = 1U;
                    vlSelf->ysyx_25020037__DOT__wbu_ready = 1U;
                }
            }
        } else {
            if (vlSelf->ysyx_25020037__DOT__lsu_valid) {
                vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                    = vlSelf->ysyx_25020037__DOT__eu_to_wu_bus;
                vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r 
                    = vlSelf->ysyx_25020037__DOT__du_to_wu_bus;
                vlSelf->ysyx_25020037__DOT__wbu_ready = 0U;
                vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                    = vlSelf->ysyx_25020037__DOT__lu_to_wu_bus;
            }
            vlSelf->ysyx_25020037__DOT__wbu_valid = 0U;
        }
        if (vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__state) {
            if (vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__state) {
                if ((2U & (IData)(vlSelf->ysyx_25020037__DOT__du_to_lu_bus))) {
                    if (((IData)(vlSelf->ysyx_25020037__DOT__lsu_arvalid) 
                         & (IData)(vlSelf->ysyx_25020037__DOT__lsu_arready))) {
                        vlSelf->__Vdly__ysyx_25020037__DOT__lsu_arvalid = 0U;
                        vlSelf->__Vdly__ysyx_25020037__DOT__lsu_rready = 1U;
                    }
                    if ((((IData)(vlSelf->ysyx_25020037__DOT__lsu_rvalid) 
                          & (IData)(vlSelf->ysyx_25020037__DOT__lsu_rready)) 
                         & (0U == (IData)(vlSelf->ysyx_25020037__DOT__lsu_rresp)))) {
                        vlSelf->ysyx_25020037__DOT__lu_to_wu_bus 
                            = vlSelf->ysyx_25020037__DOT__lsu_rdata;
                        vlSelf->__Vdly__ysyx_25020037__DOT__lsu_rready = 0U;
                        vlSelf->ysyx_25020037__DOT__lsu_valid = 1U;
                        vlSelf->__Vdly__ysyx_25020037__DOT__lsu_ready = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_25020037__DOT__du_to_lu_bus))) {
                    if (((IData)(vlSelf->ysyx_25020037__DOT__lsu_awvalid) 
                         & (IData)(vlSelf->ysyx_25020037__DOT__lsu_wready))) {
                        vlSelf->ysyx_25020037__DOT__lsu_wdata 
                            = (IData)(vlSelf->ysyx_25020037__DOT__eu_to_lu_bus);
                        vlSelf->ysyx_25020037__DOT__lsu_wstrb 
                            = (0xfU & ((IData)(vlSelf->ysyx_25020037__DOT__du_to_lu_bus) 
                                       >> 2U));
                        vlSelf->__Vdly__ysyx_25020037__DOT__lsu_awvalid = 0U;
                        vlSelf->ysyx_25020037__DOT__lsu_wvalid = 1U;
                        vlSelf->__Vdly__ysyx_25020037__DOT__lsu_bready = 1U;
                    }
                    if ((((IData)(vlSelf->ysyx_25020037__DOT__lsu_bvalid) 
                          & (IData)(vlSelf->ysyx_25020037__DOT__lsu_bready)) 
                         & (0U == (IData)(vlSelf->ysyx_25020037__DOT__lsu_rresp)))) {
                        vlSelf->__Vdly__ysyx_25020037__DOT__lsu_bready = 0U;
                        vlSelf->ysyx_25020037__DOT__lsu_valid = 1U;
                        vlSelf->__Vdly__ysyx_25020037__DOT__lsu_ready = 1U;
                    }
                } else {
                    vlSelf->ysyx_25020037__DOT__lu_to_wu_bus 
                        = (IData)((vlSelf->ysyx_25020037__DOT__eu_to_lu_bus 
                                   >> 0x20U));
                    vlSelf->ysyx_25020037__DOT__lsu_valid = 1U;
                    vlSelf->__Vdly__ysyx_25020037__DOT__lsu_ready = 1U;
                }
            }
        } else {
            if (((IData)(vlSelf->ysyx_25020037__DOT__lsu_ready) 
                 & (IData)(vlSelf->ysyx_25020037__DOT__exu_valid))) {
                if ((2U & (IData)(vlSelf->ysyx_25020037__DOT__du_to_lu_bus))) {
                    vlSelf->__Vdly__ysyx_25020037__DOT__lsu_rready = 0U;
                    vlSelf->__Vdly__ysyx_25020037__DOT__lsu_ready = 0U;
                    vlSelf->ysyx_25020037__DOT__lsu_araddr 
                        = (IData)((vlSelf->ysyx_25020037__DOT__eu_to_lu_bus 
                                   >> 0x20U));
                    vlSelf->__Vdly__ysyx_25020037__DOT__lsu_arvalid = 1U;
                } else if ((1U & (IData)(vlSelf->ysyx_25020037__DOT__du_to_lu_bus))) {
                    vlSelf->__Vdly__ysyx_25020037__DOT__lsu_ready = 0U;
                    vlSelf->ysyx_25020037__DOT__lsu_awaddr 
                        = (IData)((vlSelf->ysyx_25020037__DOT__eu_to_lu_bus 
                                   >> 0x20U));
                    vlSelf->__Vdly__ysyx_25020037__DOT__lsu_awvalid = 1U;
                } else {
                    vlSelf->__Vdly__ysyx_25020037__DOT__lsu_ready = 0U;
                }
            }
            vlSelf->ysyx_25020037__DOT__lsu_valid = 0U;
            vlSelf->ysyx_25020037__DOT__lsu_wvalid = 0U;
        }
    }
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__next_state));
    vlSelf->ysyx_25020037__DOT__gpr_ready = vlSelf->__Vdly__ysyx_25020037__DOT__gpr_ready;
    vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__final_gpr_we 
        = ((~ (IData)(vlSelf->reset)) & (0U != (6U 
                                                & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))));
    vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__next_state));
    vlSelf->ysyx_25020037__DOT__lsu_wready = 0U;
    vlSelf->ysyx_25020037__DOT__lsu_bvalid = 0U;
    vlSelf->ysyx_25020037__DOT__lsu_arready = 0U;
    vlSelf->ysyx_25020037__DOT__lsu_rvalid = 0U;
    vlSelf->ysyx_25020037__DOT__lsu_rresp = 0U;
    vlSelf->ysyx_25020037__DOT__lsu_rdata = 0U;
    vlSelf->ysyx_25020037__DOT__lsu_awvalid = vlSelf->__Vdly__ysyx_25020037__DOT__lsu_awvalid;
    vlSelf->ysyx_25020037__DOT__lsu_arvalid = vlSelf->__Vdly__ysyx_25020037__DOT__lsu_arvalid;
    vlSelf->ysyx_25020037__DOT__lsu_bready = vlSelf->__Vdly__ysyx_25020037__DOT__lsu_bready;
    vlSelf->ysyx_25020037__DOT__lsu_rready = vlSelf->__Vdly__ysyx_25020037__DOT__lsu_rready;
    vlSelf->ysyx_25020037__DOT__sram_awaddr = 0U;
    vlSelf->ysyx_25020037__DOT__uart_awaddr = 0U;
    vlSelf->ysyx_25020037__DOT__sram_wdata = 0U;
    vlSelf->ysyx_25020037__DOT__uart_wdata = 0U;
    vlSelf->ysyx_25020037__DOT__sram_wstrb = 0U;
    vlSelf->ysyx_25020037__DOT__uart_wstrb = 0U;
    vlSelf->ysyx_25020037__DOT__sram_wvalid = 0U;
    vlSelf->ysyx_25020037__DOT__uart_wvalid = 0U;
    vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyx_25020037__DOT__wbu_valid) 
                     & (IData)(vlSelf->ysyx_25020037__DOT__gpr_ready))))
            : ((IData)(vlSelf->ysyx_25020037__DOT__lsu_valid) 
               & (IData)(vlSelf->ysyx_25020037__DOT__wbu_ready)));
    vlSelf->ysyx_25020037__DOT__sram_awvalid = 0U;
    vlSelf->ysyx_25020037__DOT__uart_awvalid = 0U;
    vlSelf->ysyx_25020037__DOT__clint_arvalid = 0U;
    vlSelf->ysyx_25020037__DOT__sram_arvalid = 0U;
    vlSelf->ysyx_25020037__DOT__uart_arvalid = 0U;
    vlSelf->ysyx_25020037__DOT__sram_bready = 0U;
    if (((2U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master)) 
         & (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_sram_addr))) {
        vlSelf->ysyx_25020037__DOT__lsu_wready = vlSelf->ysyx_25020037__DOT__sram_wready;
        vlSelf->ysyx_25020037__DOT__lsu_bvalid = vlSelf->ysyx_25020037__DOT__sram_bvalid;
        vlSelf->ysyx_25020037__DOT__sram_awaddr = vlSelf->ysyx_25020037__DOT__lsu_awaddr;
        vlSelf->ysyx_25020037__DOT__sram_wdata = vlSelf->ysyx_25020037__DOT__lsu_wdata;
        vlSelf->ysyx_25020037__DOT__sram_wstrb = vlSelf->ysyx_25020037__DOT__lsu_wstrb;
        vlSelf->ysyx_25020037__DOT__sram_wvalid = vlSelf->ysyx_25020037__DOT__lsu_wvalid;
        vlSelf->ysyx_25020037__DOT__sram_awvalid = vlSelf->ysyx_25020037__DOT__lsu_awvalid;
        vlSelf->ysyx_25020037__DOT__sram_bready = vlSelf->ysyx_25020037__DOT__lsu_bready;
    } else if (((2U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master)) 
                & (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_uart_addr))) {
        vlSelf->ysyx_25020037__DOT__lsu_wready = vlSelf->ysyx_25020037__DOT__uart_wready;
        vlSelf->ysyx_25020037__DOT__lsu_bvalid = vlSelf->ysyx_25020037__DOT__uart_bvalid;
    }
    vlSelf->ysyx_25020037__DOT__uart_bready = 0U;
    if ((1U & (~ ((2U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master)) 
                  & (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_sram_addr))))) {
        if (((2U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master)) 
             & (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_uart_addr))) {
            vlSelf->ysyx_25020037__DOT__uart_awaddr 
                = vlSelf->ysyx_25020037__DOT__lsu_awaddr;
            vlSelf->ysyx_25020037__DOT__uart_wdata 
                = vlSelf->ysyx_25020037__DOT__lsu_wdata;
            vlSelf->ysyx_25020037__DOT__uart_wstrb 
                = vlSelf->ysyx_25020037__DOT__lsu_wstrb;
            vlSelf->ysyx_25020037__DOT__uart_wvalid 
                = vlSelf->ysyx_25020037__DOT__lsu_wvalid;
            vlSelf->ysyx_25020037__DOT__uart_awvalid 
                = vlSelf->ysyx_25020037__DOT__lsu_awvalid;
            vlSelf->ysyx_25020037__DOT__uart_bready 
                = vlSelf->ysyx_25020037__DOT__lsu_bready;
        }
    }
    vlSelf->ysyx_25020037__DOT__clint_rready = 0U;
    vlSelf->ysyx_25020037__DOT__sram_rready = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))) {
        vlSelf->ysyx_25020037__DOT__sram_araddr = vlSelf->ysyx_25020037__DOT__ifu_araddr;
        vlSelf->ysyx_25020037__DOT__sram_arvalid = vlSelf->ysyx_25020037__DOT__ifu_arvalid;
        vlSelf->ysyx_25020037__DOT__sram_rready = vlSelf->ysyx_25020037__DOT__ifu_rready;
    } else if ((2U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))) {
        if (vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_sram_addr) {
            vlSelf->ysyx_25020037__DOT__sram_araddr 
                = vlSelf->ysyx_25020037__DOT__lsu_araddr;
            vlSelf->ysyx_25020037__DOT__sram_arvalid 
                = vlSelf->ysyx_25020037__DOT__lsu_arvalid;
            vlSelf->ysyx_25020037__DOT__sram_rready 
                = vlSelf->ysyx_25020037__DOT__lsu_rready;
        }
    }
    vlSelf->ysyx_25020037__DOT__uart_rready = 0U;
    if ((1U != (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))) {
        if ((2U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))) {
            if (vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_sram_addr) {
                vlSelf->ysyx_25020037__DOT__lsu_arready 
                    = vlSelf->ysyx_25020037__DOT__sram_arready;
                vlSelf->ysyx_25020037__DOT__lsu_rvalid 
                    = vlSelf->ysyx_25020037__DOT__sram_rvalid;
                vlSelf->ysyx_25020037__DOT__lsu_rresp 
                    = vlSelf->ysyx_25020037__DOT__sram_rresp;
                vlSelf->ysyx_25020037__DOT__lsu_rdata 
                    = vlSelf->ysyx_25020037__DOT__sram_rdata;
            } else if (vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_uart_addr) {
                vlSelf->ysyx_25020037__DOT__lsu_arready 
                    = vlSelf->ysyx_25020037__DOT__uart_arready;
                vlSelf->ysyx_25020037__DOT__lsu_rvalid 
                    = vlSelf->ysyx_25020037__DOT__uart_rvalid;
                vlSelf->ysyx_25020037__DOT__lsu_rresp 
                    = vlSelf->ysyx_25020037__DOT__uart_rresp;
                vlSelf->ysyx_25020037__DOT__lsu_rdata 
                    = vlSelf->ysyx_25020037__DOT__uart_rdata;
            } else if (vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_clint_addr) {
                vlSelf->ysyx_25020037__DOT__lsu_arready 
                    = vlSelf->ysyx_25020037__DOT__clint_arready;
                vlSelf->ysyx_25020037__DOT__lsu_rvalid 
                    = vlSelf->ysyx_25020037__DOT__clint_rvalid;
                vlSelf->ysyx_25020037__DOT__lsu_rresp 
                    = vlSelf->ysyx_25020037__DOT__clint_rresp;
                vlSelf->ysyx_25020037__DOT__lsu_rdata 
                    = vlSelf->ysyx_25020037__DOT__clint_rdata;
            }
            if ((1U & (~ (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_sram_addr)))) {
                if (vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_uart_addr) {
                    vlSelf->ysyx_25020037__DOT__uart_araddr 
                        = vlSelf->ysyx_25020037__DOT__lsu_araddr;
                    vlSelf->ysyx_25020037__DOT__uart_arvalid 
                        = vlSelf->ysyx_25020037__DOT__lsu_arvalid;
                    vlSelf->ysyx_25020037__DOT__uart_rready 
                        = vlSelf->ysyx_25020037__DOT__lsu_rready;
                }
                if ((1U & (~ (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_uart_addr)))) {
                    if (vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__is_clint_addr) {
                        vlSelf->ysyx_25020037__DOT__clint_araddr 
                            = vlSelf->ysyx_25020037__DOT__lsu_araddr;
                        vlSelf->ysyx_25020037__DOT__clint_arvalid 
                            = vlSelf->ysyx_25020037__DOT__lsu_arvalid;
                        vlSelf->ysyx_25020037__DOT__clint_rready 
                            = vlSelf->ysyx_25020037__DOT__lsu_rready;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__next_state));
    vlSelf->ysyx_25020037__DOT__u_clint__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037__DOT__u_clint__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037__DOT__u_clint__DOT__state) 
               & (~ (((IData)(vlSelf->ysyx_25020037__DOT__u_clint__DOT__is_read_req) 
                      & (IData)(vlSelf->ysyx_25020037__DOT__clint_rready)) 
                     & (IData)(vlSelf->ysyx_25020037__DOT__clint_rvalid))))
            : (IData)(vlSelf->ysyx_25020037__DOT__clint_arvalid));
    vlSelf->ysyx_25020037__DOT__u_sram__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__state) 
               & (~ ((((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_read_req) 
                       & (IData)(vlSelf->ysyx_25020037__DOT__sram_rready)) 
                      & (IData)(vlSelf->ysyx_25020037__DOT__sram_rvalid)) 
                     | (((IData)(vlSelf->ysyx_25020037__DOT__u_sram__DOT__is_write_req) 
                         & (IData)(vlSelf->ysyx_25020037__DOT__sram_bready)) 
                        & (IData)(vlSelf->ysyx_25020037__DOT__sram_bvalid)))))
            : ((IData)(vlSelf->ysyx_25020037__DOT__sram_arvalid) 
               | (IData)(vlSelf->ysyx_25020037__DOT__sram_awvalid)));
    vlSelf->ysyx_25020037__DOT__u_uart__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037__DOT__u_uart__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037__DOT__u_uart__DOT__state) 
               & (~ ((((IData)(vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_read_req) 
                       & (IData)(vlSelf->ysyx_25020037__DOT__uart_rready)) 
                      & (IData)(vlSelf->ysyx_25020037__DOT__uart_rvalid)) 
                     | (((IData)(vlSelf->ysyx_25020037__DOT__u_uart__DOT__is_write_req) 
                         & (IData)(vlSelf->ysyx_25020037__DOT__uart_bready)) 
                        & (IData)(vlSelf->ysyx_25020037__DOT__uart_bvalid)))))
            : ((IData)(vlSelf->ysyx_25020037__DOT__uart_arvalid) 
               | (IData)(vlSelf->ysyx_25020037__DOT__uart_awvalid)));
    vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__next_master 
        = ((0U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))
            ? (((IData)(vlSelf->ysyx_25020037__DOT__lsu_arvalid) 
                | (IData)(vlSelf->ysyx_25020037__DOT__lsu_awvalid))
                ? 2U : ((IData)(vlSelf->ysyx_25020037__DOT__ifu_arvalid)
                         ? 1U : 0U)) : ((1U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))
                                         ? (((IData)(vlSelf->ysyx_25020037__DOT__sram_rvalid) 
                                             & (IData)(vlSelf->ysyx_25020037__DOT__sram_rready))
                                             ? 0U : 1U)
                                         : ((2U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))
                                             ? ((((
                                                   ((IData)(vlSelf->ysyx_25020037__DOT__sram_rvalid) 
                                                    & (IData)(vlSelf->ysyx_25020037__DOT__sram_rready)) 
                                                   | ((IData)(vlSelf->ysyx_25020037__DOT__sram_bvalid) 
                                                      & (IData)(vlSelf->ysyx_25020037__DOT__sram_bready))) 
                                                  | (((IData)(vlSelf->ysyx_25020037__DOT__uart_rvalid) 
                                                      & (IData)(vlSelf->ysyx_25020037__DOT__uart_rready)) 
                                                     | ((IData)(vlSelf->ysyx_25020037__DOT__uart_bvalid) 
                                                        & (IData)(vlSelf->ysyx_25020037__DOT__uart_bready)))) 
                                                 | ((IData)(vlSelf->ysyx_25020037__DOT__clint_rvalid) 
                                                    & (IData)(vlSelf->ysyx_25020037__DOT__clint_rready)))
                                                 ? 0U
                                                 : 2U)
                                             : 0U)));
}

void Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__exu_cpu__DOT__hit_TOP(IData/*31:0*/ inst_not_realize);

VL_INLINE_OPT void Vysyx_25020037___024root___nba_sequent__TOP__5(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->ysyx_25020037__DOT__exu_valid = 0U;
        vlSelf->__Vdly__ysyx_25020037__DOT__exu_ready = 1U;
        vlSelf->ysyx_25020037__DOT__eu_to_lu_bus = 0ULL;
    } else if (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__state) {
        if (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__state) {
            if (vlSelf->ysyx_25020037__DOT__lsu_ready) {
                vlSelf->ysyx_25020037__DOT__dnpc = vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__dnpc_r;
                vlSelf->ysyx_25020037__DOT__eu_to_lu_bus 
                    = (((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__result)) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__src2)));
                vlSelf->ysyx_25020037__DOT__exu_valid = 1U;
                vlSelf->__Vdly__ysyx_25020037__DOT__exu_ready = 1U;
            }
        }
    } else {
        if (((IData)(vlSelf->ysyx_25020037__DOT__idu_valid) 
             & (IData)(vlSelf->ysyx_25020037__DOT__exu_ready))) {
            vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U] 
                = vlSelf->ysyx_25020037__DOT__mepc;
            vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U] 
                = vlSelf->ysyx_25020037__DOT__mtvec;
            vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U] 
                = (IData)((((QData)((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__src1)) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
                                                        [
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                                    >> 6U)))]))));
            vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                = (IData)(((((QData)((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__src1)) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
                                                         [
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                                     >> 6U)))]))) 
                           >> 0x20U));
            vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                = vlSelf->ysyx_25020037__DOT__du_to_eu_bus;
            vlSelf->__Vdly__ysyx_25020037__DOT__exu_ready = 0U;
        }
        vlSelf->ysyx_25020037__DOT__exu_valid = 0U;
    }
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__next_state));
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__src2 
        = vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U];
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0 
        = (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
           == vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]);
    if ((IData)((0ULL != (0x30ULL & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r)))) {
        Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__exu_cpu__DOT__hit_TOP(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 4U))))));
    }
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1 
        = (IData)((0ULL != (0x7800000ULL & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r)));
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
        = ((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                          >> 8U))) ? (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x1bU))
            : vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin 
        = (IData)((0ULL != (0x3800ULL & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r)));
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
        = ((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)
            ? (~ vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U])
            : vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b 
        = ((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)
            ? (~ vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)
            : vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U])) 
                                  + ((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d)) 
                                     + (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)))) 
                                 >> 0x20U))));
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0 
        = (1U & (((~ (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U] 
                      >> 0x1fU)) & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                                    >> 0x1fU)) | ((~ 
                                                   ((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                                                     ^ 
                                                     vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]) 
                                                    >> 0x1fU)) 
                                                  & ((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                                                      + 
                                                      (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
                                                       + (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1))) 
                                                     >> 0x1fU))));
}

VL_INLINE_OPT void Vysyx_25020037___024root___nba_sequent__TOP__6(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->ysyx_25020037__DOT__lsu_ready = vlSelf->__Vdly__ysyx_25020037__DOT__lsu_ready;
}

VL_INLINE_OPT void Vysyx_25020037___024root___nba_sequent__TOP__7(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[1U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[2U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[3U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[4U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[5U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[6U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[7U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[8U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[9U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xaU] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xbU] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xcU] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xdU] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xeU] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xfU] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout;
    if (vlSelf->reset) {
        vlSelf->ysyx_25020037__DOT__mtvec = 0U;
        vlSelf->ysyx_25020037__DOT__mepc = 0U;
    } else {
        if (((IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                      >> 5U)) & (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))) {
            vlSelf->ysyx_25020037__DOT__mtvec = vlSelf->ysyx_25020037__DOT__csr_wcsr_data;
        }
        if (((IData)((0ULL != (0x12ULL & vlSelf->ysyx_25020037__DOT__du_to_gu_bus))) 
             & (IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))) {
            vlSelf->ysyx_25020037__DOT__mepc = ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                            >> 1U)))
                                                 ? (IData)(
                                                           (vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                                            >> 0x15U))
                                                 : vlSelf->ysyx_25020037__DOT__csr_wcsr_data);
        }
    }
}

VL_INLINE_OPT void Vysyx_25020037___024root___nba_comb__TOP__0(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037__DOT__lsu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyx_25020037__DOT__lsu_valid) 
                     & (IData)(vlSelf->ysyx_25020037__DOT__wbu_ready))))
            : ((IData)(vlSelf->ysyx_25020037__DOT__lsu_ready) 
               & (IData)(vlSelf->ysyx_25020037__DOT__exu_valid)));
}

VL_INLINE_OPT void Vysyx_25020037___024root___nba_sequent__TOP__8(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_sequent__TOP__8\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h86590829__0;
    VlWide<3>/*95:0*/ __Vtemp_h844a8032__0;
    VlWide<3>/*95:0*/ __Vtemp_h28720e6f__0;
    VlWide<3>/*95:0*/ __Vtemp_h69615c03__0;
    VlWide<4>/*127:0*/ __Vtemp_h500cfb00__0;
    VlWide<4>/*127:0*/ __Vtemp_ha57b03d7__0;
    VlWide<4>/*127:0*/ __Vtemp_h7fa1e39d__0;
    VlWide<3>/*95:0*/ __Vtemp_h9e77c1b9__0;
    VlWide<3>/*95:0*/ __Vtemp_h7f86de40__0;
    VlWide<3>/*95:0*/ __Vtemp_h703e8b8c__0;
    VlWide<3>/*95:0*/ __Vtemp_h9c89c4bc__0;
    VlWide<4>/*127:0*/ __Vtemp_h3e12efdc__0;
    VlWide<4>/*127:0*/ __Vtemp_hb97a4cd6__0;
    VlWide<4>/*127:0*/ __Vtemp_h78f2c941__0;
    // Body
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0 
        = ((~ (IData)(vlSelf->ysyx_25020037__DOT__gpr_ready)) 
           & (IData)(vlSelf->ysyx_25020037__DOT__wbu_valid));
    if (vlSelf->reset) {
        vlSelf->ysyx_25020037__DOT__idu_valid = 0U;
        vlSelf->__Vdly__ysyx_25020037__DOT__idu_ready = 1U;
        vlSelf->ysyx_25020037__DOT__du_to_eu_bus = 0ULL;
        vlSelf->ysyx_25020037__DOT__du_to_gu_bus = 0ULL;
        vlSelf->ysyx_25020037__DOT__du_to_lu_bus = 0U;
        vlSelf->ysyx_25020037__DOT__du_to_wu_bus = 0U;
    } else if (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__state) {
        if (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__state) {
            if (vlSelf->ysyx_25020037__DOT__exu_ready) {
                vlSelf->ysyx_25020037__DOT__inst_s 
                    = (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                        | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sh)) 
                       | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb));
                vlSelf->ysyx_25020037__DOT__inst_l 
                    = (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw) 
                        | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__half_sext)) 
                       | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__bit_sext));
                vlSelf->ysyx_25020037__DOT__du_to_eu_bus 
                    = (((QData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm)) 
                        << 0x1bU) | (QData)((IData)(
                                                    ((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__alu_op 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__src1_is_pc) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__src2_is_imm) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_pc_jump) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ebreak) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_not_realize) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ecall_en) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__mret_en) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csrrs_op) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csrrw_op))))))))))))));
                vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                    = (((QData)((IData)(vlSelf->ysyx_25020037__DOT__pc)) 
                        << 0x15U) | (QData)((IData)(
                                                    (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rd) 
                                                      << 0x10U) 
                                                     | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs1) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs2) 
                                                            << 6U) 
                                                           | ((((0x305U 
                                                                 == vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm) 
                                                                & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op)) 
                                                               << 5U) 
                                                              | ((((0x341U 
                                                                    == vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm) 
                                                                   & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op)) 
                                                                  << 4U) 
                                                                 | ((((0x300U 
                                                                       == vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm) 
                                                                      & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op)) 
                                                                     << 3U) 
                                                                    | ((((0x342U 
                                                                          == vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm) 
                                                                         & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op)) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ecall_en) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__mret_en))))))))))));
                vlSelf->ysyx_25020037__DOT__du_to_lu_bus 
                    = (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rstrb) 
                        << 2U) | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rlsu_we) 
                                   << 1U) | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__wlsu_we)));
                vlSelf->ysyx_25020037__DOT__du_to_wu_bus 
                    = (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rstrb) 
                        << 5U) | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__bit_sext) 
                                   << 4U) | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__half_sext) 
                                              << 3U) 
                                             | (((IData)(vlSelf->ysyx_25020037__DOT__gpr_we) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rlsu_we) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csr_w_gpr_we))))));
                vlSelf->ysyx_25020037__DOT__idu_valid = 1U;
                vlSelf->__Vdly__ysyx_25020037__DOT__idu_ready = 1U;
                vlSelf->ysyx_25020037__DOT__gpr_we 
                    = vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__gpr_we_r;
            }
        }
    } else {
        if (((IData)(vlSelf->ysyx_25020037__DOT__ifu_rvalid) 
             & (IData)(vlSelf->ysyx_25020037__DOT__idu_ready))) {
            vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                = vlSelf->ysyx_25020037__DOT__ifu_rdata;
            vlSelf->__Vdly__ysyx_25020037__DOT__idu_ready = 0U;
        }
        vlSelf->ysyx_25020037__DOT__idu_valid = 0U;
    }
    vlSelf->ysyx_25020037__DOT__ifu_rdata = 0U;
    vlSelf->ysyx_25020037__DOT__idu_ready = vlSelf->__Vdly__ysyx_25020037__DOT__idu_ready;
    vlSelf->ysyx_25020037__DOT__ifu_rvalid = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25020037__DOT__u_axi_crossbar__DOT__current_master))) {
        vlSelf->ysyx_25020037__DOT__ifu_rdata = vlSelf->ysyx_25020037__DOT__sram_rdata;
        vlSelf->ysyx_25020037__DOT__ifu_rvalid = vlSelf->ysyx_25020037__DOT__sram_rvalid;
    }
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0 
        = ((0U != (0x1fU & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                                    >> 0x10U)))) & 
           ((IData)(vlSelf->ysyx_25020037__DOT__gpr_we) 
            & (IData)(vlSelf->ysyx_25020037__DOT__wbu_valid)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__next_state));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rd = 
        (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                  >> 7U));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs1 = 
        (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                  >> 0xfU));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs2 = 
        (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                  >> 0x14U));
    __Vtemp_h86590829__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (0x3eU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0x3dU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0x3cU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0x3bU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x3aU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0x39U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0x38U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h86590829__0[1U] = (IData)(((((QData)((IData)(
                                                          (0x3fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (0x3eU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0x3dU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0x3cU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0x3bU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0x3aU 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0x39U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0x38U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h844a8032__0[2U] = (((0x48U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                 << 8U) | (((0x47U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                            << 7U) 
                                           | (((0x46U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                               << 6U) 
                                              | (((0x45U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 5U) 
                                                 | (((0x44U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 4U) 
                                                    | (((0x43U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 3U) 
                                                       | (((0x42U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 2U) 
                                                          | (((0x41U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 1U) 
                                                             | (0x40U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r))))))))));
    __Vtemp_h28720e6f__0[2U] = (((0x50U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                 << 0x10U) | (((0x4fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0xfU) 
                                              | (((0x4eU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0xeU) 
                                                 | (((0x4dU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 0xdU) 
                                                    | (((0x4cU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 0xcU) 
                                                       | (((0x4bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 0xbU) 
                                                          | (((0x4aU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 0xaU) 
                                                             | (((0x49U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                 << 9U) 
                                                                | __Vtemp_h844a8032__0[2U]))))))));
    __Vtemp_h69615c03__0[2U] = (((0x58U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                 << 0x18U) | (((0x57U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0x17U) 
                                              | (((0x56U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0x16U) 
                                                 | (((0x55U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 0x15U) 
                                                    | (((0x54U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 0x14U) 
                                                       | (((0x53U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 0x13U) 
                                                          | (((0x52U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 0x12U) 
                                                             | (((0x51U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_h28720e6f__0[2U]))))))));
    __Vtemp_h500cfb00__0[3U] = (((0x68U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                 << 8U) | (((0x67U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                            << 7U) 
                                           | (((0x66U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                               << 6U) 
                                              | (((0x65U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 5U) 
                                                 | (((0x64U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 4U) 
                                                    | (((0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 3U) 
                                                       | (((0x62U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 2U) 
                                                          | (((0x61U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 1U) 
                                                             | (0x60U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r))))))))));
    __Vtemp_ha57b03d7__0[3U] = (((0x70U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                 << 0x10U) | (((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0xfU) 
                                              | (((0x6eU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0xeU) 
                                                 | (((0x6dU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 0xdU) 
                                                    | (((0x6cU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 0xcU) 
                                                       | (((0x6bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 0xbU) 
                                                          | (((0x6aU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 0xaU) 
                                                             | (((0x69U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                 << 9U) 
                                                                | __Vtemp_h500cfb00__0[3U]))))))));
    __Vtemp_h7fa1e39d__0[3U] = (((0x78U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                 << 0x18U) | (((0x77U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0x17U) 
                                              | (((0x76U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0x16U) 
                                                 | (((0x75U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 0x15U) 
                                                    | (((0x74U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 0x14U) 
                                                       | (((0x73U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 0x13U) 
                                                          | (((0x72U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 0x12U) 
                                                             | (((0x71U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_ha57b03d7__0[3U]))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_06_00_d[0U] 
        = __Vtemp_h86590829__0[0U];
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_06_00_d[1U] 
        = __Vtemp_h86590829__0[1U];
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_06_00_d[2U] 
        = (((0x5fU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
            << 0x1fU) | (((0x5eU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                          << 0x1eU) | (((0x5dU == (0x7fU 
                                                   & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                        << 0x1dU) | 
                                       (((0x5cU == 
                                          (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                         << 0x1cU) 
                                        | (((0x5bU 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                            << 0x1bU) 
                                           | (((0x5aU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0x1aU) 
                                              | (((0x59U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0x19U) 
                                                 | __Vtemp_h69615c03__0[2U])))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_06_00_d[3U] 
        = (((0x7fU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
            << 0x1fU) | (((0x7eU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                          << 0x1eU) | (((0x7dU == (0x7fU 
                                                   & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                        << 0x1dU) | 
                                       (((0x7cU == 
                                          (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                         << 0x1cU) 
                                        | (((0x7bU 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                            << 0x1bU) 
                                           | (((0x7aU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0x1aU) 
                                              | (((0x79U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0x19U) 
                                                 | __Vtemp_h7fa1e39d__0[3U])))))));
    __Vtemp_h9e77c1b9__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          == 
                                                          (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                           >> 0x19U)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (0x3eU 
                                                             == 
                                                             (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0x19U)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0x3dU 
                                                                == 
                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0x3cU 
                                                                   == 
                                                                   (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                    >> 0x19U)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0x3bU 
                                                                      == 
                                                                      (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                       >> 0x19U)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x3aU 
                                                                         == 
                                                                         (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                          >> 0x19U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0x39U 
                                                                            == 
                                                                            (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                             >> 0x19U)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0x38U 
                                                                               == 
                                                                               (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h9e77c1b9__0[1U] = (IData)(((((QData)((IData)(
                                                          (0x3fU 
                                                           == 
                                                           (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                            >> 0x19U)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (0x3eU 
                                                              == 
                                                              (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                               >> 0x19U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0x3dU 
                                                                 == 
                                                                 (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                  >> 0x19U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0x3cU 
                                                                    == 
                                                                    (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                     >> 0x19U)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0x3bU 
                                                                       == 
                                                                       (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                        >> 0x19U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0x3aU 
                                                                          == 
                                                                          (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                           >> 0x19U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0x39U 
                                                                             == 
                                                                             (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                              >> 0x19U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0x38U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h7f86de40__0[2U] = (((0x48U == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 8U) | (((0x47U 
                                             == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                            << 7U) 
                                           | (((0x46U 
                                                == 
                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 6U) 
                                              | (((0x45U 
                                                   == 
                                                   (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 5U) 
                                                 | (((0x44U 
                                                      == 
                                                      (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 4U) 
                                                    | (((0x43U 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 3U) 
                                                       | (((0x42U 
                                                            == 
                                                            (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 2U) 
                                                          | (((0x41U 
                                                               == 
                                                               (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 1U) 
                                                             | (0x40U 
                                                                == 
                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U))))))))));
    __Vtemp_h703e8b8c__0[2U] = (((0x50U == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 0x10U) | (((0x4fU 
                                                == 
                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 0xfU) 
                                              | (((0x4eU 
                                                   == 
                                                   (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 0xeU) 
                                                 | (((0x4dU 
                                                      == 
                                                      (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 0xdU) 
                                                    | (((0x4cU 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 0xcU) 
                                                       | (((0x4bU 
                                                            == 
                                                            (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 0xbU) 
                                                          | (((0x4aU 
                                                               == 
                                                               (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 0xaU) 
                                                             | (((0x49U 
                                                                  == 
                                                                  (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                   >> 0x19U)) 
                                                                 << 9U) 
                                                                | __Vtemp_h7f86de40__0[2U]))))))));
    __Vtemp_h9c89c4bc__0[2U] = (((0x58U == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 0x18U) | (((0x57U 
                                                == 
                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 0x17U) 
                                              | (((0x56U 
                                                   == 
                                                   (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 0x16U) 
                                                 | (((0x55U 
                                                      == 
                                                      (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 0x15U) 
                                                    | (((0x54U 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 0x14U) 
                                                       | (((0x53U 
                                                            == 
                                                            (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 0x13U) 
                                                          | (((0x52U 
                                                               == 
                                                               (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 0x12U) 
                                                             | (((0x51U 
                                                                  == 
                                                                  (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                   >> 0x19U)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_h703e8b8c__0[2U]))))))));
    __Vtemp_h3e12efdc__0[3U] = (((0x68U == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 8U) | (((0x67U 
                                             == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                            << 7U) 
                                           | (((0x66U 
                                                == 
                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 6U) 
                                              | (((0x65U 
                                                   == 
                                                   (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 5U) 
                                                 | (((0x64U 
                                                      == 
                                                      (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 4U) 
                                                    | (((0x63U 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 3U) 
                                                       | (((0x62U 
                                                            == 
                                                            (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 2U) 
                                                          | (((0x61U 
                                                               == 
                                                               (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 1U) 
                                                             | (0x60U 
                                                                == 
                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U))))))))));
    __Vtemp_hb97a4cd6__0[3U] = (((0x70U == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 0x10U) | (((0x6fU 
                                                == 
                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 0xfU) 
                                              | (((0x6eU 
                                                   == 
                                                   (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 0xeU) 
                                                 | (((0x6dU 
                                                      == 
                                                      (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 0xdU) 
                                                    | (((0x6cU 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 0xcU) 
                                                       | (((0x6bU 
                                                            == 
                                                            (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 0xbU) 
                                                          | (((0x6aU 
                                                               == 
                                                               (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 0xaU) 
                                                             | (((0x69U 
                                                                  == 
                                                                  (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                   >> 0x19U)) 
                                                                 << 9U) 
                                                                | __Vtemp_h3e12efdc__0[3U]))))))));
    __Vtemp_h78f2c941__0[3U] = (((0x78U == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 0x18U) | (((0x77U 
                                                == 
                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 0x17U) 
                                              | (((0x76U 
                                                   == 
                                                   (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 0x16U) 
                                                 | (((0x75U 
                                                      == 
                                                      (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 0x15U) 
                                                    | (((0x74U 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 0x14U) 
                                                       | (((0x73U 
                                                            == 
                                                            (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 0x13U) 
                                                          | (((0x72U 
                                                               == 
                                                               (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 0x12U) 
                                                             | (((0x71U 
                                                                  == 
                                                                  (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                   >> 0x19U)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_hb97a4cd6__0[3U]))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_25_d[0U] 
        = __Vtemp_h9e77c1b9__0[0U];
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_25_d[1U] 
        = __Vtemp_h9e77c1b9__0[1U];
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_25_d[2U] 
        = (((0x5fU == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                       >> 0x19U)) << 0x1fU) | (((0x5eU 
                                                 == 
                                                 (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                  >> 0x19U)) 
                                                << 0x1eU) 
                                               | (((0x5dU 
                                                    == 
                                                    (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                     >> 0x19U)) 
                                                   << 0x1dU) 
                                                  | (((0x5cU 
                                                       == 
                                                       (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                        >> 0x19U)) 
                                                      << 0x1cU) 
                                                     | (((0x5bU 
                                                          == 
                                                          (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                           >> 0x19U)) 
                                                         << 0x1bU) 
                                                        | (((0x5aU 
                                                             == 
                                                             (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0x19U)) 
                                                            << 0x1aU) 
                                                           | (((0x59U 
                                                                == 
                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U)) 
                                                               << 0x19U) 
                                                              | __Vtemp_h9c89c4bc__0[2U])))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_25_d[3U] 
        = (((0x7fU == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                       >> 0x19U)) << 0x1fU) | (((0x7eU 
                                                 == 
                                                 (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                  >> 0x19U)) 
                                                << 0x1eU) 
                                               | (((0x7dU 
                                                    == 
                                                    (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                     >> 0x19U)) 
                                                   << 0x1dU) 
                                                  | (((0x7cU 
                                                       == 
                                                       (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                        >> 0x19U)) 
                                                      << 0x1cU) 
                                                     | (((0x7bU 
                                                          == 
                                                          (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                           >> 0x19U)) 
                                                         << 0x1bU) 
                                                        | (((0x7aU 
                                                             == 
                                                             (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0x19U)) 
                                                            << 0x1aU) 
                                                           | (((0x79U 
                                                                == 
                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U)) 
                                                               << 0x19U) 
                                                              | __Vtemp_h78f2c941__0[3U])))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs2_d 
        = (((0x1fU == (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                >> 0x14U))) << 0x1fU) 
           | (((0x1eU == (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                   >> 0x14U))) << 0x1eU) 
              | (((0x1dU == (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                      >> 0x14U))) << 0x1dU) 
                 | (((0x1cU == (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                         >> 0x14U))) 
                     << 0x1cU) | (((0x1bU == (0x1fU 
                                              & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x14U))) 
                                   << 0x1bU) | (((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                      >> 0x14U))) 
                                                 << 0x1aU) 
                                                | (((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                         >> 0x14U))) 
                                                    << 0x19U) 
                                                   | (((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                            >> 0x14U))) 
                                                       << 0x18U) 
                                                      | (((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                               >> 0x14U))) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                  >> 0x14U))) 
                                                             << 0x16U) 
                                                            | (((0x15U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                     >> 0x14U))) 
                                                                << 0x15U) 
                                                               | (((0x14U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                        >> 0x14U))) 
                                                                   << 0x14U) 
                                                                  | (((0x13U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                           >> 0x14U))) 
                                                                      << 0x13U) 
                                                                     | (((0x12U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                              >> 0x14U))) 
                                                                         << 0x12U) 
                                                                        | (((0x11U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                            << 0x11U) 
                                                                           | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                               << 0x10U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_26_d 
        = (((QData)((IData)((0x3fU == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                       >> 0x1aU)))) 
            << 0x3fU) | (((QData)((IData)((0x3eU == 
                                           (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x1aU)))) 
                          << 0x3eU) | (((QData)((IData)(
                                                        (0x3dU 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x1aU)))) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         (0x3cU 
                                                          == 
                                                          (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                           >> 0x1aU)))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (0x3bU 
                                                             == 
                                                             (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0x1aU)))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (0x3aU 
                                                                == 
                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x1aU)))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (0x39U 
                                                                   == 
                                                                   (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                    >> 0x1aU)))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (0x38U 
                                                                      == 
                                                                      (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                       >> 0x1aU)))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (0x37U 
                                                                         == 
                                                                         (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                          >> 0x1aU)))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (0x36U 
                                                                            == 
                                                                            (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                             >> 0x1aU)))) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (0x35U 
                                                                               == 
                                                                               (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rd_d 
        = (((0x1fU == (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                >> 7U))) << 0x1fU) 
           | (((0x1eU == (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                   >> 7U))) << 0x1eU) 
              | (((0x1dU == (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                      >> 7U))) << 0x1dU) 
                 | (((0x1cU == (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                         >> 7U))) << 0x1cU) 
                    | (((0x1bU == (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                            >> 7U))) 
                        << 0x1bU) | (((0x1aU == (0x1fU 
                                                 & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                    >> 7U))) 
                                      << 0x1aU) | (
                                                   ((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                         >> 7U))) 
                                                    << 0x19U) 
                                                   | (((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                            >> 7U))) 
                                                       << 0x18U) 
                                                      | (((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                               >> 7U))) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                  >> 7U))) 
                                                             << 0x16U) 
                                                            | (((0x15U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                     >> 7U))) 
                                                                << 0x15U) 
                                                               | (((0x14U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                        >> 7U))) 
                                                                   << 0x14U) 
                                                                  | (((0x13U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                           >> 7U))) 
                                                                      << 0x13U) 
                                                                     | (((0x12U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                              >> 7U))) 
                                                                         << 0x12U) 
                                                                        | (((0x11U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                            << 0x11U) 
                                                                           | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                               << 0x10U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs1_d 
        = (((0x1fU == (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                >> 0xfU))) << 0x1fU) 
           | (((0x1eU == (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                   >> 0xfU))) << 0x1eU) 
              | (((0x1dU == (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                      >> 0xfU))) << 0x1dU) 
                 | (((0x1cU == (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                         >> 0xfU))) 
                     << 0x1cU) | (((0x1bU == (0x1fU 
                                              & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0xfU))) 
                                   << 0x1bU) | (((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                      >> 0xfU))) 
                                                 << 0x1aU) 
                                                | (((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                         >> 0xfU))) 
                                                    << 0x19U) 
                                                   | (((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                            >> 0xfU))) 
                                                       << 0x18U) 
                                                      | (((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                               >> 0xfU))) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                  >> 0xfU))) 
                                                             << 0x16U) 
                                                            | (((0x15U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                     >> 0xfU))) 
                                                                << 0x15U) 
                                                               | (((0x14U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                        >> 0xfU))) 
                                                                   << 0x14U) 
                                                                  | (((0x13U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                           >> 0xfU))) 
                                                                      << 0x13U) 
                                                                     | (((0x12U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                              >> 0xfU))) 
                                                                         << 0x12U) 
                                                                        | (((0x11U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                            << 0x11U) 
                                                                           | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                               << 0x10U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_U 
        = ((0x17U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
           | (0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0 
        = (IData)((0U == (0xfff00000U & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csrrs_op 
        = (IData)((0x2073U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csrrw_op 
        = (IData)((0x1073U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_and 
        = (IData)((0x7033U == (0xfe00707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_or 
        = (IData)((0x6033U == (0xfe00707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_xor 
        = (IData)((0x4033U == (0xfe00707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sll 
        = (IData)((0x1033U == (0xfe00707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_slt 
        = (IData)((0x2033U == (0xfe00707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sltu 
        = (IData)((0x3033U == (0xfe00707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0 
        = (IData)((0x73U == (0xfffffU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sh 
        = (IData)((0x1023U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb 
        = (IData)((0x23U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_beq 
        = (IData)((0x63U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bne 
        = (IData)((0x1063U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bge 
        = (IData)((0x5063U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_blt 
        = (IData)((0x4063U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_andi 
        = (IData)((0x7013U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_slli 
        = (IData)((0x1013U == (0xfc00707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_ori 
        = (IData)((0x6013U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_xori 
        = (IData)((0x4013U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl 
        = (IData)((0x67U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__half_sext 
        = (IData)((0x1003U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__bit_sext 
        = (IData)((3U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0 
        = (IData)((0x33U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h6b17a27c__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csr_w_gpr_we 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csrrw_op) 
           | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csrrs_op));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ebreak 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
           & (IData)((0x100000U == (0xfff00000U & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ecall_en 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
           & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__mret_en 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
           & (IData)((0x30200000U == (0xfff00000U & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__wlsu_we 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sh) 
              | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bne) 
           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_beq) 
              | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bge) 
                 | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bgeu) 
                    | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_blt) 
                       | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bltu))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rstrb 
        = (0xfU & ((1U & (- (IData)(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                     | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                                        | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__bit_sext)))))) 
                   | ((2U & (- (IData)(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sh) 
                                        | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__half_sext) 
                                           | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lhu)))))) 
                      | (- (IData)(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                                    | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw)))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rlsu_we 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw) 
           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
              | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__half_sext) 
                 | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lhu) 
                    | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__bit_sext)))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0) 
           & (0U == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                     >> 0x19U)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sub 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0) 
           & (0x20U == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                        >> 0x19U)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sra 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h6b17a27c__0) 
           & (0x10U == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                        >> 0x1aU)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srl 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h6b17a27c__0) 
           & (0U == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                     >> 0x1aU)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srai 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0) 
           & (0x10U == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                        >> 0x1aU)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srli 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0) 
           & (0U == (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                     >> 0x1aU)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ecall_en) 
           | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__mret_en));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__src1_is_pc 
        = ((0x6fU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
           | ((0x17U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
              | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_R 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_and) 
              | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sub) 
                 | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_or) 
                    | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_xor) 
                       | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sra) 
                          | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srl) 
                             | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_slt) 
                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sltu) 
                                   | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sll))))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__alu_op 
        = (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bltu) 
            << 0x10U) | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_blt) 
                          << 0xfU) | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bgeu) 
                                       << 0xeU) | (
                                                   ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_bge) 
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
                                                                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__bit_sext)))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi) 
           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
              | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw) 
                 | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sltiu) 
                    | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srai) 
                       | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                          | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__half_sext) 
                             | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lhu) 
                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_andi) 
                                   | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_xori) 
                                      | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_srli) 
                                         | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_slli) 
                                            | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__bit_sext) 
                                               | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_ori) 
                                                  | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csr_w_gpr_we)))))))))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_csr_op 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__csr_w_gpr_we) 
           | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__is_pc_jump 
        = ((0x6fU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
              | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal) 
                 | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__gpr_we_r 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_R) 
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
                                                     | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rlsu_we))))))))))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__imm = 
        (((- (IData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I))) 
          & (((- (IData)((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                          >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                  >> 0x14U))) 
         | (((- (IData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__wlsu_we))) 
             & (((- (IData)((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                             >> 0x1fU))) << 0xcU) | 
                ((0xfe0U & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                            >> 0x14U)) | (0x1fU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                   >> 7U))))) 
            | (((- (IData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal))) 
                & (((- (IData)((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                >> 0x1fU))) << 0xcU) 
                   | ((0x800U & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                 << 4U)) | ((0x7e0U 
                                             & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                                  >> 7U)))))) 
               | ((0xfffff000U & ((- (IData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_U))) 
                                  & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                  | ((- (IData)((0x6fU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)))) 
                     & (((- (IData)((vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                     >> 0x1fU))) << 0x14U) 
                        | ((0xff000U & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r) 
                           | ((0x800U & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                         >> 9U)) | 
                              (0x7feU & (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r 
                                         >> 0x14U))))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__src2_is_imm 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
              | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sh) 
                 | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                    | ((0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                       | ((0x17U == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                          | ((0x6fU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                             | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal) 
                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl)))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_not_realize 
        = (1U & (~ ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__double_cal) 
                    | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                       | ((0x6fU == (0x7fU & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                          | (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__ebreak) 
                              | (IData)(((0U == (0xfffffU 
                                                 & vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_r)) 
                                         & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))) 
                             | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_R) 
                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__wlsu_we) 
                                   | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_U) 
                                      | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_W) 
                                         | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0)))))))))));
}

VL_INLINE_OPT void Vysyx_25020037___024root___nba_sequent__TOP__9(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->ysyx_25020037__DOT__exu_ready = vlSelf->__Vdly__ysyx_25020037__DOT__exu_ready;
}

VL_INLINE_OPT void Vysyx_25020037___024root___nba_sequent__TOP__10(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->ysyx_25020037__DOT__pc = vlSelf->__Vdly__ysyx_25020037__DOT__pc;
}

VL_INLINE_OPT void Vysyx_25020037___024root___nba_comb__TOP__1(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__src1 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
        [(0x1fU & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                           >> 0xbU)))];
    vlSelf->ysyx_25020037__DOT__csr_wgpr_data = (((- (IData)(
                                                             (0x305U 
                                                              == (IData)(
                                                                         (vlSelf->ysyx_25020037__DOT__du_to_eu_bus 
                                                                          >> 0x1bU))))) 
                                                  & vlSelf->ysyx_25020037__DOT__mtvec) 
                                                 | (((- (IData)(
                                                                (0x341U 
                                                                 == (IData)(
                                                                            (vlSelf->ysyx_25020037__DOT__du_to_eu_bus 
                                                                             >> 0x1bU))))) 
                                                     & vlSelf->ysyx_25020037__DOT__mepc) 
                                                    | (((- (IData)(
                                                                   (0x300U 
                                                                    == (IData)(
                                                                               (vlSelf->ysyx_25020037__DOT__du_to_eu_bus 
                                                                                >> 0x1bU))))) 
                                                        & vlSelf->ysyx_25020037__DOT__mstatus) 
                                                       | ((- (IData)(
                                                                     (0x342U 
                                                                      == (IData)(
                                                                                (vlSelf->ysyx_25020037__DOT__du_to_eu_bus 
                                                                                >> 0x1bU))))) 
                                                          & vlSelf->ysyx_25020037__DOT__mcause))));
    vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037__DOT__ifu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyx_25020037__DOT__ifu_rvalid) 
                     & (IData)(vlSelf->ysyx_25020037__DOT__ifu_rready))))
            : (vlSelf->ysyx_25020037__DOT__pc != vlSelf->ysyx_25020037__DOT__ifu_araddr));
    vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__final_result 
        = ((IData)(vlSelf->reset) ? 0U : ((1U & (IData)(vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
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
                                                   : vlSelf->ysyx_25020037__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))));
    vlSelf->ysyx_25020037__DOT__csr_wcsr_data = (((- (IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->ysyx_25020037__DOT__du_to_eu_bus)))) 
                                                  & vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__src1) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->ysyx_25020037__DOT__du_to_eu_bus 
                                                                           >> 1U))))) 
                                                    & (vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__src1 
                                                       | vlSelf->ysyx_25020037__DOT__csr_wgpr_data)));
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__mstatus_data 
        = ((1U & (IData)((vlSelf->ysyx_25020037__DOT__du_to_gu_bus 
                          >> 1U))) ? 0x1800U : ((1U 
                                                 & (IData)(vlSelf->ysyx_25020037__DOT__du_to_gu_bus))
                                                 ? 
                                                (0xffffe7ffU 
                                                 & (0x80U 
                                                    | ((0xfffffff7U 
                                                        & vlSelf->ysyx_25020037__DOT__mstatus) 
                                                       | (8U 
                                                          & (vlSelf->ysyx_25020037__DOT__mstatus 
                                                             >> 4U)))))
                                                 : vlSelf->ysyx_25020037__DOT__csr_wcsr_data));
}

VL_INLINE_OPT void Vysyx_25020037___024root___nba_comb__TOP__2(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyx_25020037__DOT__exu_valid) 
                     & (IData)(vlSelf->ysyx_25020037__DOT__lsu_ready))))
            : ((IData)(vlSelf->ysyx_25020037__DOT__idu_valid) 
               & (IData)(vlSelf->ysyx_25020037__DOT__exu_ready)));
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyx_25020037__DOT__gpr_valid) 
                     & (IData)(vlSelf->ysyx_25020037__DOT__exu_ready))))
            : (((IData)(vlSelf->ysyx_25020037__DOT__wbu_valid) 
                | (IData)(vlSelf->ysyx_25020037__DOT__idu_valid)) 
               & (IData)(vlSelf->ysyx_25020037__DOT__gpr_ready)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyx_25020037__DOT__idu_valid) 
                     & (IData)(vlSelf->ysyx_25020037__DOT__exu_ready))))
            : ((IData)(vlSelf->ysyx_25020037__DOT__ifu_rvalid) 
               & (IData)(vlSelf->ysyx_25020037__DOT__idu_ready)));
}

VL_INLINE_OPT void Vysyx_25020037___024root___nba_comb__TOP__3(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
        = ((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                          >> 9U))) ? vlSelf->ysyx_25020037__DOT__pc
            : vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U]);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
        = (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
           + (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b 
              + (IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)));
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1 
        = (((- (IData)((IData)((0ULL != (0xc40ULL & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r))))) 
            & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result) 
           | ((1U & ((- (IData)((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                               >> 0xcU))))) 
                     & (((~ (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
                             >> 0x1fU)) & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                           >> 0x1fU)) 
                        | ((~ ((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                ^ vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                               >> 0x1fU)) & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
                                             >> 0x1fU))))) 
              | ((1U & ((- (IData)((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                  >> 0xdU))))) 
                        & (~ (IData)((1ULL & (((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                               + ((QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                  + (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                              >> 0x20U)))))) 
                 | (((- (IData)((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                               >> 0xeU))))) 
                     & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                        & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)) 
                    | (((- (IData)((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                  >> 0xfU))))) 
                        & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                           | vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                     >> 0x10U))))) 
                           & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                              ^ vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                        >> 0x14U))))) 
                              & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                           >> 0x11U))))) 
                                 & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                    << (0x1fU & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))) 
                                | ((- (IData)((IData)(
                                                      (0ULL 
                                                       != 
                                                       (0xc0000ULL 
                                                        & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r))))) 
                                   & (IData)(((((QData)((IData)(
                                                                (- (IData)((IData)(
                                                                                ((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x13U) 
                                                                                & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                              >> (0x1fU 
                                                  & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))))))))))));
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__result 
        = ((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                          >> 7U))) ? ((IData)(4U) + vlSelf->ysyx_25020037__DOT__pc)
            : vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__dnpc_r 
        = ((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                          >> 3U))) ? vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U]
            : ((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                              >> 2U))) ? vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U]
                : ((1U & (IData)((vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                  >> 7U))) ? ((1U == 
                                               ((1U 
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
                    : ((IData)(4U) + vlSelf->ysyx_25020037__DOT__pc))));
}

void Vysyx_25020037___024root___eval_nba(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25020037___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_25020037___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_25020037___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25020037___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_25020037___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25020037___024root___nba_sequent__TOP__6(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_25020037___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vysyx_25020037___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25020037___024root___nba_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_25020037___024root___nba_sequent__TOP__9(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_25020037___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_25020037___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vysyx_25020037___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vysyx_25020037___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
}

void Vysyx_25020037___024root___eval_triggers__ico(Vysyx_25020037___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037___024root___dump_triggers__ico(Vysyx_25020037___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_25020037___024root___eval_triggers__act(Vysyx_25020037___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037___024root___dump_triggers__act(Vysyx_25020037___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037___024root___dump_triggers__nba(Vysyx_25020037___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25020037___024root___eval(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_25020037___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25020037___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_25020037.v", 3, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_25020037___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_25020037___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_25020037___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ysyx_25020037.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_25020037___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25020037___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_25020037.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_25020037___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25020037___024root___eval_debug_assertions(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_interrupt & 0xfeU))) {
        Verilated::overWidthError("io_interrupt");}
}
#endif  // VL_DEBUG
