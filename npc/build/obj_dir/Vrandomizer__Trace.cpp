// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrandomizer__Syms.h"


void Vrandomizer___024root__traceChgSub0(Vrandomizer___024root* vlSelf, VerilatedVcd* tracep);

void Vrandomizer___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vrandomizer___024root* const __restrict vlSelf = static_cast<Vrandomizer___024root*>(voidSelf);
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vrandomizer___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vrandomizer___024root__traceChgSub0(Vrandomizer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->randomizer__DOT__reg_lfsr),8);
            tracep->chgBit(oldp+1,((1U & VL_REDXOR_32(
                                                      (0xfU 
                                                       & (IData)(vlSelf->randomizer__DOT__reg_lfsr))))));
            tracep->chgCData(oldp+2,((0xffU & VL_MODDIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0xaU)))),8);
            tracep->chgCData(oldp+3,((0xffU & VL_DIV_III(32, 
                                                         VL_MODDIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0x64U)), (IData)(0xaU)))),8);
            tracep->chgCData(oldp+4,((0xffU & VL_DIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0x64U)))),8);
            tracep->chgCData(oldp+5,((0xfU & VL_MODDIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0xaU)))),4);
            tracep->chgCData(oldp+6,((0xfU & VL_DIV_III(32, 
                                                        VL_MODDIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0x64U)), (IData)(0xaU)))),4);
            tracep->chgCData(oldp+7,((0xfU & VL_DIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0x64U)))),4);
        }
        tracep->chgBit(oldp+8,(vlSelf->clk));
        tracep->chgBit(oldp+9,(vlSelf->rst));
        tracep->chgCData(oldp+10,(vlSelf->bcd_num0),7);
        tracep->chgCData(oldp+11,(vlSelf->bcd_num1),7);
        tracep->chgCData(oldp+12,(vlSelf->bcd_num2),7);
    }
}

void Vrandomizer___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vrandomizer___024root* const __restrict vlSelf = static_cast<Vrandomizer___024root*>(voidSelf);
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
