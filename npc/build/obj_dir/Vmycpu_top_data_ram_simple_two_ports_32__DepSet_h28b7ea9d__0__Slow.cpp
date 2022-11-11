// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first___05F32.h"
#include "Vmycpu_top_data_ram_simple_two_ports_32.h"

VL_ATTR_COLD void Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0__0(Vmycpu_top_data_ram_simple_two_ports_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0__1(Vmycpu_top_data_ram_simple_two_ports_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__btb_tag_ram_0__0(Vmycpu_top_data_ram_simple_two_ports_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__btb_tag_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__btb_tag_ram_0__1(Vmycpu_top_data_ram_simple_two_ports_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__btb_tag_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0__0(Vmycpu_top_data_ram_simple_two_ports_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0__1(Vmycpu_top_data_ram_simple_two_ports_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__btb_tag_ram_0__0(Vmycpu_top_data_ram_simple_two_ports_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__btb_tag_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
}

VL_ATTR_COLD void Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__btb_tag_ram_0__1(Vmycpu_top_data_ram_simple_two_ports_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_data_ram_simple_two_ports_32___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__btb_tag_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}
