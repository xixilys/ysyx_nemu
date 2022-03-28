// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCOMMAND_LINE_TEST_H_
#define VERILATED_VCOMMAND_LINE_TEST_H_  // guard

#include "verilated_heavy.h"

class Vcommand_line_test__Syms;
class Vcommand_line_test___024root;
class VerilatedVcdC;
class Vcommand_line_test_VerilatedVcd;


// This class is the main interface to the Verilated model
class Vcommand_line_test VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcommand_line_test__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_IN8(&ps2_clk,0,0);
    VL_IN8(&ps2_data,0,0);
    VL_OUT8(&vga_vs,0,0);
    VL_OUT8(&vga_hs,0,0);
    VL_OUT8(&vga_clk,0,0);
    VL_OUT8(&vga_blank_n,0,0);
    VL_OUT8(&vga_sync_n,0,0);
    VL_OUT8(&vga_r,7,0);
    VL_OUT8(&vga_g,7,0);
    VL_OUT8(&vga_b,7,0);
    VL_OUT16(&addr_h,9,0);
    VL_OUT16(&addr_v,9,0);
    VL_OUT8(&led,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcommand_line_test___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vcommand_line_test(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vcommand_line_test(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vcommand_line_test();
  private:
    VL_UNCOPYABLE(Vcommand_line_test);  ///< Copying not allowed

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
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
