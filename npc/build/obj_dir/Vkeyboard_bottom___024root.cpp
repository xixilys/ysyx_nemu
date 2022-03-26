// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard_bottom.h for the primary calling header

#include "Vkeyboard_bottom___024root.h"
#include "Vkeyboard_bottom__Syms.h"

//==========

VL_INLINE_OPT void Vkeyboard_bottom___024root___sequent__TOP__1(Vkeyboard_bottom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_bottom___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*2:0*/ __Vdly__keyboard_bottom__DOT__k1__DOT__ps2_clk_sync;
    CData/*3:0*/ __Vdly__keyboard_bottom__DOT__k1__DOT__count;
    CData/*2:0*/ __Vdly__keyboard_bottom__DOT__k1__DOT__w_ptr;
    CData/*0:0*/ __Vdly__keyboard_bottom__DOT__overflow;
    // Body
    __Vdly__keyboard_bottom__DOT__k1__DOT__ps2_clk_sync 
        = vlSelf->keyboard_bottom__DOT__k1__DOT__ps2_clk_sync;
    vlSelf->__Vdly__keyboard_bottom__DOT__ready = vlSelf->keyboard_bottom__DOT__ready;
    __Vdly__keyboard_bottom__DOT__overflow = vlSelf->keyboard_bottom__DOT__overflow;
    vlSelf->__Vdly__keyboard_bottom__DOT__k1__DOT__r_ptr 
        = vlSelf->keyboard_bottom__DOT__k1__DOT__r_ptr;
    __Vdly__keyboard_bottom__DOT__k1__DOT__w_ptr = vlSelf->keyboard_bottom__DOT__k1__DOT__w_ptr;
    __Vdly__keyboard_bottom__DOT__k1__DOT__count = vlSelf->keyboard_bottom__DOT__k1__DOT__count;
    vlSelf->__Vdlyvset__keyboard_bottom__DOT__k1__DOT__fifo__v0 = 0U;
    __Vdly__keyboard_bottom__DOT__k1__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->rst) {
        __Vdly__keyboard_bottom__DOT__k1__DOT__count = 0U;
        __Vdly__keyboard_bottom__DOT__k1__DOT__w_ptr = 0U;
        vlSelf->__Vdly__keyboard_bottom__DOT__k1__DOT__r_ptr = 0U;
        __Vdly__keyboard_bottom__DOT__overflow = 0U;
        vlSelf->__Vdly__keyboard_bottom__DOT__ready = 0U;
    } else {
        if (vlSelf->keyboard_bottom__DOT__ready) {
            if ((1U & (~ (IData)(vlSelf->keyboard_bottom__DOT__nextdata_n)))) {
                vlSelf->__Vdly__keyboard_bottom__DOT__k1__DOT__r_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__r_ptr)));
                if (((IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__r_ptr))))) {
                    vlSelf->__Vdly__keyboard_bottom__DOT__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__count))) {
                if (VL_UNLIKELY((((~ (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__buffer)) 
                                  & (IData)(vlSelf->ps2_data)) 
                                 & VL_REDXOR_32((0x1ffU 
                                                 & ((IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__buffer) 
                                                    >> 1U)))))) {
                    VL_WRITEF("recieve %x\n",8,(0xffU 
                                                & ((IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__buffer) 
                                                   >> 1U)));
                    vlSelf->__Vdlyvval__keyboard_bottom__DOT__k1__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__buffer) 
                                    >> 1U));
                    vlSelf->__Vdlyvset__keyboard_bottom__DOT__k1__DOT__fifo__v0 = 1U;
                    vlSelf->__Vdlyvdim0__keyboard_bottom__DOT__k1__DOT__fifo__v0 
                        = vlSelf->keyboard_bottom__DOT__k1__DOT__w_ptr;
                    vlSelf->__Vdly__keyboard_bottom__DOT__ready = 1U;
                    __Vdly__keyboard_bottom__DOT__k1__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__w_ptr)));
                    __Vdly__keyboard_bottom__DOT__overflow 
                        = ((IData)(vlSelf->keyboard_bottom__DOT__overflow) 
                           | ((IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__r_ptr) 
                              == (7U & ((IData)(1U) 
                                        + (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__w_ptr)))));
                }
                __Vdly__keyboard_bottom__DOT__k1__DOT__count = 0U;
            } else {
                vlSelf->keyboard_bottom__DOT__k1__DOT____Vlvbound1 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__count))) {
                    vlSelf->keyboard_bottom__DOT__k1__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__count))) 
                            & (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->keyboard_bottom__DOT__k1__DOT____Vlvbound1) 
                                        << (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__count))));
                }
                __Vdly__keyboard_bottom__DOT__k1__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__count)));
            }
        }
    }
    vlSelf->keyboard_bottom__DOT__k1__DOT__count = __Vdly__keyboard_bottom__DOT__k1__DOT__count;
    vlSelf->keyboard_bottom__DOT__k1__DOT__w_ptr = __Vdly__keyboard_bottom__DOT__k1__DOT__w_ptr;
    vlSelf->keyboard_bottom__DOT__overflow = __Vdly__keyboard_bottom__DOT__overflow;
    vlSelf->keyboard_bottom__DOT__k1__DOT__ps2_clk_sync 
        = __Vdly__keyboard_bottom__DOT__k1__DOT__ps2_clk_sync;
}

