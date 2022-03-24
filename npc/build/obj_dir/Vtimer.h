// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTIMER_H_
#define VERILATED_VTIMER_H_  // guard

#include "verilated_heavy.h"

class Vtimer__Syms;
class Vtimer___024root;
class VerilatedVcdC;
class Vtimer_VerilatedVcd;


// This class is the main interface to the Verilated model
class Vtimer VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtimer__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&rst,0,0);
    VL_IN8(&stop,0,0);
    VL_IN8(&start,0,0);
    VL_IN8(&clk,0,0);
    VL_OUT8(&bcd1,6,0);
    VL_OUT8(&bcd2,6,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtimer___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtimer(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtimer(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtimer();
  private:
    VL_UNCOPYABLE(Vtimer);  ///< Copying not allowed

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
