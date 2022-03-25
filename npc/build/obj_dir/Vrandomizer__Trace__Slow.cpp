// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrandomizer__Syms.h"


void Vrandomizer___024root__traceInitSub0(Vrandomizer___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vrandomizer___024root__traceInitTop(Vrandomizer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vrandomizer___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vrandomizer___024root__traceInitSub0(Vrandomizer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+9,"clk", false,-1);
        tracep->declBit(c+10,"rst", false,-1);
        tracep->declBus(c+11,"bcd_num0", false,-1, 6,0);
        tracep->declBus(c+12,"bcd_num1", false,-1, 6,0);
        tracep->declBus(c+13,"bcd_num2", false,-1, 6,0);
        tracep->declBit(c+9,"randomizer clk", false,-1);
        tracep->declBit(c+10,"randomizer rst", false,-1);
        tracep->declBus(c+11,"randomizer bcd_num0", false,-1, 6,0);
        tracep->declBus(c+12,"randomizer bcd_num1", false,-1, 6,0);
        tracep->declBus(c+13,"randomizer bcd_num2", false,-1, 6,0);
        tracep->declBus(c+1,"randomizer reg_lfsr", false,-1, 7,0);
        tracep->declBus(c+14,"randomizer last_reg", false,-1, 7,0);
        tracep->declBit(c+2,"randomizer bitsevern", false,-1);
        tracep->declBus(c+3,"randomizer x1", false,-1, 7,0);
        tracep->declBus(c+4,"randomizer x2", false,-1, 7,0);
        tracep->declBus(c+5,"randomizer x3", false,-1, 7,0);
        tracep->declBus(c+6,"randomizer bcd1 x", false,-1, 3,0);
        tracep->declBit(c+15,"randomizer bcd1 en", false,-1);
        tracep->declBus(c+11,"randomizer bcd1 y", false,-1, 6,0);
        tracep->declBus(c+7,"randomizer bcd2 x", false,-1, 3,0);
        tracep->declBit(c+15,"randomizer bcd2 en", false,-1);
        tracep->declBus(c+12,"randomizer bcd2 y", false,-1, 6,0);
        tracep->declBus(c+8,"randomizer bcd3 x", false,-1, 3,0);
        tracep->declBit(c+15,"randomizer bcd3 en", false,-1);
        tracep->declBus(c+13,"randomizer bcd3 y", false,-1, 6,0);
    }
}

void Vrandomizer___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vrandomizer___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vrandomizer___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vrandomizer___024root__traceRegister(Vrandomizer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vrandomizer___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vrandomizer___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vrandomizer___024root__traceCleanup, vlSelf);
    }
}

void Vrandomizer___024root__traceFullSub0(Vrandomizer___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vrandomizer___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vrandomizer___024root* const __restrict vlSelf = static_cast<Vrandomizer___024root*>(voidSelf);
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vrandomizer___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vrandomizer___024root__traceFullSub0(Vrandomizer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->randomizer__DOT__reg_lfsr),8);
        tracep->fullBit(oldp+2,((1U & VL_REDXOR_32(
                                                   (0xfU 
                                                    & (IData)(vlSelf->randomizer__DOT__reg_lfsr))))));
        tracep->fullCData(oldp+3,((0xffU & VL_MODDIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0xaU)))),8);
        tracep->fullCData(oldp+4,((0xffU & VL_DIV_III(32, 
                                                      VL_MODDIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0x64U)), (IData)(0xaU)))),8);
        tracep->fullCData(oldp+5,((0xffU & VL_DIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0x64U)))),8);
        tracep->fullCData(oldp+6,((0xfU & VL_MODDIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0xaU)))),4);
        tracep->fullCData(oldp+7,((0xfU & VL_DIV_III(32, 
                                                     VL_MODDIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0x64U)), (IData)(0xaU)))),4);
        tracep->fullCData(oldp+8,((0xfU & VL_DIV_III(32, (IData)(vlSelf->randomizer__DOT__reg_lfsr), (IData)(0x64U)))),4);
        tracep->fullBit(oldp+9,(vlSelf->clk));
        tracep->fullBit(oldp+10,(vlSelf->rst));
        tracep->fullCData(oldp+11,(vlSelf->bcd_num0),7);
        tracep->fullCData(oldp+12,(vlSelf->bcd_num1),7);
        tracep->fullCData(oldp+13,(vlSelf->bcd_num2),7);
        tracep->fullCData(oldp+14,(vlSelf->randomizer__DOT__last_reg),8);
        tracep->fullBit(oldp+15,(1U));
    }
}
