// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_mux12.h for the primary calling header

#include "Vm_mux12___024root.h"
#include "Vm_mux12__Syms.h"

//==========


void Vm_mux12___024root___ctor_var_reset(Vm_mux12___024root* vlSelf);

Vm_mux12___024root::Vm_mux12___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vm_mux12___024root___ctor_var_reset(this);
}

void Vm_mux12___024root::__Vconfigure(Vm_mux12__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vm_mux12___024root::~Vm_mux12___024root() {
}

void Vm_mux12___024root___eval_initial(Vm_mux12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux12___024root___eval_initial\n"); );
}

void Vm_mux12___024root___combo__TOP__1(Vm_mux12___024root* vlSelf);

void Vm_mux12___024root___eval_settle(Vm_mux12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux12___024root___eval_settle\n"); );
    // Body
    Vm_mux12___024root___combo__TOP__1(vlSelf);
}

void Vm_mux12___024root___final(Vm_mux12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux12___024root___final\n"); );
}

void Vm_mux12___024root___ctor_var_reset(Vm_mux12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux12___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = 0;
    vlSelf->b = 0;
    vlSelf->s = 0;
    vlSelf->y = 0;
}
