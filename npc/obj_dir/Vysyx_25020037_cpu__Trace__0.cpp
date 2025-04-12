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
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_25020037_cpu__DOT__src1),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_25020037_cpu__DOT__src2),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_25020037_cpu__DOT__result),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_25020037_cpu__DOT__imm),32);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type),3);
        bufp->chgIData(oldp+6,((vlSelf->ysyx_25020037_cpu__DOT__imm 
                                + vlSelf->ysyx_25020037_cpu__DOT__src1)),32);
        bufp->chgBit(oldp+7,((2U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))));
        bufp->chgBit(oldp+8,(vlSelf->ysyx_25020037_cpu__DOT__is_jalr));
        bufp->chgIData(oldp+9,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__immI),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+10,(vlSelf->ysyx_25020037_cpu__DOT__rst_delay));
        bufp->chgIData(oldp+11,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0]),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[1]),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[2]),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[3]),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[4]),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[5]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[6]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[7]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[8]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[9]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[10]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[11]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[12]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[13]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[14]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[15]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[16]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[17]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[18]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[19]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[20]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[21]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[22]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[23]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[24]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[25]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[26]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[27]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[28]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[29]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[30]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[31]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4),32);
    }
    bufp->chgBit(oldp+75,(vlSelf->clk));
    bufp->chgBit(oldp+76,(vlSelf->rst));
    bufp->chgIData(oldp+77,(vlSelf->inst),32);
    bufp->chgIData(oldp+78,(vlSelf->pc),32);
    bufp->chgIData(oldp+79,(vlSelf->regs[0]),32);
    bufp->chgIData(oldp+80,(vlSelf->regs[1]),32);
    bufp->chgIData(oldp+81,(vlSelf->regs[2]),32);
    bufp->chgIData(oldp+82,(vlSelf->regs[3]),32);
    bufp->chgIData(oldp+83,(vlSelf->regs[4]),32);
    bufp->chgIData(oldp+84,(vlSelf->regs[5]),32);
    bufp->chgIData(oldp+85,(vlSelf->regs[6]),32);
    bufp->chgIData(oldp+86,(vlSelf->regs[7]),32);
    bufp->chgIData(oldp+87,(vlSelf->regs[8]),32);
    bufp->chgIData(oldp+88,(vlSelf->regs[9]),32);
    bufp->chgIData(oldp+89,(vlSelf->regs[10]),32);
    bufp->chgIData(oldp+90,(vlSelf->regs[11]),32);
    bufp->chgIData(oldp+91,(vlSelf->regs[12]),32);
    bufp->chgIData(oldp+92,(vlSelf->regs[13]),32);
    bufp->chgIData(oldp+93,(vlSelf->regs[14]),32);
    bufp->chgIData(oldp+94,(vlSelf->regs[15]),32);
    bufp->chgIData(oldp+95,(vlSelf->regs[16]),32);
    bufp->chgIData(oldp+96,(vlSelf->regs[17]),32);
    bufp->chgIData(oldp+97,(vlSelf->regs[18]),32);
    bufp->chgIData(oldp+98,(vlSelf->regs[19]),32);
    bufp->chgIData(oldp+99,(vlSelf->regs[20]),32);
    bufp->chgIData(oldp+100,(vlSelf->regs[21]),32);
    bufp->chgIData(oldp+101,(vlSelf->regs[22]),32);
    bufp->chgIData(oldp+102,(vlSelf->regs[23]),32);
    bufp->chgIData(oldp+103,(vlSelf->regs[24]),32);
    bufp->chgIData(oldp+104,(vlSelf->regs[25]),32);
    bufp->chgIData(oldp+105,(vlSelf->regs[26]),32);
    bufp->chgIData(oldp+106,(vlSelf->regs[27]),32);
    bufp->chgIData(oldp+107,(vlSelf->regs[28]),32);
    bufp->chgIData(oldp+108,(vlSelf->regs[29]),32);
    bufp->chgIData(oldp+109,(vlSelf->regs[30]),32);
    bufp->chgIData(oldp+110,(vlSelf->regs[31]),32);
    bufp->chgCData(oldp+111,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgCData(oldp+112,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+113,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgBit(oldp+114,(((~ (IData)(vlSelf->rst)) 
                            & ((1U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type)) 
                               | ((4U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type)) 
                                  | ((0U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type)) 
                                     | (5U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))))))));
    bufp->chgIData(oldp+115,(((5U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))
                               ? (vlSelf->pc + vlSelf->ysyx_25020037_cpu__DOT__imm)
                               : ((1U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))
                                   ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__is_jalr)
                                       ? (vlSelf->ysyx_25020037_cpu__DOT__src1 
                                          + vlSelf->ysyx_25020037_cpu__DOT__imm)
                                       : ((IData)(4U) 
                                          + vlSelf->pc))
                                   : ((IData)(4U) + vlSelf->pc)))),32);
    bufp->chgIData(oldp+116,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgBit(oldp+117,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+118,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x500U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+119,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x580U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+120,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x600U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+121,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x680U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+122,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x700U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+123,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x780U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+124,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x800U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+125,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x880U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+126,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x900U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+127,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x980U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+128,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+129,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0xa00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+130,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0xa80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+131,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0xb00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+132,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0xb80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+133,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0xc00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+134,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0xc80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+135,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0xd00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+136,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0xd80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+137,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0xe00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+138,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0xe80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+139,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x100U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+140,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0xf00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+141,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0xf80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+142,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x180U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+143,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x200U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+144,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x280U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+145,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x300U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+146,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x380U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+147,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x400U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+148,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
                            & (0x480U == (0xf80U & vlSelf->inst)))));
    bufp->chgIData(oldp+149,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+150,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+151,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->inst) 
                                            | ((0x800U 
                                                & (vlSelf->inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)))))),32);
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
}
