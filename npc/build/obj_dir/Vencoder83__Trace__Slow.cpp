// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vencoder83__Syms.h"


void Vencoder83___024root__traceInitSub0(Vencoder83___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vencoder83___024root__traceInitTop(Vencoder83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vencoder83___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vencoder83___024root__traceInitSub0(Vencoder83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"x", false,-1, 7,0);
        tracep->declBit(c+2,"en", false,-1);
        tracep->declBus(c+3,"y", false,-1, 3,0);
        tracep->declBus(c+4,"out", false,-1, 6,0);
        tracep->declBus(c+5,"i", false,-1, 31,0);
        tracep->declBus(c+1,"encoder83 x", false,-1, 7,0);
        tracep->declBit(c+2,"encoder83 en", false,-1);
        tracep->declBus(c+3,"encoder83 y", false,-1, 3,0);
        tracep->declBus(c+4,"encoder83 out", false,-1, 6,0);
        tracep->declBus(c+5,"encoder83 i", false,-1, 31,0);
        tracep->declBus(c+3,"encoder83 seg x", false,-1, 3,0);
        tracep->declBit(c+2,"encoder83 seg en", false,-1);
        tracep->declBus(c+4,"encoder83 seg y", false,-1, 6,0);
    }
}

void Vencoder83___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vencoder83___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vencoder83___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vencoder83___024root__traceRegister(Vencoder83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vencoder83___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vencoder83___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vencoder83___024root__traceCleanup, vlSelf);
    }
}

void Vencoder83___024root__traceFullSub0(Vencoder83___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vencoder83___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vencoder83___024root* const __restrict vlSelf = static_cast<Vencoder83___024root*>(voidSelf);
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vencoder83___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vencoder83___024root__traceFullSub0(Vencoder83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->x),8);
        tracep->fullBit(oldp+2,(vlSelf->en));
        tracep->fullCData(oldp+3,(vlSelf->y),4);
        tracep->fullCData(oldp+4,(vlSelf->out),7);
        tracep->fullIData(oldp+5,(vlSelf->i),32);
    }
}
