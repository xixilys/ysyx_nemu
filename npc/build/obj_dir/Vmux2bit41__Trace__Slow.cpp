// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux2bit41__Syms.h"


void Vmux2bit41___024root__traceInitSub0(Vmux2bit41___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vmux2bit41___024root__traceInitTop(Vmux2bit41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vmux2bit41___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vmux2bit41___024root__traceInitSub0(Vmux2bit41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+16,"y", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+17+i*1,"x", true,(i+0), 1,0);}}
        tracep->declBus(c+21,"f", false,-1, 1,0);
        tracep->declBus(c+16,"mux2bit41 y", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+17+i*1,"mux2bit41 x", true,(i+0), 1,0);}}
        tracep->declBus(c+21,"mux2bit41 f", false,-1, 1,0);
        tracep->declBus(c+22,"mux2bit41 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+23,"mux2bit41 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+23,"mux2bit41 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+21,"mux2bit41 i0 out", false,-1, 1,0);
        tracep->declBus(c+16,"mux2bit41 i0 key", false,-1, 1,0);
        tracep->declBus(c+1,"mux2bit41 i0 lut", false,-1, 15,0);
        tracep->declBus(c+22,"mux2bit41 i0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+23,"mux2bit41 i0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+23,"mux2bit41 i0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+24,"mux2bit41 i0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+21,"mux2bit41 i0 i0 out", false,-1, 1,0);
        tracep->declBus(c+16,"mux2bit41 i0 i0 key", false,-1, 1,0);
        tracep->declBus(c+25,"mux2bit41 i0 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1,"mux2bit41 i0 i0 lut", false,-1, 15,0);
        tracep->declBus(c+22,"mux2bit41 i0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+2+i*1,"mux2bit41 i0 i0 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+6+i*1,"mux2bit41 i0 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+10+i*1,"mux2bit41 i0 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+14,"mux2bit41 i0 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+15,"mux2bit41 i0 i0 hit", false,-1);
        tracep->declBus(c+26,"mux2bit41 i0 i0 i", false,-1, 31,0);
    }
}

void Vmux2bit41___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vmux2bit41___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vmux2bit41___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vmux2bit41___024root__traceRegister(Vmux2bit41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vmux2bit41___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vmux2bit41___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vmux2bit41___024root__traceCleanup, vlSelf);
    }
}

void Vmux2bit41___024root__traceFullSub0(Vmux2bit41___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vmux2bit41___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vmux2bit41___024root* const __restrict vlSelf = static_cast<Vmux2bit41___024root*>(voidSelf);
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vmux2bit41___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vmux2bit41___024root__traceFullSub0(Vmux2bit41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2bit41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->mux2bit41__DOT____Vcellinp__i0____pinNumber3),16);
        tracep->fullCData(oldp+2,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+3,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+4,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+5,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__pair_list[3]),4);
        tracep->fullCData(oldp+6,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+7,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+8,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+9,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        tracep->fullCData(oldp+10,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+11,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+12,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__data_list[2]),2);
        tracep->fullCData(oldp+13,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__data_list[3]),2);
        tracep->fullCData(oldp+14,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+15,(vlSelf->mux2bit41__DOT__i0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+16,(vlSelf->y),2);
        tracep->fullCData(oldp+17,(vlSelf->x[0]),2);
        tracep->fullCData(oldp+18,(vlSelf->x[1]),2);
        tracep->fullCData(oldp+19,(vlSelf->x[2]),2);
        tracep->fullCData(oldp+20,(vlSelf->x[3]),2);
        tracep->fullCData(oldp+21,(vlSelf->f),2);
        tracep->fullIData(oldp+22,(4U),32);
        tracep->fullIData(oldp+23,(2U),32);
        tracep->fullIData(oldp+24,(0U),32);
        tracep->fullCData(oldp+25,(0U),2);
        tracep->fullIData(oldp+26,(4U),32);
    }
}
