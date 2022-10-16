// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_ALU_H_
#define VERILATED_VMYCPU_TOP_ALU_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_alu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT64(__PVT__io_result,63,0);
        CData/*0:0*/ __PVT__answer_slt;
        CData/*0:0*/ __PVT__answer_sltu;
        CData/*7:0*/ __PVT__answer_lui_lo_lo;
        CData/*0:0*/ __PVT___normal_result_T_52;
        CData/*0:0*/ __PVT___normal_result_T_55;
        CData/*7:0*/ __PVT__io_result_lo_lo;
        SData/*15:0*/ __PVT__answer_lui_lo;
        SData/*15:0*/ __PVT__io_result_lo;
        VlWide<4>/*126:0*/ __PVT___GEN_21;
        VlWide<4>/*126:0*/ __PVT__answer_sll;
        IData/*31:0*/ __PVT___answer_lui_T_1;
        IData/*31:0*/ __PVT___answer_lui_T_34;
        VlWide<4>/*126:0*/ __PVT___normal_result_T_51;
        VlWide<4>/*126:0*/ __PVT___GEN_16;
        VlWide<4>/*126:0*/ __PVT___normal_result_T_66;
        VlWide<4>/*126:0*/ __PVT___GEN_17;
        VlWide<4>/*126:0*/ __PVT___normal_result_T_67;
        VlWide<4>/*126:0*/ __PVT___normal_result_T_68;
        VlWide<4>/*126:0*/ __PVT___normal_result_T_69;
        VlWide<4>/*126:0*/ __PVT___GEN_20;
        VlWide<4>/*126:0*/ __PVT__normal_result;
        IData/*31:0*/ __PVT___io_result_T_33;
        VlWide<4>/*126:0*/ __PVT___io_result_T_36;
        QData/*63:0*/ __PVT__answer_and;
        QData/*63:0*/ __PVT__answer_or;
        QData/*63:0*/ __PVT__answer_xor;
        QData/*63:0*/ __PVT__answer_nor;
        QData/*63:0*/ __PVT__answer_lui;
        QData/*63:0*/ __PVT___normal_result_T_46;
        QData/*63:0*/ __PVT___normal_result_T_47;
        QData/*63:0*/ __PVT___normal_result_T_48;
        QData/*63:0*/ __PVT___normal_result_T_49;
        QData/*63:0*/ __PVT___normal_result_T_50;
        QData/*63:0*/ __PVT___normal_result_T_56;
        QData/*63:0*/ __PVT___normal_result_T_57;
        QData/*63:0*/ __PVT___normal_result_T_58;
        QData/*63:0*/ __PVT___normal_result_T_59;
        QData/*63:0*/ __PVT___normal_result_T_60;
        QData/*63:0*/ __PVT___normal_result_T_61;
        QData/*63:0*/ __PVT___normal_result_T_62;
        QData/*63:0*/ __PVT___normal_result_T_63;
        QData/*63:0*/ __PVT___normal_result_T_64;
        QData/*63:0*/ __PVT___normal_result_T_65;
        QData/*63:0*/ __PVT___io_result_T_35;
        CData/*5:0*/ __PVT__sa;
        VlWide<4>/*126:0*/ __PVT___GEN_18;
        VlWide<4>/*126:0*/ __PVT___GEN_19;
        VL_IN64(__PVT__io_in1,63,0);
        VL_IN64(__PVT__io_in2,63,0);
        QData/*63:0*/ __PVT___normal_result_T_40;
        QData/*63:0*/ __PVT___normal_result_T_41;
        QData/*63:0*/ __PVT___normal_result_T_42;
        QData/*63:0*/ __PVT___normal_result_T_43;
        QData/*63:0*/ __PVT___normal_result_T_44;
        QData/*63:0*/ __PVT___normal_result_T_45;
        VL_IN8(__PVT__io_data_w,0,0);
        IData/*23:0*/ __PVT___normal_result_T_18;
        IData/*23:0*/ __PVT___normal_result_T_20;
        IData/*23:0*/ __PVT___normal_result_T_22;
        IData/*23:0*/ __PVT___normal_result_T_24;
        IData/*23:0*/ __PVT___normal_result_T_26;
        IData/*23:0*/ __PVT___normal_result_T_28;
        IData/*23:0*/ __PVT___normal_result_T_30;
    };
    struct {
        IData/*23:0*/ __PVT___normal_result_T_38;
        VL_IN(__PVT__io_ctrl,23,0);
        IData/*23:0*/ __PVT___normal_result_T;
        IData/*23:0*/ __PVT___normal_result_T_6;
        IData/*23:0*/ __PVT___normal_result_T_9;
        IData/*23:0*/ __PVT___normal_result_T_15;
        IData/*23:0*/ __PVT___normal_result_T_32;
        IData/*23:0*/ __PVT___normal_result_T_35;
        IData/*23:0*/ __PVT___normal_result_T_3;
        IData/*23:0*/ __PVT___normal_result_T_12;
        CData/*4:0*/ __PVT__sa_for_32bit;
        IData/*31:0*/ __PVT__answer_srlw;
        IData/*31:0*/ __PVT___answer_sraw_T_1;
        IData/*31:0*/ __PVT__answer_sraw;
        VlWide<3>/*64:0*/ __PVT__in1_extend;
        VlWide<3>/*64:0*/ __PVT__in2_extend;
        QData/*63:0*/ __PVT__answer_srl;
        QData/*63:0*/ __PVT__answer_sra;
        QData/*63:0*/ __PVT___normal_result_T_34;
        QData/*63:0*/ __PVT___normal_result_T_37;
        QData/*63:0*/ __PVT___normal_result_T_53;
        QData/*63:0*/ __PVT___normal_result_T_54;
        VlWide<3>/*64:0*/ __PVT__answer_add;
        VlWide<3>/*64:0*/ __PVT__answer_sub;
        VL_OUT8(__PVT__io_overflow,0,0);
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_alu(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_alu();
    VL_UNCOPYABLE(Vmycpu_top_alu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
