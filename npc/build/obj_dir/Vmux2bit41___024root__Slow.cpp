// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2bit41.h for the primary calling header

#include "Vmux2bit41___024root.h"
#include "Vmux2bit41__Syms.h"

//==========


void Vmux2bit41___024root___ctor_var_reset(Vmux2bit41___024root* vlSelf);

Vmux2bit41___024root::Vmux2bit41___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmux2bit41___024root___ctor_var_reset(this);
}

void Vmux2bit41___024root::__Vconfigure(Vmux2bit41__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmux2bit41___024root::~Vmux2bit41___024root() {
}

void Vmux2bit41___024root___eval_initial(Vmux2bit41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2bit41___024root___eval_initial\n"); );
}

void Vmux2bit41___024root___combo__TOP__1(Vmux2bit41___024root* vlSelf);

void Vmux2bit41___024root___eval_settle(Vmux2bit41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2bit41___024root___eval_settle\n"); );
    // Body
    Vmux2bit41___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vmux2bit41___024root___final(Vmux2bit41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2bit41___024root___final\n"); );
}

void Vmux2bit41___024root___ctor_var_reset(Vmux2bit41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2bit41___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->y = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->x[__Vi0] = 0;
    }
    vlSelf->f = 0;
    vlSelf->mux2bit41__DOT____Vcellinp__i0____pinNumber3 = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__lut_out = 0;
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
