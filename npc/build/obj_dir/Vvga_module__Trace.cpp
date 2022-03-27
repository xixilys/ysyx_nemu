// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvga_module__Syms.h"


void Vvga_module___024root__traceChgSub0(Vvga_module___024root* vlSelf, VerilatedVcd* tracep);

void Vvga_module___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vvga_module___024root* const __restrict vlSelf = static_cast<Vvga_module___024root*>(voidSelf);
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vvga_module___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vvga_module___024root__traceChgSub0(Vvga_module___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlSelf->vga_module__DOT__h_addr),10);
            tracep->chgSData(oldp+1,(vlSelf->vga_module__DOT__v_addr),10);
            tracep->chgIData(oldp+2,(vlSelf->vga_module__DOT__vga_data),24);
            tracep->chgSData(oldp+3,(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt),10);
            tracep->chgSData(oldp+4,(vlSelf->vga_module__DOT__vga_1__DOT__y_cnt),10);
            tracep->chgBit(oldp+5,(vlSelf->vga_module__DOT__vga_1__DOT__h_valid));
            tracep->chgBit(oldp+6,(vlSelf->vga_module__DOT__vga_1__DOT__v_valid));
            tracep->chgIData(oldp+7,(vlSelf->vga_module__DOT__vga_1__DOT__clk_1__DOT__count),32);
        }
        tracep->chgBit(oldp+8,(vlSelf->clk));
        tracep->chgBit(oldp+9,(vlSelf->rst));
        tracep->chgBit(oldp+10,(vlSelf->vga_vs));
        tracep->chgBit(oldp+11,(vlSelf->vga_hs));
        tracep->chgBit(oldp+12,(vlSelf->vga_clk));
        tracep->chgBit(oldp+13,(vlSelf->vga_blank_n));
        tracep->chgBit(oldp+14,(vlSelf->vga_sync_n));
        tracep->chgCData(oldp+15,(vlSelf->vga_r),8);
        tracep->chgCData(oldp+16,(vlSelf->vga_g),8);
        tracep->chgCData(oldp+17,(vlSelf->vga_b),8);
        tracep->chgSData(oldp+18,(vlSelf->addr_h),10);
        tracep->chgSData(oldp+19,(vlSelf->addr_v),10);
    }
}

void Vvga_module___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vvga_module___024root* const __restrict vlSelf = static_cast<Vvga_module___024root*>(voidSelf);
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
