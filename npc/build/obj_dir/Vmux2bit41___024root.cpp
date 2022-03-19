// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2bit41.h for the primary calling header

#include "Vmux2bit41___024root.h"
#include "Vmux2bit41__Syms.h"

//==========

VL_INLINE_OPT void Vmux2bit41___024root___combo__TOP__1(Vmux2bit41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2bit41___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->mux2bit41__DOT____Vcellinp__i0____pinNumber3 
        = (0x48cU | ((vlSelf->x[0U] << 0xcU) | ((vlSelf->x
                                                 [1U] 
                                                 << 8U) 
                                                | ((vlSelf->x
                                                    [2U] 
                                                    << 4U) 
                                                   | vlSelf->x
                                                   [3U]))));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0xfU & (IData)(vlSelf->mux2bit41__DOT____Vcellinp__i0____pinNumber3));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0xfU & ((IData)(vlSelf->mux2bit41__DOT____Vcellinp__i0____pinNumber3) 
                   >> 4U));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0xfU & ((IData)(vlSelf->mux2bit41__DOT____Vcellinp__i0____pinNumber3) 
                   >> 8U));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0xfU & ((IData)(vlSelf->mux2bit41__DOT____Vcellinp__i0____pinNumber3) 
                   >> 0xcU));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (3U & vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (3U & vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (3U & vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (3U & vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (3U & (vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list
                 [0U] >> 2U));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (3U & (vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list
                 [1U] >> 2U));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (3U & (vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list
                 [2U] >> 2U));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (3U & (vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list
                 [3U] >> 2U));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->y) == vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list
         [0U]);
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->y) == vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list
            [1U]));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->y) == vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list
            [2U]));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->y) == vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list
            [3U]));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->y) == vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->y) == vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->y) == vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->y) == vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->f = vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__lut_out;
}

void Vmux2bit41___024root___eval(Vmux2bit41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2bit41___024root___eval\n"); );
    // Body
    Vmux2bit41___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

QData Vmux2bit41___024root___change_request_1(Vmux2bit41___024root* vlSelf);

VL_INLINE_OPT QData Vmux2bit41___024root___change_request(Vmux2bit41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2bit41___024root___change_request\n"); );
    // Body
    return (Vmux2bit41___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vmux2bit41___024root___change_request_1(Vmux2bit41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2bit41___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmux2bit41___024root___eval_debug_assertions(Vmux2bit41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2bit41___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->y & 0xfcU))) {
        Verilated::overWidthError("y");}
}
#endif  // VL_DEBUG
