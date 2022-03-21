// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vencoder83__Syms.h"


void Vencoder83___024root__traceChgSub0(Vencoder83___024root* vlSelf, VerilatedVcd* tracep);

void Vencoder83___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vencoder83___024root* const __restrict vlSelf = static_cast<Vencoder83___024root*>(voidSelf);
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vencoder83___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vencoder83___024root__traceChgSub0(Vencoder83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->x),8);
        tracep->chgBit(oldp+1,(vlSelf->en));
        tracep->chgCData(oldp+2,(vlSelf->y),4);
        tracep->chgCData(oldp+3,(vlSelf->out),7);
        tracep->chgIData(oldp+4,(vlSelf->i),32);
    }
}

void Vencoder83___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vencoder83___024root* const __restrict vlSelf = static_cast<Vencoder83___024root*>(voidSelf);
    Vencoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
