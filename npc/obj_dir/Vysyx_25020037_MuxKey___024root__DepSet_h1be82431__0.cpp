// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25020037_MuxKey.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25020037_MuxKey__Syms.h"
#include "Vysyx_25020037_MuxKey___024root.h"

extern "C" svBitVecVal pmem_read(const svLogicVecVal* addr, int len);

VL_INLINE_OPT void Vysyx_25020037_MuxKey___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_MuxKey___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP\n"); );
    // Body
    svLogicVecVal addr__Vcvt[1];
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) VL_SET_SVLV_I(32, addr__Vcvt + 1 * addr__Vidx, addr);
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    svBitVecVal pmem_read__Vfuncrtn__Vcvt[1];
    pmem_read__Vfuncrtn__Vcvt[0] = pmem_read(addr__Vcvt, len__Vcvt);
    pmem_read__Vfuncrtn = VL_SET_I_SVBV(pmem_read__Vfuncrtn__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037_MuxKey___024root___dump_triggers__ico(Vysyx_25020037_MuxKey___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25020037_MuxKey___024root___eval_triggers__ico(Vysyx_25020037_MuxKey___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_MuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_MuxKey___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25020037_MuxKey___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037_MuxKey___024root___dump_triggers__act(Vysyx_25020037_MuxKey___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25020037_MuxKey___024root___eval_triggers__act(Vysyx_25020037_MuxKey___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_MuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_MuxKey___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25020037_MuxKey___024root___dump_triggers__act(vlSelf);
    }
#endif
}
