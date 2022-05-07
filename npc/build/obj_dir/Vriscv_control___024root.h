// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_control.h for the primary calling header

#ifndef VERILATED_VRISCV_CONTROL___024ROOT_H_
#define VERILATED_VRISCV_CONTROL___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vriscv_control__Syms;
class Vriscv_control_VerilatedVcd;


//----------

VL_MODULE(Vriscv_control___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_instype,3,0);
    VL_OUT8(io_trap_flag,0,0);
    VL_IN(io_mem_instrution,31,0);
    VL_OUT(io_riscv_instruction,31,0);
    VL_OUT(io_src1,31,0);
    VL_OUT(io_src2,31,0);
    VL_OUT(io_dest,31,0);
    VL_OUT(io_inscode,31,0);
    VL_OUT64(io_pc,63,0);
    VL_OUT64(io_answer,63,0);

    // LOCAL SIGNALS
    CData/*3:0*/ riscv_control__DOT__instype;
    CData/*1:0*/ riscv_control__DOT__a;
    CData/*0:0*/ riscv_control__DOT__wrap_wrap;
    CData/*1:0*/ riscv_control__DOT___wrap_value_T_1;
    CData/*0:0*/ riscv_control__DOT__idu_instance__DOT__type_r_test;
    CData/*3:0*/ riscv_control__DOT__idu_instance__DOT___instype_T_5;
    CData/*3:0*/ riscv_control__DOT__idu_instance__DOT__instype;
    IData/*31:0*/ riscv_control__DOT__src1;
    IData/*31:0*/ riscv_control__DOT__src2;
    IData/*31:0*/ riscv_control__DOT__dest;
    IData/*31:0*/ riscv_control__DOT__inscode;
    IData/*31:0*/ riscv_control__DOT__ifu_instance__DOT__instruction_reg;
    QData/*63:0*/ riscv_control__DOT__pc;
    QData/*63:0*/ riscv_control__DOT___pc_T_5;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_0;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_1;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_2;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_3;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_4;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_5;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_6;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_7;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_8;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_9;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_10;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_11;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_12;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_13;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_14;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_15;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_16;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_17;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_18;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_19;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_20;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_21;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_22;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_23;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_24;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_25;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_26;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_27;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_28;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_29;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_30;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_126;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_127;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vriscv_control__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_control___024root);  ///< Copying not allowed
  public:
    Vriscv_control___024root(const char* name);
    ~Vriscv_control___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vriscv_control__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
