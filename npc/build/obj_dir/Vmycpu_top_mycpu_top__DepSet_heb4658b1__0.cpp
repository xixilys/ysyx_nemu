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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn 
        = vlSelf->__PVT__u_riscv_cpu_resetn;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem_bru_state_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_bru_state_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_reset 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___br_reset 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___regfile_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2mem2_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__1(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__1\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_arready 
        = vlSelf->__PVT__inst_cache_io_port_arready;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__2(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ext_int 
        = vlSelf->__PVT__u_riscv_cpu_ext_int;
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
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__0(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__0\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wdata = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wdata;
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wnum = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wnum;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__3(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__3\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awready 
        = vlSelf->__PVT__data_cache_io_port_awready;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__0(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__0\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wen = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wen;
    vlSelf->debug_wb_rf_wen = vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wen;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__4\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rlast 
        = vlSelf->__PVT__inst_cache_io_port_rlast;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rvalid 
        = vlSelf->__PVT__inst_cache_io_port_rvalid;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__3(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__3\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_inst_buffer_full = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_full;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__5(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__5\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_inst_buffer_full 
        = vlSelf->__PVT__inst_cache_io_inst_buffer_full;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__5(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__5\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rdata 
        = vlSelf->__PVT__data_cache_io_port_rdata;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rvalid 
        = vlSelf->__PVT__data_cache_io_port_rvalid;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__6(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__6\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__reset 
        = vlSelf->__PVT__data_cache_reset;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__6(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__6\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_tlb_req = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_tlb_req;
    vlSelf->__PVT__data_cache_io_p_addr_for_tlb = vlSelf->__PVT__data_cache_io_v_addr_for_tlb;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__7(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__7\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_p_addr_for_tlb 
        = vlSelf->__PVT__data_cache_io_p_addr_for_tlb;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__1(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__1\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_sram_rdata = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_rdata;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__3(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__3\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_rdata 
        = vlSelf->__PVT__u_riscv_cpu_data_sram_rdata;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__8(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__8\n"); );
    // Body
    vlSelf->axi_mem_port_1_arburst = vlSelf->__PVT__data_cache_io_port_arburst;
    vlSelf->axi_mem_port_1_awburst = vlSelf->__PVT__data_cache_io_port_awburst;
    vlSelf->__PVT__data_cache_io_port_awsize = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awsize;
    vlSelf->__PVT__data_cache_io_port_awlen = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awlen;
    vlSelf->__PVT__data_cache_io_port_arsize = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arsize;
    vlSelf->__PVT__data_cache_io_port_arlen = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arlen;
    vlSelf->axi_mem_port_1_arlen = vlSelf->__PVT__data_cache_io_port_arlen;
    vlSelf->axi_mem_port_1_arsize = vlSelf->__PVT__data_cache_io_port_arsize;
    vlSelf->axi_mem_port_1_awlen = vlSelf->__PVT__data_cache_io_port_awlen;
    vlSelf->axi_mem_port_1_awsize = vlSelf->__PVT__data_cache_io_port_awsize;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__9(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__9\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_port_wlast = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wlast;
    vlSelf->__PVT__data_cache_io_port_wstrb = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wstrb;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__10(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__10\n"); );
    // Body
    vlSelf->axi_mem_port_0_arvalid = vlSelf->__PVT__inst_cache_io_port_arvalid;
    vlSelf->__PVT__inst_cache_io_port_araddr = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_araddr;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__12(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__12\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_debug_wb_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_pc;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__7(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__7\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__reset 
        = vlSelf->__PVT__inst_cache_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___regfile_reset;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__14(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__14\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_v_addr_for_tlb = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_v_addr_for_tlb;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__16(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__16\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_p_addr_for_tlb 
        = vlSelf->__PVT__inst_cache_io_p_addr_for_tlb;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__8(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__8\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_sram_write_en = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_8 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___csr_io_exception)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___commit_difftest_debug_pc 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_exception)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___csr_io_return_pc
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem22wb_io_Pc_NextW);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_point_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___csr_io_exception;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_7 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___csr_io_exception;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_309 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_6_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_295);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_311 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_6_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_297);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_312 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_6_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_298));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_318 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_6_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_304));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_319 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_6_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_305));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_321 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_6_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_307));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_309 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_6_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_295);
    vlSelf->__PVT__u_riscv_cpu_inst_write_en = vlSelf->__PVT__inst_cache_io_sram_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_point_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_323 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_7_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_309);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_325 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_7_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_311);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_326 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_7_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_312));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_332 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_7_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_318));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_333 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_7_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_319));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_335 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_7_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_321));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_323 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_7_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_309);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_write_en 
        = vlSelf->__PVT__u_riscv_cpu_inst_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_337 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_8_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_323);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_339 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_8_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_325);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_340 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_8_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_326));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_346 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_8_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_332));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_347 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_8_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_333));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_349 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_8_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_335));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_337 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_8_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_323);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_351 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_9_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_337);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_353 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_9_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_339);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_354 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_9_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_340));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_360 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_9_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_346));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_361 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_9_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_347));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_363 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_9_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_349));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_351 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_9_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_337);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___write_banks_points_T_2 
        = (3U & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__write_banks_points) 
                 + (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_en)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_write 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__write_banks_points)) 
           & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_en), 0U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_write 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__write_banks_points)) 
           & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_en), 0U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_write 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__write_banks_points)) 
           & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_en), 0U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_write 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__write_banks_points)) 
           & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_en), 0U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_56 
        = VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_en));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2_exception_T 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2mem2_io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem2_bru_state_io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_inst 
        = VL_SEL_IQII(40, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_rdata_L, 0U, 0x20U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchD_flag 
        = (1U & VL_BITSEL_IQII(40, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_rdata_L, 0x20U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jump 
        = (1U & VL_BITSEL_IQII(40, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_rdata_L, 0x21U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchdata 
        = (0x3fU & VL_SEL_IQII(40, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_rdata_L, 0x22U, 6U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_write_bundle_inst 
        = VL_SEL_IQII(40, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_rdata_L, 0U, 0x20U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_157 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_13_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_173 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_13_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_172);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_365 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_10_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_351);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_366 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_10_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_352));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_367 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_10_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_353);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_368 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_10_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_354));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_369 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_10_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_355));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_370 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_10_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_356));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_371 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_10_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_357));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_372 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_10_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_358));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_374 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_10_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_360));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_375 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_10_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_361));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_376 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_10_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_362));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_377 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_10_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_363));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_365 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_351);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_367 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_353);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_368 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_354));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_369 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_355));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_370 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_356));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_371 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_357));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_372 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_358));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_375 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_361));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_376 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_362));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___write_length_points_T_3 
        = (7U & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___write_length_points_T_1) 
                 + (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_56)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2mem2_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem2_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_write_bundle_pre_decoder_jr_opD 
        = (0x7fU & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_write_bundle_inst, 0U, 7U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_write_bundle_pre_decoder_jr_Funct3D 
        = (7U & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_write_bundle_inst, 0xcU, 3U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_158 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_14_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_174 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_14_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_173);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_379 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_11_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_365);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_380 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_11_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_366));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_381 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_11_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_367);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_382 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_11_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_368));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_383 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_11_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_369));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_384 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_11_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_370));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_385 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_11_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_371));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_386 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_11_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_372));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_388 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_11_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_374));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_389 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_11_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_375));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_390 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_11_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_376));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_391 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_11_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_377));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_379 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_365);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_381 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_367);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_382 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_368));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_383 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_369));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_384 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_370));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_385 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_371));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_386 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_372));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_389 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_375));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_390 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_376));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_57 
        = VL_EXTEND_II(4,1, (1U & VL_BITSEL_IIII(3, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___write_length_points_T_3), 2U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jr 
        = ((0x67U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_write_bundle_pre_decoder_jr_opD)) 
           & (0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_write_bundle_pre_decoder_jr_Funct3D)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_pc_target 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_15_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_174);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_lookup_data 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_15_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_393 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_12_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_379);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_394 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_12_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_380));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_395 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_12_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_381);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_396 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_12_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_382));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_397 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_12_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_383));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_398 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_12_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_384));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_399 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_12_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_385));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_400 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_12_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_386));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_402 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_12_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_388));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_403 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_12_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_389));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_404 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_12_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_390));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_405 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_12_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_391));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_393 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_379);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_395 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_381);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_396 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_382));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_397 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_383));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_398 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_384));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_399 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_385));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_400 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_386));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_403 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_389));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_404 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_390));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___write_length_points_T_7 
        = (0xfU & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__write_length_points) 
                   + (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_57)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_407 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_13_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_393);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_408 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_13_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_394));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_409 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_13_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_395);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_410 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_13_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_396));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_411 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_13_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_397));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_412 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_13_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_398));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_413 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_13_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_399));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_414 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_13_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_400));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_416 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_13_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_402));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_417 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_13_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_403));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_418 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_13_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_404));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_419 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_13_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_405));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_407 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_393);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_409 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_395);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_410 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_396));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_411 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_397));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_412 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_398));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_413 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_399));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_414 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_400));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_417 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_403));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_418 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_404));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM 
        = (1U & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset) 
                 | (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_StallM_T_1 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallE 
        = (1U & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset) 
                 | (~ ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM) 
                       | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__mem2regM_Stall)))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_StallF_T_5 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___has_Stall_T) 
            | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM)) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__mem2regM_Stall));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM2 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_StallM_T_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushE 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset)) 
           & (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallE) 
               & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___has_Stall_T)) 
              | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_InException)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushM 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset)) 
           & (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM) 
               & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__mem2regM_Stall)) 
              | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_InException)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallW 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_StallM_T_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallD 
        = (1U & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset) 
                 | (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_StallF_T_5))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_23 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_decoder_branchD_flag));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_24 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_decoder_jump));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_25 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_decoder_branchdata));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_26 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_decoder_jr));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_27 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_true_branch_state));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_17 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_pc_target);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_18 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_lookup_data));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_19 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_hashcode));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_20 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_pht));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_21 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_bht));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_22 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_lookup_value));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_16 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_exception_type));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallM 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushW 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset)) 
           & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallW) 
              & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM) 
                 | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_InException))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_37 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_38 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_39 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_40 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_41 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_31 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_17);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_32 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_33 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_34 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_35 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_36 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_30 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem_exception_T_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_bru_state_io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem_bru_state_io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushM 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallW 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallM2 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_51 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_52 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_38));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_53 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_39));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_54 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_40));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_55 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_45 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_31);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_46 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_32));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_47 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_33));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_48 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_34));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_49 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_50 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_44 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex_exception_T 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem_exception_T 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2_exception_T_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___wb_exception_T_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2mem2_io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem22wb_io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_bru_state_io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem_bru_state_io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem2_bru_state_io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_bru_state_io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushW 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___PCSrcD_T_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___wb_exception_T 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2mem2_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem22wb_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem2_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem22wb_io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_bru_state_io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem22wb_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD2 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WE3) 
             & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A2) 
                == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A3))) 
            & (0U != (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A2)))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WD3
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_127);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD1 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WE3) 
             & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A1) 
                == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A3))) 
            & (0U != (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A1)))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_WD3
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_95);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___regfile_io_RD2 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___regfile_io_RD1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_RD1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___BranchR2D_T_2 
        = ((1U & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2D), 1U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultM2_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___regfile_io_RD2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___BranchR1D_T_2 
        = ((1U & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1D), 1U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultM2_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___regfile_io_RD1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__BranchR1D 
        = ((1U & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1D), 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resultE2M_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___BranchR1D_T_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___br_io_r1 
        = ((1U & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1D), 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resultE2M_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___BranchR1D_T_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___br_io_r2 
        = ((1U & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2D), 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resultE2M_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___BranchR2D_T_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___PCJumpD_T_3 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__BranchR1D 
           + vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___GEN_12);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___br_io_r2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___br_io_r1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1 
           >= vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_1 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1 
           < vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_4 
        = VL_GTES_IQQ(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1, vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_7 
        = VL_LTS_IQQ(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1, vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_8 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1 
           != vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_9 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r1 
           == vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_r2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__PCJumpD 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__pre_decoder_jr)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___PCJumpD_T_3
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___PCJumpD_T_5);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__result 
        = VL_CONCAT_III(6,1,5, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T), 
                        VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_1), 
                                      VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_4), 
                                                    VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_7), 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_8), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___result_T_9))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__target_neq_jumpD 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_out_target_pc 
           != vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__PCJumpD);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___io_exe_T_4 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__result) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_branch));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_exe 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__reset)) 
           & (0U != (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT___io_exe_T_4)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___br_io_exe 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__io_exe;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___PCSrcD_T_3 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___br_io_exe;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___PC_nextD_T_2 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___PCSrcD_T_3)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__PCBranchD
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_PCPlus4D);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__target_addr_error 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__pre_decoder_jump) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__target_neq_jumpD)) 
           | ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___PCSrcD_T_3) 
              & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__target_neq_branchD)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__PC_nextD 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__pre_decoder_jump)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__PCJumpD
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___PC_nextD_T_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_point_write_en 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___PCSrcD_T_1) 
            & ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__pre_decoder_jump) 
                 | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___PCSrcD_T_3)) 
                != (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_true_branch_state)) 
               | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__target_addr_error))) 
           & (~ ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_exception) 
                   | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem_exception)) 
                  | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem2_exception)) 
                 | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_exception))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ready_to_branch 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_point_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_write_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_point_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___write_banks_points_T 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_flush) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_write_en));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__write_banks_points) 
             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points)) 
            & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__write_length_points) 
               == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_length_points))) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_write_en));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_empty 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__4\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_port_wdata = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wdata;
}
