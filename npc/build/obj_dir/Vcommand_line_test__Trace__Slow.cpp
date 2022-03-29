// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcommand_line_test__Syms.h"


void Vcommand_line_test___024root__traceInitSub0(Vcommand_line_test___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcommand_line_test___024root__traceInitTop(Vcommand_line_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcommand_line_test___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vcommand_line_test___024root__traceInitSub0(Vcommand_line_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+36,"clk", false,-1);
        tracep->declBit(c+37,"rst", false,-1);
        tracep->declBit(c+38,"ps2_clk", false,-1);
        tracep->declBit(c+39,"ps2_data", false,-1);
        tracep->declBit(c+40,"vga_vs", false,-1);
        tracep->declBit(c+41,"vga_hs", false,-1);
        tracep->declBit(c+42,"vga_clk", false,-1);
        tracep->declBit(c+43,"vga_blank_n", false,-1);
        tracep->declBit(c+44,"vga_sync_n", false,-1);
        tracep->declBus(c+45,"vga_r", false,-1, 7,0);
        tracep->declBus(c+46,"vga_g", false,-1, 7,0);
        tracep->declBus(c+47,"vga_b", false,-1, 7,0);
        tracep->declBus(c+48,"addr_h", false,-1, 9,0);
        tracep->declBus(c+49,"addr_v", false,-1, 9,0);
        tracep->declBit(c+50,"led", false,-1);
        tracep->declBit(c+36,"command_line_test clk", false,-1);
        tracep->declBit(c+37,"command_line_test rst", false,-1);
        tracep->declBit(c+38,"command_line_test ps2_clk", false,-1);
        tracep->declBit(c+39,"command_line_test ps2_data", false,-1);
        tracep->declBit(c+40,"command_line_test vga_vs", false,-1);
        tracep->declBit(c+41,"command_line_test vga_hs", false,-1);
        tracep->declBit(c+42,"command_line_test vga_clk", false,-1);
        tracep->declBit(c+43,"command_line_test vga_blank_n", false,-1);
        tracep->declBit(c+44,"command_line_test vga_sync_n", false,-1);
        tracep->declBus(c+45,"command_line_test vga_r", false,-1, 7,0);
        tracep->declBus(c+46,"command_line_test vga_g", false,-1, 7,0);
        tracep->declBus(c+47,"command_line_test vga_b", false,-1, 7,0);
        tracep->declBus(c+48,"command_line_test addr_h", false,-1, 9,0);
        tracep->declBus(c+49,"command_line_test addr_v", false,-1, 9,0);
        tracep->declBit(c+50,"command_line_test led", false,-1);
        tracep->declBus(c+1,"command_line_test i", false,-1, 31,0);
        tracep->declBus(c+51,"command_line_test vga_data", false,-1, 23,0);
        tracep->declBus(c+52,"command_line_test asc_data", false,-1, 7,0);
        tracep->declBus(c+27,"command_line_test key_board_data", false,-1, 7,0);
        tracep->declBus(c+2,"command_line_test key_board_data_sync", false,-1, 23,0);
        tracep->declBit(c+28,"command_line_test loosen_flag", false,-1);
        tracep->declBit(c+20,"command_line_test continue_flag", false,-1);
        tracep->declBit(c+29,"command_line_test ready", false,-1);
        tracep->declBus(c+30,"command_line_test temp_h", false,-1, 31,0);
        tracep->declBus(c+31,"command_line_test temp_v", false,-1, 31,0);
        tracep->declBus(c+32,"command_line_test char_x", false,-1, 31,0);
        tracep->declBus(c+33,"command_line_test char_y", false,-1, 31,0);
        tracep->declBus(c+34,"command_line_test temp_asc", false,-1, 7,0);
        tracep->declBus(c+35,"command_line_test down_set", false,-1, 31,0);
        tracep->declBus(c+3,"command_line_test command_x", false,-1, 7,0);
        tracep->declBus(c+4,"command_line_test command_y", false,-1, 7,0);
        tracep->declBit(c+36,"command_line_test vga_module1 clk", false,-1);
        tracep->declBit(c+37,"command_line_test vga_module1 rst", false,-1);
        tracep->declBus(c+51,"command_line_test vga_module1 vga_data", false,-1, 23,0);
        tracep->declBus(c+48,"command_line_test vga_module1 h_addr", false,-1, 9,0);
        tracep->declBus(c+49,"command_line_test vga_module1 v_addr", false,-1, 9,0);
        tracep->declBit(c+41,"command_line_test vga_module1 hsync", false,-1);
        tracep->declBit(c+40,"command_line_test vga_module1 vsync", false,-1);
        tracep->declBit(c+43,"command_line_test vga_module1 valid", false,-1);
        tracep->declBus(c+45,"command_line_test vga_module1 vga_r", false,-1, 7,0);
        tracep->declBus(c+46,"command_line_test vga_module1 vga_g", false,-1, 7,0);
        tracep->declBus(c+47,"command_line_test vga_module1 vga_b", false,-1, 7,0);
        tracep->declBit(c+42,"command_line_test vga_module1 vga_clk", false,-1);
        tracep->declBus(c+53,"command_line_test vga_module1 h_frontporch", false,-1, 31,0);
        tracep->declBus(c+54,"command_line_test vga_module1 h_active", false,-1, 31,0);
        tracep->declBus(c+55,"command_line_test vga_module1 h_backporch", false,-1, 31,0);
        tracep->declBus(c+56,"command_line_test vga_module1 h_total", false,-1, 31,0);
        tracep->declBus(c+57,"command_line_test vga_module1 v_frontporch", false,-1, 31,0);
        tracep->declBus(c+58,"command_line_test vga_module1 v_active", false,-1, 31,0);
        tracep->declBus(c+59,"command_line_test vga_module1 v_backporch", false,-1, 31,0);
        tracep->declBus(c+60,"command_line_test vga_module1 v_total", false,-1, 31,0);
        tracep->declBus(c+21,"command_line_test vga_module1 x_cnt", false,-1, 9,0);
        tracep->declBus(c+22,"command_line_test vga_module1 y_cnt", false,-1, 9,0);
        tracep->declBit(c+23,"command_line_test vga_module1 h_valid", false,-1);
        tracep->declBit(c+24,"command_line_test vga_module1 v_valid", false,-1);
        tracep->declBit(c+36,"command_line_test keyboard1 clk", false,-1);
        tracep->declBit(c+37,"command_line_test keyboard1 rst", false,-1);
        tracep->declBit(c+38,"command_line_test keyboard1 ps2_clk", false,-1);
        tracep->declBit(c+39,"command_line_test keyboard1 ps2_data", false,-1);
        tracep->declBit(c+20,"command_line_test keyboard1 continue_flag", false,-1);
        tracep->declBus(c+27,"command_line_test keyboard1 keyboard_data", false,-1, 7,0);
        tracep->declBit(c+28,"command_line_test keyboard1 loosen_flag", false,-1);
        tracep->declBit(c+29,"command_line_test keyboard1 ready", false,-1);
        tracep->declBus(c+25,"command_line_test keyboard1 data_sync", false,-1, 31,0);
        tracep->declBit(c+5,"command_line_test keyboard1 overflow", false,-1);
        tracep->declBit(c+26,"command_line_test keyboard1 nextdata_n", false,-1);
        tracep->declBit(c+36,"command_line_test keyboard1 k1 clk", false,-1);
        tracep->declBit(c+37,"command_line_test keyboard1 k1 clrn", false,-1);
        tracep->declBit(c+38,"command_line_test keyboard1 k1 ps2_clk", false,-1);
        tracep->declBit(c+39,"command_line_test keyboard1 k1 ps2_data", false,-1);
        tracep->declBit(c+26,"command_line_test keyboard1 k1 nextdata_n", false,-1);
        tracep->declBus(c+27,"command_line_test keyboard1 k1 data", false,-1, 7,0);
        tracep->declBit(c+29,"command_line_test keyboard1 k1 ready", false,-1);
        tracep->declBit(c+5,"command_line_test keyboard1 k1 overflow", false,-1);
        tracep->declBus(c+6,"command_line_test keyboard1 k1 buffer", false,-1, 9,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+7+i*1,"command_line_test keyboard1 k1 fifo", true,(i+0), 7,0);}}
        tracep->declBus(c+15,"command_line_test keyboard1 k1 w_ptr", false,-1, 2,0);
        tracep->declBus(c+16,"command_line_test keyboard1 k1 r_ptr", false,-1, 2,0);
        tracep->declBus(c+17,"command_line_test keyboard1 k1 count", false,-1, 3,0);
        tracep->declBus(c+18,"command_line_test keyboard1 k1 ps2_clk_sync", false,-1, 2,0);
        tracep->declBit(c+19,"command_line_test keyboard1 k1 sampling", false,-1);
    }
}

