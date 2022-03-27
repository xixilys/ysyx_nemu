// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvga_module__Syms.h"


void Vvga_module___024root__traceInitSub0(Vvga_module___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vvga_module___024root__traceInitTop(Vvga_module___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vvga_module___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vvga_module___024root__traceInitSub0(Vvga_module___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+9,"clk", false,-1);
        tracep->declBit(c+10,"rst", false,-1);
        tracep->declBit(c+11,"vga_vs", false,-1);
        tracep->declBit(c+12,"vga_hs", false,-1);
        tracep->declBit(c+13,"vga_clk", false,-1);
        tracep->declBit(c+14,"vga_blank_n", false,-1);
        tracep->declBit(c+15,"vga_sync_n", false,-1);
        tracep->declBus(c+16,"vga_r", false,-1, 7,0);
        tracep->declBus(c+17,"vga_g", false,-1, 7,0);
        tracep->declBus(c+18,"vga_b", false,-1, 7,0);
        tracep->declBus(c+19,"addr_h", false,-1, 9,0);
        tracep->declBus(c+20,"addr_v", false,-1, 9,0);
        tracep->declBit(c+9,"vga_module clk", false,-1);
        tracep->declBit(c+10,"vga_module rst", false,-1);
        tracep->declBit(c+11,"vga_module vga_vs", false,-1);
        tracep->declBit(c+12,"vga_module vga_hs", false,-1);
        tracep->declBit(c+13,"vga_module vga_clk", false,-1);
        tracep->declBit(c+14,"vga_module vga_blank_n", false,-1);
        tracep->declBit(c+15,"vga_module vga_sync_n", false,-1);
        tracep->declBus(c+16,"vga_module vga_r", false,-1, 7,0);
        tracep->declBus(c+17,"vga_module vga_g", false,-1, 7,0);
        tracep->declBus(c+18,"vga_module vga_b", false,-1, 7,0);
        tracep->declBus(c+19,"vga_module addr_h", false,-1, 9,0);
        tracep->declBus(c+20,"vga_module addr_v", false,-1, 9,0);
        tracep->declBus(c+1,"vga_module h_addr", false,-1, 9,0);
        tracep->declBus(c+2,"vga_module v_addr", false,-1, 9,0);
        tracep->declBus(c+3,"vga_module vga_data", false,-1, 23,0);
        tracep->declBit(c+9,"vga_module vga_1 clk", false,-1);
        tracep->declBit(c+10,"vga_module vga_1 rst", false,-1);
        tracep->declBus(c+3,"vga_module vga_1 vga_data", false,-1, 23,0);
        tracep->declBus(c+1,"vga_module vga_1 h_addr", false,-1, 9,0);
        tracep->declBus(c+2,"vga_module vga_1 v_addr", false,-1, 9,0);
        tracep->declBit(c+12,"vga_module vga_1 hsync", false,-1);
        tracep->declBit(c+11,"vga_module vga_1 vsync", false,-1);
        tracep->declBit(c+14,"vga_module vga_1 valid", false,-1);
        tracep->declBus(c+16,"vga_module vga_1 vga_r", false,-1, 7,0);
        tracep->declBus(c+17,"vga_module vga_1 vga_g", false,-1, 7,0);
        tracep->declBus(c+18,"vga_module vga_1 vga_b", false,-1, 7,0);
        tracep->declBit(c+13,"vga_module vga_1 vga_clk", false,-1);
        tracep->declBus(c+21,"vga_module vga_1 h_frontporch", false,-1, 31,0);
        tracep->declBus(c+22,"vga_module vga_1 h_active", false,-1, 31,0);
        tracep->declBus(c+23,"vga_module vga_1 h_backporch", false,-1, 31,0);
        tracep->declBus(c+24,"vga_module vga_1 h_total", false,-1, 31,0);
        tracep->declBus(c+25,"vga_module vga_1 v_frontporch", false,-1, 31,0);
        tracep->declBus(c+26,"vga_module vga_1 v_active", false,-1, 31,0);
        tracep->declBus(c+27,"vga_module vga_1 v_backporch", false,-1, 31,0);
        tracep->declBus(c+28,"vga_module vga_1 v_total", false,-1, 31,0);
        tracep->declBus(c+4,"vga_module vga_1 x_cnt", false,-1, 9,0);
        tracep->declBus(c+5,"vga_module vga_1 y_cnt", false,-1, 9,0);
        tracep->declBit(c+6,"vga_module vga_1 h_valid", false,-1);
        tracep->declBit(c+7,"vga_module vga_1 v_valid", false,-1);
        tracep->declBit(c+10,"vga_module vga_1 clk_1 rst", false,-1);
        tracep->declBit(c+9,"vga_module vga_1 clk_1 clk", false,-1);
        tracep->declBit(c+29,"vga_module vga_1 clk_1 en", false,-1);
        tracep->declBit(c+13,"vga_module vga_1 clk_1 clk_out", false,-1);
        tracep->declBus(c+30,"vga_module vga_1 clk_1 clk_freq", false,-1, 31,0);
        tracep->declBus(c+31,"vga_module vga_1 clk_1 count_limit", false,-1, 31,0);
        tracep->declBus(c+8,"vga_module vga_1 clk_1 count", false,-1, 31,0);
    }
}

