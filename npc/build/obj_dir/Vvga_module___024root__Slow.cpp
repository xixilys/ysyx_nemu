// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_module.h for the primary calling header

#include "Vvga_module___024root.h"
#include "Vvga_module__Syms.h"

//==========


void Vvga_module___024root___ctor_var_reset(Vvga_module___024root* vlSelf);

Vvga_module___024root::Vvga_module___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vvga_module___024root___ctor_var_reset(this);
}

void Vvga_module___024root::__Vconfigure(Vvga_module__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vvga_module___024root::~Vvga_module___024root() {
}

void Vvga_module___024root___initial__TOP__1(Vvga_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_module___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x74757265U;
    __Vtemp1[2U] = 0x2f706963U;
    __Vtemp1[3U] = 0x75726365U;
    __Vtemp1[4U] = 0x7265736fU;
    VL_READMEM_N(true, 24, 524288, 0, VL_CVT_PACK_STR_NW(5, __Vtemp1)
                 ,  &(vlSelf->vga_module__DOT__vga_data_array)
                 , 0, ~0ULL);
}

void Vvga_module___024root___settle__TOP__3(Vvga_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_module___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->vga_hs = (0x60U < (IData)(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt));
    vlSelf->vga_vs = (2U < (IData)(vlSelf->vga_module__DOT__vga_1__DOT__y_cnt));
    vlSelf->vga_module__DOT__vga_1__DOT__h_valid = 
        ((0x90U < (IData)(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt)) 
         & (0x310U >= (IData)(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt)));
    vlSelf->vga_module__DOT__vga_1__DOT__v_valid = 
        ((0x23U < (IData)(vlSelf->vga_module__DOT__vga_1__DOT__y_cnt)) 
         & (0x203U >= (IData)(vlSelf->vga_module__DOT__vga_1__DOT__y_cnt)));
    if (vlSelf->vga_module__DOT__vga_1__DOT__h_valid) {
        vlSelf->vga_module__DOT__h_addr = (0x3ffU & 
                                           (((IData)(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt) 
                                             - (IData)(0x90U)) 
                                            - (IData)(1U)));
        vlSelf->vga_blank_n = ((IData)(vlSelf->vga_module__DOT__vga_1__DOT__v_valid) 
                               & 1U);
    } else {
        vlSelf->vga_module__DOT__h_addr = 0U;
        vlSelf->vga_blank_n = 0U;
    }
    vlSelf->vga_module__DOT__v_addr = ((IData)(vlSelf->vga_module__DOT__vga_1__DOT__v_valid)
                                        ? (0x3ffU & 
                                           (((IData)(vlSelf->vga_module__DOT__vga_1__DOT__y_cnt) 
                                             - (IData)(0x23U)) 
                                            - (IData)(1U)))
                                        : 0U);
    vlSelf->addr_h = vlSelf->vga_module__DOT__h_addr;
    vlSelf->addr_v = vlSelf->vga_module__DOT__v_addr;
    vlSelf->vga_module__DOT__vga_data = vlSelf->vga_module__DOT__vga_data_array
        [(((IData)(vlSelf->vga_module__DOT__h_addr) 
           << 9U) | (0x1ffU & (IData)(vlSelf->vga_module__DOT__v_addr)))];
    vlSelf->vga_r = (0xffU & (vlSelf->vga_module__DOT__vga_data 
                              >> 0x10U));
    vlSelf->vga_g = (0xffU & (vlSelf->vga_module__DOT__vga_data 
                              >> 8U));
    vlSelf->vga_b = (0xffU & vlSelf->vga_module__DOT__vga_data);
}

void Vvga_module___024root___eval_initial(Vvga_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_module___024root___eval_initial\n"); );
    // Body
    Vvga_module___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vvga_module___024root___eval_settle(Vvga_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_module___024root___eval_settle\n"); );
    // Body
    Vvga_module___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vvga_module___024root___final(Vvga_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_module___024root___final\n"); );
}

void Vvga_module___024root___ctor_var_reset(Vvga_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_module___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->vga_vs = 0;
    vlSelf->vga_hs = 0;
    vlSelf->vga_clk = 0;
    vlSelf->vga_blank_n = 0;
    vlSelf->vga_sync_n = 0;
    vlSelf->vga_r = 0;
    vlSelf->vga_g = 0;
    vlSelf->vga_b = 0;
    vlSelf->addr_h = 0;
    vlSelf->addr_v = 0;
    vlSelf->vga_module__DOT__h_addr = 0;
    vlSelf->vga_module__DOT__v_addr = 0;
    vlSelf->vga_module__DOT__vga_data = 0;
    for (int __Vi0=0; __Vi0<524288; ++__Vi0) {
        vlSelf->vga_module__DOT__vga_data_array[__Vi0] = 0;
    }
    vlSelf->vga_module__DOT__vga_1__DOT__x_cnt = 0;
    vlSelf->vga_module__DOT__vga_1__DOT__y_cnt = 0;
    vlSelf->vga_module__DOT__vga_1__DOT__h_valid = 0;
    vlSelf->vga_module__DOT__vga_1__DOT__v_valid = 0;
    vlSelf->vga_module__DOT__vga_1__DOT__clk_1__DOT__count = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