void Vcommand_line_test___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vcommand_line_test___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vcommand_line_test___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vcommand_line_test___024root__traceRegister(Vcommand_line_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vcommand_line_test___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vcommand_line_test___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vcommand_line_test___024root__traceCleanup, vlSelf);
    }
}

void Vcommand_line_test___024root__traceFullSub0(Vcommand_line_test___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcommand_line_test___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcommand_line_test___024root* const __restrict vlSelf = static_cast<Vcommand_line_test___024root*>(voidSelf);
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcommand_line_test___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcommand_line_test___024root__traceFullSub0(Vcommand_line_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->command_line_test__DOT__i),32);
        tracep->fullIData(oldp+2,(vlSelf->command_line_test__DOT__key_board_data_sync),24);
        tracep->fullCData(oldp+3,(vlSelf->command_line_test__DOT__command_x),8);
        tracep->fullCData(oldp+4,(vlSelf->command_line_test__DOT__command_y),8);
        tracep->fullBit(oldp+5,(vlSelf->command_line_test__DOT__keyboard1__DOT__overflow));
        tracep->fullSData(oldp+6,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__buffer),10);
        tracep->fullCData(oldp+7,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[0]),8);
        tracep->fullCData(oldp+8,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[1]),8);
        tracep->fullCData(oldp+9,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[2]),8);
        tracep->fullCData(oldp+10,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[3]),8);
        tracep->fullCData(oldp+11,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[4]),8);
        tracep->fullCData(oldp+12,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[5]),8);
        tracep->fullCData(oldp+13,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[6]),8);
        tracep->fullCData(oldp+14,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[7]),8);
        tracep->fullCData(oldp+15,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr),3);
        tracep->fullCData(oldp+16,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr),3);
        tracep->fullCData(oldp+17,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__count),4);
        tracep->fullCData(oldp+18,(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync),3);
        tracep->fullBit(oldp+19,((IData)((4U == (6U 
                                                 & (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync))))));
        tracep->fullBit(oldp+20,(vlSelf->command_line_test__DOT__continue_flag));
        tracep->fullSData(oldp+21,(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt),10);
        tracep->fullSData(oldp+22,(vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt),10);
        tracep->fullBit(oldp+23,(vlSelf->command_line_test__DOT__vga_module1__DOT__h_valid));
        tracep->fullBit(oldp+24,(vlSelf->command_line_test__DOT__vga_module1__DOT__v_valid));
        tracep->fullIData(oldp+25,(vlSelf->command_line_test__DOT__keyboard1__DOT__data_sync),32);
        tracep->fullBit(oldp+26,(vlSelf->command_line_test__DOT__keyboard1__DOT__nextdata_n));
        tracep->fullCData(oldp+27,(vlSelf->command_line_test__DOT__key_board_data),8);
        tracep->fullBit(oldp+28,((0xf0U == (IData)(vlSelf->command_line_test__DOT__key_board_data))));
        tracep->fullBit(oldp+29,(vlSelf->command_line_test__DOT__ready));
        tracep->fullIData(oldp+30,(vlSelf->command_line_test__DOT__temp_h),32);
        tracep->fullIData(oldp+31,(vlSelf->command_line_test__DOT__temp_v),32);
        tracep->fullIData(oldp+32,(vlSelf->command_line_test__DOT__char_x),32);
        tracep->fullIData(oldp+33,(vlSelf->command_line_test__DOT__char_y),32);
        tracep->fullCData(oldp+34,(vlSelf->command_line_test__DOT__temp_asc),8);
        tracep->fullIData(oldp+35,(vlSelf->command_line_test__DOT__down_set),32);
        tracep->fullBit(oldp+36,(vlSelf->clk));
        tracep->fullBit(oldp+37,(vlSelf->rst));
        tracep->fullBit(oldp+38,(vlSelf->ps2_clk));
        tracep->fullBit(oldp+39,(vlSelf->ps2_data));
        tracep->fullBit(oldp+40,(vlSelf->vga_vs));
        tracep->fullBit(oldp+41,(vlSelf->vga_hs));
        tracep->fullBit(oldp+42,(vlSelf->vga_clk));
        tracep->fullBit(oldp+43,(vlSelf->vga_blank_n));
        tracep->fullBit(oldp+44,(vlSelf->vga_sync_n));
        tracep->fullCData(oldp+45,(vlSelf->vga_r),8);
        tracep->fullCData(oldp+46,(vlSelf->vga_g),8);
        tracep->fullCData(oldp+47,(vlSelf->vga_b),8);
        tracep->fullSData(oldp+48,(vlSelf->addr_h),10);
        tracep->fullSData(oldp+49,(vlSelf->addr_v),10);
        tracep->fullBit(oldp+50,(vlSelf->led));
        tracep->fullIData(oldp+51,(vlSelf->command_line_test__DOT__vga_data),24);
        tracep->fullCData(oldp+52,(vlSelf->command_line_test__DOT__asc_data),8);
        tracep->fullIData(oldp+53,(0x60U),32);
        tracep->fullIData(oldp+54,(0x90U),32);
        tracep->fullIData(oldp+55,(0x310U),32);
        tracep->fullIData(oldp+56,(0x320U),32);
        tracep->fullIData(oldp+57,(2U),32);
        tracep->fullIData(oldp+58,(0x23U),32);
        tracep->fullIData(oldp+59,(0x203U),32);
        tracep->fullIData(oldp+60,(0x20dU),32);
    }
}
