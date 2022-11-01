// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first___05F40.h"
#include "Vmycpu_top_data_ram_one_port_with_latency.h"

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(40, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_out;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}
