// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtools.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtools___024root.h"

VL_ATTR_COLD void Vtools___024root___eval_static(Vtools___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtools___024root___eval_initial(Vtools___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtools___024root___eval_final(Vtools___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtools___024root___eval_triggers__stl(Vtools___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtools___024root___dump_triggers__stl(Vtools___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtools___024root___eval_stl(Vtools___024root* vlSelf);

VL_ATTR_COLD void Vtools___024root___eval_settle(Vtools___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtools___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtools___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/tools.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtools___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtools___024root___dump_triggers__stl(Vtools___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtools___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtools___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__exu_cpu__DOT__hit_TOP();

VL_ATTR_COLD void Vtools___024root___stl_sequent__TOP__0(Vtools___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb5d0e462__0;
    VlWide<3>/*95:0*/ __Vtemp_h4983b7fe__0;
    VlWide<3>/*95:0*/ __Vtemp_h9bc2f26e__0;
    VlWide<3>/*95:0*/ __Vtemp_h453ee2d3__0;
    VlWide<4>/*127:0*/ __Vtemp_h95111dfe__0;
    VlWide<4>/*127:0*/ __Vtemp_h4cf89196__0;
    VlWide<4>/*127:0*/ __Vtemp_h662a22d6__0;
    VlWide<3>/*95:0*/ __Vtemp_h78c56e42__0;
    VlWide<3>/*95:0*/ __Vtemp_hdc592d94__0;
    VlWide<3>/*95:0*/ __Vtemp_h6b512a7b__0;
    VlWide<3>/*95:0*/ __Vtemp_h344b8d06__0;
    VlWide<4>/*127:0*/ __Vtemp_h7e6d3a1a__0;
    VlWide<4>/*127:0*/ __Vtemp_h1e098ff1__0;
    VlWide<4>/*127:0*/ __Vtemp_h61105590__0;
    // Body
    vlSelf->decoder_2_4__02Eout = (((3U == (IData)(vlSelf->decoder_2_4__02Ein)) 
                                    << 3U) | (((2U 
                                                == (IData)(vlSelf->decoder_2_4__02Ein)) 
                                               << 2U) 
                                              | (((1U 
                                                   == (IData)(vlSelf->decoder_2_4__02Ein)) 
                                                  << 1U) 
                                                 | (0U 
                                                    == (IData)(vlSelf->decoder_2_4__02Ein)))));
    vlSelf->decoder_4_16__02Eout = (((0xfU == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                     << 0xfU) | (((0xeU 
                                                   == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                  << 0xeU) 
                                                 | (((0xdU 
                                                      == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                     << 0xdU) 
                                                    | (((0xcU 
                                                         == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                        << 0xcU) 
                                                       | (((0xbU 
                                                            == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                           << 0xbU) 
                                                          | (((0xaU 
                                                               == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                              << 0xaU) 
                                                             | (((9U 
                                                                  == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                                 << 9U) 
                                                                | (((8U 
                                                                     == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                                    << 8U) 
                                                                   | (((7U 
                                                                        == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                                       << 7U) 
                                                                      | (((6U 
                                                                           == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                                          << 6U) 
                                                                         | (((5U 
                                                                              == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                                             << 5U) 
                                                                            | (((4U 
                                                                                == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                                                << 4U) 
                                                                               | (((3U 
                                                                                == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == (IData)(vlSelf->decoder_4_16__02Ein)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == (IData)(vlSelf->decoder_4_16__02Ein)))))))))))))))));
    vlSelf->encoder_32_5__02Eout = (((- (IData)((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSelf->encoder_32_5__02Ein)))) 
                                     & ((3U & ((- (IData)(
                                                          (0U 
                                                           != 
                                                           (0xfU 
                                                            & vlSelf->encoder_32_5__02Ein)))) 
                                               & ((1U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelf->encoder_32_5__02Ein 
                                                                    >> 1U))))) 
                                                  | ((2U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->encoder_32_5__02Ein 
                                                                       >> 2U))))) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->encoder_32_5__02Ein 
                                                                      >> 3U)))))))) 
                                        | (((- (IData)(
                                                       (0U 
                                                        != 
                                                        (0xfU 
                                                         & (vlSelf->encoder_32_5__02Ein 
                                                            >> 4U))))) 
                                            & (4U | 
                                               (3U 
                                                & ((1U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->encoder_32_5__02Ein 
                                                                     >> 5U))))) 
                                                   | ((2U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->encoder_32_5__02Ein 
                                                                        >> 6U))))) 
                                                      | (- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->encoder_32_5__02Ein 
                                                                       >> 7U))))))))) 
                                           | (((- (IData)(
                                                          (0U 
                                                           != 
                                                           (0xfU 
                                                            & (vlSelf->encoder_32_5__02Ein 
                                                               >> 8U))))) 
                                               & (8U 
                                                  | (3U 
                                                     & ((1U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (vlSelf->encoder_32_5__02Ein 
                                                                          >> 9U))))) 
                                                        | ((2U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->encoder_32_5__02Ein 
                                                                             >> 0xaU))))) 
                                                           | (- (IData)(
                                                                        (1U 
                                                                         & (vlSelf->encoder_32_5__02Ein 
                                                                            >> 0xbU))))))))) 
                                              | ((- (IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (vlSelf->encoder_32_5__02Ein 
                                                                 >> 0xcU))))) 
                                                 & (0xcU 
                                                    | (3U 
                                                       & ((1U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (vlSelf->encoder_32_5__02Ein 
                                                                            >> 0xdU))))) 
                                                          | ((2U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->encoder_32_5__02Ein 
                                                                               >> 0xeU))))) 
                                                             | (- (IData)(
                                                                          (1U 
                                                                           & (vlSelf->encoder_32_5__02Ein 
                                                                              >> 0xfU))))))))))))) 
                                    | ((- (IData)((0U 
                                                   != 
                                                   (vlSelf->encoder_32_5__02Ein 
                                                    >> 0x10U)))) 
                                       & (0x10U | (
                                                   (3U 
                                                    & ((- (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xfU 
                                                                    & (vlSelf->encoder_32_5__02Ein 
                                                                       >> 0x10U))))) 
                                                       & ((1U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (vlSelf->encoder_32_5__02Ein 
                                                                            >> 0x11U))))) 
                                                          | ((2U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->encoder_32_5__02Ein 
                                                                               >> 0x12U))))) 
                                                             | (- (IData)(
                                                                          (1U 
                                                                           & (vlSelf->encoder_32_5__02Ein 
                                                                              >> 0x13U)))))))) 
                                                   | (((- (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xfU 
                                                                    & (vlSelf->encoder_32_5__02Ein 
                                                                       >> 0x14U))))) 
                                                       & (4U 
                                                          | (3U 
                                                             & ((1U 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (vlSelf->encoder_32_5__02Ein 
                                                                                >> 0x15U))))) 
                                                                | ((2U 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->encoder_32_5__02Ein 
                                                                                >> 0x16U))))) 
                                                                   | (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->encoder_32_5__02Ein 
                                                                                >> 0x17U))))))))) 
                                                      | (((- (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & (vlSelf->encoder_32_5__02Ein 
                                                                          >> 0x18U))))) 
                                                          & (8U 
                                                             | (3U 
                                                                & ((1U 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->encoder_32_5__02Ein 
                                                                                >> 0x19U))))) 
                                                                   | ((2U 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->encoder_32_5__02Ein 
                                                                                >> 0x1aU))))) 
                                                                      | (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->encoder_32_5__02Ein 
                                                                                >> 0x1bU))))))))) 
                                                         | ((- (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->encoder_32_5__02Ein 
                                                                         >> 0x1cU)))) 
                                                            & (0xcU 
                                                               | (3U 
                                                                  & ((1U 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->encoder_32_5__02Ein 
                                                                                >> 0x1dU))))) 
                                                                     | ((2U 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->encoder_32_5__02Ein 
                                                                                >> 0x1eU))))) 
                                                                        | (- (IData)(
                                                                                (vlSelf->encoder_32_5__02Ein 
                                                                                >> 0x1fU))))))))))))));
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[1U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[2U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[3U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[4U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[5U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[6U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[7U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[8U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[9U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xaU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xbU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xcU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xdU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xeU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xfU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x10U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x11U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x12U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x13U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x14U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x15U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x16U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x17U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x18U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x19U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1aU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1bU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1cU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1dU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1eU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1fU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst__dout;
    Vtools___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP(vlSelf->pc, 4U, vlSelf->__Vfunc_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout);
    vlSelf->regs[0x1fU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x1fU];
    vlSelf->regs[0x1eU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x1eU];
    vlSelf->regs[0x1dU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x1dU];
    vlSelf->regs[0x1cU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x1cU];
    vlSelf->regs[0x1bU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x1bU];
    vlSelf->regs[0x1aU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x1aU];
    vlSelf->regs[0x19U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x19U];
    vlSelf->regs[0x18U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x18U];
    vlSelf->regs[0x17U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x17U];
    vlSelf->regs[0x16U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x16U];
    vlSelf->regs[0x15U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x15U];
    vlSelf->regs[0x14U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x14U];
    vlSelf->regs[0x13U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x13U];
    vlSelf->regs[0x12U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x12U];
    vlSelf->regs[0x11U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x11U];
    vlSelf->regs[0x10U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x10U];
    vlSelf->regs[0xfU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0xfU];
    vlSelf->regs[0xeU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0xeU];
    vlSelf->regs[0xdU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0xdU];
    vlSelf->regs[0xcU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0xcU];
    vlSelf->regs[0xbU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0xbU];
    vlSelf->regs[0xaU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0xaU];
    vlSelf->regs[9U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [9U];
    vlSelf->regs[8U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [8U];
    vlSelf->regs[7U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [7U];
    vlSelf->regs[6U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [6U];
    vlSelf->regs[5U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [5U];
    vlSelf->regs[4U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [4U];
    vlSelf->regs[3U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [3U];
    vlSelf->regs[2U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [2U];
    vlSelf->regs[1U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [1U];
    vlSelf->regs[0U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0U];
    vlSelf->inst = ((IData)(vlSelf->rst) ? 0U : vlSelf->__Vfunc_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout);
    if ((IData)((0x8073U == vlSelf->inst))) {
        Vtools___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__exu_cpu__DOT__hit_TOP();
    }
    __Vtemp_hb5d0e462__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (0x3eU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->inst)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0x3dU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->inst)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0x3cU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->inst)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0x3bU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->inst)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x3aU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->inst)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0x39U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->inst)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0x38U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_hb5d0e462__0[1U] = (IData)(((((QData)((IData)(
                                                          (0x3fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->inst)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (0x3eU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->inst)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0x3dU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->inst)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0x3cU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->inst)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0x3bU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->inst)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0x3aU 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->inst)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0x39U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->inst)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0x38U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h4983b7fe__0[2U] = (((0x48U == (0x7fU & vlSelf->inst)) 
                                 << 8U) | (((0x47U 
                                             == (0x7fU 
                                                 & vlSelf->inst)) 
                                            << 7U) 
                                           | (((0x46U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               << 6U) 
                                              | (((0x45U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst)) 
                                                  << 5U) 
                                                 | (((0x44U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst)) 
                                                     << 4U) 
                                                    | (((0x43U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst)) 
                                                        << 3U) 
                                                       | (((0x42U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst)) 
                                                           << 2U) 
                                                          | (((0x41U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->inst)) 
                                                              << 1U) 
                                                             | (0x40U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->inst))))))))));
    __Vtemp_h9bc2f26e__0[2U] = (((0x50U == (0x7fU & vlSelf->inst)) 
                                 << 0x10U) | (((0x4fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               << 0xfU) 
                                              | (((0x4eU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst)) 
                                                  << 0xeU) 
                                                 | (((0x4dU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst)) 
                                                     << 0xdU) 
                                                    | (((0x4cU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst)) 
                                                        << 0xcU) 
                                                       | (((0x4bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst)) 
                                                           << 0xbU) 
                                                          | (((0x4aU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->inst)) 
                                                              << 0xaU) 
                                                             | (((0x49U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->inst)) 
                                                                 << 9U) 
                                                                | __Vtemp_h4983b7fe__0[2U]))))))));
    __Vtemp_h453ee2d3__0[2U] = (((0x58U == (0x7fU & vlSelf->inst)) 
                                 << 0x18U) | (((0x57U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               << 0x17U) 
                                              | (((0x56U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst)) 
                                                  << 0x16U) 
                                                 | (((0x55U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst)) 
                                                     << 0x15U) 
                                                    | (((0x54U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst)) 
                                                        << 0x14U) 
                                                       | (((0x53U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst)) 
                                                           << 0x13U) 
                                                          | (((0x52U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->inst)) 
                                                              << 0x12U) 
                                                             | (((0x51U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->inst)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_h9bc2f26e__0[2U]))))))));
    __Vtemp_h95111dfe__0[3U] = (((0x68U == (0x7fU & vlSelf->inst)) 
                                 << 8U) | (((0x67U 
                                             == (0x7fU 
                                                 & vlSelf->inst)) 
                                            << 7U) 
                                           | (((0x66U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               << 6U) 
                                              | (((0x65U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst)) 
                                                  << 5U) 
                                                 | (((0x64U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst)) 
                                                     << 4U) 
                                                    | (((0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst)) 
                                                        << 3U) 
                                                       | (((0x62U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst)) 
                                                           << 2U) 
                                                          | (((0x61U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->inst)) 
                                                              << 1U) 
                                                             | (0x60U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->inst))))))))));
    __Vtemp_h4cf89196__0[3U] = (((0x70U == (0x7fU & vlSelf->inst)) 
                                 << 0x10U) | (((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               << 0xfU) 
                                              | (((0x6eU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst)) 
                                                  << 0xeU) 
                                                 | (((0x6dU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst)) 
                                                     << 0xdU) 
                                                    | (((0x6cU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst)) 
                                                        << 0xcU) 
                                                       | (((0x6bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst)) 
                                                           << 0xbU) 
                                                          | (((0x6aU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->inst)) 
                                                              << 0xaU) 
                                                             | (((0x69U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->inst)) 
                                                                 << 9U) 
                                                                | __Vtemp_h95111dfe__0[3U]))))))));
    __Vtemp_h662a22d6__0[3U] = (((0x78U == (0x7fU & vlSelf->inst)) 
                                 << 0x18U) | (((0x77U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               << 0x17U) 
                                              | (((0x76U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst)) 
                                                  << 0x16U) 
                                                 | (((0x75U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst)) 
                                                     << 0x15U) 
                                                    | (((0x74U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst)) 
                                                        << 0x14U) 
                                                       | (((0x73U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst)) 
                                                           << 0x13U) 
                                                          | (((0x72U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->inst)) 
                                                              << 0x12U) 
                                                             | (((0x71U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->inst)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_h4cf89196__0[3U]))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d[0U] 
        = __Vtemp_hb5d0e462__0[0U];
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d[1U] 
        = __Vtemp_hb5d0e462__0[1U];
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d[2U] 
        = (((0x5fU == (0x7fU & vlSelf->inst)) << 0x1fU) 
           | (((0x5eU == (0x7fU & vlSelf->inst)) << 0x1eU) 
              | (((0x5dU == (0x7fU & vlSelf->inst)) 
                  << 0x1dU) | (((0x5cU == (0x7fU & vlSelf->inst)) 
                                << 0x1cU) | (((0x5bU 
                                               == (0x7fU 
                                                   & vlSelf->inst)) 
                                              << 0x1bU) 
                                             | (((0x5aU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)) 
                                                 << 0x1aU) 
                                                | (((0x59U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst)) 
                                                    << 0x19U) 
                                                   | __Vtemp_h453ee2d3__0[2U])))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d[3U] 
        = (((0x7fU == (0x7fU & vlSelf->inst)) << 0x1fU) 
           | (((0x7eU == (0x7fU & vlSelf->inst)) << 0x1eU) 
              | (((0x7dU == (0x7fU & vlSelf->inst)) 
                  << 0x1dU) | (((0x7cU == (0x7fU & vlSelf->inst)) 
                                << 0x1cU) | (((0x7bU 
                                               == (0x7fU 
                                                   & vlSelf->inst)) 
                                              << 0x1bU) 
                                             | (((0x7aU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)) 
                                                 << 0x1aU) 
                                                | (((0x79U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst)) 
                                                    << 0x19U) 
                                                   | __Vtemp_h662a22d6__0[3U])))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1_d 
        = (((0x1fU == (0x1fU & (vlSelf->inst >> 0xfU))) 
            << 0x1fU) | (((0x1eU == (0x1fU & (vlSelf->inst 
                                              >> 0xfU))) 
                          << 0x1eU) | (((0x1dU == (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU))) 
                                        << 0x1dU) | 
                                       (((0x1cU == 
                                          (0x1fU & 
                                           (vlSelf->inst 
                                            >> 0xfU))) 
                                         << 0x1cU) 
                                        | (((0x1bU 
                                             == (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0xfU))) 
                                            << 0x1bU) 
                                           | (((0x1aU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0xfU))) 
                                               << 0x1aU) 
                                              | (((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 0xfU))) 
                                                  << 0x19U) 
                                                 | (((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->inst 
                                                          >> 0xfU))) 
                                                     << 0x18U) 
                                                    | (((0x17U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->inst 
                                                             >> 0xfU))) 
                                                        << 0x17U) 
                                                       | (((0x16U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->inst 
                                                                >> 0xfU))) 
                                                           << 0x16U) 
                                                          | (((0x15U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 0xfU))) 
                                                              << 0x15U) 
                                                             | (((0x14U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->inst 
                                                                      >> 0xfU))) 
                                                                 << 0x14U) 
                                                                | (((0x13U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->inst 
                                                                         >> 0xfU))) 
                                                                    << 0x13U) 
                                                                   | (((0x12U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->inst 
                                                                            >> 0xfU))) 
                                                                       << 0x12U) 
                                                                      | (((0x11U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->inst 
                                                                               >> 0xfU))) 
                                                                          << 0x11U) 
                                                                         | (((0x10U 
                                                                              == 
                                                                              (0x1fU 
                                                                               & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                             << 0x10U) 
                                                                            | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 0xfU) 
                                                                               | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU))))))))))))))))))))))))))))))))));
    __Vtemp_h78c56e42__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          == 
                                                          (vlSelf->inst 
                                                           >> 0x19U)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (0x3eU 
                                                             == 
                                                             (vlSelf->inst 
                                                              >> 0x19U)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0x3dU 
                                                                == 
                                                                (vlSelf->inst 
                                                                 >> 0x19U)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0x3cU 
                                                                   == 
                                                                   (vlSelf->inst 
                                                                    >> 0x19U)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0x3bU 
                                                                      == 
                                                                      (vlSelf->inst 
                                                                       >> 0x19U)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x3aU 
                                                                         == 
                                                                         (vlSelf->inst 
                                                                          >> 0x19U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0x39U 
                                                                            == 
                                                                            (vlSelf->inst 
                                                                             >> 0x19U)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0x38U 
                                                                               == 
                                                                               (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h78c56e42__0[1U] = (IData)(((((QData)((IData)(
                                                          (0x3fU 
                                                           == 
                                                           (vlSelf->inst 
                                                            >> 0x19U)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (0x3eU 
                                                              == 
                                                              (vlSelf->inst 
                                                               >> 0x19U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0x3dU 
                                                                 == 
                                                                 (vlSelf->inst 
                                                                  >> 0x19U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0x3cU 
                                                                    == 
                                                                    (vlSelf->inst 
                                                                     >> 0x19U)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0x3bU 
                                                                       == 
                                                                       (vlSelf->inst 
                                                                        >> 0x19U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0x3aU 
                                                                          == 
                                                                          (vlSelf->inst 
                                                                           >> 0x19U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0x39U 
                                                                             == 
                                                                             (vlSelf->inst 
                                                                              >> 0x19U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0x38U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x19U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hdc592d94__0[2U] = (((0x48U == (vlSelf->inst 
                                            >> 0x19U)) 
                                 << 8U) | (((0x47U 
                                             == (vlSelf->inst 
                                                 >> 0x19U)) 
                                            << 7U) 
                                           | (((0x46U 
                                                == 
                                                (vlSelf->inst 
                                                 >> 0x19U)) 
                                               << 6U) 
                                              | (((0x45U 
                                                   == 
                                                   (vlSelf->inst 
                                                    >> 0x19U)) 
                                                  << 5U) 
                                                 | (((0x44U 
                                                      == 
                                                      (vlSelf->inst 
                                                       >> 0x19U)) 
                                                     << 4U) 
                                                    | (((0x43U 
                                                         == 
                                                         (vlSelf->inst 
                                                          >> 0x19U)) 
                                                        << 3U) 
                                                       | (((0x42U 
                                                            == 
                                                            (vlSelf->inst 
                                                             >> 0x19U)) 
                                                           << 2U) 
                                                          | (((0x41U 
                                                               == 
                                                               (vlSelf->inst 
                                                                >> 0x19U)) 
                                                              << 1U) 
                                                             | (0x40U 
                                                                == 
                                                                (vlSelf->inst 
                                                                 >> 0x19U))))))))));
    __Vtemp_h6b512a7b__0[2U] = (((0x50U == (vlSelf->inst 
                                            >> 0x19U)) 
                                 << 0x10U) | (((0x4fU 
                                                == 
                                                (vlSelf->inst 
                                                 >> 0x19U)) 
                                               << 0xfU) 
                                              | (((0x4eU 
                                                   == 
                                                   (vlSelf->inst 
                                                    >> 0x19U)) 
                                                  << 0xeU) 
                                                 | (((0x4dU 
                                                      == 
                                                      (vlSelf->inst 
                                                       >> 0x19U)) 
                                                     << 0xdU) 
                                                    | (((0x4cU 
                                                         == 
                                                         (vlSelf->inst 
                                                          >> 0x19U)) 
                                                        << 0xcU) 
                                                       | (((0x4bU 
                                                            == 
                                                            (vlSelf->inst 
                                                             >> 0x19U)) 
                                                           << 0xbU) 
                                                          | (((0x4aU 
                                                               == 
                                                               (vlSelf->inst 
                                                                >> 0x19U)) 
                                                              << 0xaU) 
                                                             | (((0x49U 
                                                                  == 
                                                                  (vlSelf->inst 
                                                                   >> 0x19U)) 
                                                                 << 9U) 
                                                                | __Vtemp_hdc592d94__0[2U]))))))));
    __Vtemp_h344b8d06__0[2U] = (((0x58U == (vlSelf->inst 
                                            >> 0x19U)) 
                                 << 0x18U) | (((0x57U 
                                                == 
                                                (vlSelf->inst 
                                                 >> 0x19U)) 
                                               << 0x17U) 
                                              | (((0x56U 
                                                   == 
                                                   (vlSelf->inst 
                                                    >> 0x19U)) 
                                                  << 0x16U) 
                                                 | (((0x55U 
                                                      == 
                                                      (vlSelf->inst 
                                                       >> 0x19U)) 
                                                     << 0x15U) 
                                                    | (((0x54U 
                                                         == 
                                                         (vlSelf->inst 
                                                          >> 0x19U)) 
                                                        << 0x14U) 
                                                       | (((0x53U 
                                                            == 
                                                            (vlSelf->inst 
                                                             >> 0x19U)) 
                                                           << 0x13U) 
                                                          | (((0x52U 
                                                               == 
                                                               (vlSelf->inst 
                                                                >> 0x19U)) 
                                                              << 0x12U) 
                                                             | (((0x51U 
                                                                  == 
                                                                  (vlSelf->inst 
                                                                   >> 0x19U)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_h6b512a7b__0[2U]))))))));
    __Vtemp_h7e6d3a1a__0[3U] = (((0x68U == (vlSelf->inst 
                                            >> 0x19U)) 
                                 << 8U) | (((0x67U 
                                             == (vlSelf->inst 
                                                 >> 0x19U)) 
                                            << 7U) 
                                           | (((0x66U 
                                                == 
                                                (vlSelf->inst 
                                                 >> 0x19U)) 
                                               << 6U) 
                                              | (((0x65U 
                                                   == 
                                                   (vlSelf->inst 
                                                    >> 0x19U)) 
                                                  << 5U) 
                                                 | (((0x64U 
                                                      == 
                                                      (vlSelf->inst 
                                                       >> 0x19U)) 
                                                     << 4U) 
                                                    | (((0x63U 
                                                         == 
                                                         (vlSelf->inst 
                                                          >> 0x19U)) 
                                                        << 3U) 
                                                       | (((0x62U 
                                                            == 
                                                            (vlSelf->inst 
                                                             >> 0x19U)) 
                                                           << 2U) 
                                                          | (((0x61U 
                                                               == 
                                                               (vlSelf->inst 
                                                                >> 0x19U)) 
                                                              << 1U) 
                                                             | (0x60U 
                                                                == 
                                                                (vlSelf->inst 
                                                                 >> 0x19U))))))))));
    __Vtemp_h1e098ff1__0[3U] = (((0x70U == (vlSelf->inst 
                                            >> 0x19U)) 
                                 << 0x10U) | (((0x6fU 
                                                == 
                                                (vlSelf->inst 
                                                 >> 0x19U)) 
                                               << 0xfU) 
                                              | (((0x6eU 
                                                   == 
                                                   (vlSelf->inst 
                                                    >> 0x19U)) 
                                                  << 0xeU) 
                                                 | (((0x6dU 
                                                      == 
                                                      (vlSelf->inst 
                                                       >> 0x19U)) 
                                                     << 0xdU) 
                                                    | (((0x6cU 
                                                         == 
                                                         (vlSelf->inst 
                                                          >> 0x19U)) 
                                                        << 0xcU) 
                                                       | (((0x6bU 
                                                            == 
                                                            (vlSelf->inst 
                                                             >> 0x19U)) 
                                                           << 0xbU) 
                                                          | (((0x6aU 
                                                               == 
                                                               (vlSelf->inst 
                                                                >> 0x19U)) 
                                                              << 0xaU) 
                                                             | (((0x69U 
                                                                  == 
                                                                  (vlSelf->inst 
                                                                   >> 0x19U)) 
                                                                 << 9U) 
                                                                | __Vtemp_h7e6d3a1a__0[3U]))))))));
    __Vtemp_h61105590__0[3U] = (((0x78U == (vlSelf->inst 
                                            >> 0x19U)) 
                                 << 0x18U) | (((0x77U 
                                                == 
                                                (vlSelf->inst 
                                                 >> 0x19U)) 
                                               << 0x17U) 
                                              | (((0x76U 
                                                   == 
                                                   (vlSelf->inst 
                                                    >> 0x19U)) 
                                                  << 0x16U) 
                                                 | (((0x75U 
                                                      == 
                                                      (vlSelf->inst 
                                                       >> 0x19U)) 
                                                     << 0x15U) 
                                                    | (((0x74U 
                                                         == 
                                                         (vlSelf->inst 
                                                          >> 0x19U)) 
                                                        << 0x14U) 
                                                       | (((0x73U 
                                                            == 
                                                            (vlSelf->inst 
                                                             >> 0x19U)) 
                                                           << 0x13U) 
                                                          | (((0x72U 
                                                               == 
                                                               (vlSelf->inst 
                                                                >> 0x19U)) 
                                                              << 0x12U) 
                                                             | (((0x71U 
                                                                  == 
                                                                  (vlSelf->inst 
                                                                   >> 0x19U)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_h1e098ff1__0[3U]))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d[0U] 
        = __Vtemp_h78c56e42__0[0U];
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d[1U] 
        = __Vtemp_h78c56e42__0[1U];
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d[2U] 
        = (((0x5fU == (vlSelf->inst >> 0x19U)) << 0x1fU) 
           | (((0x5eU == (vlSelf->inst >> 0x19U)) << 0x1eU) 
              | (((0x5dU == (vlSelf->inst >> 0x19U)) 
                  << 0x1dU) | (((0x5cU == (vlSelf->inst 
                                           >> 0x19U)) 
                                << 0x1cU) | (((0x5bU 
                                               == (vlSelf->inst 
                                                   >> 0x19U)) 
                                              << 0x1bU) 
                                             | (((0x5aU 
                                                  == 
                                                  (vlSelf->inst 
                                                   >> 0x19U)) 
                                                 << 0x1aU) 
                                                | (((0x59U 
                                                     == 
                                                     (vlSelf->inst 
                                                      >> 0x19U)) 
                                                    << 0x19U) 
                                                   | __Vtemp_h344b8d06__0[2U])))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d[3U] 
        = (((0x7fU == (vlSelf->inst >> 0x19U)) << 0x1fU) 
           | (((0x7eU == (vlSelf->inst >> 0x19U)) << 0x1eU) 
              | (((0x7dU == (vlSelf->inst >> 0x19U)) 
                  << 0x1dU) | (((0x7cU == (vlSelf->inst 
                                           >> 0x19U)) 
                                << 0x1cU) | (((0x7bU 
                                               == (vlSelf->inst 
                                                   >> 0x19U)) 
                                              << 0x1bU) 
                                             | (((0x7aU 
                                                  == 
                                                  (vlSelf->inst 
                                                   >> 0x19U)) 
                                                 << 0x1aU) 
                                                | (((0x79U 
                                                     == 
                                                     (vlSelf->inst 
                                                      >> 0x19U)) 
                                                    << 0x19U) 
                                                   | __Vtemp_h61105590__0[3U])))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_26_d 
        = (((QData)((IData)((0x3fU == (vlSelf->inst 
                                       >> 0x1aU)))) 
            << 0x3fU) | (((QData)((IData)((0x3eU == 
                                           (vlSelf->inst 
                                            >> 0x1aU)))) 
                          << 0x3eU) | (((QData)((IData)(
                                                        (0x3dU 
                                                         == 
                                                         (vlSelf->inst 
                                                          >> 0x1aU)))) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         (0x3cU 
                                                          == 
                                                          (vlSelf->inst 
                                                           >> 0x1aU)))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (0x3bU 
                                                             == 
                                                             (vlSelf->inst 
                                                              >> 0x1aU)))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (0x3aU 
                                                                == 
                                                                (vlSelf->inst 
                                                                 >> 0x1aU)))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (0x39U 
                                                                   == 
                                                                   (vlSelf->inst 
                                                                    >> 0x1aU)))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (0x38U 
                                                                      == 
                                                                      (vlSelf->inst 
                                                                       >> 0x1aU)))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (0x37U 
                                                                         == 
                                                                         (vlSelf->inst 
                                                                          >> 0x1aU)))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (0x36U 
                                                                            == 
                                                                            (vlSelf->inst 
                                                                             >> 0x1aU)))) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (0x35U 
                                                                               == 
                                                                               (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x1aU)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd_d 
        = (((0x1fU == (0x1fU & (vlSelf->inst >> 7U))) 
            << 0x1fU) | (((0x1eU == (0x1fU & (vlSelf->inst 
                                              >> 7U))) 
                          << 0x1eU) | (((0x1dU == (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 7U))) 
                                        << 0x1dU) | 
                                       (((0x1cU == 
                                          (0x1fU & 
                                           (vlSelf->inst 
                                            >> 7U))) 
                                         << 0x1cU) 
                                        | (((0x1bU 
                                             == (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 7U))) 
                                            << 0x1bU) 
                                           | (((0x1aU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 7U))) 
                                               << 0x1aU) 
                                              | (((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 7U))) 
                                                  << 0x19U) 
                                                 | (((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->inst 
                                                          >> 7U))) 
                                                     << 0x18U) 
                                                    | (((0x17U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->inst 
                                                             >> 7U))) 
                                                        << 0x17U) 
                                                       | (((0x16U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->inst 
                                                                >> 7U))) 
                                                           << 0x16U) 
                                                          | (((0x15U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U))) 
                                                              << 0x15U) 
                                                             | (((0x14U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->inst 
                                                                      >> 7U))) 
                                                                 << 0x14U) 
                                                                | (((0x13U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->inst 
                                                                         >> 7U))) 
                                                                    << 0x13U) 
                                                                   | (((0x12U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->inst 
                                                                            >> 7U))) 
                                                                       << 0x12U) 
                                                                      | (((0x11U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->inst 
                                                                               >> 7U))) 
                                                                          << 0x11U) 
                                                                         | (((0x10U 
                                                                              == 
                                                                              (0x1fU 
                                                                               & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                             << 0x10U) 
                                                                            | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 0xfU) 
                                                                               | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2_d 
        = (((0x1fU == (0x1fU & (vlSelf->inst >> 0x14U))) 
            << 0x1fU) | (((0x1eU == (0x1fU & (vlSelf->inst 
                                              >> 0x14U))) 
                          << 0x1eU) | (((0x1dU == (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U))) 
                                        << 0x1dU) | 
                                       (((0x1cU == 
                                          (0x1fU & 
                                           (vlSelf->inst 
                                            >> 0x14U))) 
                                         << 0x1cU) 
                                        | (((0x1bU 
                                             == (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0x14U))) 
                                            << 0x1bU) 
                                           | (((0x1aU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0x14U))) 
                                               << 0x1aU) 
                                              | (((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 0x14U))) 
                                                  << 0x19U) 
                                                 | (((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->inst 
                                                          >> 0x14U))) 
                                                     << 0x18U) 
                                                    | (((0x17U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->inst 
                                                             >> 0x14U))) 
                                                        << 0x17U) 
                                                       | (((0x16U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->inst 
                                                                >> 0x14U))) 
                                                           << 0x16U) 
                                                          | (((0x15U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 0x14U))) 
                                                              << 0x15U) 
                                                             | (((0x14U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U))) 
                                                                 << 0x14U) 
                                                                | (((0x13U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->inst 
                                                                         >> 0x14U))) 
                                                                    << 0x13U) 
                                                                   | (((0x12U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->inst 
                                                                            >> 0x14U))) 
                                                                       << 0x12U) 
                                                                      | (((0x11U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->inst 
                                                                               >> 0x14U))) 
                                                                          << 0x11U) 
                                                                         | (((0x10U 
                                                                              == 
                                                                              (0x1fU 
                                                                               & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                             << 0x10U) 
                                                                            | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 0xfU) 
                                                                               | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and 
        = (IData)((0x7033U == (0xfe00707fU & vlSelf->inst)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or 
        = (IData)((0x6033U == (0xfe00707fU & vlSelf->inst)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor 
        = (IData)((0x4033U == (0xfe00707fU & vlSelf->inst)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll 
        = (IData)((0x1013U == (0xfc00707fU & vlSelf->inst)));
    vlSelf->ysyx_25020037_cpu__DOT__rlsu_we = (IData)(
                                                      (0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt 
        = (IData)((0x2033U == (0xfe00707fU & vlSelf->inst)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu 
        = (IData)((0x3033U == (0xfe00707fU & vlSelf->inst)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0 
        = (IData)((0x33U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_25020037_cpu__DOT__wlsu_we = (IData)(
                                                      (0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl 
        = (IData)((0x67U == (0x707fU & vlSelf->inst)));
    vlSelf->__VdfgTmp_h39165432__0 = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                      | (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0) 
           & (0U == (vlSelf->inst >> 0x19U)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0) 
           & (0x64U == (vlSelf->inst >> 0x19U)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0) 
           & (0U == (vlSelf->inst >> 0x1aU)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0) 
           & (0x16U == (vlSelf->inst >> 0x1aU)));
    vlSelf->ysyx_25020037_cpu__DOT__imm = (((- (IData)(
                                                       ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi) 
                                                        | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl)))) 
                                            & (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->inst 
                                                  >> 0x14U))) 
                                           | (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we))) 
                                               & (((- (IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->inst 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->inst 
                                                           >> 7U))))) 
                                              | (((- (IData)((IData)(
                                                                     (0x1063U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->inst))))) 
                                                  & (((- (IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelf->inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->inst 
                                                                 >> 7U)))))) 
                                                 | ((0xfffff000U 
                                                     & ((- (IData)(
                                                                   ((0x17U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->inst)) 
                                                                    | (0x37U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->inst))))) 
                                                        & vlSelf->inst)) 
                                                    | ((- (IData)(
                                                                  (0x6fU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->inst)))) 
                                                       & (((- (IData)(
                                                                      (vlSelf->inst 
                                                                       >> 0x1fU))) 
                                                           << 0x14U) 
                                                          | ((0xff000U 
                                                              & vlSelf->inst) 
                                                             | ((0x800U 
                                                                 & (vlSelf->inst 
                                                                    >> 9U)) 
                                                                | (0x7feU 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump = ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst)) 
                                                  | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h04762d85__0 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
           | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
           | (IData)(vlSelf->__VdfgTmp_h39165432__0));
    vlSelf->ysyx_25020037_cpu__DOT__dnpc = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump)
                                             ? (vlSelf->ysyx_25020037_cpu__DOT__imm 
                                                + vlSelf->pc)
                                             : ((IData)(4U) 
                                                + vlSelf->pc));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
        = (((IData)(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump) 
            | (0x17U == (0x7fU & vlSelf->inst))) ? vlSelf->pc
            : vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
           [(0x1fU & (vlSelf->inst >> 0xfU))]);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
        = (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll) 
            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl) 
               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi) 
                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we) 
                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we) 
                           | ((0x37U == (0x7fU & vlSelf->inst)) 
                              | (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump))))))))
            ? vlSelf->ysyx_25020037_cpu__DOT__imm : 
           vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
           [(0x1fU & (vlSelf->inst >> 0x14U))]);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0 
        = ((0U != (0x1fU & (vlSelf->inst >> 7U))) & 
           ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h04762d85__0) 
                                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu) 
                                                 | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and) 
                                                    | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or) 
                                                       | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor) 
                                                          | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                                             | ((0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->inst)) 
                                                                | (0x17U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->inst)))))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)
            ? (~ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)
            : vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
        = (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
           + (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b 
              + (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)));
    vlSelf->ysyx_25020037_cpu__DOT__rlsu_addr = (((- (IData)(
                                                             (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h04762d85__0) 
                                                               | ((0x17U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->inst)) 
                                                                  | ((0x6fU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->inst)) 
                                                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                                                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we) 
                                                                           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll) 
                                                                              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl) 
                                                                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we))))))))) 
                                                              | (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub)))) 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result) 
                                                 | ((1U 
                                                     & ((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt))) 
                                                        & (((~ 
                                                             (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
                                                              >> 0x1fU)) 
                                                            & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                               >> 0x1fU)) 
                                                           | ((~ 
                                                               ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                 ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                                                                >> 0x1fU)) 
                                                              & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
                                                                 >> 0x1fU))))) 
                                                    | ((1U 
                                                        & ((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu))) 
                                                           & (~ (IData)(
                                                                        (1ULL 
                                                                         & (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                                             + 
                                                                             ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                                              + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                                            >> 0x20U)))))) 
                                                       | (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and))) 
                                                           & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                              & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)) 
                                                          | (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or))) 
                                                              & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                 | vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)) 
                                                             | (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor))) 
                                                                 & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                    ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)) 
                                                                | (((- (IData)(
                                                                               (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                    & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                                                                   | (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll))) 
                                                                       & ((0x1fU 
                                                                           >= vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)
                                                                           ? 
                                                                          (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                           << vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)
                                                                           : 0U)) 
                                                                      | ((- (IData)(
                                                                                ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl) 
                                                                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra)))) 
                                                                         & (IData)(
                                                                                ((((QData)((IData)(
                                                                                (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                                >> 0x1fU)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))))))))))));
    Vtools___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP(vlSelf->ysyx_25020037_cpu__DOT__rlsu_addr, 
                                                                                ((1U 
                                                                                & (- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__rw_word_1)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__rw_word_2)))) 
                                                                                | (4U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we) 
                                                                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we))))))), vlSelf->__Vfunc_ysyx_25020037_cpu__DOT__lsu_cpu__DOT__pmem_read__2__Vfuncout);
    vlSelf->ysyx_25020037_cpu__DOT__rlsu_data = (((~ (IData)(vlSelf->rst)) 
                                                  & (IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we))
                                                  ? vlSelf->__Vfunc_ysyx_25020037_cpu__DOT__lsu_cpu__DOT__pmem_read__2__Vfuncout
                                                  : 0U);
    vlSelf->ysyx_25020037_cpu__DOT__final_result = 
        ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we)
                                       ? vlSelf->ysyx_25020037_cpu__DOT__rlsu_data
                                       : vlSelf->ysyx_25020037_cpu__DOT__rlsu_addr));
}

VL_ATTR_COLD void Vtools___024root___eval_stl(Vtools___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtools___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtools___024root___dump_triggers__ico(Vtools___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtools___024root___dump_triggers__act(Vtools___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtools___024root___dump_triggers__nba(Vtools___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtools___024root___ctor_var_reset(Vtools___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->decoder_2_4__02Ein = VL_RAND_RESET_I(2);
    vlSelf->decoder_2_4__02Eout = VL_RAND_RESET_I(4);
    vlSelf->decoder_4_16__02Ein = VL_RAND_RESET_I(4);
    vlSelf->decoder_4_16__02Eout = VL_RAND_RESET_I(16);
    vlSelf->encoder_32_5__02Ein = VL_RAND_RESET_I(32);
    vlSelf->encoder_32_5__02Eout = VL_RAND_RESET_I(5);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25020037_cpu__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__rlsu_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__rlsu_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__rlsu_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__wlsu_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__rw_word_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__rw_word_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__final_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__dnpc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__rst_delay = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0 = 0;
    VL_RAND_RESET_W(128, vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_26_d = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1_d = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2_d = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd_d = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_W = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h04762d85__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h39165432__0 = 0;
    vlSelf->__Vfunc_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_25020037_cpu__DOT__lsu_cpu__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
