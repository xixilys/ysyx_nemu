// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtimer__Syms.h"


void Vtimer___024root__traceInitSub0(Vtimer___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtimer___024root__traceInitTop(Vtimer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtimer___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtimer___024root__traceInitSub0(Vtimer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+6,"rst", false,-1);
        tracep->declBit(c+7,"stop", false,-1);
        tracep->declBit(c+8,"start", false,-1);
        tracep->declBit(c+9,"clk", false,-1);
        tracep->declBus(c+10,"bcd1", false,-1, 6,0);
        tracep->declBus(c+11,"bcd2", false,-1, 6,0);
        tracep->declBit(c+6,"timer rst", false,-1);
        tracep->declBit(c+7,"timer stop", false,-1);
        tracep->declBit(c+8,"timer start", false,-1);
        tracep->declBit(c+9,"timer clk", false,-1);
        tracep->declBus(c+10,"timer bcd1", false,-1, 6,0);
        tracep->declBus(c+11,"timer bcd2", false,-1, 6,0);
        tracep->declBit(c+12,"timer clk_1s", false,-1);
        tracep->declBus(c+1,"timer x2", false,-1, 7,0);
        tracep->declBus(c+2,"timer x1", false,-1, 7,0);
        tracep->declBus(c+3,"timer count_clk", false,-1, 7,0);
        tracep->declBit(c+9,"timer f1 clk", false,-1);
        tracep->declBit(c+6,"timer f1 rst", false,-1);
        tracep->declBit(c+12,"timer f1 out_clk", false,-1);
        tracep->declBus(c+13,"timer f1 counter_clk", false,-1, 31,0);
        tracep->declBus(c+4,"timer bcd_1 x", false,-1, 3,0);
        tracep->declBit(c+14,"timer bcd_1 en", false,-1);
        tracep->declBus(c+10,"timer bcd_1 y", false,-1, 6,0);
        tracep->declBus(c+5,"timer bcd_2 x", false,-1, 3,0);
        tracep->declBit(c+14,"timer bcd_2 en", false,-1);
        tracep->declBus(c+11,"timer bcd_2 y", false,-1, 6,0);
    }
}

void Vtimer___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtimer___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtimer___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtimer___024root__traceRegister(Vtimer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtimer___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtimer___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtimer___024root__traceCleanup, vlSelf);
    }
}

void Vtimer___024root__traceFullSub0(Vtimer___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtimer___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtimer___024root* const __restrict vlSelf = static_cast<Vtimer___024root*>(voidSelf);
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtimer___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtimer___024root__traceFullSub0(Vtimer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->timer__DOT__x2),8);
        tracep->fullCData(oldp+2,(vlSelf->timer__DOT__x1),8);
        tracep->fullCData(oldp+3,(vlSelf->timer__DOT__count_clk),8);
        tracep->fullCData(oldp+4,((0xfU & (IData)(vlSelf->timer__DOT__x1))),4);
        tracep->fullCData(oldp+5,((0xfU & (IData)(vlSelf->timer__DOT__x2))),4);
        tracep->fullBit(oldp+6,(vlSelf->rst));
        tracep->fullBit(oldp+7,(vlSelf->stop));
        tracep->fullBit(oldp+8,(vlSelf->start));
        tracep->fullBit(oldp+9,(vlSelf->clk));
        tracep->fullCData(oldp+10,(vlSelf->bcd1),7);
        tracep->fullCData(oldp+11,(vlSelf->bcd2),7);
        tracep->fullBit(oldp+12,(vlSelf->timer__DOT__clk_1s));
        tracep->fullIData(oldp+13,(vlSelf->timer__DOT__f1__DOT__counter_clk),32);
        tracep->fullBit(oldp+14,(1U));
    }
}
