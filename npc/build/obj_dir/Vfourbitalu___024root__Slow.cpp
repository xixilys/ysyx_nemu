// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfourbitalu.h for the primary calling header

#include "Vfourbitalu___024root.h"
#include "Vfourbitalu__Syms.h"

//==========


void Vfourbitalu___024root___ctor_var_reset(Vfourbitalu___024root* vlSelf);

Vfourbitalu___024root::Vfourbitalu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vfourbitalu___024root___ctor_var_reset(this);
}

void Vfourbitalu___024root::__Vconfigure(Vfourbitalu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vfourbitalu___024root::~Vfourbitalu___024root() {
}

void Vfourbitalu___024root___eval_initial(Vfourbitalu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfourbitalu___024root___eval_initial\n"); );
}

void Vfourbitalu___024root___combo__TOP__1(Vfourbitalu___024root* vlSelf);

void Vfourbitalu___024root___eval_settle(Vfourbitalu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfourbitalu___024root___eval_settle\n"); );
    // Body
    Vfourbitalu___024root___combo__TOP__1(vlSelf);
}

void Vfourbitalu___024root___final(Vfourbitalu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfourbitalu___024root___final\n"); );
}

void Vfourbitalu___024root___ctor_var_reset(Vfourbitalu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfourbitalu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = 0;
    vlSelf->b = 0;
    vlSelf->x = 0;
    vlSelf->out = 0;
    vlSelf->overflower = 0;
    vlSelf->zero = 0;
    vlSelf->carry_flag = 0;
    vlSelf->fourbitalu__DOT__temp_adder = 0;
    vlSelf->fourbitalu__DOT__adder_out = 0;
    vlSelf->fourbitalu__DOT__normal_a = 0;
    vlSelf->fourbitalu__DOT__normal_b = 0;
}
