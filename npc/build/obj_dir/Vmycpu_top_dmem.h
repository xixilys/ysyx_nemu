// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_DMEM_H_
#define VERILATED_VMYCPU_TOP_DMEM_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_dmem final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*6:0*/ __PVT__io_RD_lo_lo_lo;
        CData/*6:0*/ __PVT__io_RD_lo_lo_lo_1;
        CData/*6:0*/ __PVT__io_RD_lo_lo_lo_2;
        CData/*6:0*/ __PVT__io_RD_lo_lo_lo_3;
        CData/*6:0*/ __PVT__io_RD_lo_lo_lo_4;
        CData/*6:0*/ __PVT__io_RD_lo_lo_lo_5;
        CData/*6:0*/ __PVT__io_RD_lo_lo_lo_6;
        CData/*6:0*/ __PVT__io_RD_lo_lo_lo_7;
        CData/*5:0*/ __PVT__io_RD_lo_lo_lo_8;
        CData/*5:0*/ __PVT__io_RD_lo_lo_lo_9;
        CData/*5:0*/ __PVT__io_RD_lo_lo_lo_10;
        CData/*5:0*/ __PVT__io_RD_lo_lo_lo_11;
        CData/*7:0*/ __PVT__io_RD_lo_lo_12;
        CData/*7:0*/ __PVT__io_RD_lo_lo_13;
        SData/*13:0*/ __PVT__io_RD_lo_lo;
        SData/*13:0*/ __PVT__io_RD_lo_lo_1;
        SData/*13:0*/ __PVT__io_RD_lo_lo_2;
        SData/*13:0*/ __PVT__io_RD_lo_lo_3;
        SData/*13:0*/ __PVT__io_RD_lo_lo_4;
        SData/*8:0*/ __PVT___io_RD_T_332;
        SData/*13:0*/ __PVT__io_RD_lo_lo_5;
        SData/*8:0*/ __PVT___io_RD_T_395;
        SData/*13:0*/ __PVT__io_RD_lo_lo_6;
        SData/*8:0*/ __PVT___io_RD_T_458;
        SData/*13:0*/ __PVT__io_RD_lo_lo_7;
        SData/*8:0*/ __PVT___io_RD_T_521;
        SData/*11:0*/ __PVT__io_RD_lo_lo_8;
        SData/*11:0*/ __PVT__io_RD_lo_lo_9;
        SData/*11:0*/ __PVT__io_RD_lo_lo_10;
        SData/*11:0*/ __PVT__io_RD_lo_lo_11;
        SData/*15:0*/ __PVT__io_RD_lo_12;
        SData/*15:0*/ __PVT__io_RD_lo_13;
        IData/*27:0*/ __PVT__io_RD_lo;
        IData/*27:0*/ __PVT__io_RD_lo_1;
        IData/*27:0*/ __PVT__io_RD_lo_2;
        IData/*27:0*/ __PVT__io_RD_lo_3;
        IData/*27:0*/ __PVT__io_RD_lo_4;
        IData/*27:0*/ __PVT__io_RD_lo_5;
        IData/*27:0*/ __PVT__io_RD_lo_6;
        IData/*27:0*/ __PVT__io_RD_lo_7;
        IData/*23:0*/ __PVT__io_RD_lo_8;
        IData/*16:0*/ __PVT___io_RD_T_593;
        IData/*23:0*/ __PVT__io_RD_lo_9;
        IData/*16:0*/ __PVT___io_RD_T_648;
        IData/*23:0*/ __PVT__io_RD_lo_10;
        IData/*16:0*/ __PVT___io_RD_T_713;
        IData/*23:0*/ __PVT__io_RD_lo_11;
        IData/*16:0*/ __PVT___io_RD_T_768;
        IData/*31:0*/ __PVT___io_RD_T_812;
        IData/*31:0*/ __PVT___io_RD_T_852;
        QData/*55:0*/ __PVT___io_RD_T_59;
        QData/*55:0*/ __PVT___io_RD_T_122;
        QData/*55:0*/ __PVT___io_RD_T_185;
        QData/*55:0*/ __PVT___io_RD_T_248;
        QData/*55:0*/ __PVT___io_RD_T_327;
        QData/*63:0*/ __PVT___io_RD_T_329;
        QData/*55:0*/ __PVT___io_RD_T_390;
        QData/*63:0*/ __PVT___io_RD_T_392;
        QData/*55:0*/ __PVT___io_RD_T_453;
        QData/*63:0*/ __PVT___io_RD_T_455;
        QData/*55:0*/ __PVT___io_RD_T_516;
        QData/*63:0*/ __PVT___io_RD_T_518;
        QData/*63:0*/ __PVT___io_RD_T_523;
        QData/*63:0*/ __PVT___io_RD_T_525;
    };
    struct {
        QData/*63:0*/ __PVT___io_RD_T_527;
        QData/*63:0*/ __PVT___io_RD_T_529;
        QData/*63:0*/ __PVT___io_RD_T_531;
        QData/*63:0*/ __PVT___io_RD_T_533;
        QData/*63:0*/ __PVT___io_RD_T_590;
        QData/*63:0*/ __PVT___io_RD_T_645;
        QData/*63:0*/ __PVT___io_RD_T_650;
        QData/*63:0*/ __PVT___io_RD_T_652;
        QData/*63:0*/ __PVT___io_RD_T_654;
        QData/*63:0*/ __PVT___io_RD_T_656;
        QData/*63:0*/ __PVT___io_RD_T_710;
        QData/*63:0*/ __PVT___io_RD_T_765;
        QData/*63:0*/ __PVT___io_RD_T_770;
        QData/*63:0*/ __PVT___io_RD_T_772;
        QData/*63:0*/ __PVT___io_RD_T_774;
        QData/*63:0*/ __PVT___io_RD_T_776;
        QData/*63:0*/ __PVT___io_RD_T_814;
        QData/*32:0*/ __PVT___io_RD_T_816;
        QData/*63:0*/ __PVT___io_RD_T_817;
        QData/*63:0*/ __PVT___io_RD_T_854;
        QData/*32:0*/ __PVT___io_RD_T_856;
        QData/*63:0*/ __PVT___io_RD_T_857;
        CData/*1:0*/ __PVT__ra;
        VL_IN64(__PVT__io_Physisc_Address,63,0);
        VL_IN8(__PVT__io_SIGN,0,0);
        CData/*0:0*/ __PVT__third_ra;
        CData/*2:0*/ __PVT___io_RD_T_1;
        SData/*8:0*/ __PVT___io_RD_T_64;
        SData/*8:0*/ __PVT___io_RD_T_127;
        SData/*8:0*/ __PVT___io_RD_T_190;
        SData/*8:0*/ __PVT___io_RD_T_253;
        VL_IN64(__PVT__io_rdata,63,0);
        QData/*63:0*/ __PVT___io_RD_T_61;
        QData/*63:0*/ __PVT___io_RD_T_124;
        QData/*63:0*/ __PVT___io_RD_T_187;
        QData/*63:0*/ __PVT___io_RD_T_250;
        QData/*63:0*/ __PVT___io_RD_T_535;
        QData/*63:0*/ __PVT___io_RD_T_777;
        QData/*63:0*/ __PVT___io_RD_T_858;
        VL_OUT64(__PVT__io_RD,63,0);
        QData/*63:0*/ __PVT___io_RD_T_255;
        QData/*63:0*/ __PVT___io_RD_T_257;
        QData/*63:0*/ __PVT___io_RD_T_259;
        QData/*63:0*/ __PVT___io_RD_T_261;
        QData/*63:0*/ __PVT___io_RD_T_263;
        QData/*63:0*/ __PVT___io_RD_T_265;
        QData/*63:0*/ __PVT___io_RD_T_267;
        QData/*63:0*/ __PVT___io_RD_T_536;
        QData/*63:0*/ __PVT___io_RD_T_860;
        QData/*63:0*/ __PVT___io_RD_T_862;
        VL_IN8(__PVT__io_WIDTH,1,0);
        VL_IN8(__PVT__io_data_ok,0,0);
        VL_OUT8(__PVT__io_data_pending,0,0);
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_dmem(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_dmem();
    VL_UNCOPYABLE(Vmycpu_top_dmem);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
