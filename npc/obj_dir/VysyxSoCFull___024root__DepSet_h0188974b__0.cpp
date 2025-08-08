// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___ico_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__final_gpr_we 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
}

void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VysyxSoCFull___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_act\n"); );
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_cnt 
        = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_cnt;
    vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_cnt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss)
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_cnt))));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ mask);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__2\n"); );
    // Body
    if ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_write_TOP(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, 
                                                                                ((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                                                << 0x18U) 
                                                                                | ((0xff0000U 
                                                                                & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                                                << 8U)) 
                                                                                | ((0xff00U 
                                                                                & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                                                >> 8U)) 
                                                                                | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                                                >> 0x18U)))), (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter));
    }
    if ((0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE = 1U;
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__data;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__data = 0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__data = vlSelf->ysyxSoCFull__DOT__psram__DOT__data;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
    if (vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__data = 0U;
    } else {
        if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
             & (6U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
                = ((0xfffff0U & (vlSelf->ysyxSoCFull__DOT__psram__DOT__addr 
                                 << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din));
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE)
                    ? ((0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))
                    : ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 1U)) | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))));
        }
        if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
             & (0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__data 
                = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                     ? vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap
                     : vlSelf->ysyxSoCFull__DOT__psram__DOT__data) 
                   << 4U);
        } else if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                    & (0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__data 
                = ((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                    << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 0U;
    } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 0U;
        } else if (VL_LIKELY((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 0U;
        } else {
            VL_WRITEF("Error! Terminating simulation.\n");
            VL_FINISH_MT("/home/tanghongwei/ysyx-workbench/npc/../ysyxSoC/perip/psram/psram.v", 79, "");
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
                = ((6U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                    : 0U);
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
                = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                    ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)));
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
                = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
            = ((5U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                : 0U);
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? ((0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                    ? 3U : ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                             ? 2U : 4U)) : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    } else if (vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
            = ((7U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? (0xffU & ((IData)(4U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                : 0U);
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
            = ((7U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                : 0U);
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__data = __Vdly__ysyxSoCFull__DOT__psram__DOT__data;
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__difftest_skip_ref_TOP();

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__last_pc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__last_pc = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimeh;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimeh = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wvalid_reg;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wvalid_reg = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_write_req;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_write_req = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_write_req 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_write_req;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wvalid_reg 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wvalid_reg;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimeh 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimeh;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__last_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__last_pc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_ready;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__awready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__bresp = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__bvalid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimeh = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wvalid_reg = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_write_req = 0U;
    } else {
        if ((0xffffffffU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel)) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimeh 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimeh);
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel = 0U;
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req) {
                    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__difftest_skip_ref_TOP();
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata 
                        = ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_offset)
                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel
                            : ((4U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_offset)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimeh
                                : 0U));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp = 0U;
                } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_write_req) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wvalid_reg) {
                        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__difftest_skip_ref_TOP();
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wvalid_reg = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__bvalid = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__bresp = 0U;
                    }
                }
            }
        } else {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__read_addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_write_req = 0U;
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_write_req = 0U;
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__bvalid = 0U;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__next_state;
    }
    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)))) {
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid) 
                   & ((0x2000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr) 
                      | (0x2000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr)));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__last_pc = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_access_fault = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_valid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_ready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wu_to_gu_bus = 0ULL;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awaddr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_access_fault = 0U;
    } else {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__state) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__state) {
                if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid = 0U;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready = 1U;
                }
                if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready)) 
                     & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready = 0U;
                }
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_access_fault = 1U;
                }
            }
        } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                    != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__last_pc)) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__last_pc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__state) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__state) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_valid = 1U;
                }
            }
        } else {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__wu_to_gu_bus_r 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wu_to_gu_bus;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready = 0U;
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_valid = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__next_master;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__state) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__state) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wu_to_gu_bus 
                        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__final_gpr_we)) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__final_result)));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_ready = 1U;
                }
            }
        } else {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lu_to_wu_bus;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_wu_bus;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_ready = 0U;
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__state) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__state) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_lu_bus))) {
                    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid = 0U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready = 1U;
                    }
                    if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready)) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lu_to_wu_bus 
                            = (((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus 
                                                 >> 0x20U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata)));
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid = 1U;
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready = 1U;
                    }
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_access_fault = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_lu_bus))) {
                    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid = 1U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid = 0U;
                    }
                    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid = 0U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready = 1U;
                    }
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_access_fault = 1U;
                    }
                    if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready)) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp)))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid = 1U;
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready = 1U;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lu_to_wu_bus 
                        = (((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus 
                                             >> 0x20U))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus 
                                                         >> 0x20U))));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid = 1U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready = 1U;
                }
            }
        } else {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_valid))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_lu_bus))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready = 0U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr 
                        = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus 
                                   >> 0x20U));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid = 1U;
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_lu_bus))) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awaddr 
                        = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus 
                                   >> 0x20U));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wdata 
                        = ((0x1fU >= (0x18U & ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus 
                                                        >> 0x20U)) 
                                               << 3U)))
                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus) 
                               << (0x18U & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus 
                                                     >> 0x20U)) 
                                            << 3U)))
                            : 0U);
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb 
                        = (0xfU & ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_lu_bus) 
                                                 >> 2U)))
                                    ? ((IData)(1U) 
                                       << (3U & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus 
                                                         >> 0x20U))))
                                    : ((2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_lu_bus) 
                                                >> 2U)))
                                        ? ((IData)(3U) 
                                           << (3U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus 
                                                             >> 0x20U))))
                                        : ((4U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_lu_bus) 
                                                      >> 2U)))
                                            ? ((IData)(0xfU) 
                                               << (3U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus 
                                                              >> 0x20U))))
                                            : 0U))));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid = 1U;
                } else {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready = 0U;
                }
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimeh 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtimeh;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wvalid_reg 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__wvalid_reg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_write_req 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_write_req;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__last_pc 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__last_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_offset 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__read_addr 
           - (IData)(0x2000000U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__state 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__next_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__state 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__next_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__state 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__next_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready))))
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready = 0U;
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arburst;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arlen;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arsize;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arburst;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arlen;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__state 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cpu__DOT__next_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid = 0U;
    if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arlen;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arburst;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr;
            }
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awburst;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awlen;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wdata;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awaddr;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__next_state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state) 
               & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__is_read_req) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid))))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
}

