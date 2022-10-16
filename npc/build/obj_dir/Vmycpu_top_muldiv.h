// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_MULDIV_H_
#define VERILATED_VMYCPU_TOP_MULDIV_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_muldiv final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT64(__PVT__io_data_out,63,0);
        QData/*63:0*/ __PVT___io_data_out_T_44;
        QData/*63:0*/ __PVT___io_data_out_T_45;
        QData/*63:0*/ __PVT___io_data_out_T_46;
        QData/*63:0*/ __PVT___io_data_out_T_47;
        QData/*63:0*/ __PVT___io_data_out_T_48;
        QData/*63:0*/ __PVT___io_data_out_T_49;
        QData/*63:0*/ __PVT___io_data_out_T_50;
        QData/*63:0*/ __PVT___io_data_out_T_51;
        QData/*63:0*/ __PVT___io_data_out_T_52;
        QData/*63:0*/ __PVT___io_data_out_T_53;
        QData/*63:0*/ __PVT___io_data_out_T_34;
        QData/*63:0*/ __PVT___io_data_out_T_35;
        QData/*63:0*/ __PVT___io_data_out_T_36;
        QData/*63:0*/ __PVT___io_data_out_T_37;
        QData/*63:0*/ __PVT___io_data_out_T_38;
        QData/*63:0*/ __PVT___io_data_out_T_39;
        QData/*63:0*/ __PVT___io_data_out_T_40;
        QData/*63:0*/ __PVT___io_data_out_T_41;
        QData/*63:0*/ __PVT___io_data_out_T_42;
        QData/*63:0*/ __PVT___io_data_out_T_43;
        QData/*63:0*/ __PVT___GEN_12;
        QData/*63:0*/ __PVT___GEN_13;
        VL_IN64(__PVT__io_in1,63,0);
        VL_IN64(__PVT__io_in2,63,0);
        CData/*7:0*/ __PVT__mulw_answer_lo_lo;
        CData/*7:0*/ __PVT__remw_answer_lo_lo;
        CData/*7:0*/ __PVT__remuw_answer_lo_lo;
        SData/*15:0*/ __PVT__mulw_answer_lo;
        SData/*15:0*/ __PVT__remw_answer_lo;
        SData/*15:0*/ __PVT__remuw_answer_lo;
        VlWide<4>/*127:0*/ __PVT__mulu_answer;
        VlWide<4>/*127:0*/ __PVT__mul_answer;
        VlWide<3>/*64:0*/ __PVT___mulhsu_answer_T_1;
        VlWide<5>/*128:0*/ __PVT___mulhsu_answer_T_2;
        VlWide<4>/*127:0*/ __PVT___mulhsu_answer_T_4;
        IData/*31:0*/ __PVT___mulw_answer_T_33;
        VlWide<3>/*64:0*/ __PVT__div_answer;
        IData/*31:0*/ __PVT___divw_answer_T_1;
        IData/*31:0*/ __PVT___divw_answer_T_3;
        IData/*31:0*/ __PVT___divuw_answer_T_2;
        IData/*31:0*/ __PVT___remw_answer_T_5;
        IData/*31:0*/ __PVT___remw_answer_T_38;
        IData/*31:0*/ __PVT___GEN_1;
        IData/*31:0*/ __PVT___remuw_answer_T_2;
        IData/*31:0*/ __PVT___remuw_answer_T_35;
        QData/*63:0*/ __PVT__mulh_answer;
        QData/*63:0*/ __PVT__mulhu_answer;
        QData/*63:0*/ __PVT__mulhsu_answer;
        QData/*63:0*/ __PVT__mulw_answer;
        QData/*63:0*/ __PVT__divu_answer;
        QData/*32:0*/ __PVT___divw_answer_T_5;
        QData/*32:0*/ __PVT__divw_answer;
        QData/*32:0*/ __PVT__divuw_answer;
        QData/*63:0*/ __PVT___GEN_0;
        QData/*63:0*/ __PVT__remu_answer;
        QData/*63:0*/ __PVT__rem_answer;
        QData/*63:0*/ __PVT__remw_answer;
        QData/*63:0*/ __PVT__remuw_answer;
        QData/*63:0*/ __PVT___io_data_out_T_30;
        QData/*63:0*/ __PVT___io_data_out_T_31;
        QData/*32:0*/ __PVT___io_data_out_T_32;
        QData/*32:0*/ __PVT___io_data_out_T_33;
        VL_IN(__PVT__io_ctrl,23,0);
    };
    struct {
        IData/*23:0*/ __PVT___io_data_out_T;
        IData/*23:0*/ __PVT___io_data_out_T_6;
        IData/*23:0*/ __PVT___io_data_out_T_8;
        IData/*23:0*/ __PVT___io_data_out_T_10;
        IData/*23:0*/ __PVT___io_data_out_T_12;
        IData/*23:0*/ __PVT___io_data_out_T_14;
        IData/*23:0*/ __PVT___io_data_out_T_16;
        IData/*23:0*/ __PVT___io_data_out_T_18;
        IData/*23:0*/ __PVT___io_data_out_T_21;
        IData/*23:0*/ __PVT___io_data_out_T_24;
        IData/*23:0*/ __PVT___io_data_out_T_26;
        IData/*23:0*/ __PVT___io_data_out_T_28;
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_muldiv(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_muldiv();
    VL_UNCOPYABLE(Vmycpu_top_muldiv);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
