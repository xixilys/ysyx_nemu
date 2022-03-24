// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtimer__Syms.h"


void Vtimer___024root__traceChgSub0(Vtimer___024root* vlSelf, VerilatedVcd* tracep);

void Vtimer___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtimer___024root* const __restrict vlSelf = static_cast<Vtimer___024root*>(voidSelf);
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtimer___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtimer___024root__traceChgSub0(Vtimer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->timer__DOT__x2),8);
            tracep->chgCData(oldp+1,(vlSelf->timer__DOT__x1),8);
            tracep->chgCData(oldp+2,(vlSelf->timer__DOT__count_clk),8);
            tracep->chgCData(oldp+3,((0xfU & (IData)(vlSelf->timer__DOT__x1))),4);
            tracep->chgCData(oldp+4,((0xfU & (IData)(vlSelf->timer__DOT__x2))),4);
        }
        tracep->chgBit(oldp+5,(vlSelf->rst));
        tracep->chgBit(oldp+6,(vlSelf->stop));
        tracep->chgBit(oldp+7,(vlSelf->start));
        tracep->chgBit(oldp+8,(vlSelf->clk));
        tracep->chgCData(oldp+9,(vlSelf->bcd1),7);
        tracep->chgCData(oldp+10,(vlSelf->bcd2),7);
        tracep->chgBit(oldp+11,(vlSelf->timer__DOT__clk_1s));
        tracep->chgIData(oldp+12,(vlSelf->timer__DOT__f1__DOT__counter_clk),32);
    }
}

void Vtimer___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtimer___024root* const __restrict vlSelf = static_cast<Vtimer___024root*>(voidSelf);
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
