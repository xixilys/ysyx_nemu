// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vkeyboard_bottom__Syms.h"


void Vkeyboard_bottom___024root__traceChgSub0(Vkeyboard_bottom___024root* vlSelf, VerilatedVcd* tracep);

void Vkeyboard_bottom___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vkeyboard_bottom___024root* const __restrict vlSelf = static_cast<Vkeyboard_bottom___024root*>(voidSelf);
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vkeyboard_bottom___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vkeyboard_bottom___024root__traceChgSub0(Vkeyboard_bottom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->keyboard_bottom__DOT__overflow));
            tracep->chgSData(oldp+1,(vlSelf->keyboard_bottom__DOT__k1__DOT__buffer),10);
            tracep->chgCData(oldp+2,(vlSelf->keyboard_bottom__DOT__k1__DOT__w_ptr),3);
            tracep->chgCData(oldp+3,(vlSelf->keyboard_bottom__DOT__k1__DOT__count),4);
            tracep->chgCData(oldp+4,(vlSelf->keyboard_bottom__DOT__k1__DOT__ps2_clk_sync),3);
            tracep->chgBit(oldp+5,((IData)((4U == (6U 
                                                   & (IData)(vlSelf->keyboard_bottom__DOT__k1__DOT__ps2_clk_sync))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+6,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo
                                     [vlSelf->keyboard_bottom__DOT__k1__DOT__r_ptr]),8);
            tracep->chgBit(oldp+7,(vlSelf->keyboard_bottom__DOT__ready));
            tracep->chgCData(oldp+8,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[0]),8);
            tracep->chgCData(oldp+9,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[1]),8);
            tracep->chgCData(oldp+10,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[2]),8);
            tracep->chgCData(oldp+11,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[3]),8);
            tracep->chgCData(oldp+12,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[4]),8);
            tracep->chgCData(oldp+13,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[5]),8);
            tracep->chgCData(oldp+14,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[6]),8);
            tracep->chgCData(oldp+15,(vlSelf->keyboard_bottom__DOT__k1__DOT__fifo[7]),8);
            tracep->chgCData(oldp+16,(vlSelf->keyboard_bottom__DOT__k1__DOT__r_ptr),3);
        }
        tracep->chgBit(oldp+17,(vlSelf->clk));
        tracep->chgBit(oldp+18,(vlSelf->rst));
        tracep->chgBit(oldp+19,(vlSelf->ps2_clk));
        tracep->chgBit(oldp+20,(vlSelf->ps2_data));
        tracep->chgBit(oldp+21,(vlSelf->led));
        tracep->chgIData(oldp+22,(vlSelf->keyboard_bottom__DOT__data_sync),32);
        tracep->chgBit(oldp+23,(vlSelf->keyboard_bottom__DOT__nextdata_n));
    }
}

void Vkeyboard_bottom___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vkeyboard_bottom___024root* const __restrict vlSelf = static_cast<Vkeyboard_bottom___024root*>(voidSelf);
    Vkeyboard_bottom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
