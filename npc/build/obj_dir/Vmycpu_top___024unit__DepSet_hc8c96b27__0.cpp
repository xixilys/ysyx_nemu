// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top___024unit.h"

extern "C" void cpu_commited_func();

VL_INLINE_OPT void Vmycpu_top___024unit____Vdpiimwrap_cpu_commited_func_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top___024unit____Vdpiimwrap_cpu_commited_func_TOP____024unit\n"); );
    // Body
    cpu_commited_func();
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vmycpu_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void set_pc_ptr(const svLogicVecVal* a);

VL_INLINE_OPT void Vmycpu_top___024unit____Vdpiimwrap_set_pc_ptr_TOP____024unit(QData/*63:0*/ a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top___024unit____Vdpiimwrap_set_pc_ptr_TOP____024unit\n"); );
    // Body
    svLogicVecVal a__Vcvt[2];
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) VL_SET_SVLV_Q(64, a__Vcvt + 2 * a__Vidx, a);
    set_pc_ptr(a__Vcvt);
}

extern "C" void set_debug_pc_ptr(const svLogicVecVal* a);

VL_INLINE_OPT void Vmycpu_top___024unit____Vdpiimwrap_set_debug_pc_ptr_TOP____024unit(QData/*63:0*/ a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top___024unit____Vdpiimwrap_set_debug_pc_ptr_TOP____024unit\n"); );
    // Body
    svLogicVecVal a__Vcvt[2];
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) VL_SET_SVLV_Q(64, a__Vcvt + 2 * a__Vidx, a);
    set_debug_pc_ptr(a__Vcvt);
}

extern "C" void cpu_ebreak();

VL_INLINE_OPT void Vmycpu_top___024unit____Vdpiimwrap_cpu_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top___024unit____Vdpiimwrap_cpu_ebreak_TOP____024unit\n"); );
    // Body
    cpu_ebreak();
}

extern "C" void mem_trace_func(const svOpenArrayHandle a, int mem_write_state, int size, int cache);

VL_INLINE_OPT void Vmycpu_top___024unit____Vdpiimwrap_mem_trace_func__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 3> &a, IData/*31:0*/ mem_write_state, IData/*31:0*/ size, IData/*31:0*/ cache) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top___024unit____Vdpiimwrap_mem_trace_func__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {2, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    int mem_write_state__Vcvt;
    for (size_t mem_write_state__Vidx = 0; mem_write_state__Vidx < 1; ++mem_write_state__Vidx) mem_write_state__Vcvt = mem_write_state;
    int size__Vcvt;
    for (size_t size__Vidx = 0; size__Vidx < 1; ++size__Vidx) size__Vcvt = size;
    int cache__Vcvt;
    for (size_t cache__Vidx = 0; cache__Vidx < 1; ++cache__Vidx) cache__Vcvt = cache;
    mem_trace_func(&a__Vopenarray, mem_write_state__Vcvt, size__Vcvt, cache__Vcvt);
}
