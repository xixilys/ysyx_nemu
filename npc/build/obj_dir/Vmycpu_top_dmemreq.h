// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_DMEMREQ_H_
#define VERILATED_VMYCPU_TOP_DMEMREQ_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_dmemreq final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__io_wstrb,7,0);
    CData/*1:0*/ __PVT___io_wstrb_T_1;
    CData/*2:0*/ __PVT___io_wstrb_T_3;
    CData/*3:0*/ __PVT___io_wstrb_T_5;
    CData/*4:0*/ __PVT___io_wstrb_T_7;
    CData/*5:0*/ __PVT___io_wstrb_T_9;
    CData/*6:0*/ __PVT___io_wstrb_T_11;
    CData/*7:0*/ __PVT___io_wstrb_T_13;
    CData/*7:0*/ __PVT___io_wstrb_T_29;
    CData/*7:0*/ __PVT___io_wstrb_T_31;
    VlWide<3>/*64:0*/ __PVT___io_wdata_T_44;
    IData/*16:0*/ __PVT___io_wdata_T_61;
    VlWide<3>/*64:0*/ __PVT___io_wdata_T_67;
    VlWide<3>/*64:0*/ __PVT___io_wdata_T_74;
    VlWide<3>/*64:0*/ __PVT___io_wdata_T_78;
    VlWide<3>/*64:0*/ __PVT___io_wdata_T_82;
    VlWide<3>/*64:0*/ __PVT___io_wdata_T_84;
    VlWide<3>/*64:0*/ __PVT___io_wdata_T_86;
    VL_OUT64(__PVT__io_wdata,63,0);
    QData/*32:0*/ __PVT___io_wdata_T_36;
    QData/*40:0*/ __PVT___io_wdata_T_38;
    QData/*48:0*/ __PVT___io_wdata_T_40;
    QData/*56:0*/ __PVT___io_wdata_T_42;
    QData/*32:0*/ __PVT___io_wdata_T_63;
    QData/*48:0*/ __PVT___io_wdata_T_65;
    QData/*32:0*/ __PVT___io_wdata_T_70;
    QData/*32:0*/ __PVT___io_wdata_T_76;
    VL_OUT8(__PVT__io_req,0,0);
    VL_IN8(__PVT__io_en,0,0);
    VL_IN8(__PVT__io_MemWriteE,0,0);
    VL_IN8(__PVT__io_MemToRegE,0,0);
    VL_OUT8(__PVT__io_wr,0,0);
    VL_OUT8(__PVT__io_size,1,0);
    VL_OUT64(__PVT__io_addr,63,0);
    VL_IN64(__PVT__io_VAddrE,63,0);
    CData/*1:0*/ __PVT___io_wstrb_T_15;
    CData/*3:0*/ __PVT___io_wstrb_T_17;
    CData/*5:0*/ __PVT___io_wstrb_T_19;
    CData/*3:0*/ __PVT___io_wstrb_T_23;
    SData/*8:0*/ __PVT___io_wdata_T_2;
    IData/*16:0*/ __PVT___io_wdata_T_6;
    IData/*24:0*/ __PVT___io_wdata_T_10;
    IData/*16:0*/ __PVT___io_wdata_T_32;
    CData/*2:0*/ __PVT__ra;
    CData/*7:0*/ __PVT___io_wstrb_T_21;
    CData/*7:0*/ __PVT___io_wstrb_T_25;
    CData/*7:0*/ __PVT___io_wstrb_T_27;
    VlWide<3>/*64:0*/ __PVT___io_wdata_T_30;
    IData/*24:0*/ __PVT___io_wdata_T_34;
    IData/*16:0*/ __PVT___io_wdata_T_47;
    VlWide<3>/*64:0*/ __PVT___io_wdata_T_59;
    VL_IN64(__PVT__io_WriteDataE,63,0);
    QData/*32:0*/ __PVT___io_wdata_T_14;
    QData/*40:0*/ __PVT___io_wdata_T_18;
    QData/*48:0*/ __PVT___io_wdata_T_22;
    QData/*56:0*/ __PVT___io_wdata_T_26;
    QData/*32:0*/ __PVT___io_wdata_T_51;
    QData/*48:0*/ __PVT___io_wdata_T_55;
    QData/*63:0*/ __PVT___io_wdata_T_80;
    VL_IN8(__PVT__io_MemWidthE,1,0);

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_dmemreq(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_dmemreq();
    VL_UNCOPYABLE(Vmycpu_top_dmemreq);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
