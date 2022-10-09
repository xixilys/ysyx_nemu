// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_mycpu_top.h"

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__1(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__1\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ext_int 
        = vlSelf->__PVT__u_riscv_cpu_ext_int;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rlast 
        = vlSelf->__PVT__data_cache_io_port_rlast;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wready 
        = vlSelf->__PVT__data_cache_io_port_wready;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arready 
        = vlSelf->__PVT__data_cache_io_port_arready;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rdata 
        = vlSelf->__PVT__inst_cache_io_port_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn 
        = vlSelf->__PVT__u_riscv_cpu_resetn;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__clock 
        = vlSelf->__PVT__data_cache_clock;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__clock 
        = vlSelf->__PVT__inst_cache_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk 
        = vlSelf->__PVT__u_riscv_cpu_clk;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__2(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_bvalid 
        = vlSelf->__PVT__data_cache_io_port_bvalid;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awready 
        = vlSelf->__PVT__data_cache_io_port_awready;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_arready 
        = vlSelf->__PVT__inst_cache_io_port_arready;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__3(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__3\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_port_arburst = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_arburst;
    vlSelf->__PVT__data_cache_io_port_awburst = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awburst;
    vlSelf->__PVT__data_cache_io_port_arburst = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arburst;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__4\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rdata 
        = vlSelf->__PVT__data_cache_io_port_rdata;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__5(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__5\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rvalid 
        = vlSelf->__PVT__data_cache_io_port_rvalid;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__7(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__7\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_port_arvalid = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_arvalid;
    vlSelf->__PVT__inst_cache_io_port_arlen = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_arlen;
    vlSelf->__PVT__data_cache_io_port_awsize = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awsize;
    vlSelf->__PVT__data_cache_io_port_awlen = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awlen;
    vlSelf->__PVT__data_cache_io_port_arsize = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arsize;
    vlSelf->__PVT__data_cache_io_port_arlen = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arlen;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__8(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__8\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__reset 
        = vlSelf->__PVT__inst_cache_reset;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__reset 
        = vlSelf->__PVT__data_cache_reset;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__10(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__10\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_port_araddr = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_araddr;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__11(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__11\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rlast 
        = vlSelf->__PVT__inst_cache_io_port_rlast;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rvalid 
        = vlSelf->__PVT__inst_cache_io_port_rvalid;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__13(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__13\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_debug_wb_pc = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_pc;
    vlSelf->__PVT__inst_cache_io_v_addr_for_tlb = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_v_addr_for_tlb;
    vlSelf->__PVT__data_cache_io_v_addr_for_tlb = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_v_addr_for_tlb;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__14(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__14\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_tlb_req = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_tlb_req;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__16(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__16\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wdata = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wdata;
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wnum = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wnum;
    vlSelf->__PVT__data_cache_io_port_wvalid = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wvalid;
    vlSelf->__PVT__data_cache_io_port_awvalid = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awvalid;
    vlSelf->__PVT__data_cache_io_port_araddr = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_araddr;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__17(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__17\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_p_addr_for_tlb 
        = vlSelf->__PVT__inst_cache_io_p_addr_for_tlb;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_p_addr_for_tlb 
        = vlSelf->__PVT__data_cache_io_p_addr_for_tlb;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__19(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__19\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wen = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__debug_wb_rf_wen;
    vlSelf->__PVT__data_cache_io_port_arvalid = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arvalid;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__20(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__20\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_inst_buffer_full = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_full;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__22(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__22\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_port_wlast = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wlast;
    vlSelf->__PVT__data_cache_io_port_wstrb = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wstrb;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__25(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__25\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_sram_wen = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_wen;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__26(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__26\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_size = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_size;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__27(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__27\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_inst_buffer_full 
        = vlSelf->__PVT__inst_cache_io_inst_buffer_full;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__30(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__30\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_wr 
        = vlSelf->__PVT__data_cache_io_sram_wr;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__31(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__31\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_size 
        = vlSelf->__PVT__data_cache_io_sram_size;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__32(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__32\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_sram_write_en = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_write_en;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__34(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__34\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_stage2_stall = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_stage2_stall;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__35(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__35\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_write_en 
        = vlSelf->__PVT__u_riscv_cpu_inst_write_en;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__37(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__37\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_stage2_stall 
        = vlSelf->__PVT__u_riscv_cpu_data_stage2_stall;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__38(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__38\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_sram_rdata_L = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_rdata_L;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__39(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__39\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_sram_rdata = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_rdata;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__40(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__40\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_cache = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_cache;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__44(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__44\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_rdata_L 
        = vlSelf->__PVT__u_riscv_cpu_inst_sram_rdata_L;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__45(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__45\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_rdata 
        = vlSelf->__PVT__u_riscv_cpu_data_sram_rdata;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__46(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__46\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_cache 
        = vlSelf->__PVT__data_cache_io_sram_cache;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__47(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__47\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_sram_addr = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_addr;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__49(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__49\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_addr 
        = vlSelf->__PVT__data_cache_io_sram_addr;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__50(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__50\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_sram_en = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_en;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__52(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__52\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_req 
        = vlSelf->__PVT__data_cache_io_sram_req;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__53(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__53\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_wstrb = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_wstrb;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__55(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__55\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_sram_wdata = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_wdata;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__56(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__56\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_data_wstrb 
        = vlSelf->__PVT__data_cache_io_data_wstrb;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__58(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__58\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_wdata 
        = vlSelf->__PVT__data_cache_io_sram_wdata;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__59(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__59\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_stage2_flush = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_flush;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__61(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__61\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage2_flush 
        = vlSelf->__PVT__inst_cache_io_stage2_flush;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__62(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__62\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_port_wdata = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wdata;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__64(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__64\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_port_awaddr = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awaddr;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__66(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__66\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_stage2_stall = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage2_stall;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__68(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__68\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall 
        = vlSelf->__PVT__u_riscv_cpu_stage2_stall;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__69(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__69\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_inst_sram_en = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_en;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__71(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__71\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_req 
        = vlSelf->__PVT__inst_cache_io_sram_req;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__72(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__72\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_stage1_valid_flush = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage1_valid_flush;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__74(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__74\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage1_valid_flush 
        = vlSelf->__PVT__inst_cache_io_stage1_valid_flush;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__75(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__75\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_inst_sram_addr = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_addr;
}

VL_ATTR_COLD void Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__76(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___settle__TOP__mycpu_top__76\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_sram_addr = vlSelf->__PVT__u_riscv_cpu_inst_sram_addr;
    vlSelf->__PVT__u_riscv_cpu_inst_ready_to_use = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_ready_to_use;
    vlSelf->__PVT__u_riscv_cpu_inst_cache = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_cache;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_addr 
        = vlSelf->__PVT__inst_cache_io_sram_addr;
    vlSelf->__PVT__inst_cache_io_inst_ready_to_use 
        = vlSelf->__PVT__u_riscv_cpu_inst_ready_to_use;
    vlSelf->__PVT__inst_cache_io_sram_cache = vlSelf->__PVT__u_riscv_cpu_inst_cache;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_cache 
        = vlSelf->__PVT__inst_cache_io_sram_cache;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_inst_ready_to_use 
        = vlSelf->__PVT__inst_cache_io_inst_ready_to_use;
}
