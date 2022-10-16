// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_LOOK_UP_TABLE_READ_FIRST__H_
#define VERILATED_VMYCPU_TOP_LOOK_UP_TABLE_READ_FIRST__H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_Look_up_table_read_first_ final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ __PVT___GEN_33;
        CData/*7:0*/ __PVT___GEN_34;
        CData/*7:0*/ __PVT___GEN_35;
        CData/*7:0*/ __PVT___GEN_36;
        CData/*7:0*/ __PVT___GEN_37;
        CData/*7:0*/ __PVT___GEN_38;
        CData/*7:0*/ __PVT___GEN_39;
        CData/*7:0*/ __PVT___GEN_40;
        CData/*7:0*/ __PVT___GEN_41;
        CData/*7:0*/ __PVT___GEN_42;
        CData/*7:0*/ __PVT___GEN_43;
        CData/*7:0*/ __PVT___GEN_44;
        CData/*7:0*/ __PVT___GEN_45;
        CData/*7:0*/ __PVT___GEN_46;
        CData/*7:0*/ __PVT___GEN_47;
        CData/*7:0*/ __PVT___GEN_48;
        CData/*7:0*/ __PVT___GEN_49;
        CData/*7:0*/ __PVT___GEN_50;
        CData/*7:0*/ __PVT___GEN_51;
        CData/*7:0*/ __PVT___GEN_52;
        CData/*7:0*/ __PVT___GEN_53;
        CData/*7:0*/ __PVT___GEN_54;
        CData/*7:0*/ __PVT___GEN_55;
        CData/*7:0*/ __PVT___GEN_56;
        CData/*7:0*/ __PVT___GEN_57;
        CData/*7:0*/ __PVT___GEN_58;
        CData/*7:0*/ __PVT___GEN_59;
        CData/*7:0*/ __PVT___GEN_60;
        CData/*7:0*/ __Vdly__btb_3;
        CData/*7:0*/ __Vdly__btb_4;
        CData/*7:0*/ __Vdly__btb_5;
        CData/*7:0*/ __Vdly__btb_6;
        CData/*7:0*/ __Vdly__btb_9;
        CData/*7:0*/ __Vdly__btb_11;
        CData/*7:0*/ __Vdly__btb_12;
        CData/*7:0*/ __Vdly__btb_13;
        CData/*7:0*/ __Vdly__btb_14;
        CData/*7:0*/ __Vdly__btb_15;
        CData/*7:0*/ __Vdly__btb_16;
        CData/*7:0*/ __Vdly__btb_17;
        CData/*7:0*/ __Vdly__btb_18;
        CData/*7:0*/ __Vdly__btb_19;
        CData/*7:0*/ __Vdly__btb_21;
        VL_IN8(__PVT__clock,0,0);
        CData/*7:0*/ __Vdly__btb_2;
        CData/*7:0*/ __Vdly__btb_7;
        CData/*7:0*/ __Vdly__btb_8;
        CData/*7:0*/ __Vdly__btb_10;
        CData/*7:0*/ __Vdly__btb_20;
        CData/*7:0*/ __Vdly__btb_0;
        CData/*7:0*/ __Vdly__btb_1;
        CData/*7:0*/ __Vdly__btb_24;
        CData/*7:0*/ __Vdly__btb_25;
        CData/*7:0*/ __PVT__btb_30;
        CData/*7:0*/ __PVT__btb_31;
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__io_aw_addr,4,0);
        VL_IN8(__PVT__io_write,0,0);
        VL_IN8(__PVT__io_in,7,0);
        CData/*7:0*/ __PVT__btb_0;
        CData/*7:0*/ __PVT__btb_1;
        CData/*7:0*/ __PVT__btb_2;
        CData/*7:0*/ __PVT__btb_7;
        CData/*7:0*/ __PVT__btb_8;
    };
    struct {
        CData/*7:0*/ __PVT__btb_10;
        CData/*7:0*/ __PVT__btb_20;
        CData/*7:0*/ __PVT__btb_22;
        CData/*7:0*/ __PVT__btb_23;
        CData/*7:0*/ __PVT__btb_24;
        CData/*7:0*/ __PVT__btb_25;
        CData/*7:0*/ __PVT___GEN_61;
        CData/*7:0*/ __PVT__btb_3;
        CData/*7:0*/ __PVT__btb_4;
        CData/*7:0*/ __PVT__btb_5;
        CData/*7:0*/ __PVT__btb_6;
        CData/*7:0*/ __PVT__btb_9;
        CData/*7:0*/ __PVT__btb_11;
        CData/*7:0*/ __PVT__btb_12;
        CData/*7:0*/ __PVT__btb_13;
        CData/*7:0*/ __PVT__btb_14;
        CData/*7:0*/ __PVT__btb_15;
        CData/*7:0*/ __PVT__btb_16;
        CData/*7:0*/ __PVT__btb_17;
        CData/*7:0*/ __PVT__btb_18;
        CData/*7:0*/ __PVT__btb_19;
        CData/*7:0*/ __PVT__btb_21;
        CData/*7:0*/ __PVT__btb_26;
        CData/*7:0*/ __PVT__btb_27;
        CData/*7:0*/ __PVT__btb_28;
        CData/*7:0*/ __PVT__btb_29;
        CData/*7:0*/ __Vdly__btb_26;
        CData/*7:0*/ __Vdly__btb_27;
        CData/*7:0*/ __Vdly__btb_28;
        CData/*7:0*/ __Vdly__btb_29;
        CData/*7:0*/ __Vdly__btb_30;
        CData/*7:0*/ __Vdly__btb_22;
        CData/*7:0*/ __Vdly__btb_23;
        VL_IN8(__PVT__io_ar_addr,4,0);
        CData/*7:0*/ __PVT___GEN_1;
        CData/*7:0*/ __PVT___GEN_2;
        CData/*7:0*/ __PVT___GEN_3;
        CData/*7:0*/ __PVT___GEN_4;
        CData/*7:0*/ __PVT___GEN_5;
        CData/*7:0*/ __PVT___GEN_6;
        CData/*7:0*/ __PVT___GEN_7;
        VL_OUT8(__PVT__io_out,7,0);
        CData/*7:0*/ __PVT___GEN_8;
        CData/*7:0*/ __PVT___GEN_9;
        CData/*7:0*/ __PVT___GEN_10;
        CData/*7:0*/ __PVT___GEN_11;
        CData/*7:0*/ __PVT___GEN_12;
        CData/*7:0*/ __PVT___GEN_13;
        CData/*7:0*/ __PVT___GEN_14;
        CData/*7:0*/ __PVT___GEN_15;
        CData/*7:0*/ __PVT___GEN_16;
        CData/*7:0*/ __PVT___GEN_17;
        CData/*7:0*/ __PVT___GEN_18;
        CData/*7:0*/ __PVT___GEN_19;
        CData/*7:0*/ __PVT___GEN_20;
        CData/*7:0*/ __PVT___GEN_21;
        CData/*7:0*/ __PVT___GEN_22;
        CData/*7:0*/ __PVT___GEN_23;
        CData/*7:0*/ __PVT___GEN_24;
        CData/*7:0*/ __PVT___GEN_25;
        CData/*7:0*/ __PVT___GEN_26;
        CData/*7:0*/ __PVT___GEN_27;
        CData/*7:0*/ __PVT___GEN_28;
        CData/*7:0*/ __PVT___GEN_29;
    };
    struct {
        CData/*7:0*/ __PVT___GEN_30;
        CData/*7:0*/ __Vdly__btb_31;
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_Look_up_table_read_first_(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_Look_up_table_read_first_();
    VL_UNCOPYABLE(Vmycpu_top_Look_up_table_read_first_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
