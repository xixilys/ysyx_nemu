// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOMMAND_LINE_TEST__SYMS_H_
#define VERILATED_VCOMMAND_LINE_TEST__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vcommand_line_test.h"

// INCLUDE MODULE CLASSES
#include "Vcommand_line_test___024root.h"

// SYMS CLASS (contains all model state)
class Vcommand_line_test__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcommand_line_test* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcommand_line_test___024root   TOP;

    // CONSTRUCTORS
    Vcommand_line_test__Syms(VerilatedContext* contextp, const char* namep, Vcommand_line_test* modelp);
    ~Vcommand_line_test__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
