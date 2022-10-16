// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_CP0_H_
#define VERILATED_VMYCPU_TOP_CP0_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_cp0 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__io_cp0_tlb_write_en,0,0);
        VL_OUT8(__PVT__io_asid,7,0);
        IData/*31:0*/ __Vdly__cp0_count;
        IData/*31:0*/ __Vdly__cp0_entryhi;
        IData/*31:0*/ __Vdly__cp0_status;
        IData/*31:0*/ __Vdly__cp0_cause;
        CData/*0:0*/ __PVT___cp0_status_T_7;
        SData/*9:0*/ __PVT__cp0_cause_lo;
        IData/*31:0*/ __PVT___cp0_entryhi_T_13;
        IData/*31:0*/ __PVT___cp0_status_T_4;
        IData/*21:0*/ __PVT__cp0_cause_hi;
        CData/*0:0*/ __PVT__commit_in_delayslot;
        CData/*4:0*/ __PVT__cause_exccode_Wire;
        CData/*4:0*/ __PVT___cp0_cause_T_5;
        VL_IN8(__PVT__io_int_i,5,0);
        CData/*3:0*/ __PVT___cause_exccode_Wire_T_49;
        CData/*7:0*/ __PVT___cp0_entryhi_T_12;
        CData/*0:0*/ __PVT__timer_int;
        CData/*1:0*/ __PVT___cp0_cause_T_2;
        IData/*18:0*/ __PVT___cp0_entryhi_T_6;
        IData/*31:0*/ __PVT__cp0_cause;
        IData/*31:0*/ __PVT__cp0_status;
        CData/*0:0*/ __PVT__commit_exception;
        IData/*31:0*/ __PVT__plus_380_exception_pc;
        IData/*31:0*/ __PVT__plus_200_exception_pc;
        CData/*0:0*/ __PVT__commit_eret;
        IData/*31:0*/ __PVT__cp0_epc;
        IData/*31:0*/ __PVT__cp0_ebase;
        IData/*31:0*/ __PVT___commit_eret_T_1;
        IData/*31:0*/ __PVT___commit_epc_T_2;
        IData/*19:0*/ __PVT__cp0_ebase_hi;
        IData/*31:0*/ __PVT__exception_type;
        VL_IN8(__PVT__io_cp0_write_addr,4,0);
        VL_IN8(__PVT__io_cp0_write_sel,2,0);
        VL_OUT8(__PVT__io_exception,0,0);
        VL_OUT8(__PVT__io_Int_able,0,0);
        CData/*0:0*/ __Vdly__cp0_counter_half;
        VL_IN(__PVT__io_exception_type_i,31,0);
        VL_OUT(__PVT__io_epc,31,0);
        IData/*31:0*/ __Vdly__cp0_epc;
        IData/*31:0*/ __Vdly__cp0_ebase;
        CData/*0:0*/ __PVT__int_signal;
        VL_IN8(__PVT__io_in_delayslot,0,0);
        VL_IN8(__PVT__io_in_branchjump_jr,1,0);
        IData/*31:0*/ __PVT___commit_next_pc_T_6;
        CData/*0:0*/ __PVT___cp0_epc_T_3;
        VL_IN(__PVT__io_pc,31,0);
        IData/*31:0*/ __PVT___commit_next_pc_T_3;
        IData/*31:0*/ __PVT___commit_next_pc_T_7;
        CData/*0:0*/ __PVT__cp0_counter_half;
        CData/*0:0*/ __PVT___io_Int_able_T_1;
        CData/*7:0*/ __PVT___int_signal_T_2;
        IData/*31:0*/ __PVT___plus_380_exception_pc_T_3;
        IData/*31:0*/ __PVT___plus_200_exception_pc_T_3;
        IData/*31:0*/ __Vdly__plus_380_exception_pc;
        IData/*31:0*/ __Vdly__plus_200_exception_pc;
        VL_IN8(__PVT__clock,0,0);
        IData/*31:0*/ __Vdly__cp0_compare;
        CData/*0:0*/ __PVT___io_exception_T_1;
        IData/*31:0*/ __PVT__cp0_entryhi;
        VL_OUT8(__PVT__io_cp0_status,5,0);
        CData/*0:0*/ __PVT___commit_eret_T_3;
        CData/*0:0*/ __PVT___return_pc_Wire_T_7;
        CData/*0:0*/ __PVT___return_pc_Wire_T_13;
    };
    struct {
        CData/*0:0*/ __PVT___cause_exccode_Wire_T_6;
        CData/*2:0*/ __PVT___cause_exccode_Wire_T_28;
        CData/*2:0*/ __PVT___cause_exccode_Wire_T_29;
        CData/*3:0*/ __PVT___cause_exccode_Wire_T_30;
        CData/*3:0*/ __PVT___cause_exccode_Wire_T_31;
        CData/*3:0*/ __PVT___cause_exccode_Wire_T_32;
        CData/*3:0*/ __PVT___cause_exccode_Wire_T_33;
        CData/*1:0*/ __PVT___cause_exccode_Wire_T_36;
        CData/*1:0*/ __PVT___cause_exccode_Wire_T_37;
        CData/*2:0*/ __PVT___cause_exccode_Wire_T_40;
        CData/*3:0*/ __PVT___GEN_20;
        CData/*3:0*/ __PVT___cause_exccode_Wire_T_41;
        CData/*3:0*/ __PVT___cause_exccode_Wire_T_42;
        CData/*3:0*/ __PVT___cause_exccode_Wire_T_43;
        CData/*3:0*/ __PVT___cause_exccode_Wire_T_44;
        CData/*3:0*/ __PVT___cause_exccode_Wire_T_45;
        CData/*3:0*/ __PVT___cause_exccode_Wire_T_46;
        CData/*3:0*/ __PVT___GEN_23;
        CData/*3:0*/ __PVT___cause_exccode_Wire_T_47;
        CData/*3:0*/ __PVT___GEN_24;
        CData/*3:0*/ __PVT___cause_exccode_Wire_T_48;
        CData/*3:0*/ __PVT___GEN_25;
        CData/*0:0*/ __PVT___cp0_entryhi_T_3;
        CData/*0:0*/ __PVT__cause_write_en;
        CData/*0:0*/ __PVT___timer_int_T_6;
        VL_OUT(__PVT__io_return_pc,31,0);
        IData/*31:0*/ __PVT___return_pc_Wire_T;
        IData/*31:0*/ __PVT___return_pc_Wire_T_14;
        IData/*31:0*/ __PVT___cause_exccode_Wire_T_2;
        IData/*31:0*/ __PVT___cause_exccode_Wire_T_7;
        IData/*31:0*/ __PVT___cause_exccode_Wire_T_9;
        IData/*31:0*/ __PVT___cause_exccode_Wire_T_11;
        IData/*31:0*/ __PVT___cause_exccode_Wire_T_15;
        IData/*31:0*/ __PVT___cause_exccode_Wire_T_21;
        IData/*31:0*/ __PVT___cause_exccode_Wire_T_23;
        IData/*31:0*/ __PVT___cause_exccode_Wire_T_25;
        IData/*17:0*/ __PVT___cp0_ebase_T_6;
        IData/*31:0*/ __PVT__cp0_count;
        CData/*3:0*/ __PVT___GEN_21;
        CData/*3:0*/ __PVT___GEN_22;
        CData/*0:0*/ __PVT___cp0_compare_T_2;
        IData/*31:0*/ __PVT___return_pc_Wire_T_2;
        IData/*31:0*/ __PVT___return_pc_Wire_T_5;
        IData/*31:0*/ __PVT__cp0_compare;
        VL_OUT8(__PVT__io_timer_int_has,0,0);
        CData/*1:0*/ __PVT___cause_exccode_Wire_T_34;
        CData/*1:0*/ __PVT___cause_exccode_Wire_T_35;
        CData/*0:0*/ __PVT___timer_int_T;
        CData/*0:0*/ __PVT___timer_int_T_1;
        IData/*31:0*/ __PVT___cp0_read_data_Wire_T_28;
        IData/*31:0*/ __PVT___cp0_count_T_4;
        VL_IN8(__PVT__reset,0,0);
        VL_IN(__PVT__io_cp0_write_data,31,0);
        VL_IN8(__PVT__io_cp0_write_en,0,0);
        CData/*5:0*/ __PVT__write_addr_sel;
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_cp0(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_cp0();
    VL_UNCOPYABLE(Vmycpu_top_cp0);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
