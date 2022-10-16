// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMYCPU_TOP_H_
#define VERILATED_VMYCPU_TOP_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "svdpi.h"

class Vmycpu_top__Syms;
class Vmycpu_top___024root;
class VerilatedFstC;
class Vmycpu_top_mycpu_top;
class Vmycpu_top___024unit;


// This class is the main interface to the Verilated model
class Vmycpu_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vmycpu_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_OUT8(&axi_mem_port_1_arvalid,0,0);
    VL_OUT64(&axi_mem_port_1_awaddr,63,0);
    VL_OUT64(&axi_mem_port_1_wdata,63,0);
    VL_OUT8(&debug_wb_rf_wnum,4,0);
    VL_OUT(&debug_wb_rf_wdata,31,0);
    VL_OUT8(&axi_mem_port_1_arsize,2,0);
    VL_IN8(&axi_mem_port_1_rlast,0,0);
    VL_OUT8(&axi_mem_port_1_awsize,2,0);
    VL_OUT8(&axi_mem_port_1_wstrb,7,0);
    VL_OUT8(&axi_mem_port_1_wlast,0,0);
    VL_OUT8(&axi_mem_port_1_wvalid,0,0);
    VL_IN8(&axi_mem_port_1_bvalid,0,0);
    VL_OUT64(&axi_mem_port_1_araddr,63,0);
    VL_IN64(&axi_mem_port_0_rdata,63,0);
    VL_IN8(&ext_int,5,0);
    VL_OUT8(&axi_mem_port_0_arvalid,0,0);
    VL_OUT8(&debug_wb_rf_wen,3,0);
    VL_OUT(&debug_wb_pc,31,0);
    VL_OUT64(&axi_mem_port_0_araddr,63,0);
    VL_IN8(&axi_mem_port_1_arready,0,0);
    VL_IN8(&axi_mem_port_1_awready,0,0);
    VL_IN8(&axi_mem_port_1_wready,0,0);
    VL_OUT8(&axi_mem_port_0_arlen,3,0);
    VL_OUT8(&axi_mem_port_0_arburst,1,0);
    VL_IN8(&axi_mem_port_0_arready,0,0);
    VL_IN8(&axi_mem_port_0_rlast,0,0);
    VL_IN8(&axi_mem_port_0_rvalid,0,0);
    VL_IN8(&aresetn,0,0);
    VL_OUT8(&axi_mem_port_1_arlen,3,0);
    VL_OUT8(&axi_mem_port_1_arburst,1,0);
    VL_IN8(&axi_mem_port_1_rvalid,0,0);
    VL_OUT8(&axi_mem_port_1_awlen,3,0);
    VL_OUT8(&axi_mem_port_1_awburst,1,0);
    VL_OUT8(&axi_mem_port_1_awvalid,0,0);
    VL_IN64(&axi_mem_port_1_rdata,63,0);
    VL_IN8(&axi_mem_port_0_rid,3,0);
    VL_IN8(&aclk,0,0);
    VL_IN8(&axi_mem_port_0_awready,0,0);
    VL_IN8(&axi_mem_port_0_rresp,1,0);
    VL_IN8(&axi_mem_port_0_bid,3,0);
    VL_IN8(&axi_mem_port_0_wready,0,0);
    VL_IN8(&axi_mem_port_0_bvalid,0,0);
    VL_IN8(&axi_mem_port_0_bresp,1,0);
    VL_IN8(&axi_mem_port_1_rresp,1,0);
    VL_IN8(&axi_mem_port_1_rid,3,0);
    VL_IN8(&axi_mem_port_1_bid,3,0);
    VL_IN8(&axi_mem_port_1_bresp,1,0);
    VL_OUT8(&axi_mem_port_0_arid,3,0);
    VL_OUT8(&axi_mem_port_0_arsize,2,0);
    VL_OUT8(&axi_mem_port_0_arlock,1,0);
    VL_OUT8(&axi_mem_port_0_arcache,3,0);
    VL_OUT8(&axi_mem_port_0_arprot,2,0);
    VL_OUT8(&axi_mem_port_0_rready,0,0);
    VL_OUT8(&axi_mem_port_0_awid,3,0);
    VL_OUT8(&axi_mem_port_0_awlen,3,0);
    VL_OUT8(&axi_mem_port_0_awsize,2,0);
    VL_OUT8(&axi_mem_port_0_awburst,1,0);
    VL_OUT8(&axi_mem_port_0_awlock,1,0);
    VL_OUT8(&axi_mem_port_0_awcache,3,0);
    VL_OUT8(&axi_mem_port_0_awprot,2,0);
    VL_OUT8(&axi_mem_port_0_awvalid,0,0);
    VL_OUT8(&axi_mem_port_0_wid,3,0);
    VL_OUT8(&axi_mem_port_0_wstrb,7,0);
    VL_OUT8(&axi_mem_port_0_wlast,0,0);
    VL_OUT8(&axi_mem_port_0_wvalid,0,0);
    VL_OUT8(&axi_mem_port_0_bready,0,0);
    VL_OUT8(&axi_mem_port_1_arid,3,0);
    VL_OUT8(&axi_mem_port_1_arlock,1,0);
    VL_OUT8(&axi_mem_port_1_arcache,3,0);
    VL_OUT8(&axi_mem_port_1_arprot,2,0);
    VL_OUT8(&axi_mem_port_1_rready,0,0);
    VL_OUT8(&axi_mem_port_1_awid,3,0);
    VL_OUT8(&axi_mem_port_1_awlock,1,0);
    VL_OUT8(&axi_mem_port_1_awcache,3,0);
    VL_OUT8(&axi_mem_port_1_awprot,2,0);
    VL_OUT8(&axi_mem_port_1_wid,3,0);
    VL_OUT8(&axi_mem_port_1_bready,0,0);
    VL_OUT64(&axi_mem_port_0_awaddr,63,0);
    VL_OUT64(&axi_mem_port_0_wdata,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vmycpu_top_mycpu_top* const __PVT__mycpu_top;
    Vmycpu_top___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vmycpu_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vmycpu_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vmycpu_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vmycpu_top();
  private:
    VL_UNCOPYABLE(Vmycpu_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
