// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfourbitalu__Syms.h"


void Vfourbitalu___024root__traceChgSub0(Vfourbitalu___024root* vlSelf, VerilatedVcd* tracep);

void Vfourbitalu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vfourbitalu___024root* const __restrict vlSelf = static_cast<Vfourbitalu___024root*>(voidSelf);
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vfourbitalu___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vfourbitalu___024root__traceChgSub0(Vfourbitalu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->a),4);
        tracep->chgCData(oldp+1,(vlSelf->b),4);
        tracep->chgCData(oldp+2,(vlSelf->x),3);
        tracep->chgCData(oldp+3,(vlSelf->out),4);
        tracep->chgBit(oldp+4,(vlSelf->overflower));
        tracep->chgBit(oldp+5,(vlSelf->zero));
        tracep->chgBit(oldp+6,(vlSelf->carry_flag));
        tracep->chgCData(oldp+7,(vlSelf->fourbitalu__DOT__temp_adder),4);
        tracep->chgCData(oldp+8,(vlSelf->fourbitalu__DOT__adder_out),4);
    }
}

void Vfourbitalu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vfourbitalu___024root* const __restrict vlSelf = static_cast<Vfourbitalu___024root*>(voidSelf);
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