VL_INLINE_OPT void Vkeyboard_bottom___024root___sequent__TOP__2(Vkeyboard_bottom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_bottom___024root___sequent__TOP__2\n"); );
    // Variables
    IData/*31:0*/ __Vdly__keyboard_bottom__DOT__data_sync;
    // Body
    __Vdly__keyboard_bottom__DOT__data_sync = vlSelf->keyboard_bottom__DOT__data_sync;
    vlSelf->led = ((~ (IData)(vlSelf->rst)) & ((((vlSelf->keyboard_bottom__DOT__data_sync 
                                                  >> 0x18U) 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->keyboard_bottom__DOT__data_sync 
                                                     >> 0x10U))) 
                                                & ((0xffU 
                                                    & (vlSelf->keyboard_bottom__DOT__data_sync 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->keyboard_bottom__DOT__data_sync 
                                                       >> 8U)))) 
                                               & ((0xffU 
                                                   & (vlSelf->keyboard_bottom__DOT__data_sync 
                                                      >> 8U)) 
                                                  == 
                                                  (0xffU 
                                                   & vlSelf->keyboard_bottom__DOT__data_sync))));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->keyboard_bottom__DOT__nextdata_n = 
            (1U & (~ (IData)(vlSelf->keyboard_bottom__DOT__ready)));
    }
    if (vlSelf->rst) {
        __Vdly__keyboard_bottom__DOT__data_sync = 0U;
    } else if (vlSelf->keyboard_bottom__DOT__ready) {
        __Vdly__keyboard_bottom__DOT__data_sync = (
                                                   (vlSelf->keyboard_bottom__DOT__data_sync 
                                                    << 8U) 
                                                   | vlSelf->keyboard_bottom__DOT__k1__DOT__fifo
                                                   [vlSelf->keyboard_bottom__DOT__k1__DOT__r_ptr]);
    }
    vlSelf->keyboard_bottom__DOT__data_sync = __Vdly__keyboard_bottom__DOT__data_sync;
}

VL_INLINE_OPT void Vkeyboard_bottom___024root___sequent__TOP__3(Vkeyboard_bottom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_bottom___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->keyboard_bottom__DOT__k1__DOT__r_ptr = vlSelf->__Vdly__keyboard_bottom__DOT__k1__DOT__r_ptr;
    if (vlSelf->__Vdlyvset__keyboard_bottom__DOT__k1__DOT__fifo__v0) {
        vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[vlSelf->__Vdlyvdim0__keyboard_bottom__DOT__k1__DOT__fifo__v0] 
            = vlSelf->__Vdlyvval__keyboard_bottom__DOT__k1__DOT__fifo__v0;
    }
    vlSelf->keyboard_bottom__DOT__ready = vlSelf->__Vdly__keyboard_bottom__DOT__ready;
}

void Vkeyboard_bottom___024root___eval(Vkeyboard_bottom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_bottom___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vkeyboard_bottom___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vkeyboard_bottom___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vkeyboard_bottom___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Vkeyboard_bottom___024root___change_request_1(Vkeyboard_bottom___024root* vlSelf);

VL_INLINE_OPT QData Vkeyboard_bottom___024root___change_request(Vkeyboard_bottom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_bottom___024root___change_request\n"); );
    // Body
    return (Vkeyboard_bottom___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vkeyboard_bottom___024root___change_request_1(Vkeyboard_bottom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_bottom___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vkeyboard_bottom___024root___eval_debug_assertions(Vkeyboard_bottom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_bottom___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
