// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_mycpu_top.h"

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__0(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__0\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__clock 
        = vlSelf->__PVT__data_cache_clock;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__clock 
        = vlSelf->__PVT__inst_cache_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk 
        = vlSelf->__PVT__u_riscv_cpu_clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___regfile_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2mem2_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem22wb_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__1(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__1\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rvalid 
        = vlSelf->__PVT__data_cache_io_port_rvalid;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__2(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ext_int 
        = vlSelf->__PVT__u_riscv_cpu_ext_int;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_M_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_R_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_M_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_R_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_L_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__3(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__3\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rdata 
        = vlSelf->__PVT__data_cache_io_port_rdata;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__4\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_bvalid 
        = vlSelf->__PVT__data_cache_io_port_bvalid;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awready 
        = vlSelf->__PVT__data_cache_io_port_awready;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__0(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__0\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_inst_buffer_full = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_full;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__2(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_inst_buffer_full 
        = vlSelf->__PVT__inst_cache_io_inst_buffer_full;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__5(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__5\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_arready 
        = vlSelf->__PVT__inst_cache_io_port_arready;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__6(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__6\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rlast 
        = vlSelf->__PVT__inst_cache_io_port_rlast;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rvalid 
        = vlSelf->__PVT__inst_cache_io_port_rvalid;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_65 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_1_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_0_pre_decoder_branchD_flag));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_145 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_1_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_0_pre_lookup_data));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_161 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_1_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_0_pre_pc_target);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_177 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_1_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_0_exception_type));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_209 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_1_pc
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_0_pc);
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__7(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__7\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_sram_write_en = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_write_en;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_8 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_exception)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_point_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_exception;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_7 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_exception;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_dina, 0U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_dina, 8U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_dina, 0x10U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_dina, 0x18U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_dina, 0x20U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_dina, 0x28U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_dina, 0x30U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_dina, 0x38U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_dina, 0U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_dina, 8U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_dina, 0x10U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_dina, 0x18U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_dina, 0x20U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_dina, 0x28U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_dina, 0x30U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_dina, 0x38U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_dina, 0U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_dina, 8U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_dina, 0x10U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_dina, 0x18U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_dina, 0x20U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_dina, 0x28U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_dina, 0x30U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_dina, 0x38U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 8U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0x10U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0x18U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0x20U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0x28U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0x30U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0x38U, 8U));
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__8(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__8\n"); );
    // Body
    vlSelf->__PVT__inst_cache_reset = (1U & (~ (IData)(vlSelf->aresetn)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_reset 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem22wb_reset 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___regfile_reset 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_reset 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_reset 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_reset 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_bru_state_reset 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem_bru_state_reset 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mtrace_mod_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___commit_difftest_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__3(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__3\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wdata = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wdata;
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wnum = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wnum;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__9(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__9\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__reset 
        = vlSelf->__PVT__inst_cache_reset;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__reset 
        = vlSelf->__PVT__data_cache_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___regfile_reset;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__5(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__5\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_debug_wb_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_pc;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__6(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__6\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_p_addr_for_tlb 
        = vlSelf->__PVT__inst_cache_io_p_addr_for_tlb;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__0(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__0\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wen = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wen;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__10(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__10\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_wr 
        = vlSelf->__PVT__data_cache_io_sram_wr;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_size 
        = vlSelf->__PVT__data_cache_io_sram_size;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_8 
        = ((8U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_8
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_7);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_134 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_133));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_134 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_133));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_134 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_133));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_134 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_133));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_MemWidthD 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_MemWidthD_T_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_MemWidthD_T_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__dmem_addr_cal_Stall 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___jr_Stall_T_14) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_22));
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__2(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__2\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_sram_rdata = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_rdata;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__4\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_rdata 
        = vlSelf->__PVT__u_riscv_cpu_data_sram_rdata;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__5(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__5\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_port_wdata = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wdata;
}
