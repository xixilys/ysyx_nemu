// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommand_line_test.h for the primary calling header

#include "Vcommand_line_test___024root.h"
#include "Vcommand_line_test__Syms.h"

//==========


void Vcommand_line_test___024root___ctor_var_reset(Vcommand_line_test___024root* vlSelf);

Vcommand_line_test___024root::Vcommand_line_test___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcommand_line_test___024root___ctor_var_reset(this);
}

void Vcommand_line_test___024root::__Vconfigure(Vcommand_line_test__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcommand_line_test___024root::~Vcommand_line_test___024root() {
}

void Vcommand_line_test___024root___initial__TOP__1(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    VlWide<7>/*223:0*/ __Vtemp2;
    VlWide<6>/*191:0*/ __Vtemp4;
    // Body
    vlSelf->vga_sync_n = 0U;
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x74757265U;
    __Vtemp1[2U] = 0x2f706963U;
    __Vtemp1[3U] = 0x75726365U;
    __Vtemp1[4U] = 0x7265736fU;
    VL_READMEM_N(true, 24, 500001, 0, VL_CVT_PACK_STR_NW(5, __Vtemp1)
                 ,  &(vlSelf->command_line_test__DOT__vga_data_array)
                 , 0, ~0ULL);
    __Vtemp2[0U] = 0x2e686578U;
    __Vtemp2[1U] = 0x61626c65U;
    __Vtemp2[2U] = 0x75705f74U;
    __Vtemp2[3U] = 0x6f6f6b5fU;
    __Vtemp2[4U] = 0x63652f6cU;
    __Vtemp2[5U] = 0x736f7572U;
    __Vtemp2[6U] = 0x7265U;
    VL_READMEM_N(true, 16, 256, 0, VL_CVT_PACK_STR_NW(7, __Vtemp2)
                 ,  &(vlSelf->command_line_test__DOT__raw_table_data)
                 , 0, ~0ULL);
    vlSelf->command_line_test__DOT__i = 0U;
    while ((0xffU >= vlSelf->command_line_test__DOT__i)) {
        vlSelf->command_line_test__DOT__lookup_table[(0xffU 
                                                      & (vlSelf->command_line_test__DOT__raw_table_data
                                                         [
                                                         (0xffU 
                                                          & vlSelf->command_line_test__DOT__i)] 
                                                         >> 8U))] 
            = (0xffU & vlSelf->command_line_test__DOT__raw_table_data
               [(0xffU & vlSelf->command_line_test__DOT__i)]);
        vlSelf->command_line_test__DOT__i = ((IData)(1U) 
                                             + vlSelf->command_line_test__DOT__i);
    }
    __Vtemp4[0U] = 0x2e686578U;
    __Vtemp4[1U] = 0x79706873U;
    __Vtemp4[2U] = 0x615f676cU;
    __Vtemp4[3U] = 0x652f7667U;
    __Vtemp4[4U] = 0x6f757263U;
    __Vtemp4[5U] = 0x726573U;
    VL_READMEM_N(true, 12, 5001, 0, VL_CVT_PACK_STR_NW(6, __Vtemp4)
                 ,  &(vlSelf->command_line_test__DOT__char_table)
                 , 0, ~0ULL);
}

void Vcommand_line_test___024root___settle__TOP__4(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->vga_clk = vlSelf->clk;
    vlSelf->vga_hs = (0x60U < (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt));
    vlSelf->command_line_test__DOT__key_board_data 
        = vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo
        [vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr];
    vlSelf->vga_vs = (2U < (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt));
    vlSelf->command_line_test__DOT__vga_module1__DOT__h_valid 
        = ((0x90U < (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt)) 
           & (0x310U >= (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt)));
    vlSelf->command_line_test__DOT__vga_module1__DOT__v_valid 
        = ((0x23U < (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt)) 
           & (0x203U >= (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt)));
    if (vlSelf->command_line_test__DOT__vga_module1__DOT__h_valid) {
        vlSelf->addr_h = (0x3ffU & (((IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt) 
                                     - (IData)(0x90U)) 
                                    - (IData)(1U)));
        vlSelf->vga_blank_n = ((IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__v_valid) 
                               & 1U);
    } else {
        vlSelf->addr_h = 0U;
        vlSelf->vga_blank_n = 0U;
    }
    vlSelf->addr_v = ((IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__v_valid)
                       ? (0x3ffU & (((IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt) 
                                     - (IData)(0x23U)) 
                                    - (IData)(1U)))
                       : 0U);
    vlSelf->command_line_test__DOT__vga_data = ((0x7a120U 
                                                 >= 
                                                 (((IData)(vlSelf->addr_h) 
                                                   << 9U) 
                                                  | (0x1ffU 
                                                     & (IData)(vlSelf->addr_v))))
                                                 ? 
                                                vlSelf->command_line_test__DOT__vga_data_array
                                                [(((IData)(vlSelf->addr_h) 
                                                   << 9U) 
                                                  | (0x1ffU 
                                                     & (IData)(vlSelf->addr_v)))]
                                                 : 0U);
    vlSelf->vga_r = (0xffU & (vlSelf->command_line_test__DOT__vga_data 
                              >> 0x10U));
    vlSelf->vga_g = (0xffU & (vlSelf->command_line_test__DOT__vga_data 
                              >> 8U));
    vlSelf->vga_b = (0xffU & vlSelf->command_line_test__DOT__vga_data);
}

void Vcommand_line_test___024root___eval_initial(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___eval_initial\n"); );
    // Body
    Vcommand_line_test___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__command_line_test__DOT__ready 
        = vlSelf->__VinpClk__TOP__command_line_test__DOT__ready;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP__vga_vs = vlSelf->vga_vs;
}

void Vcommand_line_test___024root___eval_settle(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___eval_settle\n"); );
    // Body
    Vcommand_line_test___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vcommand_line_test___024root___final(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___final\n"); );
}

void Vcommand_line_test___024root___ctor_var_reset(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->vga_vs = 0;
    vlSelf->vga_hs = 0;
    vlSelf->vga_clk = 0;
    vlSelf->vga_blank_n = 0;
    vlSelf->vga_sync_n = 0;
    vlSelf->vga_r = 0;
    vlSelf->vga_g = 0;
    vlSelf->vga_b = 0;
    vlSelf->addr_h = 0;
    vlSelf->addr_v = 0;
    vlSelf->led = 0;
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->command_line_test__DOT__raw_table_data[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->command_line_test__DOT__lookup_table[__Vi0] = 0;
    }
    vlSelf->command_line_test__DOT__i = 0;
    for (int __Vi0=0; __Vi0<500001; ++__Vi0) {
        vlSelf->command_line_test__DOT__vga_data_array[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<5001; ++__Vi0) {
        vlSelf->command_line_test__DOT__char_table[__Vi0] = 0;
    }
    vlSelf->command_line_test__DOT__vga_data = 0;
    for (int __Vi0=0; __Vi0<2501; ++__Vi0) {
        vlSelf->command_line_test__DOT__screen_data[__Vi0] = 0;
    }
    vlSelf->command_line_test__DOT__asc_data = 0;
    vlSelf->command_line_test__DOT__key_board_data = 0;
    vlSelf->command_line_test__DOT__key_board_data_sync = 0;
    vlSelf->command_line_test__DOT__continue_flag = 0;
    vlSelf->command_line_test__DOT__ready = 0;
    vlSelf->command_line_test__DOT__temp_h = 0;
    vlSelf->command_line_test__DOT__temp_v = 0;
    vlSelf->command_line_test__DOT__char_x = 0;
    vlSelf->command_line_test__DOT__char_y = 0;
    vlSelf->command_line_test__DOT__temp_asc = 0;
    vlSelf->command_line_test__DOT__down_set = 0;
    vlSelf->command_line_test__DOT__command_x = 0;
    vlSelf->command_line_test__DOT__command_y = 0;
    vlSelf->command_line_test__DOT____Vlvbound1 = 0;
    vlSelf->command_line_test__DOT____Vlvbound2 = 0;
    vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt = 0;
    vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt = 0;
    vlSelf->command_line_test__DOT__vga_module1__DOT__h_valid = 0;
    vlSelf->command_line_test__DOT__vga_module1__DOT__v_valid = 0;
    vlSelf->command_line_test__DOT__keyboard1__DOT__data_sync = 0;
    vlSelf->command_line_test__DOT__keyboard1__DOT__overflow = 0;
    vlSelf->command_line_test__DOT__keyboard1__DOT__nextdata_n = 0;
    vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__buffer = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr = 0;
    vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr = 0;
    vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__count = 0;
    vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync = 0;
    vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT____Vlvbound1 = 0;
    vlSelf->__Vdlyvdim0__command_line_test__DOT__screen_data__v0 = 0;
    vlSelf->__Vdlyvval__command_line_test__DOT__screen_data__v0 = 0;
    vlSelf->__Vdlyvset__command_line_test__DOT__screen_data__v0 = 0;
    vlSelf->__Vdly__command_line_test__DOT__ready = 0;
    vlSelf->__VinpClk__TOP__command_line_test__DOT__ready = 0;
    vlSelf->__Vchglast__TOP__command_line_test__DOT__ready = 0;
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
