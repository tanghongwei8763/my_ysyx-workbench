// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull___024root.h"

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static__TOP(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static\n"); );
    // Body
    VysyxSoCFull___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0x11U] = 1U;
    vlSelf->__Vm_traceActivity[0x10U] = 1U;
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static__TOP(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE = 0U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial__TOP(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_initial\n"); );
    // Body
    VysyxSoCFull___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0x11U] = 1U;
    vlSelf->__Vm_traceActivity[0x10U] = 1U;
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT____Vcellinp__flash__ss 
        = vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT___asic_spi_sck 
        = vlSelf->ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT____Vcellinp__bitrev__ss 
        = vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT___asic_psram_ce_n 
        = vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT___asic_psram_sck 
        = vlSelf->ysyxSoCFull__DOT___asic_psram_sck;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial__TOP(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[0U] = 0x3fU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[1U] = 6U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[2U] = 0x5bU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[3U] = 0x4fU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[4U] = 0x66U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[5U] = 0x6dU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[6U] = 0x7dU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[7U] = 7U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[8U] = 0x7fU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[9U] = 0x6fU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[0xaU] = 0x77U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[0xbU] = 0x7cU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[0xcU] = 0x39U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[0xdU] = 0x5eU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[0xeU] = 0x79U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[0xfU] = 0x71U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_final(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_final\n"); );
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_triggers__stl(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___eval_stl(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_settle(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VysyxSoCFull___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/tanghongwei/ysyx-workbench/npc/../ysyxSoC/build/ysyxSoCFull.v", 5248, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VysyxSoCFull___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__hit_TOP(IData/*31:0*/ inst_not_realize);
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hccb3c341_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_he38796ec_0;
extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h05f4911a_0;
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha25871e6__0;
    VlWide<3>/*95:0*/ __Vtemp_h168b2b15__0;
    VlWide<3>/*95:0*/ __Vtemp_he04d30b1__0;
    VlWide<3>/*95:0*/ __Vtemp_h94eb4a82__0;
    VlWide<4>/*127:0*/ __Vtemp_he05e2a99__0;
    VlWide<4>/*127:0*/ __Vtemp_h4dc46540__0;
    VlWide<4>/*127:0*/ __Vtemp_ha583f8f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h78cb4c09__0;
    VlWide<3>/*95:0*/ __Vtemp_h83842279__0;
    VlWide<3>/*95:0*/ __Vtemp_hdde52ef6__0;
    VlWide<3>/*95:0*/ __Vtemp_hbbc957c2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc2cc3205__0;
    VlWide<4>/*127:0*/ __Vtemp_hfd91e29f__0;
    VlWide<4>/*127:0*/ __Vtemp_h55449d4c__0;
    // Body
    if ((IData)((0ULL != (0x30ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r)))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__hit_TOP(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 4U))))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelf->externalPins_gpio_out = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap 
        = ((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
            << 0x18U) | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                     >> 0x18U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__src2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rd 
        = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                    >> 7U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rs1 
        = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                    >> 0xfU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rs2 
        = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                    >> 0x14U));
    __Vtemp_ha25871e6__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          == 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                           >> 0x19U)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (0x3eU 
                                                             == 
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0x19U)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0x3dU 
                                                                == 
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0x3cU 
                                                                   == 
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                    >> 0x19U)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0x3bU 
                                                                      == 
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                       >> 0x19U)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x3aU 
                                                                         == 
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                          >> 0x19U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0x39U 
                                                                            == 
                                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                             >> 0x19U)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0x38U 
                                                                               == 
                                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_ha25871e6__0[1U] = (IData)(((((QData)((IData)(
                                                          (0x3fU 
                                                           == 
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                            >> 0x19U)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (0x3eU 
                                                              == 
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                               >> 0x19U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0x3dU 
                                                                 == 
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                  >> 0x19U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0x3cU 
                                                                    == 
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                     >> 0x19U)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0x3bU 
                                                                       == 
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                        >> 0x19U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0x3aU 
                                                                          == 
                                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                           >> 0x19U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0x39U 
                                                                             == 
                                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                              >> 0x19U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0x38U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h168b2b15__0[2U] = (((0x48U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 8U) | (((0x47U 
                                             == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                            << 7U) 
                                           | (((0x46U 
                                                == 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 6U) 
                                              | (((0x45U 
                                                   == 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 5U) 
                                                 | (((0x44U 
                                                      == 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 4U) 
                                                    | (((0x43U 
                                                         == 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 3U) 
                                                       | (((0x42U 
                                                            == 
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 2U) 
                                                          | (((0x41U 
                                                               == 
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 1U) 
                                                             | (0x40U 
                                                                == 
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U))))))))));
    __Vtemp_he04d30b1__0[2U] = (((0x50U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 0x10U) | (((0x4fU 
                                                == 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 0xfU) 
                                              | (((0x4eU 
                                                   == 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 0xeU) 
                                                 | (((0x4dU 
                                                      == 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 0xdU) 
                                                    | (((0x4cU 
                                                         == 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 0xcU) 
                                                       | (((0x4bU 
                                                            == 
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 0xbU) 
                                                          | (((0x4aU 
                                                               == 
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 0xaU) 
                                                             | (((0x49U 
                                                                  == 
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                   >> 0x19U)) 
                                                                 << 9U) 
                                                                | __Vtemp_h168b2b15__0[2U]))))))));
    __Vtemp_h94eb4a82__0[2U] = (((0x58U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 0x18U) | (((0x57U 
                                                == 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 0x17U) 
                                              | (((0x56U 
                                                   == 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 0x16U) 
                                                 | (((0x55U 
                                                      == 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 0x15U) 
                                                    | (((0x54U 
                                                         == 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 0x14U) 
                                                       | (((0x53U 
                                                            == 
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 0x13U) 
                                                          | (((0x52U 
                                                               == 
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 0x12U) 
                                                             | (((0x51U 
                                                                  == 
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                   >> 0x19U)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_he04d30b1__0[2U]))))))));
    __Vtemp_he05e2a99__0[3U] = (((0x68U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 8U) | (((0x67U 
                                             == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                            << 7U) 
                                           | (((0x66U 
                                                == 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 6U) 
                                              | (((0x65U 
                                                   == 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 5U) 
                                                 | (((0x64U 
                                                      == 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 4U) 
                                                    | (((0x63U 
                                                         == 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 3U) 
                                                       | (((0x62U 
                                                            == 
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 2U) 
                                                          | (((0x61U 
                                                               == 
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 1U) 
                                                             | (0x60U 
                                                                == 
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U))))))))));
    __Vtemp_h4dc46540__0[3U] = (((0x70U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 0x10U) | (((0x6fU 
                                                == 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 0xfU) 
                                              | (((0x6eU 
                                                   == 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 0xeU) 
                                                 | (((0x6dU 
                                                      == 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 0xdU) 
                                                    | (((0x6cU 
                                                         == 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 0xcU) 
                                                       | (((0x6bU 
                                                            == 
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 0xbU) 
                                                          | (((0x6aU 
                                                               == 
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 0xaU) 
                                                             | (((0x69U 
                                                                  == 
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                   >> 0x19U)) 
                                                                 << 9U) 
                                                                | __Vtemp_he05e2a99__0[3U]))))))));
    __Vtemp_ha583f8f8__0[3U] = (((0x78U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 0x18U) | (((0x77U 
                                                == 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 0x17U) 
                                              | (((0x76U 
                                                   == 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 0x16U) 
                                                 | (((0x75U 
                                                      == 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 0x15U) 
                                                    | (((0x74U 
                                                         == 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 0x14U) 
                                                       | (((0x73U 
                                                            == 
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 0x13U) 
                                                          | (((0x72U 
                                                               == 
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 0x12U) 
                                                             | (((0x71U 
                                                                  == 
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                   >> 0x19U)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_h4dc46540__0[3U]))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_31_25_d[0U] 
        = __Vtemp_ha25871e6__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_31_25_d[1U] 
        = __Vtemp_ha25871e6__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_31_25_d[2U] 
        = (((0x5fU == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                       >> 0x19U)) << 0x1fU) | (((0x5eU 
                                                 == 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                  >> 0x19U)) 
                                                << 0x1eU) 
                                               | (((0x5dU 
                                                    == 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                     >> 0x19U)) 
                                                   << 0x1dU) 
                                                  | (((0x5cU 
                                                       == 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                        >> 0x19U)) 
                                                      << 0x1cU) 
                                                     | (((0x5bU 
                                                          == 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                           >> 0x19U)) 
                                                         << 0x1bU) 
                                                        | (((0x5aU 
                                                             == 
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0x19U)) 
                                                            << 0x1aU) 
                                                           | (((0x59U 
                                                                == 
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U)) 
                                                               << 0x19U) 
                                                              | __Vtemp_h94eb4a82__0[2U])))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_31_25_d[3U] 
        = (((0x7fU == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                       >> 0x19U)) << 0x1fU) | (((0x7eU 
                                                 == 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                  >> 0x19U)) 
                                                << 0x1eU) 
                                               | (((0x7dU 
                                                    == 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                     >> 0x19U)) 
                                                   << 0x1dU) 
                                                  | (((0x7cU 
                                                       == 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                        >> 0x19U)) 
                                                      << 0x1cU) 
                                                     | (((0x7bU 
                                                          == 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                           >> 0x19U)) 
                                                         << 0x1bU) 
                                                        | (((0x7aU 
                                                             == 
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0x19U)) 
                                                            << 0x1aU) 
                                                           | (((0x79U 
                                                                == 
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U)) 
                                                               << 0x19U) 
                                                              | __Vtemp_ha583f8f8__0[3U])))))));
    __Vtemp_h78cb4c09__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (0x3eU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0x3dU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0x3cU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0x3bU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x3aU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0x39U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0x38U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h78cb4c09__0[1U] = (IData)(((((QData)((IData)(
                                                          (0x3fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (0x3eU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0x3dU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0x3cU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0x3bU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0x3aU 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0x39U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0x38U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h83842279__0[2U] = (((0x48U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                 << 8U) | (((0x47U 
                                             == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                            << 7U) 
                                           | (((0x46U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 6U) 
                                              | (((0x45U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 5U) 
                                                 | (((0x44U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 4U) 
                                                    | (((0x43U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 3U) 
                                                       | (((0x42U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 2U) 
                                                          | (((0x41U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 1U) 
                                                             | (0x40U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r))))))))));
    __Vtemp_hdde52ef6__0[2U] = (((0x50U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                 << 0x10U) | (((0x4fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0xfU) 
                                              | (((0x4eU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0xeU) 
                                                 | (((0x4dU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 0xdU) 
                                                    | (((0x4cU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 0xcU) 
                                                       | (((0x4bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 0xbU) 
                                                          | (((0x4aU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 0xaU) 
                                                             | (((0x49U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                 << 9U) 
                                                                | __Vtemp_h83842279__0[2U]))))))));
    __Vtemp_hbbc957c2__0[2U] = (((0x58U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                 << 0x18U) | (((0x57U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0x17U) 
                                              | (((0x56U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0x16U) 
                                                 | (((0x55U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 0x15U) 
                                                    | (((0x54U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 0x14U) 
                                                       | (((0x53U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 0x13U) 
                                                          | (((0x52U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 0x12U) 
                                                             | (((0x51U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_hdde52ef6__0[2U]))))))));
    __Vtemp_hc2cc3205__0[3U] = (((0x68U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                 << 8U) | (((0x67U 
                                             == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                            << 7U) 
                                           | (((0x66U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 6U) 
                                              | (((0x65U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 5U) 
                                                 | (((0x64U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 4U) 
                                                    | (((0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 3U) 
                                                       | (((0x62U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 2U) 
                                                          | (((0x61U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 1U) 
                                                             | (0x60U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r))))))))));
    __Vtemp_hfd91e29f__0[3U] = (((0x70U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                 << 0x10U) | (((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0xfU) 
                                              | (((0x6eU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0xeU) 
                                                 | (((0x6dU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 0xdU) 
                                                    | (((0x6cU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 0xcU) 
                                                       | (((0x6bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 0xbU) 
                                                          | (((0x6aU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 0xaU) 
                                                             | (((0x69U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                 << 9U) 
                                                                | __Vtemp_hc2cc3205__0[3U]))))))));
    __Vtemp_h55449d4c__0[3U] = (((0x78U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                 << 0x18U) | (((0x77U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0x17U) 
                                              | (((0x76U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0x16U) 
                                                 | (((0x75U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 0x15U) 
                                                    | (((0x74U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 0x14U) 
                                                       | (((0x73U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 0x13U) 
                                                          | (((0x72U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 0x12U) 
                                                             | (((0x71U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_hfd91e29f__0[3U]))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_06_00_d[0U] 
        = __Vtemp_h78cb4c09__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_06_00_d[1U] 
        = __Vtemp_h78cb4c09__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_06_00_d[2U] 
        = (((0x5fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
            << 0x1fU) | (((0x5eU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                          << 0x1eU) | (((0x5dU == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                        << 0x1dU) | 
                                       (((0x5cU == 
                                          (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                         << 0x1cU) 
                                        | (((0x5bU 
                                             == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                            << 0x1bU) 
                                           | (((0x5aU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0x1aU) 
                                              | (((0x59U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0x19U) 
                                                 | __Vtemp_hbbc957c2__0[2U])))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_06_00_d[3U] 
        = (((0x7fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
            << 0x1fU) | (((0x7eU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                          << 0x1eU) | (((0x7dU == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                        << 0x1dU) | 
                                       (((0x7cU == 
                                          (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                         << 0x1cU) 
                                        | (((0x7bU 
                                             == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                            << 0x1bU) 
                                           | (((0x7aU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0x1aU) 
                                              | (((0x79U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0x19U) 
                                                 | __Vtemp_h55449d4c__0[3U])))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rs2_d 
        = (((0x1fU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                >> 0x14U))) << 0x1fU) 
           | (((0x1eU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                   >> 0x14U))) << 0x1eU) 
              | (((0x1dU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                      >> 0x14U))) << 0x1dU) 
                 | (((0x1cU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                         >> 0x14U))) 
                     << 0x1cU) | (((0x1bU == (0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x14U))) 
                                   << 0x1bU) | (((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                      >> 0x14U))) 
                                                 << 0x1aU) 
                                                | (((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                         >> 0x14U))) 
                                                    << 0x19U) 
                                                   | (((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                            >> 0x14U))) 
                                                       << 0x18U) 
                                                      | (((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                               >> 0x14U))) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                  >> 0x14U))) 
                                                             << 0x16U) 
                                                            | (((0x15U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                     >> 0x14U))) 
                                                                << 0x15U) 
                                                               | (((0x14U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                        >> 0x14U))) 
                                                                   << 0x14U) 
                                                                  | (((0x13U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                           >> 0x14U))) 
                                                                      << 0x13U) 
                                                                     | (((0x12U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                              >> 0x14U))) 
                                                                         << 0x12U) 
                                                                        | (((0x11U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                            << 0x11U) 
                                                                           | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                               << 0x10U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))))))))))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_31_26_d 
        = (((QData)((IData)((0x3fU == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                       >> 0x1aU)))) 
            << 0x3fU) | (((QData)((IData)((0x3eU == 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x1aU)))) 
                          << 0x3eU) | (((QData)((IData)(
                                                        (0x3dU 
                                                         == 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x1aU)))) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         (0x3cU 
                                                          == 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                           >> 0x1aU)))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (0x3bU 
                                                             == 
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0x1aU)))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (0x3aU 
                                                                == 
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x1aU)))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (0x39U 
                                                                   == 
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                    >> 0x1aU)))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (0x38U 
                                                                      == 
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                       >> 0x1aU)))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (0x37U 
                                                                         == 
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                          >> 0x1aU)))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (0x36U 
                                                                            == 
                                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                             >> 0x1aU)))) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (0x35U 
                                                                               == 
                                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rd_d 
        = (((0x1fU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                >> 7U))) << 0x1fU) 
           | (((0x1eU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                   >> 7U))) << 0x1eU) 
              | (((0x1dU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                      >> 7U))) << 0x1dU) 
                 | (((0x1cU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                         >> 7U))) << 0x1cU) 
                    | (((0x1bU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 7U))) 
                        << 0x1bU) | (((0x1aU == (0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 7U))) 
                                      << 0x1aU) | (
                                                   ((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                         >> 7U))) 
                                                    << 0x19U) 
                                                   | (((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                            >> 7U))) 
                                                       << 0x18U) 
                                                      | (((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                               >> 7U))) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                  >> 7U))) 
                                                             << 0x16U) 
                                                            | (((0x15U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                     >> 7U))) 
                                                                << 0x15U) 
                                                               | (((0x14U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                        >> 7U))) 
                                                                   << 0x14U) 
                                                                  | (((0x13U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                           >> 7U))) 
                                                                      << 0x13U) 
                                                                     | (((0x12U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                              >> 7U))) 
                                                                         << 0x12U) 
                                                                        | (((0x11U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                            << 0x11U) 
                                                                           | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                               << 0x10U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))))))))))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rs1_d 
        = (((0x1fU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                >> 0xfU))) << 0x1fU) 
           | (((0x1eU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                   >> 0xfU))) << 0x1eU) 
              | (((0x1dU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                      >> 0xfU))) << 0x1dU) 
                 | (((0x1cU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                         >> 0xfU))) 
                     << 0x1cU) | (((0x1bU == (0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0xfU))) 
                                   << 0x1bU) | (((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                      >> 0xfU))) 
                                                 << 0x1aU) 
                                                | (((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                         >> 0xfU))) 
                                                    << 0x19U) 
                                                   | (((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                            >> 0xfU))) 
                                                       << 0x18U) 
                                                      | (((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                               >> 0xfU))) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                  >> 0xfU))) 
                                                             << 0x16U) 
                                                            | (((0x15U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                     >> 0xfU))) 
                                                                << 0x15U) 
                                                               | (((0x14U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                        >> 0xfU))) 
                                                                   << 0x14U) 
                                                                  | (((0x13U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                           >> 0xfU))) 
                                                                      << 0x13U) 
                                                                     | (((0x12U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                              >> 0xfU))) 
                                                                         << 0x12U) 
                                                                        | (((0x11U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                            << 0x11U) 
                                                                           | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                               << 0x10U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))))))))))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_offset 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__read_addr 
           - (IData)(0x2000000U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid));
    vlSelf->externalPins_gpio_seg_0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder
        [(0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg)];
    vlSelf->externalPins_gpio_seg_1 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg 
                  >> 4U))];
    vlSelf->externalPins_gpio_seg_2 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg 
                  >> 8U))];
    vlSelf->externalPins_gpio_seg_3 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg 
                  >> 0xcU))];
    vlSelf->externalPins_gpio_seg_4 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg 
                  >> 0x10U))];
    vlSelf->externalPins_gpio_seg_5 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg 
                  >> 0x14U))];
    vlSelf->externalPins_gpio_seg_6 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg 
                  >> 0x18U))];
    vlSelf->externalPins_gpio_seg_7 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder
        [(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg 
          >> 0x1cU)];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [4U] 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [5U] 
                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [6U] 
                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [7U] 
                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [8U] 
                                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [9U] 
                                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [0xaU] 
                                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [0xbU] 
                                                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xcU] 
                                                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xdU] 
                                                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->__VdfgTmp_ha17ae98a__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0 
        = ((0U != (0x1fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                    >> 0x12U)))) & 
           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_we) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ctrl_go_busy 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready = 0U;
    vlSelf->__Vtableidx2 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_hccb3c341_0
        [vlSelf->__Vtableidx2];
    vlSelf->__Vtableidx5 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_he38796ec_0
        [vlSelf->__Vtableidx5];
    vlSelf->__Vtableidx7 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [vlSelf->__Vtableidx7][0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [vlSelf->__Vtableidx7][1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [vlSelf->__Vtableidx7][2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((0x400U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_ready))))
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_valid) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready))))
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_valid) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready))))
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_valid) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready))))
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_valid)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 
        = ((0x80U & ((~ (IData)((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))))) 
                     << 7U)) | (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_l)
            ? ((0x1fU >= (0x18U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                            >> 0x20U)) 
                                   << 3U))) ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r) 
                                               >> (0x18U 
                                                   & ((IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                               >> 0x20U)) 
                                                      << 3U)))
                : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r));
    vlSelf->__Vtableidx1 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h05f4911a_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyxSoCFull__DOT___asic_spi_ss = (0xffU 
                                              & (~ 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                                                  & ((- (IData)(
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                    >> 0xdU)))) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                       >> 0xdU)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
           == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__L_bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__L_bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__L_bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__L_bank];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_U 
        = ((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
           | (0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wgpr_data 
        = (((- (IData)((0x305U == (0xfffU & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_eu_bus 
                                                     >> 0x1bU)))))) 
            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec) 
           | (((- (IData)((0x341U == (0xfffU & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_eu_bus 
                                                        >> 0x1bU)))))) 
               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc) 
              | (((- (IData)((0x300U == (0xfffU & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_eu_bus 
                                                           >> 0x1bU)))))) 
                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus) 
                 | (((- (IData)((0x342U == (0xfffU 
                                            & (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_eu_bus 
                                                       >> 0x1bU)))))) 
                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause) 
                    | (((- (IData)((0xf11U == (0xfffU 
                                               & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_eu_bus 
                                                          >> 0x1bU)))))) 
                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid) 
                       | ((- (IData)((0xf12U == (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_eu_bus 
                                                            >> 0x1bU)))))) 
                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[4U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[5U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[6U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[7U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[8U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[9U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[0xaU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[0xbU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[0xcU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[0xdU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[0xeU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[0xfU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout;
    vlSelf->__VdfgTmp_hf132a334__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__en0 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                      | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                          << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                     << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__en1 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                      | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                          << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                     << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__en0 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                      | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                          << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                     << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__en1 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                      | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                          << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                     << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                              << 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                              << 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                              << 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                              << 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0 
        = (IData)((0U == (0xfff00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
        = ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                          >> 9U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1 
        = (IData)((0ULL != (0x7800000ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap 
        = ((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
            << 0x18U) | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 0x18U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sh 
        = (IData)((0x1023U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sb 
        = (IData)((0x23U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrs_op 
        = (IData)((0x2073U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrw_op 
        = (IData)((0x1073U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
            | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) 
           & (0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2 
        = ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                          >> 8U))) ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x1bU))
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_and 
        = (IData)((0x7033U == (0xfe00707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_or 
        = (IData)((0x6033U == (0xfe00707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xor 
        = (IData)((0x4033U == (0xfe00707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sll 
        = (IData)((0x1033U == (0xfe00707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slt 
        = (IData)((0x2033U == (0xfe00707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltu 
        = (IData)((0x3033U == (0xfe00707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0 
        = (IData)((0x73U == (0xfffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_beq 
        = (IData)((0x63U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bne 
        = (IData)((0x1063U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bge 
        = (IData)((0x5063U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_blt 
        = (IData)((0x4063U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_andi 
        = (IData)((0x7013U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slli 
        = (IData)((0x1013U == (0xfc00707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_ori 
        = (IData)((0x6013U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xori 
        = (IData)((0x4013U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin 
        = (IData)((0ULL != (0x3800ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__half_sext 
        = (IData)((0x1003U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__bit_sext 
        = (IData)((3U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_jarl 
        = (IData)((0x67U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0 
        = (IData)((0x33U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h6b17a27c__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                        - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U)))) : ((0x200U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready 
                    = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready 
                    = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awburst;
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arlen;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arburst;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready 
                    = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready 
                    = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)));
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram)
                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst)));
    if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wdata;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awlen;
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                     ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 5U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen)));
    if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awid;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                    ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                               >> 0x2dU)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)));
    if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                  ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize)));
    if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awaddr;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0xdU)) : vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr);
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                               >> 1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                       >> 5U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata;
    }
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arburst;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arburst;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram)
                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst)));
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arlen;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arlen;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
                     ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 5U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)));
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arid;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arid;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
                    ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                               >> 0x2dU)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)));
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arsize;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
                  ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize)));
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0xdU)) : vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss 
        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss));
    vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                 >> 7U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr));
    vlSelf->externalPins_uart_tx = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                             >> 4U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__final_gpr_we 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__next_state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state) 
               & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid))))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__final_result 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
            ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wgpr_data
                     : ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                      >> 5U))) ? ((0x10U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))
                         : ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                          >> 5U))) ? 
                            ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                              ? (((- (IData)((1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result 
                                               >> 0xfU)))) 
                                  << 0x10U) | (0xffffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))
                              : (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))
                             : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h53724e58__0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs
        [(0x1fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                           >> 0xdU)))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
            ? vlSelf->__VdfgTmp_hf132a334__0 : 0U);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en0 = 
        ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__en0) 
         | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__en1) 
            << 0x10U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en1 = 
        ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__en0) 
         | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__en1) 
            << 0x10U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en)) 
              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out1) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                     << 1U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out2) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                    << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out3) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out4) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                      << 4U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out5) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                         << 5U)) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out6) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                            << 6U)) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out7) 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                               << 7U)) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out8) 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                                  << 8U)) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out9) 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                                     << 9U)) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out10) 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                                        << 0xaU)) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out11) 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                                           << 0xbU)) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out12) 
                                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                                              << 0xcU)) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out13) 
                                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                                                << 0xdU)) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out14) 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en) 
                                                                                << 0xeU)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out15) 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en)
                                                                                 ? 0x8000U
                                                                                 : 0U))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__out__strong__out3 
        = ((0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out0) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en)) 
               << 0x10U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out1) 
                              << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                           << 0x11U)) 
                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out2) 
                                 << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                              << 0x12U)) 
                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out3) 
                                    << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                 << 0x13U)) 
                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out4) 
                                       << 0x10U) & 
                                      ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                       << 0x14U)) | 
                                     ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out5) 
                                        << 0x10U) & 
                                       ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                        << 0x15U)) 
                                      | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out6) 
                                           << 0x10U) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                             << 0x16U)) 
                                         | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out7) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                << 0x17U)) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out8) 
                                                 << 0x10U) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                   << 0x18U)) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out9) 
                                                    << 0x10U) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                      << 0x19U)) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out10) 
                                                       << 0x10U) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                         << 0x1aU)) 
                                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out11) 
                                                          << 0x10U) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                            << 0x1bU)) 
                                                        | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out12) 
                                                             << 0x10U) 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                               << 0x1cU)) 
                                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out13) 
                                                                << 0x10U) 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                                  << 0x1dU)) 
                                                              | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out14) 
                                                                   << 0x10U) 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out15) 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en)
                                                                         ? 0x8000U
                                                                         : 0U)) 
                                                                    << 0x10U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en)) 
              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out1) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                     << 1U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out2) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                    << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out3) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out4) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                      << 4U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out5) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                         << 5U)) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out6) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                            << 6U)) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out7) 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                               << 7U)) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out8) 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                                  << 8U)) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out9) 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                                     << 9U)) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out10) 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                                        << 0xaU)) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out11) 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                                           << 0xbU)) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out12) 
                                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                                              << 0xcU)) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out13) 
                                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                                                << 0xdU)) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out14) 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en) 
                                                                                << 0xeU)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out15) 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en)
                                                                                 ? 0x8000U
                                                                                 : 0U))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__out__strong__out3 
        = ((0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out0) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en)) 
               << 0x10U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out1) 
                              << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                           << 0x11U)) 
                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out2) 
                                 << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                              << 0x12U)) 
                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out3) 
                                    << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                 << 0x13U)) 
                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out4) 
                                       << 0x10U) & 
                                      ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                       << 0x14U)) | 
                                     ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out5) 
                                        << 0x10U) & 
                                       ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                        << 0x15U)) 
                                      | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out6) 
                                           << 0x10U) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                             << 0x16U)) 
                                         | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out7) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                << 0x17U)) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out8) 
                                                 << 0x10U) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                   << 0x18U)) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out9) 
                                                    << 0x10U) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                      << 0x19U)) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out10) 
                                                       << 0x10U) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                         << 0x1aU)) 
                                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out11) 
                                                          << 0x10U) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                            << 0x1bU)) 
                                                        | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out12) 
                                                             << 0x10U) 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                               << 0x1cU)) 
                                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out13) 
                                                                << 0x10U) 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                                  << 0x1dU)) 
                                                              | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out14) 
                                                                   << 0x10U) 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out15) 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en)
                                                                         ? 0x8000U
                                                                         : 0U)) 
                                                                    << 0x10U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)
            ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U])
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]);
    vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_hae064a90__0 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
            ? vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap
            : vlSelf->ysyxSoCFull__DOT__psram__DOT__data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__wlsu_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sw) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sh) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sb)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csr_w_gpr_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrw_op) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrs_op));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ebreak 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
           & (IData)((0x100000U == (0xfff00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ecall_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__mret_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
           & (IData)((0x30200000U == (0xfff00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bne) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_beq) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bge) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bgeu) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_blt) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bltu))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)
            ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rlsu_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lw) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lbu) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__half_sext) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lhu) 
                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__bit_sext)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_add 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0) 
           & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                     >> 0x19U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sub 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0) 
           & (0x20U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                        >> 0x19U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sra 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h6b17a27c__0) 
           & (0x10U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                        >> 0x1aU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srl 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h6b17a27c__0) 
           & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                     >> 0x1aU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srai 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0) 
           & (0x10U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                        >> 0x1aU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srli 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0) 
           & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                     >> 0x1aU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wcsr_data 
        = (((- (IData)((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_eu_bus)))) 
            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h53724e58__0) 
           | ((- (IData)((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_eu_bus 
                                        >> 1U))))) 
              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h53724e58__0 
                 | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wgpr_data)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
               ? 0U : 0xffffffffU) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                         ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q) 
                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                           ? 0U : 0xffffffffU)) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                          ? 0U : 0xffffffffU))) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                ? 0U : 0xffffffffU)) | (((vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en0 
                                          & ((vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__out__strong__out2 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__en0)) 
                                             | (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__out__strong__out3 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__en1) 
                                                   << 0x10U)))) 
                                         | (vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en1 
                                            & ((vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__out__strong__out2 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__en0)) 
                                               | (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__out__strong__out3 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__en1) 
                                                     << 0x10U))))) 
                                        & (vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en0 
                                           | vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U])) 
                                  + ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d)) 
                                     + (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)))) 
                                 >> 0x20U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0 
        = (1U & (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U] 
                      >> 0x1fU)) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                                    >> 0x1fU)) | ((~ 
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                                                     ^ 
                                                     vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]) 
                                                    >> 0x1fU)) 
                                                  & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                                                      + 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
                                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1))) 
                                                     >> 0x1fU))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out0 
        = ((0xeU & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
              & (vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_hae064a90__0 
                 >> 0x1cU)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out1 
        = ((0xdU & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out1)) 
           | (0xeU & (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                       << 1U) & (vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_hae064a90__0 
                                 >> 0x1cU))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out2 
        = ((0xbU & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out2)) 
           | (0xcU & (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                       << 2U) & (vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_hae064a90__0 
                                 >> 0x1cU))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out3 
        = ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out3)) 
           | (8U & (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                     << 3U) & (vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_hae064a90__0 
                               >> 0x1cU))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0 
        = (1U & (((0x8000U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                              << 0xfU)) | ((0x4000U 
                                            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                                               << 0xeU)) 
                                           | ((0x2000U 
                                               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                                  << 0xdU)) 
                                              | ((0x1000U 
                                                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                                                           << 0xaU)) 
                                                       | ((0x200U 
                                                           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                                              << 9U)) 
                                                          | ((0x100U 
                                                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                                                                 << 8U)) 
                                                             | ((0x80U 
                                                                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))))))))))))))) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ecall_en) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__mret_en));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__src1_is_pc 
        = ((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
           | ((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
           + (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b 
              + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_R 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_add) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_and) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sub) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_or) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xor) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sra) 
                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srl) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slt) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltu) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sll))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0 
        = (1U & (((0x8000U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                              << 0xfU)) | ((0x4000U 
                                            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                                               << 0xeU)) 
                                           | ((0x2000U 
                                               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                                                  << 0xdU)) 
                                              | ((0x1000U 
                                                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                                                           << 0xaU)) 
                                                       | ((0x200U 
                                                           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                                                              << 9U)) 
                                                          | ((0x100U 
                                                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                                                                 << 8U)) 
                                                             | ((0x80U 
                                                                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))))))))))))))))) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__alu_op 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bltu) 
            << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_blt) 
                          << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bgeu) 
                                       << 0xeU) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bge) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_beq) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bne) 
                                                          << 0xbU) 
                                                         | (((0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                             << 0xaU) 
                                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srai) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sra)) 
                                                                << 9U) 
                                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srli) 
                                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srl)) 
                                                                   << 8U) 
                                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slli) 
                                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sll)) 
                                                                      << 7U) 
                                                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xor) 
                                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xori)) 
                                                                         << 6U) 
                                                                        | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_or) 
                                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_ori)) 
                                                                            << 5U) 
                                                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_and) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_andi)) 
                                                                               << 4U) 
                                                                              | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltu) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltiu)) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slt) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sub) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_add) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_addi) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                | ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sb) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lw) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lbu) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__half_sext) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lhu) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sw) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sh) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__bit_sext)))))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_I 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_addi) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_jarl) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lw) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltiu) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srai) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lbu) 
                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__half_sext) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lhu) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_andi) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xori) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srli) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slli) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__bit_sext) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_ori) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csr_w_gpr_we)))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state) 
                       << 1U) | (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
            << 2U) | (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__mstatus_data 
        = ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                          >> 1U))) ? 0x1800U : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus))
                                                 ? 
                                                (0xffffe7ffU 
                                                 & (0x80U 
                                                    | ((0xfffffff7U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus) 
                                                       | (8U 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus 
                                                             >> 4U)))))
                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wcsr_data));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csr_w_gpr_we) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_pc_jump 
        = ((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_jarl) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_result1 
        = (((- (IData)((IData)((0ULL != (0xc40ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r))))) 
            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result) 
           | ((1U & ((- (IData)((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                               >> 0xcU))))) 
                     & (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2 
                             >> 0x1fU)) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                                           >> 0x1fU)) 
                        | ((~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                                ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2) 
                               >> 0x1fU)) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
                                             >> 0x1fU))))) 
              | ((1U & ((- (IData)((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                  >> 0xdU))))) 
                        & (~ (IData)((1ULL & (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1)) 
                                               + ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                  + (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                              >> 0x20U)))))) 
                 | (((- (IData)((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                               >> 0xeU))))) 
                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2)) 
                    | (((- (IData)((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                  >> 0xfU))))) 
                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                           | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2)) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                     >> 0x10U))))) 
                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2)) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                        >> 0x14U))))) 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                           >> 0x11U))))) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                                    << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2))) 
                                | ((- (IData)((IData)(
                                                      (0ULL 
                                                       != 
                                                       (0xc0000ULL 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r))))) 
                                   & (IData)(((((QData)((IData)(
                                                                (- (IData)((IData)(
                                                                                ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x13U) 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1))) 
                                              >> (0x1fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
        = (~ (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                           | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__gpr_we_r 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_R) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_addi) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_jarl) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltiu) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srai) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_andi) 
                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xori) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srli) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slli) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_ori) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrw_op) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrs_op) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               | ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  | ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rlsu_we))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm 
        = (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_I))) 
            & (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                            >> 0x1fU))) << 0xcU) | 
               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                >> 0x14U))) | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__wlsu_we))) 
                                & (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                      >> 7U))))) 
                               | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal))) 
                                   & (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0x800U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                            >> 7U)))))) 
                                  | ((0xfffff000U & 
                                      ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_U))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                     | ((- (IData)(
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                        & (((- (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                        >> 0x1fU))) 
                                            << 0x14U) 
                                           | ((0xff000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x14U))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__src2_is_imm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_I) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sw) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sh) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sb) 
                    | ((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                       | ((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                          | ((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_jarl)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_not_realize 
        = (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_I) 
                       | ((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ebreak) 
                              | (IData)(((0U == (0xfffffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_R) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__wlsu_we) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_U) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_W) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
        = (~ (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                           | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__result 
        = ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                          >> 7U))) ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_result1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__dnpc_r 
        = ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                          >> 3U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U]
            : ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                              >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U]
                : ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                  >> 7U))) ? ((1U == 
                                               ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                            >> 6U)))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                         >> 0x16U))))) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)) 
                                                 | (((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                            >> 0x19U))))) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)) 
                                                    | ((1U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x1aU))))) 
                                                           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))) 
                                                       | ((1U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x17U))))) 
                                                              & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))) 
                                                          | (((- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x18U))))) 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)) 
                                                             | (1U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x15U))))) 
                                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))))))))
                                                 : 1U))
                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_result1
                                               : ((IData)(4U) 
                                                  + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc))
                    : ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                          >> 0x1cU)) | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                               >> 0x1bU)) 
                                        | ((2U & ((~ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                    >> 0x1cU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                               >> 0x18U)))))) 
           | ((0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                             >> 0x1cU)) | ((6U & (4U 
                                                  ^ 
                                                  (0x1eU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                      >> 0x1bU)))) 
                                           | (1U & 
                                              (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                  >> 0x18U)))))) 
              | ((0U == ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                >> 0x1dU)) | (3U & 
                                              (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                  >> 0x1cU))))) 
                 | ((0U == ((8U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                       >> 0x1fU)) << 3U)) 
                            | ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                      >> 0x1bU)) | 
                               (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                      >> 0x18U))))) 
                    | (0U == ((4U & (4U ^ (4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                 >> 0x1dU)))) 
                              | (3U & (2U ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                             >> 0x1cU)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                         >> 0x1cU)) | ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                              >> 0x1bU)) 
                                       | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                   >> 0x18U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                            >> 0x1bU)) | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                   >> 0xcU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                          >> 0x1cU)) | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                        | ((2U & ((~ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0x1cU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x18U)))))) 
           | ((0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                             >> 0x1cU)) | ((6U & (4U 
                                                  ^ 
                                                  (0x1eU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1bU)))) 
                                           | (1U & 
                                              (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x18U)))))) 
              | ((0U == ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                >> 0x1dU)) | (3U & 
                                              (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1cU))))) 
                 | ((0U == ((8U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                       >> 0x1fU)) << 3U)) 
                            | ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                      >> 0x1bU)) | 
                               (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                      >> 0x18U))))) 
                    | (0U == ((4U & (4U ^ (4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1dU)))) 
                              | (3U & (2U ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 0x1cU)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 0x1cU)) | ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                       | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x18U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)
            : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 
        = (((0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                                 << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 
        = (((0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                     << 2U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                                << 1U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                            << 1U) 
                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                       >> 4U));
        vlSelf->__VdfgTmp_h7fb30c92__0 = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r;
        vlSelf->__VdfgTmp_h7fb30c92__0 = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) 
              | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 0x1bU)) 
                               | ((0xcU & (8U ^ (0x3cU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0x1aU)))) 
                                  | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 0x17U)) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0xcU)))))) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready))))
            : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
               != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_valid) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready))))
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready 
        = (((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                      << 2U)) | ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1)) 
                                 | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                          | ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1)) 
                                             | (3U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask) 
              << 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1 
        = (((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                      << 2U)) | ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2)) 
                                 | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                          | ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                                             | (3U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1) 
              << 3U));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h7fb30c92__0) 
                     >> 2U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h7fb30c92__0) 
                     >> 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb 
            = vlSelf->__VdfgTmp_h7fb30c92__0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
                ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                           >> 0xbU)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)
                ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                           >> 0xbU)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)
            : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2))));
    if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid)
                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(
                                                                                (0x3fffffffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr), vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__3__rdata);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
            = vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__3__rdata;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0)
                     ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                        >> 8U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                  >> 0x18U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
            ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                     ? 1U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                              ? 1U : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                     ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                            >> 0x18U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))
                     : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                            >> 8U) : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelf->ysyxSoCFull__DOT___asic_sdram_a = ((0x2000U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0xdU)) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_2 
        = ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                  >> 0x18U)) | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = (0xffU & ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                     ? ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                         ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))
                             : 0U)) : ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                                        ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                                            ? ((0x80U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = (0U == ((0x20U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                            >> 0x1aU)) | ((0x10U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 0x19U)) 
                                          | ((8U & 
                                              (8U ^ 
                                               (0x78U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x19U)))) 
                                             | ((4U 
                                                 & (0x4004U 
                                                    ^ 
                                                    (0x3fffcU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                        >> 0xeU)))) 
                                                | (3U 
                                                   & (1U 
                                                      ^ 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                       >> 0xcU))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5 
        = (0U == ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                         >> 0x1dU)) | (3U & (2U ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = (0U == ((0x20U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                            >> 0x1aU)) | ((0x10U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 0x19U)) 
                                          | ((8U & 
                                              (8U ^ 
                                               (0x78U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x19U)))) 
                                             | ((4U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                    >> 0xeU)) 
                                                | (3U 
                                                   & (2U 
                                                      ^ 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                       >> 0xcU))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6 
        = (0U == ((4U & (4U ^ (4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0x1dU)))) | 
                  (3U & (2U ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                               >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = (0U == ((0x20U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                            >> 0x1aU)) | ((0x10U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 0x19U)) 
                                          | ((8U & 
                                              ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x1cU)) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                    >> 0xeU)) 
                                                | (3U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                      >> 0xcU)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2 
        = (0U == ((4U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0x1fU)) << 2U)) | (3U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                      >> 0x1cU))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == ((0x20U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0x1aU)) | ((0x10U & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                             >> 0x19U)) 
                                           | ((8U & 
                                               (8U 
                                                ^ (0x78U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                      >> 0x19U)))) 
                                              | ((4U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                     >> 0xeU)) 
                                                 | (3U 
                                                    & (1U 
                                                       ^ 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                        >> 0xcU)))))))) 
           | (0U == ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                            >> 0x1dU)) | (3U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x1cU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
            >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
                     & (IData)(vlSelf->__VdfgTmp_h7fb30c92__0))
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w
                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0) 
                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                            >> 8U) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0) 
                                       & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                       ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                          >> 0x10U)
                                       : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
                                           & (((IData)(vlSelf->__VdfgTmp_h7fb30c92__0) 
                                               >> 3U) 
                                              & (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size))))
                                           ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                              >> 0x18U)
                                           : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0) 
                                               & (2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                               ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                  >> 0x10U)
                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0xffU & ((IData)(0xdU) 
                                       + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                          << 1U)))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__cmd 
        = ((4U & ((((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                    | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                       >> 2U) : (((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                   ? 7U : (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                 >> 2U)) << 2U)) | 
           ((2U & ((((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                        >> 1U) : (((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                    ? 7U : (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                  >> 1U)) << 1U)) | 
            (1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                    | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                    : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                        ? 7U : (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__cmd 
        = ((4U & ((((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                    | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                       >> 2U) : (((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                   ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                   : 7U) >> 2U)) << 2U)) 
           | ((2U & ((((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                       | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                          >> 1U) : (((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                      ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                      : 7U) >> 1U)) 
                     << 1U)) | (1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                       | (7U == (7U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                       : ((0x2000U 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                           ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                           : 7U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pslverr_reg)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____VdfgTmp_hfb738304__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))) 
           | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = (0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                    ? (1U & (0x38U >> (7U & ((IData)(7U) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)))))
                    : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                           >> 0x14U) : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                            >> 0x10U)
                                         : ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                >> 0xcU)
                                             : ((0xbU 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 8U)
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 4U)
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                    >> 4U)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                      >> 4U)
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                       : 
                                                      ((0x12U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                        >> 0x14U)
                                                        : 
                                                       ((0x13U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                         >> 0x10U)
                                                         : 
                                                        ((0x14U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                          >> 0x1cU)
                                                          : 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                          >> 0x18U))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
               << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____VdfgTmp_hfb738304__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____VdfgTmp_hfb738304__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel 
        = (IData)(((0x30000000U == (0x30000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel 
        = (IData)(((0x10001000U == (0x3ffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)) 
           | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                   ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                              >> 1U)) : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                        >> 3U)) : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                           : 0U) | 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                  ? 
                                                 (vlSelf->__VdfgTmp_hf132a334__0 
                                                  >> 0x18U)
                                                  : 0U)
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                               << 0x18U) 
                                              | ((0xff0000U 
                                                  & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? 
                                                       (vlSelf->__VdfgTmp_hf132a334__0 
                                                        >> 0x10U)
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                           ? 
                                                          (vlSelf->__VdfgTmp_hf132a334__0 
                                                           >> 8U)
                                                           : 0U)
                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? vlSelf->__VdfgTmp_hf132a334__0
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                           : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                     ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                >> 0x23U)) : 0U) | 
                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r)
                      : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id)
                                : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data)
                   : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                 ? 0U : 3U) : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                        >> 2U) : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id)
                                         : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelf->ysyxSoCFull__DOT___asic_psram_sck = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
    } else {
        vlSelf->ysyxSoCFull__DOT___asic_psram_sck = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                        ? (1U & (0xebU >> (7U & ((IData)(7U) 
                                                 - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                               >> 0x14U) : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                >> 0x10U)
                                             : ((0xaU 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0xcU)
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 8U)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                    : 0U))))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
                = (1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                            | ((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
            = (0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwrite;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_paddr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite))
                ? 0xfU : 0U);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata
                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata
                     : 0U)) : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                           ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                               << 0x18U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                           : 0U) : 0U) 
                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                          ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                              [3U] 
                                              << 0x18U) 
                                             | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [0U])))
                                          : 0U) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__prdata_reg
                                                     : 0U) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                        : 0U) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                           : 0U) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q
                                                             : 0U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready 
        = (1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready)
                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pready)))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                    | (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                       | (((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                 : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)) 
                          | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pready_reg)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                             | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)) 
                                   | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
              << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                           << 0xeU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                        << 0xdU) | 
                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                          << 0xbU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                             << 0xaU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                << 9U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                      << 7U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                            << 5U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                               << 4U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                     << 2U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
            >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last 
        = (1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                   << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                << 0xeU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                             << 0xdU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last) 
                                                << 0xcU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last)))))))))))))))) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
                = (0x1cU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 
        = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                         >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
            : ((1U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                             >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                : ((2U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                                 >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                    : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                                     >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                        : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                                         >> 2U))) ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                                             >> 2U)))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr 
                                                 >> 2U)))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) 
           | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q;
    if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 1U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i)))) {
                    if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_2)) 
                         & ((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                        >> 0xcU)) == 
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                            [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_2]))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 6U;
                    }
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 2U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read))) {
                if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_2)) 
                     & ((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0xcU)) == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_2]))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0xfU & 2U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0xfU & 0U);
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r = 9U;
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w) {
                if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_2)) 
                     & ((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0xcU)) == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_2]))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                                  >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_2)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 8U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read)
                            ? 4U : 6U);
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 3U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q) 
                       - (IData)(1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0xfU & 0U);
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din 
        = ((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
               | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out0) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0)) 
               | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out1) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                      << 1U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out2) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                                     << 2U)) | (8U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out3) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0)
                                                       ? 0xfU
                                                       : 0U)))))) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                 | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                     << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0) 
                                << 2U) | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0)
                                           ? 8U : 0U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
              & (0xcU == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
             << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                         & (8U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
                        << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                    & (4U == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
                                   << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (0U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))))) 
           & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid = 0U;
    if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast;
            }
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp 
                    = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                             | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                  << 0x1eU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                << 0x1cU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                   << 0x1aU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                         << 0x16U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                            << 0x14U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                               << 0x12U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                     << 0xeU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                        << 0xcU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                           << 0xaU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                              << 8U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__next_master 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))
            ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid))
                ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid)
                         ? 1U : 0U)) : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready))
                                             ? 0U : 1U)
                                         : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))
                                             ? (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready)) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready))) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready)))
                                                 ? 0U
                                                 : 2U)
                                             : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits)) 
                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                     >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (0xf000000U == (0xfffe000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid)));
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_stl(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VysyxSoCFull___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clock or posedge ysyxSoCFull.asic.__Vcellinp__cpu__reset)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clock or negedge ysyxSoCFull.asic.__Vcellinp__cpu__reset)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge clock or posedge reset)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge ysyxSoCFull.__Vcellinp__flash__ss or posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge ysyxSoCFull.__Vcellinp__bitrev__ss or negedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge ysyxSoCFull.__Vcellinp__bitrev__ss or posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge ysyxSoCFull._asic_psram_ce_n)\n");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge ysyxSoCFull._asic_psram_ce_n or posedge ysyxSoCFull._asic_psram_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge ysyxSoCFull._asic_psram_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(negedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__nba(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clock or posedge ysyxSoCFull.asic.__Vcellinp__cpu__reset)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clock or negedge ysyxSoCFull.asic.__Vcellinp__cpu__reset)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge clock or posedge reset)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge ysyxSoCFull.__Vcellinp__flash__ss or posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge ysyxSoCFull.__Vcellinp__bitrev__ss or negedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge ysyxSoCFull.__Vcellinp__bitrev__ss or posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge ysyxSoCFull._asic_psram_ce_n)\n");
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge ysyxSoCFull._asic_psram_ce_n or posedge ysyxSoCFull._asic_psram_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge ysyxSoCFull._asic_psram_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(negedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root___ctor_var_reset(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->externalPins_gpio_out = VL_RAND_RESET_I(16);
    vlSelf->externalPins_gpio_in = VL_RAND_RESET_I(16);
    vlSelf->externalPins_gpio_seg_0 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_1 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_2 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_3 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_4 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_5 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_6 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_7 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->externalPins_ps2_data = VL_RAND_RESET_I(1);
    vlSelf->externalPins_vga_r = VL_RAND_RESET_I(8);
    vlSelf->externalPins_vga_g = VL_RAND_RESET_I(8);
    vlSelf->externalPins_vga_b = VL_RAND_RESET_I(8);
    vlSelf->externalPins_vga_hsync = VL_RAND_RESET_I(1);
    vlSelf->externalPins_vga_vsync = VL_RAND_RESET_I(1);
    vlSelf->externalPins_vga_valid = VL_RAND_RESET_I(1);
    vlSelf->externalPins_uart_rx = VL_RAND_RESET_I(1);
    vlSelf->externalPins_uart_tx = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___asic_spi_sck = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___asic_spi_ss = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT___asic_spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___asic_psram_sck = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___asic_sdram_a = VL_RAND_RESET_I(14);
    vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready = VL_RAND_RESET_I(6);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1 = VL_RAND_RESET_I(6);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus = VL_RAND_RESET_Q(64);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wu_to_gu_bus = VL_RAND_RESET_Q(33);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus = VL_RAND_RESET_Q(55);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_eu_bus = VL_RAND_RESET_Q(59);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_lu_bus = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_wu_bus = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lu_to_wu_bus = VL_RAND_RESET_Q(64);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awlen = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awburst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_access_fault = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_access_fault = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wgpr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wcsr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_s = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_l = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_we = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h53724e58__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__next_state = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__wu_to_gu_bus_r = VL_RAND_RESET_Q(33);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__mstatus_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__last_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__alu_op = VL_RAND_RESET_I(17);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__gpr_we_r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rlsu_we = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__wlsu_we = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__bit_sext = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__half_sext = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__src1_is_pc = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__src2_is_imm = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_pc_jump = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ebreak = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_not_realize = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csr_w_gpr_we = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrw_op = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrs_op = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ecall_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__mret_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_31_25_d);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_31_26_d = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__opcode_06_00_d);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rs1_d = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rs2_d = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rd_d = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rw_word_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rw_word_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rw_word_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_ori = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_xori = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_andi = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_jarl = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_slli = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sltiu = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_srli = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sb = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sh = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sw = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_beq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bne = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bge = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bgeu = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_blt = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_bltu = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_R = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_I = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_U = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_W = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h6b17a27c__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__eu_to_lu_bus_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__next_master = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimeh = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_offset = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__write_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__write_strb = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_write_req = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r = VL_RAND_RESET_Q(59);
    VL_RAND_RESET_W(128, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__dnpc_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_result1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__aupic_result = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__final_gpr_we = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__final_result = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = VL_RAND_RESET_I(10);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = VL_RAND_RESET_I(11);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_decoder[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_in_reg = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__prdata_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pready_reg = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pslverr_reg = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_paddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwrite = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ctrl_go_busy = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_state = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = VL_RAND_RESET_I(14);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = VL_RAND_RESET_I(24);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(11);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____VdfgTmp_hfb738304__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = VL_RAND_RESET_I(13);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_2 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = VL_RAND_RESET_I(17);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data = VL_RAND_RESET_Q(47);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(47);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data = VL_RAND_RESET_Q(36);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data = VL_RAND_RESET_I(6);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data = VL_RAND_RESET_Q(47);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(47);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data = VL_RAND_RESET_Q(39);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 = VL_RAND_RESET_I(23);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 = VL_RAND_RESET_I(23);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram = VL_RAND_RESET_Q(49);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram = VL_RAND_RESET_Q(49);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram = VL_RAND_RESET_Q(37);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__addr = VL_RAND_RESET_I(24);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_reg = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_cnt = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__addr = VL_RAND_RESET_I(24);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out0 = 0;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out1 = 0;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out2 = 0;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__dio__out__strong__out3 = 0;
    vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0 = 0;
    vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_hae064a90__0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en1 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__en0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__en1 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__out__strong__out2 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__out__strong__out3 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4194304; ++__Vi1) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__CAS_Latency = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Brust_Length = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__L_bank = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dqm_bufL = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dqm_bufH = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_data = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_sdram_addr = VL_RAND_RESET_I(22);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_sdram_addr = VL_RAND_RESET_I(22);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__length = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out1 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out2 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out3 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out4 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out5 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out6 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out7 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out8 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out9 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out10 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out11 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out12 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out13 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out14 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dq__out__strong__out15 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4194304; ++__Vi1) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__CAS_Latency = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Brust_Length = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__cmd = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__L_bank = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dqm_bufL = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dqm_bufH = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_data = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_sdram_addr = VL_RAND_RESET_I(22);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_sdram_addr = VL_RAND_RESET_I(22);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__length = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out1 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out2 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out3 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out4 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out5 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out6 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out7 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out8 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out9 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out10 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out11 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out12 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out13 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out14 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dq__out__strong__out15 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__en0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__en1 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__out__strong__out2 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__out__strong__out3 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4194304; ++__Vi1) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__CAS_Latency = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Brust_Length = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__L_bank = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dqm_bufL = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dqm_bufH = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_data = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_sdram_addr = VL_RAND_RESET_I(22);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_sdram_addr = VL_RAND_RESET_I(22);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__length = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out1 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out2 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out3 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out4 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out5 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out6 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out7 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out8 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out9 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out10 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out11 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out12 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out13 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out14 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dq__out__strong__out15 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4194304; ++__Vi1) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__CAS_Latency = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Brust_Length = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__cmd = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__L_bank = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dqm_bufL = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dqm_bufH = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_data = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_sdram_addr = VL_RAND_RESET_I(22);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_sdram_addr = VL_RAND_RESET_I(22);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__length = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out1 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out2 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out3 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out4 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out5 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out6 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out7 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out8 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out9 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out10 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out11 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out12 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out13 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out14 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dq__out__strong__out15 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0 = 0;
    vlSelf->__VdfgTmp_hf132a334__0 = 0;
    vlSelf->__VdfgTmp_h7fb30c92__0 = 0;
    vlSelf->__VdfgTmp_ha17ae98a__0 = 0;
    vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__3__rdata = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx5 = 0;
    vlSelf->__Vtableidx7 = 0;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = VL_RAND_RESET_I(17);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr = VL_RAND_RESET_I(24);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_cnt = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr = VL_RAND_RESET_I(24);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT____Vcellinp__flash__ss = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT___asic_spi_sck = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT____Vcellinp__bitrev__ss = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT___asic_psram_ce_n = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT___asic_psram_sck = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
