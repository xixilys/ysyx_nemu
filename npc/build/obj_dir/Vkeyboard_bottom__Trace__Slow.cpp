// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vkeyboard_bottom__Syms.h"


void Vkeyboard_bottom___024root__traceInitSub0(Vkeyboard_bottom___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vkeyboard_bottom___024root__traceInitTop(Vkeyboard_bottom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vkeyboard_bottom___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vkeyboard_bottom___024root__traceInitSub0(Vkeyboard_bottom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+18,"clk", false,-1);
        tracep->declBit(c+19,"rst", false,-1);
        tracep->declBit(c+20,"ps2_clk", false,-1);
        tracep->declBit(c+21,"ps2_data", false,-1);
        tracep->declBit(c+22,"led", false,-1);
        tracep->declBit(c+18,"keyboard_bottom clk", false,-1);
        tracep->declBit(c+19,"keyboard_bottom rst", false,-1);
        tracep->declBit(c+20,"keyboard_bottom ps2_clk", false,-1);
        tracep->declBit(c+21,"keyboard_bottom ps2_data", false,-1);
        tracep->declBit(c+22,"keyboard_bottom led", false,-1);
        tracep->declBus(c+7,"keyboard_bottom keyboard_data", false,-1, 7,0);
        tracep->declBus(c+23,"keyboard_bottom data_sync", false,-1, 31,0);
        tracep->declBit(c+8,"keyboard_bottom ready", false,-1);
        tracep->declBit(c+1,"keyboard_bottom overflow", false,-1);
        tracep->declBit(c+24,"keyboard_bottom nextdata_n", false,-1);
        tracep->declBit(c+18,"keyboard_bottom k1 clk", false,-1);
        tracep->declBit(c+19,"keyboard_bottom k1 clrn", false,-1);
        tracep->declBit(c+20,"keyboard_bottom k1 ps2_clk", false,-1);
        tracep->declBit(c+21,"keyboard_bottom k1 ps2_data", false,-1);
        tracep->declBit(c+24,"keyboard_bottom k1 nextdata_n", false,-1);
        tracep->declBus(c+7,"keyboard_bottom k1 data", false,-1, 7,0);
        tracep->declBit(c+8,"keyboard_bottom k1 ready", false,-1);
        tracep->declBit(c+1,"keyboard_bottom k1 overflow", false,-1);
        tracep->declBus(c+2,"keyboard_bottom k1 buffer", false,-1, 9,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+9+i*1,"keyboard_bottom k1 fifo", true,(i+0), 7,0);}}
        tracep->declBus(c+3,"keyboard_bottom k1 w_ptr", false,-1, 2,0);
        tracep->declBus(c+17,"keyboard_bottom k1 r_ptr", false,-1, 2,0);
        tracep->declBus(c+4,"keyboard_bottom k1 count", false,-1, 3,0);
        tracep->declBus(c+5,"keyboard_bottom k1 ps2_clk_sync", false,-1, 2,0);
        tracep->declBit(c+6,"keyboard_bottom k1 sampling", false,-1);
    }
}

void Vkeyboard_bottom___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vkeyboard_bottom___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vkeyboard_bottom___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vkeyboard_bottom___024root__traceRegister(Vkeyboard_bottom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vkeyboard_bottom___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vkeyboard_bottom___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vkeyboard_bottom___024root__traceCleanup, vlSelf);
    }
}

void Vkeyboard_bottom___024root__traceFullSub0(Vkeyboard_bottom___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vkeyboard_bottom___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vkeyboard_bottom___024root* const __restrict vlSelf = static_cast<Vkeyboard_bottom___024root*>(voidSelf);
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vkeyboard_bottom___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vkeyboard_bottom___024root__traceFullSub0(Vkeyboard_bottom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->keyboard_bottom__DOT__overflow));
        tracep->fullSData(oldp+2,(vlSelf->keyboard_bottom__DOT__k1__DOT__buffer),10);
        tracep->fullCData(oldp+3,(vlSelf->keyboard_bottom__DOT__k1__DOT__w_ptr),3);
        tracep->fullCData(oldp+4,(vlSelf->keyboard_bottom__DOT__k1__DOT__count),4);
        tracep->fullCData(oldp+5,(vlSelf->keyboard_bottom__DOT__k1__DOT__ps2_clk_sync),3);
        tracep->fullBit(oldp+6,((IData)((4U == (6U 
                                                & (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__ps2_clk_sync))))));
        tracep->fullCData(oldp+7,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo
                                  [vlSelf->keyboard_bottom__DOT__k1__DOT__r_ptr]),8);
        tracep->fullBit(oldp+8,(vlSelf->keyboard_bottom__DOT__ready));
        tracep->fullCData(oldp+9,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[0]),8);
        tracep->fullCData(oldp+10,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[1]),8);
        tracep->fullCData(oldp+11,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[2]),8);
        tracep->fullCData(oldp+12,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[3]),8);
        tracep->fullCData(oldp+13,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[4]),8);
        tracep->fullCData(oldp+14,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[5]),8);
        tracep->fullCData(oldp+15,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[6]),8);
        tracep->fullCData(oldp+16,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[7]),8);
        tracep->fullCData(oldp+17,(vlSelf->keyboard_bottom__DOT__k1__DOT__r_ptr),3);
        tracep->fullBit(oldp+18,(vlSelf->clk));
        tracep->fullBit(oldp+19,(vlSelf->rst));
        tracep->fullBit(oldp+20,(vlSelf->ps2_clk));
        tracep->fullBit(oldp+21,(vlSelf->ps2_data));
        tracep->fullBit(oldp+22,(vlSelf->led));
        tracep->fullIData(oldp+23,(vlSelf->keyboard_bottom__DOT__data_sync),32);
        tracep->fullBit(oldp+24,(vlSelf->keyboard_bottom__DOT__nextdata_n));
    }
}
