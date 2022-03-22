// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfourbitalu.h for the primary calling header

#include "Vfourbitalu___024root.h"
#include "Vfourbitalu__Syms.h"

//==========

VL_INLINE_OPT void Vfourbitalu___024root___combo__TOP__1(Vfourbitalu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfourbitalu___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->fourbitalu__DOT__temp_adder = 0U;
    if ((1U & (~ ((IData)(vlSelf->x) >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->x) >> 1U)))) {
            vlSelf->fourbitalu__DOT__temp_adder = (0xfU 
                                                   & ((1U 
                                                       & (IData)(vlSelf->x))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ (IData)(vlSelf->b)))
                                                       : (IData)(vlSelf->b)));
        }
    }
    vlSelf->carry_flag = (1U & (((IData)(vlSelf->a) 
                                 + (IData)(vlSelf->fourbitalu__DOT__temp_adder)) 
                                >> 4U));
    vlSelf->fourbitalu__DOT__adder_out = (0xfU & ((IData)(vlSelf->a) 
                                                  + (IData)(vlSelf->fourbitalu__DOT__temp_adder)));
    vlSelf->zero = (1U & (~ (IData)((0U != (IData)(vlSelf->fourbitalu__DOT__adder_out)))));
    vlSelf->overflower = (((1U & ((IData)(vlSelf->a) 
                                  >> 3U)) == (1U & 
                                              ((IData)(vlSelf->fourbitalu__DOT__temp_adder) 
                                               >> 3U))) 
                          & ((1U & ((IData)(vlSelf->fourbitalu__DOT__adder_out) 
                                    >> 3U)) != (1U 
                                                & ((IData)(vlSelf->a) 
                                                   >> 3U))));
    if ((4U & (IData)(vlSelf->x))) {
        if ((2U & (IData)(vlSelf->x))) {
            if ((1U & (IData)(vlSelf->x))) {
                vlSelf->out = (((IData)(vlSelf->a) 
                                == (IData)(vlSelf->b))
                                ? 1U : 0U);
            } else {
                vlSelf->out = (1U & (IData)(vlSelf->out));
                vlSelf->out = ((0xeU & (IData)(vlSelf->out)) 
                               | ((((1U & ((IData)(vlSelf->a) 
                                           >> 3U)) 
                                    > (1U & ((IData)(vlSelf->b) 
                                             >> 3U))) 
                                   | ((((IData)(vlSelf->a) 
                                        < (IData)(vlSelf->b)) 
                                       & (~ ((IData)(vlSelf->a) 
                                             >> 3U))) 
                                      & (~ ((IData)(vlSelf->b) 
                                            >> 3U)))) 
                                  | ((((IData)(vlSelf->a) 
                                       > (IData)(vlSelf->b)) 
                                      & ((IData)(vlSelf->a) 
                                         >> 3U)) & 
                                     ((IData)(vlSelf->b) 
                                      >> 3U))));
            }
        } else {
            vlSelf->out = ((1U & (IData)(vlSelf->x))
                            ? ((IData)(vlSelf->a) ^ (IData)(vlSelf->b))
                            : ((IData)(vlSelf->a) | (IData)(vlSelf->b)));
        }
    } else {
        vlSelf->out = (0xfU & ((2U & (IData)(vlSelf->x))
                                ? ((1U & (IData)(vlSelf->x))
                                    ? ((IData)(vlSelf->a) 
                                       & (IData)(vlSelf->b))
                                    : (~ (IData)(vlSelf->a)))
                                : (IData)(vlSelf->fourbitalu__DOT__adder_out)));
    }
}

void Vfourbitalu___024root___eval(Vfourbitalu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfourbitalu___024root___eval\n"); );
    // Body
    Vfourbitalu___024root___combo__TOP__1(vlSelf);
}

QData Vfourbitalu___024root___change_request_1(Vfourbitalu___024root* vlSelf);

VL_INLINE_OPT QData Vfourbitalu___024root___change_request(Vfourbitalu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfourbitalu___024root___change_request\n"); );
    // Body
    return (Vfourbitalu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vfourbitalu___024root___change_request_1(Vfourbitalu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfourbitalu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vfourbitalu___024root___eval_debug_assertions(Vfourbitalu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfourbitalu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->x & 0xf8U))) {
        Verilated::overWidthError("x");}
}
#endif  // VL_DEBUG
