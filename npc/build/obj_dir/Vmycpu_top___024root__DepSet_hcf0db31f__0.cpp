// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top___024root.h"

void Vmycpu_top___024root___eval_act(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_act\n"); );
}

void Vmycpu_top___024root___eval_nba__0(Vmycpu_top___024root* vlSelf);

void Vmycpu_top___024root___eval_nba(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_nba\n"); );
    // Body
    Vmycpu_top___024root___eval_nba__0(vlSelf);
}

void Vmycpu_top___024root___eval_triggers__ico(Vmycpu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__ico(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vmycpu_top___024root___eval_ico(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval_triggers__act(Vmycpu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__act(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__nba(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vmycpu_top___024root___eval(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __Vtemp_hc973ad3e__0;
    IData/*31:0*/ __Vtemp_he6acf3ff__0;
    IData/*31:0*/ __Vtemp_hb075357b__0;
    // Body
    vlSelf->__VicoIterCount = 0U;
    vlSelf->__VicoContinue = 1U;
    while (vlSelf->__VicoContinue) {
        vlSelf->__VicoContinue = 0U;
        Vmycpu_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            vlSelf->__VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmycpu_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/ddddddd/my_learn/cpu_relative/ysyx-workbench/npc/vsrc/riscv64_ysyx/mycpu_top.v", 65190, "", "Input combinational region did not converge.");
            }
            __Vtemp_hc973ad3e__0 = ((IData)(1U) + vlSelf->__VicoIterCount);
            vlSelf->__VicoIterCount = __Vtemp_hc973ad3e__0;
            Vmycpu_top___024root___eval_ico(vlSelf);
        }
    }
    vlSelf->__VnbaIterCount = 0U;
    vlSelf->__VnbaContinue = 1U;
    while (vlSelf->__VnbaContinue) {
        vlSelf->__VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmycpu_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmycpu_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/ddddddd/my_learn/cpu_relative/ysyx-workbench/npc/vsrc/riscv64_ysyx/mycpu_top.v", 65190, "", "Active region did not converge.");
                }
                __Vtemp_he6acf3ff__0 = ((IData)(1U) 
                                        + vlSelf->__VactIterCount);
                vlSelf->__VactIterCount = __Vtemp_he6acf3ff__0;
                vlSelf->__VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vmycpu_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            vlSelf->__VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmycpu_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/ddddddd/my_learn/cpu_relative/ysyx-workbench/npc/vsrc/riscv64_ysyx/mycpu_top.v", 65190, "", "NBA region did not converge.");
            }
            __Vtemp_hb075357b__0 = ((IData)(1U) + vlSelf->__VnbaIterCount);
            vlSelf->__VnbaIterCount = __Vtemp_hb075357b__0;
            Vmycpu_top___024root___eval_nba(vlSelf);
        }
    }
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
