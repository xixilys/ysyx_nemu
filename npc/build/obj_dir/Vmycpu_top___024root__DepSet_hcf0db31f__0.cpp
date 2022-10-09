// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top___024root.h"

void Vmycpu_top___024root___eval__0(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval__1(Vmycpu_top___024root* vlSelf);

void Vmycpu_top___024root___eval(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval\n"); );
    // Body
    Vmycpu_top___024root___eval__0(vlSelf);
    Vmycpu_top___024root___eval__1(vlSelf);
}

QData Vmycpu_top___024root___change_request_1(Vmycpu_top___024root* vlSelf);

VL_INLINE_OPT QData Vmycpu_top___024root___change_request(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___change_request\n"); );
    // Body
    return (Vmycpu_top___024root___change_request_1(vlSelf));
}

#ifdef VL_DEBUG
void Vmycpu_top___024root___eval_debug_assertions(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->aresetn & 0xfeU))) {
        Verilated::overWidthError("aresetn");}
    if (VL_UNLIKELY((vlSelf->aclk & 0xfeU))) {
        Verilated::overWidthError("aclk");}
    if (VL_UNLIKELY((vlSelf->ext_int & 0xc0U))) {
        Verilated::overWidthError("ext_int");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_0_arready 
                     & 0xfeU))) {
        Verilated::overWidthError("axi_mem_port_0_arready");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_0_rid & 0xf0U))) {
        Verilated::overWidthError("axi_mem_port_0_rid");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_0_rresp & 0xfcU))) {
        Verilated::overWidthError("axi_mem_port_0_rresp");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_0_rlast & 0xfeU))) {
        Verilated::overWidthError("axi_mem_port_0_rlast");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_0_rvalid 
                     & 0xfeU))) {
        Verilated::overWidthError("axi_mem_port_0_rvalid");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_0_awready 
                     & 0xfeU))) {
        Verilated::overWidthError("axi_mem_port_0_awready");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_0_wready 
                     & 0xfeU))) {
        Verilated::overWidthError("axi_mem_port_0_wready");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_0_bid & 0xf0U))) {
        Verilated::overWidthError("axi_mem_port_0_bid");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_0_bresp & 0xfcU))) {
        Verilated::overWidthError("axi_mem_port_0_bresp");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_0_bvalid 
                     & 0xfeU))) {
        Verilated::overWidthError("axi_mem_port_0_bvalid");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_1_arready 
                     & 0xfeU))) {
        Verilated::overWidthError("axi_mem_port_1_arready");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_1_rid & 0xf0U))) {
        Verilated::overWidthError("axi_mem_port_1_rid");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_1_rresp & 0xfcU))) {
        Verilated::overWidthError("axi_mem_port_1_rresp");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_1_rlast & 0xfeU))) {
        Verilated::overWidthError("axi_mem_port_1_rlast");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_1_rvalid 
                     & 0xfeU))) {
        Verilated::overWidthError("axi_mem_port_1_rvalid");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_1_awready 
                     & 0xfeU))) {
        Verilated::overWidthError("axi_mem_port_1_awready");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_1_wready 
                     & 0xfeU))) {
        Verilated::overWidthError("axi_mem_port_1_wready");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_1_bid & 0xf0U))) {
        Verilated::overWidthError("axi_mem_port_1_bid");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_1_bresp & 0xfcU))) {
        Verilated::overWidthError("axi_mem_port_1_bresp");}
    if (VL_UNLIKELY((vlSelf->axi_mem_port_1_bvalid 
                     & 0xfeU))) {
        Verilated::overWidthError("axi_mem_port_1_bvalid");}
}
#endif  // VL_DEBUG