void Vvga_module___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vvga_module___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vvga_module___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vvga_module___024root__traceRegister(Vvga_module___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vvga_module___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vvga_module___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vvga_module___024root__traceCleanup, vlSelf);
    }
}

void Vvga_module___024root__traceFullSub0(Vvga_module___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vvga_module___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vvga_module___024root* const __restrict vlSelf = static_cast<Vvga_module___024root*>(voidSelf);
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vvga_module___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vvga_module___024root__traceFullSub0(Vvga_module___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->vga_module__DOT__h_addr),10);
        tracep->fullSData(oldp+2,(vlSelf->vga_module__DOT__v_addr),10);
        tracep->fullIData(oldp+3,(vlSelf->vga_module__DOT__vga_data),24);
        tracep->fullSData(oldp+4,(vlSelf->vga_module__DOT__vga_1__DOT__x_cnt),10);
        tracep->fullSData(oldp+5,(vlSelf->vga_module__DOT__vga_1__DOT__y_cnt),10);
        tracep->fullBit(oldp+6,(vlSelf->vga_module__DOT__vga_1__DOT__h_valid));
        tracep->fullBit(oldp+7,(vlSelf->vga_module__DOT__vga_1__DOT__v_valid));
        tracep->fullIData(oldp+8,(vlSelf->vga_module__DOT__vga_1__DOT__clk_1__DOT__count),32);
        tracep->fullBit(oldp+9,(vlSelf->clk));
        tracep->fullBit(oldp+10,(vlSelf->rst));
        tracep->fullBit(oldp+11,(vlSelf->vga_vs));
        tracep->fullBit(oldp+12,(vlSelf->vga_hs));
        tracep->fullBit(oldp+13,(vlSelf->vga_clk));
        tracep->fullBit(oldp+14,(vlSelf->vga_blank_n));
        tracep->fullBit(oldp+15,(vlSelf->vga_sync_n));
        tracep->fullCData(oldp+16,(vlSelf->vga_r),8);
        tracep->fullCData(oldp+17,(vlSelf->vga_g),8);
        tracep->fullCData(oldp+18,(vlSelf->vga_b),8);
        tracep->fullSData(oldp+19,(vlSelf->addr_h),10);
        tracep->fullSData(oldp+20,(vlSelf->addr_v),10);
        tracep->fullIData(oldp+21,(0x60U),32);
        tracep->fullIData(oldp+22,(0x90U),32);
        tracep->fullIData(oldp+23,(0x310U),32);
        tracep->fullIData(oldp+24,(0x320U),32);
        tracep->fullIData(oldp+25,(2U),32);
        tracep->fullIData(oldp+26,(0x23U),32);
        tracep->fullIData(oldp+27,(0x203U),32);
        tracep->fullIData(oldp+28,(0x20dU),32);
        tracep->fullBit(oldp+29,(1U));
        tracep->fullIData(oldp+30,(0x17d7840U),32);
        tracep->fullIData(oldp+31,(1U),32);
    }
}