extern const VlUnpacked<CData/*0:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h4abec798_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h05f4911a_0;
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hccb3c341_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_he38796ec_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__6(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__6\n"); );
    // Init
    SData/*10:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    CData/*6:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready = 0;
    SData/*13:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT___asic_spi_sck;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0;
    VlWide<4>/*127:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0;
    SData/*12:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = vlSelf->ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi 
        = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = (1U & 
                                               ((~ (IData)(vlSelf->reset)) 
                                                & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                    & ((0U 
                                                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)))
                                                    ? 
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))));
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk) 
                                                   | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))
                                                ? (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & (((0x800U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                         ? 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                         - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                         - (IData)(1U))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                        - (IData)(1U)))))
                                                : (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_psel)) 
                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 2U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      | ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 1U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 3U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 2U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                                   & (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir))))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    __Vtableidx3 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                << 7U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->reset)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt 
        = VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0
        [__Vtableidx3];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                         | (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                             & (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((6U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                                                  >> 2U))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = 8U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0x2774U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0xffffU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0x27fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pready_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pslverr_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__prdata_reg = 0U;
    } else {
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0x30cU;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 1U;
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
                = (0x1ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
                               - (IData)(1U)));
            if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 1U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 2U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
        } else if ((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                             >> 3U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk)
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                                      | ((((2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                                           & (0U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                                           ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                                           : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                                         >> 0x1fU)))
                                                : (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
            = ((0xeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                        << 1U)) | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                         : ((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))
                             ? (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                             : 0x80U)));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)));
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0xffU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x3f00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)));
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 
                            = (0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU));
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 1U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_2;
                    }
                }
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
                    }
                }
            }
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | (0xeU ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | (((IData)((0x18U == (0x18U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                   << 7U) | (((IData)((0x14U == (0x14U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                              << 6U) | (((IData)((0x11U 
                                                  == 
                                                  (0x11U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                         << 5U) | ((IData)(
                                                           (0x10U 
                                                            != 
                                                            (0x12U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                                   << 4U)))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
                     & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                    & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))))
                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
                __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                - (IData)(1U)));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pready_reg = 0U;
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata);
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q;
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
                        } else {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_2))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q));
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 0U;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                               | (0xffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_2))));
                    }
                }
            }
        }
        if (((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                         >> 6U));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (7U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w);
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w);
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pslverr_reg = 0U;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pready_reg = 1U;
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) {
                if ((0x10002000U != (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) {
                    if ((0x10002008U != (0x1fffffffU 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pslverr_reg = 1U;
                    }
                }
            } else if ((0x10002000U != (0x1fffffffU 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) {
                if ((0x10002004U != (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) {
                    if ((0x10002008U != (0x1fffffffU 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pslverr_reg = 1U;
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__prdata_reg 
                    = ((0x10002000U == (0x1fffffffU 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg)
                        : ((0x10002004U == (0x1fffffffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_in_reg)
                            : ((0x10002008U == (0x1fffffffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg
                                : 0U)));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
            VL_WRITEF("%c",8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count) 
                            - (IData)(1U)));
        }
    } else if (VL_UNLIKELY((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop))))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        VL_WRITEF("%c",8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat;
        if ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
              & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 1U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                         >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    __Vtableidx4 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                            << 2U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (IData)(vlSelf->reset))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir 
        = VysyxSoCFull__ConstPool__TABLE_h4abec798_0
        [__Vtableidx4];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                            >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->externalPins_uart_rx));
    vlSelf->__Vtableidx1 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h05f4911a_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                            >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                               >> 7U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                                 & (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                | ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                               | (((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                      >> 8U)) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))));
    vlSelf->__VdfgTmp_ha17ae98a__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_in_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0xeU;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)));
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0xaU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x7fU 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                        }
                    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x3fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x1fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    }
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out) 
                                    >> 1U));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0xdU : ((4U == (7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                           ? 0x15U : 0x1dU));
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & ((0x10U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                              ? ((~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                              : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                            }
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) {
                if ((0x10002000U == (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg 
                            = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg)) 
                               | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
                    }
                    if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg 
                            = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg)) 
                               | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
                    }
                }
                if ((0x10002000U != (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) {
                    if ((0x10002008U == (0x1fffffffU 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) {
                        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg 
                                = ((0xffffff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg) 
                                   | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
                        }
                        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg 
                                = ((0xffff00ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg) 
                                   | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
                        }
                        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg 
                                = ((0xff00ffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg) 
                                   | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
                        }
                        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg 
                                = ((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_segment_reg) 
                                   | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT___asic_spi_sck = __Vdly__ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->externalPins_gpio_out = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable 
        = ((~ (IData)(vlSelf->reset)) & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
    } else {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (3U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((0x400U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 
        = ((0x80U & ((~ (IData)((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))))) 
                     << 7U)) | (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                            >> 1U)));
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
    vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss 
        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss));
    vlSelf->__Vtableidx2 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_hccb3c341_0
        [vlSelf->__Vtableidx2];
    vlSelf->__Vtableidx5 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_he38796ec_0
        [vlSelf->__Vtableidx5];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->externalPins_uart_tx = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                             >> 4U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__7\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr__v0 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr__v0 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr__v0 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr__v0 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr = 0;
    // Body
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0 = 0U;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q) {
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__cmd)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr[vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr[vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__cmd)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr[vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr[vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) {
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout = 0U;
        } else {
            if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__cmd))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en = 1U;
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en = 1U;
            } else {
                if (((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt) 
                        < ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en = 1U;
                } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt) 
                            >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt) 
                            < (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__length) 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en = 0U;
                }
                if (((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt) 
                        < ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en = 1U;
                } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt) 
                            >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt) 
                            < (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__length) 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en = 0U;
                }
            }
            if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__cmd))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en = 1U;
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en = 1U;
            } else {
                if (((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt) 
                        < ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en = 1U;
                } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt) 
                            >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt) 
                            < (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__length) 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en = 0U;
                }
                if (((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt) 
                        < ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en = 1U;
                } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt) 
                            >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt) 
                            < (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__length) 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en = 0U;
                }
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt) 
                 >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__L_bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_sdram_addr]));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__L_bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_sdram_addr]));
            } else {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dqm_bufH)
                                 ? (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__L_bank]
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_sdram_addr] 
                                    >> 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_data) 
                                              >> 8U)));
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0 = 1U;
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0 = 8U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_sdram_addr;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__L_bank;
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dqm_bufL)
                                 ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__L_bank]
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_sdram_addr]
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_data)));
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1 = 0U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_sdram_addr;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__L_bank;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt) 
                 >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__L_bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_sdram_addr]));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__L_bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_sdram_addr]));
            } else {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dqm_bufH)
                                 ? (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__L_bank]
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_sdram_addr] 
                                    >> 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_data) 
                                              >> 8U)));
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0 = 1U;
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0 = 8U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_sdram_addr;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__L_bank;
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dqm_bufL)
                                 ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__L_bank]
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_sdram_addr]
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_data)));
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1 = 0U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_sdram_addr;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__L_bank;
            }
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__cmd)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Brust_Length 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Brust_Length 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout = 0U;
        } else {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt) 
                 >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__L_bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_sdram_addr]));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__L_bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_sdram_addr]));
            } else {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dqm_bufH)
                                 ? (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__L_bank]
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_sdram_addr] 
                                    >> 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_data) 
                                              >> 8U)));
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0 = 1U;
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0 = 8U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_sdram_addr;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__L_bank;
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dqm_bufL)
                                 ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__L_bank]
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_sdram_addr]
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_data)));
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1 = 0U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_sdram_addr;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__L_bank;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt) 
                 >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__L_bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_sdram_addr]));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__L_bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_sdram_addr]));
            } else {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dqm_bufH)
                                 ? (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__L_bank]
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_sdram_addr] 
                                    >> 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_data) 
                                              >> 8U)));
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0 = 1U;
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0 = 8U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_sdram_addr;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__L_bank;
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dqm_bufL)
                                 ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__L_bank]
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_sdram_addr]
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_data)));
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1 = 0U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_sdram_addr;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__L_bank;
            }
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__cmd)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Brust_Length 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Brust_Length 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                      >> 3U)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dqm_bufH 
                = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                         >> 3U));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dqm_bufL 
                = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                         >> 2U));
            if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__cmd))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_data 
                    = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                       >> 0x10U);
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_data 
                    = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
            } else {
                if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt) 
                            < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt)))
                            : 0U);
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_data 
                        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                           >> 0x10U);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_data = 0U;
                }
                if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt) 
                            < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt)))
                            : 0U);
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_data 
                        = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_data = 0U;
                }
            }
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dqm_bufH 
                = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                         >> 1U));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dqm_bufL 
                = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dqm_bufH 
                = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                         >> 3U));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dqm_bufL 
                = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                         >> 2U));
            if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__cmd))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_data 
                    = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                       >> 0x10U);
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_data 
                    = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
            } else {
                if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt) 
                            < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt)))
                            : 0U);
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_data 
                        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                           >> 0x10U);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_data = 0U;
                }
                if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt) 
                            < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt)))
                            : 0U);
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_data 
                        = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_data = 0U;
                }
            }
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dqm_bufH 
                = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                         >> 1U));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dqm_bufL 
                = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q));
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__cmd)) 
                             | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__cmd))) 
                            | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__cmd))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__L_bank 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__L_bank 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__cmd)) 
                             | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__cmd))) 
                            | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__cmd))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__L_bank 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__L_bank 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Brust_Length = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Brust_Length = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Brust_Length = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Brust_Length = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__read_en = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__read_en = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__read_en = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__read_en = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dout = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dout = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dout = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dout = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dqm_bufH = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__dqm_bufL = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__L_bank = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_data = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dqm_bufH = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__dqm_bufL = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__L_bank = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_data = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dqm_bufH = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__dqm_bufL = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__L_bank = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_data = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dqm_bufH = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__dqm_bufL = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__L_bank = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_data = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q)))) {
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr__v0 = 1U;
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr__v0 = 1U;
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr__v0 = 1U;
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr__v0 = 1U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr[3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr[3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr[3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_cnt;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v0))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__bank__v1))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_cnt;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v0))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__bank__v1))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_cnt;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v0))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__bank__v1))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_cnt;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v0))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__bank__v1))));
    }
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
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en1 = 
        ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__en0) 
         | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__dq__en1) 
            << 0x10U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en0 = 
        ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__en0) 
         | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__dq__en1) 
            << 0x10U));
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
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_cnt;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr;
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
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_cnt;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr;
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
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_cnt;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr;
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
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_cnt;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__Line_addr
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__L_bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__Line_addr
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__L_bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__Line_addr
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__L_bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__Line_addr
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__L_bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__r_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_H__DOT__w_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__r_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_H__DOT__u_sdram_16_L__DOT__w_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__r_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_H__DOT__w_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__r_addr));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_sdram_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT____VdfgTmp_h53d7d934__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_sdram_32_L__DOT__u_sdram_16_L__DOT__w_addr));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__hit_TOP(IData/*31:0*/ inst_not_realize);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__8(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_valid = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__state) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__dnpc_r;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__eu_to_lu_bus 
                    = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__result)) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__src2)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_valid = 1U;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready = 1U;
            }
        }
    } else {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_valid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U] 
                = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h53724e58__0)) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs
                                                        [
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                                                    >> 8U)))]))));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h53724e58__0)) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs
                                                         [
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                                                     >> 8U)))]))) 
                           >> 0x20U));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_eu_bus;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_valid = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__state 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__next_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__src2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
           == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]);
    if ((IData)((0ULL != (0x30ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r)))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__hit_TOP(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 4U))))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1 
        = (IData)((0ULL != (0x7800000ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2 
        = ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                          >> 8U))) ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x1bU))
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin 
        = (IData)((0ULL != (0x3800ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)
            ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U])
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)
            ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_cpu__DOT__alu_src2);
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
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__10(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__10\n"); );
    // Init
    IData/*31:0*/ __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_read__5__data;
    __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_read__5__data = 0;
    // Body
    if ((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))) 
         & (0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_read_TOP(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_read__5__data);
        vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
            = __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_read__5__data;
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap 
        = ((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
            << 0x18U) | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 0x18U))));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready = 0U;
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 5U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                               >> 0x2dU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0xdU));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 5U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                               >> 0x2dU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0xdU));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid = 0U;
    if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__current_master))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready 
                    = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready 
                    = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid;
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
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__is_clint_addr) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready 
                    = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready 
                    = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                       >> 5U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                               >> 1U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
        = (~ (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                           | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr)))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)) 
           | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready))));
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(
                                                                                (0x3fffffffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr), vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__3__rdata);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
            = vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__3__rdata;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid)));
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

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__11(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__addr = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__counter = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__12(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss) 
                 | (((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_cnt) 
                     >> 3U) & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_reg) 
                               >> (7U & ((IData)(7U) 
                                         - (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_cnt)))))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ctrl_go_busy 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__13(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__13\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                       >> 4U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h7fb30c92__0) 
                     >> 2U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h7fb30c92__0) 
                     >> 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb 
            = vlSelf->__VdfgTmp_h7fb30c92__0;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb = 0U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc = 0U;
    } else {
        if (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                      >> 7U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wcsr_data;
        }
        if (((IData)((0ULL != (0x42ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc 
                = ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                  >> 1U))) ? (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                                      >> 0x17U))
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wcsr_data);
        }
    }
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
}

extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__14(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__14\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q 
                            = (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i)));
                    }
                } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((0x32U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 1U;
                        }
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else {
                if ((9U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                 >> 0xaU));
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = ((0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r)) 
                          << 0xaU));
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                 >> 0xaU));
                }
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 4U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 1U));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                    = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0xaU));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 5U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                 >> 1U));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                    = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0xaU));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 3U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                  >> 0xcU));
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
        } else if ((0x32U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
            if ((0x28U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                              | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                    if ((0xaU != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                    }
                }
            }
            if ((0x28U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x400U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q 
                    = (((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                        | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))
                        ? 1U : ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                                 ? 0U : 7U));
                if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                              | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                            ? 0x20U : 0U);
                }
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q 
            = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
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
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__2\n"); );
    // Body
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
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__15(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__15\n"); );
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_valid = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_ready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_eu_bus = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_lu_bus = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_wu_bus = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__state) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_ready) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_s 
                    = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sw) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sh)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sb));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_l 
                    = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lw) 
                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__half_sext)) 
                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__bit_sext)) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lhu)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lbu));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_eu_bus 
                    = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm)) 
                        << 0x1bU) | (QData)((IData)(
                                                    ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__alu_op 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__src1_is_pc) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__src2_is_imm) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_pc_jump) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ebreak) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_not_realize) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ecall_en) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__mret_en) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrs_op) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csrrw_op))))))))))))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                    = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)) 
                        << 0x17U) | (QData)((IData)(
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rd) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rs1) 
                                                         << 0xdU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rs2) 
                                                            << 8U) 
                                                           | ((((0x305U 
                                                                 == 
                                                                 (0xfffU 
                                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm)) 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op)) 
                                                               << 7U) 
                                                              | ((((0x341U 
                                                                    == 
                                                                    (0xfffU 
                                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm)) 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op)) 
                                                                  << 6U) 
                                                                 | ((((0x300U 
                                                                       == 
                                                                       (0xfffU 
                                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm)) 
                                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op)) 
                                                                     << 5U) 
                                                                    | ((((0x342U 
                                                                          == 
                                                                          (0xfffU 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm)) 
                                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op)) 
                                                                        << 4U) 
                                                                       | ((((0xf11U 
                                                                             == 
                                                                             (0xfffU 
                                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm)) 
                                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op)) 
                                                                           << 3U) 
                                                                          | ((((0xf12U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__imm)) 
                                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op)) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ecall_en) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__mret_en))))))))))))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_lu_bus 
                    = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sw) 
                         << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sh) 
                                    << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_sb) 
                                              << 2U))) 
                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rlsu_we) 
                           << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__wlsu_we)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_wu_bus 
                    = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lw) 
                         << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__half_sext) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lhu)) 
                                    << 6U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__bit_sext) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_lbu)) 
                                              << 5U))) 
                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__bit_sext) 
                           << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__half_sext) 
                                      << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_we) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__rlsu_we) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csr_w_gpr_we))))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_valid = 1U;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_ready = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_we 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__gpr_we_r;
            }
        }
    } else {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_ready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_ready = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_valid = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_ready 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_ready;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT____VdfgTmp_h730bf4f9__0 
        = ((0U != (0x1fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__du_to_gu_bus 
                                    >> 0x12U)))) & 
           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_we) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__state 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__next_state));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__TYPE_U 
        = ((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
           | (0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0 
        = (IData)((0U == (0xfff00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0 
        = (IData)((0x33U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h6b17a27c__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__ecall_en) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__mret_en));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__src1_is_pc 
        = ((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
           | ((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_csr_op 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__csr_w_gpr_we) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__is_pc_jump 
        = ((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_r)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__inst_jarl) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT__double_cal) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0))));
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
}
