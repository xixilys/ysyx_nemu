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

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__1(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__1\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_inst_buffer_full = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_full;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__3(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__3\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_inst_buffer_full 
        = vlSelf->__PVT__inst_cache_io_inst_buffer_full;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem_bru_state_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__4\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rdata 
        = vlSelf->__PVT__data_cache_io_port_rdata;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rvalid 
        = vlSelf->__PVT__data_cache_io_port_rvalid;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__4\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_port_awvalid = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awvalid;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__6(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__6\n"); );
    // Body
    vlSelf->axi_mem_port_0_arvalid = vlSelf->__PVT__inst_cache_io_port_arvalid;
    vlSelf->__PVT__inst_cache_io_port_araddr = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_araddr;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__7(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__7\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_debug_wb_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_pc;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__8(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__8\n"); );
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

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__5(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__5\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_sram_write_en = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_write_en;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_6 
        = ((6U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_6
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_5);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_6 
        = ((6U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_6
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_5);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__bht_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__bht_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT___GEN_3));
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__10(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__10\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wdata = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wdata;
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wnum = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wnum;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__6(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__6\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awready 
        = vlSelf->__PVT__data_cache_io_port_awready;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__7(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__7\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__reset 
        = vlSelf->__PVT__inst_cache_reset;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rlast 
        = vlSelf->__PVT__inst_cache_io_port_rlast;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rvalid 
        = vlSelf->__PVT__inst_cache_io_port_rvalid;
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

VL_INLINE_OPT void Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__8(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___combo__TOP__mycpu_top__8\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__reset 
        = vlSelf->__PVT__data_cache_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___regfile_reset;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__12(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__12\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_port_arvalid = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arvalid;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__5(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__5\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_port_wdata = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wdata;
}
