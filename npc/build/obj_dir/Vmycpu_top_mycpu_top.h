// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_MYCPU_TOP_H_
#define VERILATED_VMYCPU_TOP_MYCPU_TOP_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;
class Vmycpu_top_myCPU;
class Vmycpu_top_inst_cache;
class Vmycpu_top_data_cache;


class Vmycpu_top_mycpu_top final : public VerilatedModule {
  public:
    // CELLS
    Vmycpu_top_myCPU* __PVT__u_riscv_cpu;
    Vmycpu_top_inst_cache* __PVT__inst_cache;
    Vmycpu_top_data_cache* __PVT__data_cache;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ __PVT__u_riscv_cpu_inst_write_en;
        CData/*1:0*/ __PVT__inst_cache_io_sram_write_en;
        VL_OUT64(axi_mem_port_1_awaddr,63,0);
        VL_OUT64(axi_mem_port_1_wdata,63,0);
        QData/*63:0*/ __PVT__data_cache_io_port_awaddr;
        QData/*63:0*/ __PVT__data_cache_io_port_wdata;
        CData/*0:0*/ __PVT__u_riscv_cpu_inst_cache;
        CData/*0:0*/ __PVT__u_riscv_cpu_stage1_valid_flush;
        CData/*0:0*/ __PVT__u_riscv_cpu_inst_ready_to_use;
        CData/*0:0*/ __PVT__inst_cache_io_stage1_valid_flush;
        CData/*0:0*/ __PVT__inst_cache_io_inst_ready_to_use;
        CData/*0:0*/ __PVT__inst_cache_io_sram_cache;
        QData/*63:0*/ __PVT__u_riscv_cpu_inst_sram_addr;
        QData/*63:0*/ __PVT__inst_cache_io_sram_addr;
        CData/*0:0*/ __PVT__u_riscv_cpu_inst_sram_en;
        CData/*0:0*/ __PVT__u_riscv_cpu_stage2_flush;
        CData/*0:0*/ __PVT__u_riscv_cpu_stage2_stall;
        CData/*0:0*/ __PVT__u_riscv_cpu_data_sram_en;
        CData/*0:0*/ __PVT__inst_cache_io_stage2_flush;
        CData/*0:0*/ __PVT__inst_cache_io_stage2_stall;
        CData/*0:0*/ __PVT__inst_cache_io_sram_req;
        CData/*0:0*/ __PVT__data_cache_io_sram_req;
        VL_OUT8(axi_mem_port_0_arvalid,0,0);
        VL_OUT8(axi_mem_port_1_wstrb,7,0);
        VL_OUT8(axi_mem_port_1_wlast,0,0);
        VL_OUT8(axi_mem_port_1_wvalid,0,0);
        CData/*0:0*/ __PVT__u_riscv_cpu_data_sram_wen;
        CData/*7:0*/ __PVT__u_riscv_cpu_data_wstrb;
        CData/*0:0*/ __PVT__inst_cache_io_port_arvalid;
        CData/*7:0*/ __PVT__data_cache_io_port_wstrb;
        CData/*0:0*/ __PVT__data_cache_io_port_wlast;
        CData/*0:0*/ __PVT__data_cache_io_port_wvalid;
        CData/*7:0*/ __PVT__data_cache_io_data_wstrb;
        CData/*0:0*/ __PVT__data_cache_io_sram_wr;
        VL_OUT64(axi_mem_port_0_araddr,63,0);
        VL_IN64(axi_mem_port_0_rdata,63,0);
        QData/*63:0*/ __PVT__u_riscv_cpu_data_sram_wdata;
        QData/*63:0*/ __PVT__inst_cache_io_port_araddr;
        QData/*63:0*/ __PVT__inst_cache_io_port_rdata;
        QData/*63:0*/ __PVT__inst_cache_io_v_addr_for_tlb;
        QData/*63:0*/ __PVT__inst_cache_io_p_addr_for_tlb;
        QData/*63:0*/ __PVT__data_cache_io_sram_wdata;
        CData/*1:0*/ __PVT__u_riscv_cpu_data_size;
        CData/*2:0*/ __PVT__data_cache_io_sram_size;
        VL_OUT8(axi_mem_port_0_arlen,3,0);
        VL_OUT8(axi_mem_port_0_arburst,1,0);
        VL_OUT8(axi_mem_port_0_arcache,3,0);
        VL_OUT8(axi_mem_port_0_arprot,2,0);
        VL_IN8(axi_mem_port_0_rid,3,0);
        VL_IN8(axi_mem_port_0_rresp,1,0);
        VL_OUT8(axi_mem_port_0_rready,0,0);
        VL_OUT8(axi_mem_port_0_awid,3,0);
        VL_OUT8(axi_mem_port_0_awlen,3,0);
        VL_OUT8(axi_mem_port_0_awsize,2,0);
        VL_OUT8(axi_mem_port_0_awburst,1,0);
        VL_OUT8(axi_mem_port_0_awlock,1,0);
        VL_OUT8(axi_mem_port_0_awcache,3,0);
        VL_OUT8(axi_mem_port_0_bready,0,0);
        VL_OUT8(axi_mem_port_1_arid,3,0);
        VL_OUT8(axi_mem_port_1_arlock,1,0);
        VL_OUT8(axi_mem_port_1_arcache,3,0);
        VL_OUT8(axi_mem_port_1_arprot,2,0);
        VL_IN8(axi_mem_port_1_rid,3,0);
        VL_IN8(axi_mem_port_1_rresp,1,0);
    };
    struct {
        VL_OUT8(axi_mem_port_1_rready,0,0);
        VL_OUT8(axi_mem_port_1_awid,3,0);
        VL_OUT8(axi_mem_port_1_awlock,1,0);
        VL_OUT8(axi_mem_port_1_awcache,3,0);
        VL_OUT8(axi_mem_port_1_awprot,2,0);
        VL_OUT8(axi_mem_port_1_wid,3,0);
        VL_IN8(axi_mem_port_1_bid,3,0);
        VL_IN8(axi_mem_port_1_bresp,1,0);
        VL_OUT8(axi_mem_port_1_bready,0,0);
        VL_OUT8(debug_wb_rf_wen,3,0);
        VL_OUT8(debug_wb_rf_wnum,4,0);
        CData/*3:0*/ __PVT__u_riscv_cpu_debug_wb_rf_wen;
        CData/*4:0*/ __PVT__u_riscv_cpu_debug_wb_rf_wnum;
        CData/*3:0*/ __PVT__inst_cache_io_port_arlen;
        CData/*1:0*/ __PVT__inst_cache_io_port_arburst;
        VL_OUT(debug_wb_pc,31,0);
        VL_OUT(debug_wb_rf_wdata,31,0);
        VL_OUT64(axi_mem_port_0_awaddr,63,0);
        QData/*63:0*/ __PVT__u_riscv_cpu_debug_wb_pc;
        QData/*63:0*/ __PVT__u_riscv_cpu_debug_wb_rf_wdata;
        VL_OUT8(axi_mem_port_0_arid,3,0);
        VL_OUT8(axi_mem_port_0_arsize,2,0);
        VL_OUT8(axi_mem_port_0_arlock,1,0);
        VL_OUT8(axi_mem_port_0_awprot,2,0);
        VL_OUT8(axi_mem_port_0_awvalid,0,0);
        VL_OUT8(axi_mem_port_1_arlen,3,0);
        VL_OUT8(axi_mem_port_1_arsize,2,0);
        VL_OUT8(axi_mem_port_1_arburst,1,0);
        VL_OUT8(axi_mem_port_1_arvalid,0,0);
        VL_IN8(axi_mem_port_1_arready,0,0);
        VL_IN8(axi_mem_port_1_rlast,0,0);
        VL_OUT8(axi_mem_port_1_awlen,3,0);
        VL_OUT8(axi_mem_port_1_awsize,2,0);
        VL_OUT8(axi_mem_port_1_awburst,1,0);
        VL_OUT8(axi_mem_port_1_awvalid,0,0);
        VL_IN8(axi_mem_port_1_awready,0,0);
        VL_IN8(axi_mem_port_1_wready,0,0);
        CData/*0:0*/ __PVT__u_riscv_cpu_data_cache;
        CData/*3:0*/ __PVT__data_cache_io_port_arlen;
        CData/*2:0*/ __PVT__data_cache_io_port_arsize;
        CData/*1:0*/ __PVT__data_cache_io_port_arburst;
        CData/*0:0*/ __PVT__data_cache_io_port_arvalid;
        CData/*0:0*/ __PVT__data_cache_io_port_arready;
        CData/*0:0*/ __PVT__data_cache_io_port_rlast;
        CData/*3:0*/ __PVT__data_cache_io_port_awlen;
        CData/*2:0*/ __PVT__data_cache_io_port_awsize;
        CData/*1:0*/ __PVT__data_cache_io_port_awburst;
        CData/*0:0*/ __PVT__data_cache_io_port_awvalid;
        CData/*0:0*/ __PVT__data_cache_io_port_awready;
        CData/*0:0*/ __PVT__data_cache_io_port_wready;
        CData/*0:0*/ __PVT__data_cache_io_tlb_req;
        CData/*0:0*/ __PVT__data_cache_io_sram_cache;
        VL_OUT64(axi_mem_port_1_araddr,63,0);
        QData/*63:0*/ __PVT__u_riscv_cpu_data_sram_rdata;
        QData/*63:0*/ __PVT__data_cache_io_port_araddr;
        QData/*63:0*/ __PVT__data_cache_io_v_addr_for_tlb;
        QData/*63:0*/ __PVT__data_cache_io_p_addr_for_tlb;
        QData/*63:0*/ __PVT__data_cache_io_sram_rdata;
        VL_IN8(axi_mem_port_0_rlast,0,0);
        VL_IN8(axi_mem_port_0_rvalid,0,0);
        CData/*0:0*/ __PVT__inst_cache_io_port_rlast;
        CData/*0:0*/ __PVT__inst_cache_io_port_rvalid;
        CData/*0:0*/ __PVT__u_riscv_cpu_inst_buffer_full;
        CData/*0:0*/ __PVT__inst_cache_io_inst_buffer_full;
    };
    struct {
        QData/*39:0*/ __PVT__u_riscv_cpu_inst_sram_rdata_L;
        QData/*39:0*/ __PVT__inst_cache_io_sram_rdata_L;
        CData/*0:0*/ __PVT__u_riscv_cpu_data_stage2_stall;
        CData/*0:0*/ __PVT__data_cache_io_stage2_stall;
        CData/*0:0*/ __PVT__data_cache_io_port_bvalid;
        VL_IN8(ext_int,5,0);
        VL_IN8(axi_mem_port_0_awready,0,0);
        VL_OUT8(axi_mem_port_0_wid,3,0);
        VL_OUT8(axi_mem_port_0_wstrb,7,0);
        VL_OUT8(axi_mem_port_0_wlast,0,0);
        VL_OUT8(axi_mem_port_0_wvalid,0,0);
        VL_IN8(axi_mem_port_0_wready,0,0);
        VL_IN8(axi_mem_port_0_bid,3,0);
        VL_IN8(axi_mem_port_1_bvalid,0,0);
        CData/*5:0*/ __PVT__u_riscv_cpu_ext_int;
        VL_OUT64(axi_mem_port_0_wdata,63,0);
        VL_IN8(axi_mem_port_0_arready,0,0);
        CData/*0:0*/ __PVT__inst_cache_io_port_arready;
        VL_IN8(axi_mem_port_1_rvalid,0,0);
        CData/*0:0*/ __PVT__data_cache_io_port_rvalid;
        VL_IN64(axi_mem_port_1_rdata,63,0);
        QData/*63:0*/ __PVT__u_riscv_cpu_data_sram_addr;
        QData/*63:0*/ __PVT__data_cache_io_port_rdata;
        QData/*63:0*/ __PVT__data_cache_io_sram_addr;
        VL_IN8(axi_mem_port_0_bresp,1,0);
        VL_IN8(axi_mem_port_0_bvalid,0,0);
        VL_IN8(aresetn,0,0);
        VL_IN8(aclk,0,0);
        CData/*0:0*/ __PVT__u_riscv_cpu_resetn;
        CData/*0:0*/ __PVT__u_riscv_cpu_clk;
        CData/*0:0*/ __PVT__inst_cache_clock;
        CData/*0:0*/ __PVT__inst_cache_reset;
        CData/*0:0*/ __PVT__data_cache_clock;
        CData/*0:0*/ __PVT__data_cache_reset;
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_mycpu_top(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_mycpu_top();
    VL_UNCOPYABLE(Vmycpu_top_mycpu_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
