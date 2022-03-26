// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard_bottom.h for the primary calling header

#include "Vkeyboard_bottom___024root.h"
#include "Vkeyboard_bottom__Syms.h"

//==========


void Vkeyboard_bottom___024root___ctor_var_reset(Vkeyboard_bottom___024root* vlSelf);

Vkeyboard_bottom___024root::Vkeyboard_bottom___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vkeyboard_bottom___024root___ctor_var_reset(this);
}

void Vkeyboard_bottom___024root::__Vconfigure(Vkeyboard_bottom__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vkeyboard_bottom___024root::~Vkeyboard_bottom___024root() {
}

void Vkeyboard_bottom___024root___eval_initial(Vkeyboard_bottom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_bottom___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vkeyboard_bottom___024root___eval_settle(Vkeyboard_bottom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_bottom___024root___eval_settle\n"); );
}

void Vkeyboard_bottom___024root___final(Vkeyboard_bottom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_bottom___024root___final\n"); );
}

void Vkeyboard_bottom___024root___ctor_var_reset(Vkeyboard_bottom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_bottom___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->led = 0;
    vlSelf->keyboard_bottom__DOT__data_sync = 0;
    vlSelf->keyboard_bottom__DOT__ready = 0;
    vlSelf->keyboard_bottom__DOT__overflow = 0;
    vlSelf->keyboard_bottom__DOT__nextdata_n = 0;
    vlSelf->keyboard_bottom__DOT__k1__DOT__buffer = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->keyboard_bottom__DOT__k1__DOT__w_ptr = 0;
    vlSelf->keyboard_bottom__DOT__k1__DOT__r_ptr = 0;
    vlSelf->keyboard_bottom__DOT__k1__DOT__count = 0;
    vlSelf->keyboard_bottom__DOT__k1__DOT__ps2_clk_sync = 0;
    vlSelf->keyboard_bottom__DOT__k1__DOT____Vlvbound1 = 0;
    vlSelf->__Vdly__keyboard_bottom__DOT__k1__DOT__r_ptr = 0;
    vlSelf->__Vdly__keyboard_bottom__DOT__ready = 0;
    vlSelf->__Vdlyvdim0__keyboard_bottom__DOT__k1__DOT__fifo__v0 = 0;
    vlSelf->__Vdlyvval__keyboard_bottom__DOT__k1__DOT__fifo__v0 = 0;
    vlSelf->__Vdlyvset__keyboard_bottom__DOT__k1__DOT__fifo__v0 = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
