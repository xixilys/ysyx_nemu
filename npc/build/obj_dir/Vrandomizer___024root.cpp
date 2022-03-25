// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrandomizer.h for the primary calling header

#include "Vrandomizer___024root.h"
#include "Vrandomizer__Syms.h"

//==========

extern const VlUnpacked<CData/*6:0*/, 16> Vrandomizer__ConstPool__TABLE_f35510fa_0;

VL_INLINE_OPT void Vrandomizer___024root___sequent__TOP__1(Vrandomizer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandomizer___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    // Body
    vlSelf->randomizer__DOT__reg_lfsr = ((IData)(vlSelf->rst)
                                          ? 1U : (((IData)(vlSelf->randomizer__DOT__bitsevern) 
                                                   << 7U) 
                                                  | (0x7fU 
                                                     & ((IData)(vlSelf->randomizer__DOT__reg_lfsr) 
                                                        >> 1U))));
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

void Vrandomizer___024root___eval(Vrandomizer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandomizer___024root___eval\n"); );
    // Body
    if ((((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vrandomizer___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Vrandomizer___024root___change_request_1(Vrandomizer___024root* vlSelf);

VL_INLINE_OPT QData Vrandomizer___024root___change_request(Vrandomizer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandomizer___024root___change_request\n"); );
    // Body
    return (Vrandomizer___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vrandomizer___024root___change_request_1(Vrandomizer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandomizer___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vrandomizer___024root___eval_debug_assertions(Vrandomizer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandomizer___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
