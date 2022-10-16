// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VMYCPU_TOP__DPI_H_
#define VERILATED_VMYCPU_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/ddddddd/learning/ysyx-workbench/npc/vsrc/v_lib/difftest_lib.v:1:30
    extern void cpu_commited_func();
    // DPI import at /home/ddddddd/learning/ysyx-workbench/npc/vsrc/v_lib/difftest_lib.v:5:30
    extern void cpu_ebreak();
    // DPI import at /home/ddddddd/learning/ysyx-workbench/npc/vsrc/v_lib/difftest_lib.v:6:30
    extern void mem_trace_func(const svLogicVecVal* mem_write_state, const svLogicVecVal* addr, const svLogicVecVal* data, const svLogicVecVal* pc, const svLogicVecVal* size);
    // DPI import at /home/ddddddd/learning/ysyx-workbench/npc/vsrc/v_lib/difftest_lib.v:4:30
    extern void set_debug_pc_ptr(const svLogicVecVal* a);
    // DPI import at /home/ddddddd/learning/ysyx-workbench/npc/vsrc/v_lib/difftest_lib.v:2:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/ddddddd/learning/ysyx-workbench/npc/vsrc/v_lib/difftest_lib.v:3:30
    extern void set_pc_ptr(const svLogicVecVal* a);

#ifdef __cplusplus
}
#endif

#endif  // guard
