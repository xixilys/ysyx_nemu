// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_mycpu_top.h"

VL_ATTR_COLD void Vmycpu_top_mycpu_top___initial__TOP__mycpu_top__0(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___initial__TOP__mycpu_top__0\n"); );
    // Body
    vlSelf->axi_mem_port_0_arid = 0U;
    vlSelf->axi_mem_port_0_arsize = 2U;
    vlSelf->axi_mem_port_0_arlock = 0U;
    vlSelf->axi_mem_port_0_arcache = 0U;
    vlSelf->axi_mem_port_0_arprot = 0U;
    vlSelf->axi_mem_port_0_rready = 1U;
    vlSelf->axi_mem_port_0_awid = 1U;
    vlSelf->axi_mem_port_0_awaddr = 0ULL;
    vlSelf->axi_mem_port_0_awlen = 0U;
    vlSelf->axi_mem_port_0_awsize = 2U;
    vlSelf->axi_mem_port_0_awburst = 0U;
    vlSelf->axi_mem_port_0_awlock = 0U;
    vlSelf->axi_mem_port_0_awcache = 0U;
    vlSelf->axi_mem_port_0_awprot = 0U;
    vlSelf->axi_mem_port_0_awvalid = 0U;
    vlSelf->axi_mem_port_0_wid = 1U;
    vlSelf->axi_mem_port_0_wdata = 0ULL;
    vlSelf->axi_mem_port_0_wstrb = 0U;
    vlSelf->axi_mem_port_0_wlast = 0U;
    vlSelf->axi_mem_port_0_wvalid = 0U;
    vlSelf->axi_mem_port_0_bready = 0U;
    vlSelf->axi_mem_port_1_arid = 1U;
    vlSelf->axi_mem_port_1_arlock = 0U;
    vlSelf->axi_mem_port_1_arcache = 0U;
    vlSelf->axi_mem_port_1_arprot = 0U;
    vlSelf->axi_mem_port_1_rready = 1U;
    vlSelf->axi_mem_port_1_awid = 1U;
    vlSelf->axi_mem_port_1_awlock = 0U;
    vlSelf->axi_mem_port_1_awcache = 0U;
    vlSelf->axi_mem_port_1_awprot = 0U;
    vlSelf->axi_mem_port_1_wid = 1U;
    vlSelf->axi_mem_port_1_bready = 1U;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__0(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__0\n"); );
    // Body
    vlSelf->__PVT__inst_cache_reset = (1U & (~ (IData)(vlSelf->aresetn)));
    vlSelf->__PVT__data_cache_reset = (1U & (~ (IData)(vlSelf->aresetn)));
    vlSelf->__PVT__data_cache_io_port_bvalid = vlSelf->axi_mem_port_1_bvalid;
    vlSelf->__PVT__u_riscv_cpu_ext_int = vlSelf->ext_int;
    vlSelf->__PVT__data_cache_io_port_rlast = vlSelf->axi_mem_port_1_rlast;
    vlSelf->__PVT__data_cache_io_port_wready = vlSelf->axi_mem_port_1_wready;
    vlSelf->__PVT__data_cache_io_port_awready = vlSelf->axi_mem_port_1_awready;
    vlSelf->__PVT__data_cache_io_port_rdata = vlSelf->axi_mem_port_1_rdata;
    vlSelf->__PVT__inst_cache_io_port_arready = vlSelf->axi_mem_port_0_arready;
    vlSelf->__PVT__data_cache_io_port_arready = vlSelf->axi_mem_port_1_arready;
    vlSelf->__PVT__inst_cache_io_port_rlast = vlSelf->axi_mem_port_0_rlast;
    vlSelf->__PVT__inst_cache_io_port_rvalid = vlSelf->axi_mem_port_0_rvalid;
    vlSelf->__PVT__inst_cache_io_port_rdata = vlSelf->axi_mem_port_0_rdata;
    vlSelf->__PVT__u_riscv_cpu_resetn = vlSelf->aresetn;
    vlSelf->__PVT__data_cache_io_port_rvalid = vlSelf->axi_mem_port_1_rvalid;
    vlSelf->__PVT__data_cache_clock = vlSelf->aclk;
    vlSelf->__PVT__inst_cache_clock = vlSelf->aclk;
    vlSelf->__PVT__u_riscv_cpu_clk = vlSelf->aclk;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__6(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__6\n"); );
    // Body
    vlSelf->axi_mem_port_0_arburst = vlSelf->__PVT__inst_cache_io_port_arburst;
    vlSelf->axi_mem_port_1_arburst = vlSelf->__PVT__data_cache_io_port_arburst;
    vlSelf->axi_mem_port_1_awburst = vlSelf->__PVT__data_cache_io_port_awburst;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__9(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__9\n"); );
    // Body
    vlSelf->axi_mem_port_0_arlen = vlSelf->__PVT__inst_cache_io_port_arlen;
    vlSelf->axi_mem_port_0_arvalid = vlSelf->__PVT__inst_cache_io_port_arvalid;
    vlSelf->axi_mem_port_1_arlen = vlSelf->__PVT__data_cache_io_port_arlen;
    vlSelf->axi_mem_port_1_arsize = vlSelf->__PVT__data_cache_io_port_arsize;
    vlSelf->axi_mem_port_1_awlen = vlSelf->__PVT__data_cache_io_port_awlen;
    vlSelf->axi_mem_port_1_awsize = vlSelf->__PVT__data_cache_io_port_awsize;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__12(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__12\n"); );
    // Body
    vlSelf->axi_mem_port_0_araddr = vlSelf->__PVT__inst_cache_io_port_araddr;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__15(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__15\n"); );
    // Body
    vlSelf->debug_wb_pc = VL_SEL_IQII(64, vlSelf->__PVT__u_riscv_cpu_debug_wb_pc, 0U, 0x20U);
    vlSelf->__PVT__inst_cache_io_p_addr_for_tlb = vlSelf->__PVT__inst_cache_io_v_addr_for_tlb;
    vlSelf->__PVT__data_cache_io_p_addr_for_tlb = vlSelf->__PVT__data_cache_io_v_addr_for_tlb;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__18(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__18\n"); );
    // Body
    vlSelf->axi_mem_port_1_araddr = vlSelf->__PVT__data_cache_io_port_araddr;
    vlSelf->axi_mem_port_1_awvalid = vlSelf->__PVT__data_cache_io_port_awvalid;
    vlSelf->axi_mem_port_1_wvalid = vlSelf->__PVT__data_cache_io_port_wvalid;
    vlSelf->debug_wb_rf_wnum = vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wnum;
    vlSelf->debug_wb_rf_wdata = VL_SEL_IQII(64, vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wdata, 0U, 0x20U);
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__21(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__21\n"); );
    // Body
    vlSelf->axi_mem_port_1_arvalid = vlSelf->__PVT__data_cache_io_port_arvalid;
    vlSelf->debug_wb_rf_wen = vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wen;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__23(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__23\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_inst_buffer_full = vlSelf->__PVT__u_riscv_cpu_inst_buffer_full;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__24(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__24\n"); );
    // Body
    vlSelf->axi_mem_port_1_wstrb = vlSelf->__PVT__data_cache_io_port_wstrb;
    vlSelf->axi_mem_port_1_wlast = vlSelf->__PVT__data_cache_io_port_wlast;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__28(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__28\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_sram_wr = vlSelf->__PVT__u_riscv_cpu_data_sram_wen;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__29(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__29\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_sram_size = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__u_riscv_cpu_data_size));
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__33(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__33\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_inst_write_en = vlSelf->__PVT__inst_cache_io_sram_write_en;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__36(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__36\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_stage2_stall = vlSelf->__PVT__data_cache_io_stage2_stall;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__41(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__41\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_inst_sram_rdata_L = vlSelf->__PVT__inst_cache_io_sram_rdata_L;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__42(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__42\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_sram_rdata = vlSelf->__PVT__data_cache_io_sram_rdata;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__43(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__43\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_sram_cache = vlSelf->__PVT__u_riscv_cpu_data_cache;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__48(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__48\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_sram_addr = vlSelf->__PVT__u_riscv_cpu_data_sram_addr;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__51(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__51\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_sram_req = vlSelf->__PVT__u_riscv_cpu_data_sram_en;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__54(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__54\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_data_wstrb = vlSelf->__PVT__u_riscv_cpu_data_wstrb;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__57(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__57\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_sram_wdata = vlSelf->__PVT__u_riscv_cpu_data_sram_wdata;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__60(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__60\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_stage2_flush = vlSelf->__PVT__u_riscv_cpu_stage2_flush;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__63(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__63\n"); );
    // Body
    vlSelf->axi_mem_port_1_wdata = vlSelf->__PVT__data_cache_io_port_wdata;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__65(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__65\n"); );
    // Body
    vlSelf->axi_mem_port_1_awaddr = vlSelf->__PVT__data_cache_io_port_awaddr;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__67(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__67\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_stage2_stall = vlSelf->__PVT__inst_cache_io_stage2_stall;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__70(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__70\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_sram_req = vlSelf->__PVT__u_riscv_cpu_inst_sram_en;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__73(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__73\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_stage1_valid_flush 
        = vlSelf->__PVT__u_riscv_cpu_stage1_valid_flush;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___ctor_var_reset(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___ctor_var_reset\n"); );
    // Body
    vlSelf->aresetn = 0;
    vlSelf->aclk = 0;
    vlSelf->ext_int = 0;
    vlSelf->axi_mem_port_0_arid = 0;
    vlSelf->axi_mem_port_0_araddr = 0;
    vlSelf->axi_mem_port_0_arlen = 0;
    vlSelf->axi_mem_port_0_arsize = 0;
    vlSelf->axi_mem_port_0_arburst = 0;
    vlSelf->axi_mem_port_0_arlock = 0;
    vlSelf->axi_mem_port_0_arcache = 0;
    vlSelf->axi_mem_port_0_arprot = 0;
    vlSelf->axi_mem_port_0_arvalid = 0;
    vlSelf->axi_mem_port_0_arready = 0;
    vlSelf->axi_mem_port_0_rid = 0;
    vlSelf->axi_mem_port_0_rdata = 0;
    vlSelf->axi_mem_port_0_rresp = 0;
    vlSelf->axi_mem_port_0_rlast = 0;
    vlSelf->axi_mem_port_0_rvalid = 0;
    vlSelf->axi_mem_port_0_rready = 0;
    vlSelf->axi_mem_port_0_awid = 0;
    vlSelf->axi_mem_port_0_awaddr = 0;
    vlSelf->axi_mem_port_0_awlen = 0;
    vlSelf->axi_mem_port_0_awsize = 0;
    vlSelf->axi_mem_port_0_awburst = 0;
    vlSelf->axi_mem_port_0_awlock = 0;
    vlSelf->axi_mem_port_0_awcache = 0;
    vlSelf->axi_mem_port_0_awprot = 0;
    vlSelf->axi_mem_port_0_awvalid = 0;
    vlSelf->axi_mem_port_0_awready = 0;
    vlSelf->axi_mem_port_0_wid = 0;
    vlSelf->axi_mem_port_0_wdata = 0;
    vlSelf->axi_mem_port_0_wstrb = 0;
    vlSelf->axi_mem_port_0_wlast = 0;
    vlSelf->axi_mem_port_0_wvalid = 0;
    vlSelf->axi_mem_port_0_wready = 0;
    vlSelf->axi_mem_port_0_bid = 0;
    vlSelf->axi_mem_port_0_bresp = 0;
    vlSelf->axi_mem_port_0_bvalid = 0;
    vlSelf->axi_mem_port_0_bready = 0;
    vlSelf->axi_mem_port_1_arid = 0;
    vlSelf->axi_mem_port_1_araddr = 0;
    vlSelf->axi_mem_port_1_arlen = 0;
    vlSelf->axi_mem_port_1_arsize = 0;
    vlSelf->axi_mem_port_1_arburst = 0;
    vlSelf->axi_mem_port_1_arlock = 0;
    vlSelf->axi_mem_port_1_arcache = 0;
    vlSelf->axi_mem_port_1_arprot = 0;
    vlSelf->axi_mem_port_1_arvalid = 0;
    vlSelf->axi_mem_port_1_arready = 0;
    vlSelf->axi_mem_port_1_rid = 0;
    vlSelf->axi_mem_port_1_rdata = 0;
    vlSelf->axi_mem_port_1_rresp = 0;
    vlSelf->axi_mem_port_1_rlast = 0;
    vlSelf->axi_mem_port_1_rvalid = 0;
    vlSelf->axi_mem_port_1_rready = 0;
    vlSelf->axi_mem_port_1_awid = 0;
    vlSelf->axi_mem_port_1_awaddr = 0;
    vlSelf->axi_mem_port_1_awlen = 0;
    vlSelf->axi_mem_port_1_awsize = 0;
    vlSelf->axi_mem_port_1_awburst = 0;
    vlSelf->axi_mem_port_1_awlock = 0;
    vlSelf->axi_mem_port_1_awcache = 0;
    vlSelf->axi_mem_port_1_awprot = 0;
    vlSelf->axi_mem_port_1_awvalid = 0;
    vlSelf->axi_mem_port_1_awready = 0;
    vlSelf->axi_mem_port_1_wid = 0;
    vlSelf->axi_mem_port_1_wdata = 0;
    vlSelf->axi_mem_port_1_wstrb = 0;
    vlSelf->axi_mem_port_1_wlast = 0;
    vlSelf->axi_mem_port_1_wvalid = 0;
    vlSelf->axi_mem_port_1_wready = 0;
    vlSelf->axi_mem_port_1_bid = 0;
    vlSelf->axi_mem_port_1_bresp = 0;
    vlSelf->axi_mem_port_1_bvalid = 0;
    vlSelf->axi_mem_port_1_bready = 0;
    vlSelf->debug_wb_pc = 0;
    vlSelf->debug_wb_rf_wen = 0;
    vlSelf->debug_wb_rf_wnum = 0;
    vlSelf->debug_wb_rf_wdata = 0;
    vlSelf->__PVT__u_riscv_cpu_ext_int = 0;
    vlSelf->__PVT__u_riscv_cpu_resetn = 0;
    vlSelf->__PVT__u_riscv_cpu_clk = 0;
    vlSelf->__PVT__u_riscv_cpu_inst_cache = 0;
    vlSelf->__PVT__u_riscv_cpu_inst_sram_en = 0;
    vlSelf->__PVT__u_riscv_cpu_inst_sram_addr = 0;
    vlSelf->__PVT__u_riscv_cpu_inst_sram_rdata_L = 0;
    vlSelf->__PVT__u_riscv_cpu_inst_write_en = 0;
    vlSelf->__PVT__u_riscv_cpu_stage2_flush = 0;
    vlSelf->__PVT__u_riscv_cpu_stage2_stall = 0;
    vlSelf->__PVT__u_riscv_cpu_stage1_valid_flush = 0;
    vlSelf->__PVT__u_riscv_cpu_inst_ready_to_use = 0;
    vlSelf->__PVT__u_riscv_cpu_inst_buffer_full = 0;
    vlSelf->__PVT__u_riscv_cpu_data_sram_en = 0;
    vlSelf->__PVT__u_riscv_cpu_data_sram_wen = 0;
    vlSelf->__PVT__u_riscv_cpu_data_size = 0;
    vlSelf->__PVT__u_riscv_cpu_data_sram_addr = 0;
    vlSelf->__PVT__u_riscv_cpu_data_sram_wdata = 0;
    vlSelf->__PVT__u_riscv_cpu_data_cache = 0;
    vlSelf->__PVT__u_riscv_cpu_data_sram_rdata = 0;
    vlSelf->__PVT__u_riscv_cpu_data_stage2_stall = 0;
    vlSelf->__PVT__u_riscv_cpu_data_wstrb = 0;
    vlSelf->__PVT__u_riscv_cpu_debug_wb_pc = 0;
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wen = 0;
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wnum = 0;
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wdata = 0;
    vlSelf->__PVT__inst_cache_clock = 0;
    vlSelf->__PVT__inst_cache_reset = 0;
    vlSelf->__PVT__inst_cache_io_port_araddr = 0;
    vlSelf->__PVT__inst_cache_io_port_arlen = 0;
    vlSelf->__PVT__inst_cache_io_port_arburst = 0;
    vlSelf->__PVT__inst_cache_io_port_arvalid = 0;
    vlSelf->__PVT__inst_cache_io_port_arready = 0;
    vlSelf->__PVT__inst_cache_io_port_rdata = 0;
    vlSelf->__PVT__inst_cache_io_port_rlast = 0;
    vlSelf->__PVT__inst_cache_io_port_rvalid = 0;
    vlSelf->__PVT__inst_cache_io_stage2_flush = 0;
    vlSelf->__PVT__inst_cache_io_stage2_stall = 0;
    vlSelf->__PVT__inst_cache_io_stage1_valid_flush = 0;
    vlSelf->__PVT__inst_cache_io_inst_ready_to_use = 0;
    vlSelf->__PVT__inst_cache_io_inst_buffer_full = 0;
    vlSelf->__PVT__inst_cache_io_v_addr_for_tlb = 0;
    vlSelf->__PVT__inst_cache_io_p_addr_for_tlb = 0;
    vlSelf->__PVT__inst_cache_io_sram_req = 0;
    vlSelf->__PVT__inst_cache_io_sram_addr = 0;
    vlSelf->__PVT__inst_cache_io_sram_write_en = 0;
    vlSelf->__PVT__inst_cache_io_sram_rdata_L = 0;
    vlSelf->__PVT__inst_cache_io_sram_cache = 0;
    vlSelf->__PVT__data_cache_clock = 0;
    vlSelf->__PVT__data_cache_reset = 0;
    vlSelf->__PVT__data_cache_io_port_araddr = 0;
    vlSelf->__PVT__data_cache_io_port_arlen = 0;
    vlSelf->__PVT__data_cache_io_port_arsize = 0;
    vlSelf->__PVT__data_cache_io_port_arburst = 0;
    vlSelf->__PVT__data_cache_io_port_arvalid = 0;
    vlSelf->__PVT__data_cache_io_port_arready = 0;
    vlSelf->__PVT__data_cache_io_port_rdata = 0;
    vlSelf->__PVT__data_cache_io_port_rlast = 0;
    vlSelf->__PVT__data_cache_io_port_rvalid = 0;
    vlSelf->__PVT__data_cache_io_port_awaddr = 0;
    vlSelf->__PVT__data_cache_io_port_awlen = 0;
    vlSelf->__PVT__data_cache_io_port_awsize = 0;
    vlSelf->__PVT__data_cache_io_port_awburst = 0;
    vlSelf->__PVT__data_cache_io_port_awvalid = 0;
    vlSelf->__PVT__data_cache_io_port_awready = 0;
    vlSelf->__PVT__data_cache_io_port_wdata = 0;
    vlSelf->__PVT__data_cache_io_port_wstrb = 0;
    vlSelf->__PVT__data_cache_io_port_wlast = 0;
    vlSelf->__PVT__data_cache_io_port_wvalid = 0;
    vlSelf->__PVT__data_cache_io_port_wready = 0;
    vlSelf->__PVT__data_cache_io_port_bvalid = 0;
    vlSelf->__PVT__data_cache_io_stage2_stall = 0;
    vlSelf->__PVT__data_cache_io_v_addr_for_tlb = 0;
    vlSelf->__PVT__data_cache_io_p_addr_for_tlb = 0;
    vlSelf->__PVT__data_cache_io_tlb_req = 0;
    vlSelf->__PVT__data_cache_io_data_wstrb = 0;
    vlSelf->__PVT__data_cache_io_sram_req = 0;
    vlSelf->__PVT__data_cache_io_sram_wr = 0;
    vlSelf->__PVT__data_cache_io_sram_size = 0;
    vlSelf->__PVT__data_cache_io_sram_addr = 0;
    vlSelf->__PVT__data_cache_io_sram_wdata = 0;
    vlSelf->__PVT__data_cache_io_sram_rdata = 0;
    vlSelf->__PVT__data_cache_io_sram_cache = 0;
}
