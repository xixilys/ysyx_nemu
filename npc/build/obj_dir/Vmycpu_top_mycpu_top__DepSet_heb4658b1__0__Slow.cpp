// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_mycpu_top.h"

VL_ATTR_COLD void Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__0(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__0\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_port_bvalid = vlSelf->axi_mem_port_1_bvalid;
    vlSelf->__PVT__u_riscv_cpu_ext_int = vlSelf->ext_int;
    vlSelf->__PVT__data_cache_io_port_rlast = vlSelf->axi_mem_port_1_rlast;
    vlSelf->__PVT__data_cache_io_port_wready = vlSelf->axi_mem_port_1_wready;
    vlSelf->__PVT__data_cache_io_port_awready = vlSelf->axi_mem_port_1_awready;
    vlSelf->__PVT__data_cache_io_port_arready = vlSelf->axi_mem_port_1_arready;
    vlSelf->__PVT__inst_cache_io_port_arready = vlSelf->axi_mem_port_0_arready;
    vlSelf->__PVT__inst_cache_io_port_rlast = vlSelf->axi_mem_port_0_rlast;
    vlSelf->__PVT__data_cache_io_port_rdata = vlSelf->axi_mem_port_1_rdata;
    vlSelf->__PVT__inst_cache_io_port_rvalid = vlSelf->axi_mem_port_0_rvalid;
    vlSelf->__PVT__data_cache_io_port_rvalid = vlSelf->axi_mem_port_1_rvalid;
    vlSelf->__PVT__inst_cache_clock = vlSelf->aclk;
    vlSelf->__PVT__u_riscv_cpu_clk = vlSelf->aclk;
    vlSelf->__PVT__data_cache_clock = vlSelf->aclk;
    vlSelf->__PVT__inst_cache_reset = (1U & (~ (IData)(vlSelf->aresetn)));
    vlSelf->__PVT__data_cache_reset = (1U & (~ (IData)(vlSelf->aresetn)));
    vlSelf->__PVT__u_riscv_cpu_resetn = vlSelf->aresetn;
    vlSelf->__PVT__inst_cache_io_port_rdata = vlSelf->axi_mem_port_0_rdata;
    vlSelf->__PVT__inst_cache_io_port_arburst = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_arburst;
    vlSelf->__PVT__inst_cache_io_v_addr_for_tlb = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_v_addr_for_tlb;
    vlSelf->__PVT__inst_cache_io_port_arlen = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_arlen;
    vlSelf->__PVT__inst_cache_io_port_arvalid = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_arvalid;
    vlSelf->__PVT__inst_cache_io_port_araddr = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_araddr;
    vlSelf->__PVT__data_cache_io_port_arburst = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arburst;
    vlSelf->__PVT__data_cache_io_port_awburst = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awburst;
    vlSelf->__PVT__data_cache_io_v_addr_for_tlb = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_v_addr_for_tlb;
    vlSelf->__PVT__data_cache_io_tlb_req = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_tlb_req;
    vlSelf->__PVT__data_cache_io_port_awvalid = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awvalid;
    vlSelf->__PVT__data_cache_io_port_arlen = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arlen;
    vlSelf->__PVT__data_cache_io_port_awlen = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awlen;
    vlSelf->__PVT__data_cache_io_port_arsize = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arsize;
    vlSelf->__PVT__data_cache_io_port_awsize = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awsize;
    vlSelf->__PVT__data_cache_io_port_wvalid = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wvalid;
    vlSelf->__PVT__data_cache_io_port_araddr = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_araddr;
    vlSelf->__PVT__data_cache_io_port_arvalid = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arvalid;
    vlSelf->__PVT__data_cache_io_port_wstrb = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wstrb;
    vlSelf->__PVT__data_cache_io_port_wlast = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wlast;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_bvalid 
        = vlSelf->__PVT__data_cache_io_port_bvalid;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ext_int 
        = vlSelf->__PVT__u_riscv_cpu_ext_int;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rlast 
        = vlSelf->__PVT__data_cache_io_port_rlast;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wready 
        = vlSelf->__PVT__data_cache_io_port_wready;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awready 
        = vlSelf->__PVT__data_cache_io_port_awready;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arready 
        = vlSelf->__PVT__data_cache_io_port_arready;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_arready 
        = vlSelf->__PVT__inst_cache_io_port_arready;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rlast 
        = vlSelf->__PVT__inst_cache_io_port_rlast;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rdata 
        = vlSelf->__PVT__data_cache_io_port_rdata;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rvalid 
        = vlSelf->__PVT__inst_cache_io_port_rvalid;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rvalid 
        = vlSelf->__PVT__data_cache_io_port_rvalid;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__clock 
        = vlSelf->__PVT__inst_cache_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk 
        = vlSelf->__PVT__u_riscv_cpu_clk;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__clock 
        = vlSelf->__PVT__data_cache_clock;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__reset 
        = vlSelf->__PVT__inst_cache_reset;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__reset 
        = vlSelf->__PVT__data_cache_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn 
        = vlSelf->__PVT__u_riscv_cpu_resetn;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rdata 
        = vlSelf->__PVT__inst_cache_io_port_rdata;
    vlSelf->axi_mem_port_0_arburst = vlSelf->__PVT__inst_cache_io_port_arburst;
    vlSelf->__PVT__inst_cache_io_p_addr_for_tlb = vlSelf->__PVT__inst_cache_io_v_addr_for_tlb;
    vlSelf->axi_mem_port_0_arlen = vlSelf->__PVT__inst_cache_io_port_arlen;
    vlSelf->axi_mem_port_0_arvalid = vlSelf->__PVT__inst_cache_io_port_arvalid;
    vlSelf->axi_mem_port_0_araddr = vlSelf->__PVT__inst_cache_io_port_araddr;
    vlSelf->axi_mem_port_1_arburst = vlSelf->__PVT__data_cache_io_port_arburst;
    vlSelf->axi_mem_port_1_awburst = vlSelf->__PVT__data_cache_io_port_awburst;
    vlSelf->__PVT__data_cache_io_p_addr_for_tlb = vlSelf->__PVT__data_cache_io_v_addr_for_tlb;
    vlSelf->axi_mem_port_1_awvalid = vlSelf->__PVT__data_cache_io_port_awvalid;
    vlSelf->axi_mem_port_1_arlen = vlSelf->__PVT__data_cache_io_port_arlen;
    vlSelf->axi_mem_port_1_awlen = vlSelf->__PVT__data_cache_io_port_awlen;
    vlSelf->axi_mem_port_1_arsize = vlSelf->__PVT__data_cache_io_port_arsize;
    vlSelf->axi_mem_port_1_awsize = vlSelf->__PVT__data_cache_io_port_awsize;
    vlSelf->axi_mem_port_1_wvalid = vlSelf->__PVT__data_cache_io_port_wvalid;
    vlSelf->axi_mem_port_1_araddr = vlSelf->__PVT__data_cache_io_port_araddr;
    vlSelf->axi_mem_port_1_arvalid = vlSelf->__PVT__data_cache_io_port_arvalid;
    vlSelf->axi_mem_port_1_wstrb = vlSelf->__PVT__data_cache_io_port_wstrb;
    vlSelf->axi_mem_port_1_wlast = vlSelf->__PVT__data_cache_io_port_wlast;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_p_addr_for_tlb 
        = vlSelf->__PVT__inst_cache_io_p_addr_for_tlb;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_p_addr_for_tlb 
        = vlSelf->__PVT__data_cache_io_p_addr_for_tlb;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__1(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__1\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_debug_wb_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_pc;
    vlSelf->__PVT__u_riscv_cpu_inst_buffer_full = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_full;
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wdata = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wdata;
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wnum = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wnum;
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wen = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wen;
    vlSelf->__PVT__data_cache_io_port_awaddr = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awaddr;
    vlSelf->__PVT__data_cache_io_stage2_stall = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_stage2_stall;
    vlSelf->__PVT__data_cache_io_port_wdata = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wdata;
    vlSelf->__PVT__data_cache_io_sram_rdata = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_rdata;
    vlSelf->debug_wb_pc = VL_SEL_IQII(64, vlSelf->__PVT__u_riscv_cpu_debug_wb_pc, 0U, 0x20U);
    vlSelf->__PVT__inst_cache_io_inst_buffer_full = vlSelf->__PVT__u_riscv_cpu_inst_buffer_full;
    vlSelf->debug_wb_rf_wdata = VL_SEL_IQII(64, vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wdata, 0U, 0x20U);
    vlSelf->debug_wb_rf_wnum = vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wnum;
    vlSelf->debug_wb_rf_wen = vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wen;
    vlSelf->axi_mem_port_1_awaddr = vlSelf->__PVT__data_cache_io_port_awaddr;
    vlSelf->__PVT__u_riscv_cpu_data_stage2_stall = vlSelf->__PVT__data_cache_io_stage2_stall;
    vlSelf->axi_mem_port_1_wdata = vlSelf->__PVT__data_cache_io_port_wdata;
    vlSelf->__PVT__u_riscv_cpu_data_sram_rdata = vlSelf->__PVT__data_cache_io_sram_rdata;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_inst_buffer_full 
        = vlSelf->__PVT__inst_cache_io_inst_buffer_full;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_stage2_stall 
        = vlSelf->__PVT__u_riscv_cpu_data_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_rdata 
        = vlSelf->__PVT__u_riscv_cpu_data_sram_rdata;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__2(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__2\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_sram_write_en = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_write_en;
    vlSelf->__PVT__inst_cache_io_sram_rdata_L = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_rdata_L;
    vlSelf->__PVT__inst_cache_io_stage2_stall = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage2_stall;
    vlSelf->__PVT__u_riscv_cpu_data_sram_wen = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_wen;
    vlSelf->__PVT__u_riscv_cpu_data_size = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_size;
    vlSelf->__PVT__u_riscv_cpu_inst_write_en = vlSelf->__PVT__inst_cache_io_sram_write_en;
    vlSelf->__PVT__u_riscv_cpu_inst_sram_rdata_L = vlSelf->__PVT__inst_cache_io_sram_rdata_L;
    vlSelf->__PVT__u_riscv_cpu_stage2_stall = vlSelf->__PVT__inst_cache_io_stage2_stall;
    vlSelf->__PVT__data_cache_io_sram_wr = vlSelf->__PVT__u_riscv_cpu_data_sram_wen;
    vlSelf->__PVT__data_cache_io_sram_size = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__u_riscv_cpu_data_size));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_write_en 
        = vlSelf->__PVT__u_riscv_cpu_inst_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_rdata_L 
        = vlSelf->__PVT__u_riscv_cpu_inst_sram_rdata_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall 
        = vlSelf->__PVT__u_riscv_cpu_stage2_stall;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_wr 
        = vlSelf->__PVT__data_cache_io_sram_wr;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_size 
        = vlSelf->__PVT__data_cache_io_sram_size;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__3(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__3\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_inst_sram_en = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_en;
    vlSelf->__PVT__u_riscv_cpu_data_cache = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_cache;
    vlSelf->__PVT__inst_cache_io_sram_req = vlSelf->__PVT__u_riscv_cpu_inst_sram_en;
    vlSelf->__PVT__data_cache_io_sram_cache = vlSelf->__PVT__u_riscv_cpu_data_cache;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_req 
        = vlSelf->__PVT__inst_cache_io_sram_req;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_cache 
        = vlSelf->__PVT__data_cache_io_sram_cache;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__4\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_sram_addr = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_addr;
    vlSelf->__PVT__u_riscv_cpu_data_wstrb = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_wstrb;
    vlSelf->__PVT__u_riscv_cpu_data_sram_wdata = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_wdata;
    vlSelf->__PVT__data_cache_io_sram_addr = vlSelf->__PVT__u_riscv_cpu_data_sram_addr;
    vlSelf->__PVT__data_cache_io_data_wstrb = vlSelf->__PVT__u_riscv_cpu_data_wstrb;
    vlSelf->__PVT__data_cache_io_sram_wdata = vlSelf->__PVT__u_riscv_cpu_data_sram_wdata;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_addr 
        = vlSelf->__PVT__data_cache_io_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_data_wstrb 
        = vlSelf->__PVT__data_cache_io_data_wstrb;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_wdata 
        = vlSelf->__PVT__data_cache_io_sram_wdata;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__5(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__5\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_sram_en = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_en;
    vlSelf->__PVT__u_riscv_cpu_stage2_flush = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_flush;
    vlSelf->__PVT__data_cache_io_sram_req = vlSelf->__PVT__u_riscv_cpu_data_sram_en;
    vlSelf->__PVT__inst_cache_io_stage2_flush = vlSelf->__PVT__u_riscv_cpu_stage2_flush;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_req 
        = vlSelf->__PVT__data_cache_io_sram_req;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage2_flush 
        = vlSelf->__PVT__inst_cache_io_stage2_flush;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__6(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___stl_sequent__TOP__mycpu_top__6\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_stage1_valid_flush = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage1_valid_flush;
    vlSelf->__PVT__u_riscv_cpu_inst_sram_addr = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_addr;
    vlSelf->__PVT__u_riscv_cpu_inst_cache = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_cache;
    vlSelf->__PVT__u_riscv_cpu_inst_ready_to_use = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_ready_to_use;
    vlSelf->__PVT__inst_cache_io_stage1_valid_flush 
        = vlSelf->__PVT__u_riscv_cpu_stage1_valid_flush;
    vlSelf->__PVT__inst_cache_io_sram_addr = vlSelf->__PVT__u_riscv_cpu_inst_sram_addr;
    vlSelf->__PVT__inst_cache_io_sram_cache = vlSelf->__PVT__u_riscv_cpu_inst_cache;
    vlSelf->__PVT__inst_cache_io_inst_ready_to_use 
        = vlSelf->__PVT__u_riscv_cpu_inst_ready_to_use;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage1_valid_flush 
        = vlSelf->__PVT__inst_cache_io_stage1_valid_flush;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_addr 
        = vlSelf->__PVT__inst_cache_io_sram_addr;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_cache 
        = vlSelf->__PVT__inst_cache_io_sram_cache;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_inst_ready_to_use 
        = vlSelf->__PVT__inst_cache_io_inst_ready_to_use;
}
