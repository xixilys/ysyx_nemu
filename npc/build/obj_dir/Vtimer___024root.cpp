// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer.h for the primary calling header

#include "Vtimer___024root.h"
#include "Vtimer__Syms.h"

//==========

VL_INLINE_OPT void Vtimer___024root___sequent__TOP__1(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___sequent__TOP__1\n"); );
    // Variables
    IData/*31:0*/ __Vdly__timer__DOT__f1__DOT__counter_clk;
    // Body
    __Vdly__timer__DOT__f1__DOT__counter_clk = vlSelf->timer__DOT__f1__DOT__counter_clk;
    if (vlSelf->rst) {
        __Vdly__timer__DOT__f1__DOT__counter_clk = 0U;
    } else if ((0x61a7U == vlSelf->timer__DOT__f1__DOT__counter_clk)) {
        vlSelf->timer__DOT__clk_1s = (1U & (~ (IData)(vlSelf->timer__DOT__clk_1s)));
        __Vdly__timer__DOT__f1__DOT__counter_clk = 0U;
    } else {
        __Vdly__timer__DOT__f1__DOT__counter_clk = 
            ((IData)(1U) + vlSelf->timer__DOT__f1__DOT__counter_clk);
    }
    vlSelf->timer__DOT__f1__DOT__counter_clk = __Vdly__timer__DOT__f1__DOT__counter_clk;
}

extern const VlUnpacked<CData/*6:0*/, 16> Vtimer__ConstPool__TABLE_f35510fa_0;

VL_INLINE_OPT void Vtimer___024root___sequent__TOP__3(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*7:0*/ __Vdly__timer__DOT__count_clk;
    // Body
    __Vdly__timer__DOT__count_clk = vlSelf->timer__DOT__count_clk;
    __Vdly__timer__DOT__count_clk = ((IData)(vlSelf->rst)
                                      ? 0U : ((((0x63U 
                                                 == (IData)(vlSelf->timer__DOT__count_clk)) 
                                                & (~ (IData)(vlSelf->stop))) 
                                               & (IData)(vlSelf->start))
                                               ? 0U
                                               : (0xffU 
                                                  & (((~ (IData)(vlSelf->stop)) 
                                                      & (IData)(vlSelf->start))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->timer__DOT__count_clk))
                                                      : (IData)(vlSelf->timer__DOT__count_clk)))));
    vlSelf->timer__DOT__x2 = (0xffU & VL_MODDIV_III(32, (IData)(vlSelf->timer__DOT__count_clk), (IData)(0xaU)));
    vlSelf->timer__DOT__x1 = (0xffU & VL_DIV_III(32, (IData)(vlSelf->timer__DOT__count_clk), (IData)(0xaU)));
    vlSelf->timer__DOT__count_clk = __Vdly__timer__DOT__count_clk;
    __Vtableidx2 = (0xfU & (IData)(vlSelf->timer__DOT__x2));
    vlSelf->bcd2 = Vtimer__ConstPool__TABLE_f35510fa_0
        [__Vtableidx2];
    __Vtableidx1 = (0xfU & (IData)(vlSelf->timer__DOT__x1));
    vlSelf->bcd1 = Vtimer__ConstPool__TABLE_f35510fa_0
        [__Vtableidx1];
}

void Vtimer___024root___eval(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtimer___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))) 
         | ((IData)(vlSelf->__VinpClk__TOP__timer__DOT__clk_1s) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__timer__DOT__clk_1s))))) {
        Vtimer___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__timer__DOT__clk_1s 
        = vlSelf->__VinpClk__TOP__timer__DOT__clk_1s;
    vlSelf->__VinpClk__TOP__timer__DOT__clk_1s = vlSelf->timer__DOT__clk_1s;
}

QData Vtimer___024root___change_request_1(Vtimer___024root* vlSelf);

VL_INLINE_OPT QData Vtimer___024root___change_request(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___change_request\n"); );
    // Body
    return (Vtimer___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtimer___024root___change_request_1(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->timer__DOT__clk_1s ^ vlSelf->__Vchglast__TOP__timer__DOT__clk_1s));
    VL_DEBUG_IF( if(__req && ((vlSelf->timer__DOT__clk_1s ^ vlSelf->__Vchglast__TOP__timer__DOT__clk_1s))) VL_DBG_MSGF("        CHANGE: /media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/npc/vsrc/timer.v:9: timer.clk_1s\n"); );
    // Final
    vlSelf->__Vchglast__TOP__timer__DOT__clk_1s = vlSelf->timer__DOT__clk_1s;
    return __req;
}

#ifdef VL_DEBUG
void Vtimer___024root___eval_debug_assertions(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->stop & 0xfeU))) {
        Verilated::overWidthError("stop");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
