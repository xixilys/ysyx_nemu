// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder83.h for the primary calling header

#include "Vencoder83___024root.h"
#include "Vencoder83__Syms.h"

//==========

extern const VlUnpacked<CData/*3:0*/, 512> Vencoder83__ConstPool__TABLE_d8547370_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vencoder83__ConstPool__TABLE_766cfd13_0;
extern const VlUnpacked<IData/*31:0*/, 512> Vencoder83__ConstPool__TABLE_508ee21b_0;
extern const VlUnpacked<CData/*6:0*/, 32> Vencoder83__ConstPool__TABLE_39032a61_0;

VL_INLINE_OPT void Vencoder83___024root___combo__TOP__1(Vencoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder83___024root___combo__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx2;
    SData/*8:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->x) << 1U) | (IData)(vlSelf->en));
    vlSelf->y = Vencoder83__ConstPool__TABLE_d8547370_0
        [__Vtableidx1];
    if ((2U & Vencoder83__ConstPool__TABLE_766cfd13_0
         [__Vtableidx1])) {
        vlSelf->i = Vencoder83__ConstPool__TABLE_508ee21b_0
            [__Vtableidx1];
    }
    __Vtableidx2 = (((IData)(vlSelf->y) << 1U) | (IData)(vlSelf->en));
    vlSelf->out = Vencoder83__ConstPool__TABLE_39032a61_0
        [__Vtableidx2];
}

void Vencoder83___024root___eval(Vencoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder83___024root___eval\n"); );
    // Body
    Vencoder83___024root___combo__TOP__1(vlSelf);
}

QData Vencoder83___024root___change_request_1(Vencoder83___024root* vlSelf);

VL_INLINE_OPT QData Vencoder83___024root___change_request(Vencoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder83___024root___change_request\n"); );
    // Body
    return (Vencoder83___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vencoder83___024root___change_request_1(Vencoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder83___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vencoder83___024root___eval_debug_assertions(Vencoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder83___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
