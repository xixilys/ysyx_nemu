// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_mux12.h for the primary calling header

#include "Vm_mux12___024root.h"
#include "Vm_mux12__Syms.h"

//==========

VL_INLINE_OPT void Vm_mux12___024root___combo__TOP__1(Vm_mux12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux12___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->y = (((~ (IData)(vlSelf->s)) & (IData)(vlSelf->a)) 
                 | ((IData)(vlSelf->s) & (IData)(vlSelf->b)));
}

void Vm_mux12___024root___eval(Vm_mux12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux12___024root___eval\n"); );
    // Body
    Vm_mux12___024root___combo__TOP__1(vlSelf);
}

QData Vm_mux12___024root___change_request_1(Vm_mux12___024root* vlSelf);

VL_INLINE_OPT QData Vm_mux12___024root___change_request(Vm_mux12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux12___024root___change_request\n"); );
    // Body
    return (Vm_mux12___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vm_mux12___024root___change_request_1(Vm_mux12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux12___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vm_mux12___024root___eval_debug_assertions(Vm_mux12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux12___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->s & 0xfeU))) {
        Verilated::overWidthError("s");}
}
#endif  // VL_DEBUG
