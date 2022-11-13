// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_mycpu_top.h"

VL_INLINE_OPT void Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__0(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__0\n"); );
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
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__1(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__1\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_stage2_stall = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_stage2_stall;
    vlSelf->__PVT__inst_cache_io_stage2_stall = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage2_stall;
    vlSelf->__PVT__u_riscv_cpu_data_stage2_stall = vlSelf->__PVT__data_cache_io_stage2_stall;
    vlSelf->__PVT__u_riscv_cpu_stage2_stall = vlSelf->__PVT__inst_cache_io_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_stage2_stall 
        = vlSelf->__PVT__u_riscv_cpu_data_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall 
        = vlSelf->__PVT__u_riscv_cpu_stage2_stall;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__2(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__2\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_inst_sram_en = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_en;
    vlSelf->__PVT__inst_cache_io_sram_req = vlSelf->__PVT__u_riscv_cpu_inst_sram_en;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_req 
        = vlSelf->__PVT__inst_cache_io_sram_req;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__3(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__3\n"); );
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

VL_INLINE_OPT void Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__4\n"); );
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

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__1(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__1\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_inst_buffer_full 
        = vlSelf->__PVT__inst_cache_io_inst_buffer_full;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__3(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__3\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_stage2_stall 
        = vlSelf->__PVT__u_riscv_cpu_data_stage2_stall;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__2(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_rdata_L 
        = vlSelf->__PVT__u_riscv_cpu_inst_sram_rdata_L;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__4\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_rdata 
        = vlSelf->__PVT__u_riscv_cpu_data_sram_rdata;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__6(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__6\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_wr 
        = vlSelf->__PVT__data_cache_io_sram_wr;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__7(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__7\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_write_en 
        = vlSelf->__PVT__u_riscv_cpu_inst_write_en;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__9(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__9\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_req 
        = vlSelf->__PVT__data_cache_io_sram_req;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__12(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__12\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall 
        = vlSelf->__PVT__u_riscv_cpu_stage2_stall;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__13(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__13\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_req 
        = vlSelf->__PVT__inst_cache_io_sram_req;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__14(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__14\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage1_valid_flush 
        = vlSelf->__PVT__inst_cache_io_stage1_valid_flush;
}
