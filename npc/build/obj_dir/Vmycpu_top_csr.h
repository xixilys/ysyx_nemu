// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_CSR_H_
#define VERILATED_VMYCPU_TOP_CSR_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_csr final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT64(__PVT__io_return_pc,63,0);
    CData/*0:0*/ __PVT__commit_eret;
    VL_OUT8(__PVT__io_exception,0,0);
    CData/*0:0*/ __PVT__int_signal;
    VL_IN(__PVT__io_exception_type_i,31,0);
    IData/*31:0*/ __PVT__exception_type;
    IData/*31:0*/ __PVT___commit_eret_T_1;
    CData/*0:0*/ __PVT___io_Int_able_T_1;
    CData/*7:0*/ __PVT___int_signal_T_2;
    CData/*0:0*/ __PVT__commit_exception;
    QData/*63:0*/ __PVT__csr_cause;
    QData/*63:0*/ __Vdly__csr_epc;
    VL_IN8(__PVT__reset,0,0);
    QData/*63:0*/ __PVT__csr_status;
    VL_IN16(__PVT__io_csr_read_addr,11,0);
    VL_OUT64(__PVT__io_csr_read_data,63,0);
    QData/*63:0*/ __PVT___csr_read_data_Wire_T_1;
    QData/*63:0*/ __PVT___csr_read_data_Wire_T_3;
    QData/*63:0*/ __PVT___csr_read_data_Wire_T_5;
    QData/*63:0*/ __PVT__csr_read_data_Wire;
    QData/*63:0*/ __PVT__csr_epc;
    QData/*63:0*/ __PVT__csr_mtvec;
    VL_IN8(__PVT__clock,0,0);
    QData/*63:0*/ __Vdly__csr_mtvec;
    CData/*0:0*/ __PVT___csr_mtvec_T_2;
    CData/*0:0*/ __Vdly__csr_counter_half;
    CData/*0:0*/ __PVT__csr_counter_half;
    VL_IN64(__PVT__io_csr_write_data,63,0);
    VL_IN8(__PVT__io_csr_write_en,0,0);
    VL_IN16(__PVT__io_csr_write_addr,11,0);
    QData/*63:0*/ __PVT__csr_count;
    QData/*63:0*/ __PVT___csr_count_T_4;
    VL_OUT8(__PVT__io_timer_int_has,0,0);
    VL_OUT8(__PVT__io_csr_status,5,0);
    CData/*0:0*/ __PVT___timer_int_T;
    CData/*0:0*/ __PVT___timer_int_T_1;
    QData/*63:0*/ __PVT__csr_compare;
    QData/*63:0*/ __Vdly__csr_count;
    QData/*63:0*/ __Vdly__csr_compare;
    VL_IN64(__PVT__io_pc,63,0);
    VL_OUT8(__PVT__io_Int_able,0,0);
    QData/*63:0*/ __Vdly__csr_status;
    QData/*63:0*/ __Vdly__csr_cause;
    CData/*0:0*/ __PVT___csr_status_to_be_T_2;
    CData/*0:0*/ __PVT___csr_epc_T_3;

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_csr(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_csr();
    VL_UNCOPYABLE(Vmycpu_top_csr);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
