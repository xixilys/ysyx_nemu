// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcommand_line_test__Syms.h"


void Vcommand_line_test___024root__traceChgSub0(Vcommand_line_test___024root* vlSelf, VerilatedVcd* tracep);

void Vcommand_line_test___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcommand_line_test___024root* const __restrict vlSelf = static_cast<Vcommand_line_test___024root*>(voidSelf);
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vcommand_line_test___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcommand_line_test___024root__traceChgSub0(Vcommand_line_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->command_line_test__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+1,(vlSelf->command_line_test__DOT__key_board_data_sync),24);
            tracep->chgCData(oldp+2,(vlSelf->command_line_test__DOT__command_x),8);
            tracep->chgCData(oldp+3,(vlSelf->command_line_test__DOT__command_y),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+4,(vlSelf->command_line_test__DOT__keyboard1__DOT__overflow));
            tracep->chgSData(oldp+5,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__buffer),10);
            tracep->chgCData(oldp+6,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[0]),8);
            tracep->chgCData(oldp+7,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[1]),8);
            tracep->chgCData(oldp+8,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[2]),8);
            tracep->chgCData(oldp+9,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[3]),8);
            tracep->chgCData(oldp+10,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[4]),8);
            tracep->chgCData(oldp+11,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[5]),8);
            tracep->chgCData(oldp+12,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[6]),8);
            tracep->chgCData(oldp+13,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[7]),8);
            tracep->chgCData(oldp+14,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr),3);
            tracep->chgCData(oldp+15,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr),3);
            tracep->chgCData(oldp+16,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__count),4);
            tracep->chgCData(oldp+17,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync),3);
            tracep->chgBit(oldp+18,((IData)((4U == 
                                             (6U & (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+19,(vlSelf->command_line_test__DOT__continue_flag));
            tracep->chgSData(oldp+20,(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt),10);
            tracep->chgSData(oldp+21,(vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt),10);
            tracep->chgBit(oldp+22,(vlSelf->command_line_test__DOT__vga_module1__DOT__h_valid));
            tracep->chgBit(oldp+23,(vlSelf->command_line_test__DOT__vga_module1__DOT__v_valid));
            tracep->chgIData(oldp+24,(vlSelf->command_line_test__DOT__keyboard1__DOT__data_sync),32);
            tracep->chgBit(oldp+25,(vlSelf->command_line_test__DOT__keyboard1__DOT__nextdata_n));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgCData(oldp+26,(vlSelf->command_line_test__DOT__key_board_data),8);
            tracep->chgBit(oldp+27,((0xf0U == (IData)(vlSelf->command_line_test__DOT__key_board_data))));
            tracep->chgBit(oldp+28,(vlSelf->command_line_test__DOT__ready));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgIData(oldp+29,(vlSelf->command_line_test__DOT__temp_h),32);
            tracep->chgIData(oldp+30,(vlSelf->command_line_test__DOT__temp_v),32);
            tracep->chgIData(oldp+31,(vlSelf->command_line_test__DOT__char_x),32);
            tracep->chgIData(oldp+32,(vlSelf->command_line_test__DOT__char_y),32);
            tracep->chgCData(oldp+33,(vlSelf->command_line_test__DOT__temp_asc),8);
            tracep->chgIData(oldp+34,(vlSelf->command_line_test__DOT__down_set),32);
        }
        tracep->chgBit(oldp+35,(vlSelf->clk));
        tracep->chgBit(oldp+36,(vlSelf->rst));
        tracep->chgBit(oldp+37,(vlSelf->ps2_clk));
        tracep->chgBit(oldp+38,(vlSelf->ps2_data));
        tracep->chgBit(oldp+39,(vlSelf->vga_vs));
        tracep->chgBit(oldp+40,(vlSelf->vga_hs));
        tracep->chgBit(oldp+41,(vlSelf->vga_clk));
        tracep->chgBit(oldp+42,(vlSelf->vga_blank_n));
        tracep->chgBit(oldp+43,(vlSelf->vga_sync_n));
        tracep->chgCData(oldp+44,(vlSelf->vga_r),8);
        tracep->chgCData(oldp+45,(vlSelf->vga_g),8);
        tracep->chgCData(oldp+46,(vlSelf->vga_b),8);
        tracep->chgSData(oldp+47,(vlSelf->addr_h),10);
        tracep->chgSData(oldp+48,(vlSelf->addr_v),10);
        tracep->chgBit(oldp+49,(vlSelf->led));
        tracep->chgIData(oldp+50,(vlSelf->command_line_test__DOT__vga_data),24);
    }
}

void Vcommand_line_test___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vcommand_line_test___024root* const __restrict vlSelf = static_cast<Vcommand_line_test___024root*>(voidSelf);
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    }
}
