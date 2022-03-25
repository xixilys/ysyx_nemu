// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrandomizer.h for the primary calling header

#include "Vrandomizer___024root.h"
#include "Vrandomizer__Syms.h"

//==========


void Vrandomizer___024root___ctor_var_reset(Vrandomizer___024root* vlSelf);

Vrandomizer___024root::Vrandomizer___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrandomizer___024root___ctor_var_reset(this);
}

void Vrandomizer___024root::__Vconfigure(Vrandomizer__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrandomizer___024root::~Vrandomizer___024root() {
}

void Vrandomizer___024root___initial__TOP__2(Vrandomizer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandomizer___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->randomizer__DOT__reg_lfsr = 1U;
}

extern const VlUnpacked<CData/*6:0*/, 16> Vrandomizer__ConstPool__TABLE_f35510fa_0;

void Vrandomizer___024root___settle__TOP__3(Vrandomizer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandomizer___024root___settle__TOP__3\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    // Body
    vlSelf->randomizer__DOT__bitsevern = (1U & VL_REDXOR_32(
                                                            (0xfU 
                                                             & (IData)(vlSelf->randomizer__DOT__reg_lfsr))));
    __Vtableidx1 = (0xfU & VL_MODDIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0xaU)));
    vlSelf->bcd_num0 = Vrandomizer__ConstPool__TABLE_f35510fa_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & VL_DIV_III(32, VL_MODDIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0x64U)), (IData)(0xaU)));
    vlSelf->bcd_num1 = Vrandomizer__ConstPool__TABLE_f35510fa_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & VL_DIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0x64U)));
    vlSelf->bcd_num2 = Vrandomizer__ConstPool__TABLE_f35510fa_0
        [__Vtableidx3];
}

void Vrandomizer___024root___eval_initial(Vrandomizer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandomizer___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vrandomizer___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vrandomizer___024root___eval_settle(Vrandomizer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandomizer___024root___eval_settle\n"); );
    // Body
    Vrandomizer___024root___settle__TOP__3(vlSelf);
}

void Vrandomizer___024root___final(Vrandomizer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandomizer___024root___final\n"); );
}

void Vrandomizer___024root___ctor_var_reset(Vrandomizer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandomizer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->bcd_num0 = 0;
    vlSelf->bcd_num1 = 0;
    vlSelf->bcd_num2 = 0;
    vlSelf->randomizer__DOT__reg_lfsr = 0;
    vlSelf->randomizer__DOT__last_reg = 0;
    vlSelf->randomizer__DOT__bitsevern = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
