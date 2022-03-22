// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfourbitalu__Syms.h"


void Vfourbitalu___024root__traceInitSub0(Vfourbitalu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vfourbitalu___024root__traceInitTop(Vfourbitalu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vfourbitalu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vfourbitalu___024root__traceInitSub0(Vfourbitalu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"a", false,-1, 3,0);
        tracep->declBus(c+2,"b", false,-1, 3,0);
        tracep->declBus(c+3,"x", false,-1, 2,0);
        tracep->declBus(c+4,"out", false,-1, 3,0);
        tracep->declBit(c+5,"overflower", false,-1);
        tracep->declBit(c+6,"zero", false,-1);
        tracep->declBit(c+7,"carry_flag", false,-1);
        tracep->declBus(c+1,"fourbitalu a", false,-1, 3,0);
        tracep->declBus(c+2,"fourbitalu b", false,-1, 3,0);
        tracep->declBus(c+3,"fourbitalu x", false,-1, 2,0);
        tracep->declBus(c+4,"fourbitalu out", false,-1, 3,0);
        tracep->declBit(c+5,"fourbitalu overflower", false,-1);
        tracep->declBit(c+6,"fourbitalu zero", false,-1);
        tracep->declBit(c+7,"fourbitalu carry_flag", false,-1);
        tracep->declBus(c+8,"fourbitalu temp_adder", false,-1, 3,0);
        tracep->declBus(c+9,"fourbitalu adder_out", false,-1, 3,0);
        tracep->declBus(c+10,"fourbitalu normal_a", false,-1, 3,0);
        tracep->declBus(c+11,"fourbitalu normal_b", false,-1, 3,0);
        tracep->declBus(c+1,"fourbitalu adder a", false,-1, 3,0);
        tracep->declBus(c+8,"fourbitalu adder b", false,-1, 3,0);
        tracep->declBit(c+5,"fourbitalu adder overflower", false,-1);
        tracep->declBus(c+9,"fourbitalu adder result", false,-1, 3,0);
        tracep->declBit(c+7,"fourbitalu adder carry", false,-1);
        tracep->declBit(c+6,"fourbitalu adder zero", false,-1);
    }
}

void Vfourbitalu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vfourbitalu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vfourbitalu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vfourbitalu___024root__traceRegister(Vfourbitalu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vfourbitalu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vfourbitalu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vfourbitalu___024root__traceCleanup, vlSelf);
    }
}

void Vfourbitalu___024root__traceFullSub0(Vfourbitalu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vfourbitalu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vfourbitalu___024root* const __restrict vlSelf = static_cast<Vfourbitalu___024root*>(voidSelf);
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vfourbitalu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vfourbitalu___024root__traceFullSub0(Vfourbitalu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfourbitalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->a),4);
        tracep->fullCData(oldp+2,(vlSelf->b),4);
        tracep->fullCData(oldp+3,(vlSelf->x),3);
        tracep->fullCData(oldp+4,(vlSelf->out),4);
        tracep->fullBit(oldp+5,(vlSelf->overflower));
        tracep->fullBit(oldp+6,(vlSelf->zero));
        tracep->fullBit(oldp+7,(vlSelf->carry_flag));
        tracep->fullCData(oldp+8,(vlSelf->fourbitalu__DOT__temp_adder),4);
        tracep->fullCData(oldp+9,(vlSelf->fourbitalu__DOT__adder_out),4);
        tracep->fullCData(oldp+10,(vlSelf->fourbitalu__DOT__normal_a),4);
        tracep->fullCData(oldp+11,(vlSelf->fourbitalu__DOT__normal_b),4);
    }
}
