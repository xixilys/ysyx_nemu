// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer.h for the primary calling header

#include "Vtimer___024root.h"
#include "Vtimer__Syms.h"

//==========


void Vtimer___024root___ctor_var_reset(Vtimer___024root* vlSelf);

Vtimer___024root::Vtimer___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtimer___024root___ctor_var_reset(this);
}

void Vtimer___024root::__Vconfigure(Vtimer__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtimer___024root::~Vtimer___024root() {
}

extern const VlUnpacked<CData/*6:0*/, 16> Vtimer__ConstPool__TABLE_f35510fa_0;

void Vtimer___024root___settle__TOP__2(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___settle__TOP__2\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    // Body
    __Vtableidx1 = (0xfU & (IData)(vlSelf->timer__DOT__x1));
    vlSelf->bcd1 = Vtimer__ConstPool__TABLE_f35510fa_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & (IData)(vlSelf->timer__DOT__x2));
    vlSelf->bcd2 = Vtimer__ConstPool__TABLE_f35510fa_0
        [__Vtableidx2];
}

void Vtimer___024root___eval_initial(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__timer__DOT__clk_1s 
        = vlSelf->__VinpClk__TOP__timer__DOT__clk_1s;
}

void Vtimer___024root___eval_settle(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_settle\n"); );
    // Body
    Vtimer___024root___settle__TOP__2(vlSelf);
}

void Vtimer___024root___final(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___final\n"); );
}

void Vtimer___024root___ctor_var_reset(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rst = 0;
    vlSelf->stop = 0;
    vlSelf->start = 0;
    vlSelf->clk = 0;
    vlSelf->bcd1 = 0;
    vlSelf->bcd2 = 0;
    vlSelf->timer__DOT__clk_1s = 0;
    vlSelf->timer__DOT__x2 = 0;
    vlSelf->timer__DOT__x1 = 0;
    vlSelf->timer__DOT__count_clk = 0;
    vlSelf->timer__DOT__f1__DOT__counter_clk = 0;
    vlSelf->__VinpClk__TOP__timer__DOT__clk_1s = 0;
    vlSelf->__Vchglast__TOP__timer__DOT__clk_1s = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
