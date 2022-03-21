// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder83.h for the primary calling header

#include "Vencoder83___024root.h"
#include "Vencoder83__Syms.h"

//==========


void Vencoder83___024root___ctor_var_reset(Vencoder83___024root* vlSelf);

Vencoder83___024root::Vencoder83___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vencoder83___024root___ctor_var_reset(this);
}

void Vencoder83___024root::__Vconfigure(Vencoder83__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vencoder83___024root::~Vencoder83___024root() {
}

void Vencoder83___024root___eval_initial(Vencoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder83___024root___eval_initial\n"); );
}

void Vencoder83___024root___combo__TOP__1(Vencoder83___024root* vlSelf);

void Vencoder83___024root___eval_settle(Vencoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder83___024root___eval_settle\n"); );
    // Body
    Vencoder83___024root___combo__TOP__1(vlSelf);
}

void Vencoder83___024root___final(Vencoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder83___024root___final\n"); );
}

void Vencoder83___024root___ctor_var_reset(Vencoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder83___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x = 0;
    vlSelf->en = 0;
    vlSelf->y = 0;
    vlSelf->out = 0;
    vlSelf->i = 0;
}
