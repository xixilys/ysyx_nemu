// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_module.h for the primary calling header

#include "Vvga_module___024root.h"
#include "Vvga_module__Syms.h"

//==========

VL_INLINE_OPT void Vvga_module___024root___sequent__TOP__2(Vvga_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_module___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ __Vdly__vga_clk;
    SData/*9:0*/ __Vdly__vga_module__DOT__vga_1__DOT__x_cnt;
    IData/*31:0*/ __Vdly__vga_module__DOT__vga_1__DOT__clk_1__DOT__count;
    // Body
    __Vdly__vga_clk = vlSelf->vga_clk;
    __Vdly__vga_module__DOT__vga_1__DOT__clk_1__DOT__count 
        = vlSelf->vga_module__DOT__vga_1__DOT__clk_1__DOT__count;
    __Vdly__vga_module__DOT__vga_1__DOT__x_cnt = vlSelf->vga_module__DOT__vga_1__DOT__x_cnt;
    if (vlSelf->rst) {
        __Vdly__vga_module__DOT__vga_1__DOT__clk_1__DOT__count = 0U;
        __Vdly__vga_clk = 0U;
    } else if ((1U == vlSelf->vga_module__DOT__vga_1__DOT__clk_1__DOT__count)) {
        __Vdly__vga_clk = (1U & (~ (IData)(vlSelf->vga_clk)));
        __Vdly__vga_module__DOT__vga_1__DOT__clk_1__DOT__count = 0U;
    } else {
        __Vdly__vga_module__DOT__vga_1__DOT__clk_1__DOT__count 
            = ((IData)(1U) + vlSelf->vga_module__DOT__vga_1__DOT__clk_1__DOT__count);
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->vga_module__DOT__vga_1__DOT__y_cnt 
            = (((0x20dU == (IData)(vlSelf->vga_module__DOT__vga_1__DOT__y_cnt)) 
                & (0x320U == (IData)(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt)))
                ? 1U : (0x3ffU & ((0x320U == (IData)(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt))
                                   ? ((IData)(1U) + (IData)(vlSelf->vga_module__DOT__vga_1__DOT__y_cnt))
                                   : (IData)(vlSelf->vga_module__DOT__vga_1__DOT__y_cnt))));
    }
    if (vlSelf->rst) {
        __Vdly__vga_module__DOT__vga_1__DOT__x_cnt = 1U;
    }
    __Vdly__vga_module__DOT__vga_1__DOT__x_cnt = ((IData)(vlSelf->rst)
                                                   ? 1U
                                                   : 
                                                  ((0x320U 
                                                    == (IData)(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt))
                                                    ? 1U
                                                    : 
                                                   (0x3ffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt)))));
    vlSelf->vga_module__DOT__vga_1__DOT__clk_1__DOT__count 
        = __Vdly__vga_module__DOT__vga_1__DOT__clk_1__DOT__count;
    vlSelf->vga_clk = __Vdly__vga_clk;
    vlSelf->vga_module__DOT__vga_1__DOT__x_cnt = __Vdly__vga_module__DOT__vga_1__DOT__x_cnt;
    vlSelf->vga_vs = (2U < (IData)(vlSelf->vga_module__DOT__vga_1__DOT__y_cnt));
    vlSelf->vga_module__DOT__vga_1__DOT__v_valid = 
        ((0x23U < (IData)(vlSelf->vga_module__DOT__vga_1__DOT__y_cnt)) 
         & (0x203U >= (IData)(vlSelf->vga_module__DOT__vga_1__DOT__y_cnt)));
    vlSelf->vga_hs = (0x60U < (IData)(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt));
    vlSelf->vga_module__DOT__vga_1__DOT__h_valid = 
        ((0x90U < (IData)(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt)) 
         & (0x310U >= (IData)(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt)));
    if (vlSelf->vga_module__DOT__vga_1__DOT__v_valid) {
        vlSelf->vga_module__DOT__v_addr = (0x3ffU & 
                                           (((IData)(vlSelf->vga_module__DOT__vga_1__DOT__y_cnt) 
                                             - (IData)(0x23U)) 
                                            - (IData)(1U)));
        vlSelf->vga_blank_n = ((IData)(vlSelf->vga_module__DOT__vga_1__DOT__h_valid) 
                               & 1U);
    } else {
        vlSelf->vga_module__DOT__v_addr = 0U;
        vlSelf->vga_blank_n = 0U;
    }
    vlSelf->vga_module__DOT__h_addr = ((IData)(vlSelf->vga_module__DOT__vga_1__DOT__h_valid)
                                        ? (0x3ffU & 
                                           (((IData)(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt) 
                                             - (IData)(0x90U)) 
                                            - (IData)(1U)))
                                        : 0U);
    vlSelf->addr_v = vlSelf->vga_module__DOT__v_addr;
    vlSelf->addr_h = vlSelf->vga_module__DOT__h_addr;
    vlSelf->vga_module__DOT__vga_data = vlSelf->vga_module__DOT__vga_data_array
        [(((IData)(vlSelf->vga_module__DOT__h_addr) 
           << 9U) | (0x1ffU & (IData)(vlSelf->vga_module__DOT__v_addr)))];
    vlSelf->vga_r = (0xffU & (vlSelf->vga_module__DOT__vga_data 
                              >> 0x10U));
    vlSelf->vga_g = (0xffU & (vlSelf->vga_module__DOT__vga_data 
                              >> 8U));
    vlSelf->vga_b = (0xffU & vlSelf->vga_module__DOT__vga_data);
}

void Vvga_module___024root___eval(Vvga_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_module___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vvga_module___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Vvga_module___024root___change_request_1(Vvga_module___024root* vlSelf);

VL_INLINE_OPT QData Vvga_module___024root___change_request(Vvga_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_module___024root___change_request\n"); );
    // Body
    return (Vvga_module___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vvga_module___024root___change_request_1(Vvga_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_module___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vvga_module___024root___eval_debug_assertions(Vvga_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_module___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
