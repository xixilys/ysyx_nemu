// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_REGFILE_H_
#define VERILATED_VMYCPU_TOP_REGFILE_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_regfile final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT64(__PVT__io_RD1,63,0);
        VL_OUT64(__PVT__io_RD2,63,0);
        VL_IN8(__PVT__io_A1,4,0);
        VL_IN8(__PVT__io_A2,4,0);
        QData/*63:0*/ __PVT___GEN_95;
        QData/*63:0*/ __PVT___GEN_127;
        QData/*63:0*/ __PVT___GEN_1;
        QData/*63:0*/ __PVT___GEN_2;
        QData/*63:0*/ __PVT___GEN_3;
        QData/*63:0*/ __PVT___GEN_4;
        QData/*63:0*/ __PVT___GEN_5;
        QData/*63:0*/ __PVT___GEN_6;
        QData/*63:0*/ __PVT___GEN_7;
        QData/*63:0*/ __PVT___GEN_8;
        QData/*63:0*/ __PVT___GEN_9;
        QData/*63:0*/ __PVT___GEN_10;
        QData/*63:0*/ __PVT___GEN_11;
        QData/*63:0*/ __PVT___GEN_12;
        QData/*63:0*/ __PVT___GEN_13;
        QData/*63:0*/ __PVT___GEN_14;
        QData/*63:0*/ __PVT___GEN_15;
        QData/*63:0*/ __PVT___GEN_16;
        QData/*63:0*/ __PVT___GEN_17;
        QData/*63:0*/ __PVT___GEN_18;
        QData/*63:0*/ __PVT___GEN_19;
        QData/*63:0*/ __PVT___GEN_20;
        QData/*63:0*/ __PVT___GEN_21;
        QData/*63:0*/ __PVT___GEN_22;
        QData/*63:0*/ __PVT___GEN_23;
        QData/*63:0*/ __PVT___GEN_24;
        QData/*63:0*/ __PVT___GEN_25;
        QData/*63:0*/ __PVT___GEN_26;
        QData/*63:0*/ __PVT___GEN_27;
        QData/*63:0*/ __PVT___GEN_28;
        QData/*63:0*/ __PVT___GEN_65;
        QData/*63:0*/ __PVT___GEN_66;
        QData/*63:0*/ __PVT___GEN_67;
        QData/*63:0*/ __PVT___GEN_68;
        QData/*63:0*/ __PVT___GEN_69;
        QData/*63:0*/ __PVT___GEN_70;
        QData/*63:0*/ __PVT___GEN_71;
        QData/*63:0*/ __PVT___GEN_72;
        QData/*63:0*/ __PVT___GEN_73;
        QData/*63:0*/ __PVT___GEN_74;
        QData/*63:0*/ __PVT___GEN_75;
        QData/*63:0*/ __PVT___GEN_76;
        QData/*63:0*/ __PVT___GEN_77;
        QData/*63:0*/ __PVT___GEN_78;
        QData/*63:0*/ __PVT___GEN_79;
        QData/*63:0*/ __PVT___GEN_80;
        QData/*63:0*/ __PVT___GEN_81;
        QData/*63:0*/ __PVT___GEN_82;
        QData/*63:0*/ __PVT___GEN_83;
        QData/*63:0*/ __PVT___GEN_84;
        QData/*63:0*/ __PVT___GEN_85;
        QData/*63:0*/ __PVT___GEN_86;
        QData/*63:0*/ __PVT___GEN_87;
        QData/*63:0*/ __PVT___GEN_88;
        QData/*63:0*/ __PVT___GEN_89;
        QData/*63:0*/ __PVT___GEN_90;
        QData/*63:0*/ __PVT___GEN_91;
        QData/*63:0*/ __PVT___GEN_92;
        QData/*63:0*/ __PVT___GEN_93;
        QData/*63:0*/ __PVT___GEN_94;
    };
    struct {
        QData/*63:0*/ __PVT___GEN_97;
        QData/*63:0*/ __PVT___GEN_98;
        QData/*63:0*/ __PVT___GEN_99;
        QData/*63:0*/ __PVT___GEN_100;
        QData/*63:0*/ __PVT___GEN_101;
        QData/*63:0*/ __PVT___GEN_102;
        QData/*63:0*/ __PVT___GEN_103;
        QData/*63:0*/ __PVT___GEN_104;
        QData/*63:0*/ __PVT___GEN_105;
        QData/*63:0*/ __PVT___GEN_106;
        QData/*63:0*/ __PVT___GEN_107;
        QData/*63:0*/ __PVT___GEN_108;
        QData/*63:0*/ __PVT___GEN_109;
        QData/*63:0*/ __PVT___GEN_110;
        QData/*63:0*/ __PVT___GEN_111;
        QData/*63:0*/ __PVT___GEN_112;
        QData/*63:0*/ __PVT___GEN_113;
        QData/*63:0*/ __PVT___GEN_114;
        QData/*63:0*/ __PVT___GEN_115;
        QData/*63:0*/ __PVT___GEN_116;
        QData/*63:0*/ __PVT___GEN_117;
        QData/*63:0*/ __PVT___GEN_118;
        QData/*63:0*/ __PVT___GEN_119;
        QData/*63:0*/ __PVT___GEN_120;
        QData/*63:0*/ __PVT___GEN_121;
        QData/*63:0*/ __PVT___GEN_122;
        QData/*63:0*/ __PVT___GEN_123;
        QData/*63:0*/ __PVT___GEN_124;
        QData/*63:0*/ __PVT___GEN_125;
        QData/*63:0*/ __PVT___GEN_126;
        QData/*63:0*/ __PVT__regs_0;
        QData/*63:0*/ __PVT__regs_1;
        QData/*63:0*/ __PVT__regs_2;
        QData/*63:0*/ __PVT__regs_3;
        QData/*63:0*/ __PVT__regs_4;
        QData/*63:0*/ __PVT__regs_5;
        QData/*63:0*/ __PVT__regs_6;
        QData/*63:0*/ __PVT__regs_7;
        QData/*63:0*/ __PVT__regs_8;
        QData/*63:0*/ __PVT__regs_9;
        QData/*63:0*/ __PVT__regs_10;
        QData/*63:0*/ __PVT__regs_11;
        QData/*63:0*/ __PVT__regs_12;
        QData/*63:0*/ __PVT__regs_13;
        QData/*63:0*/ __PVT__regs_14;
        QData/*63:0*/ __PVT__regs_15;
        QData/*63:0*/ __PVT__regs_16;
        QData/*63:0*/ __PVT__regs_17;
        QData/*63:0*/ __PVT__regs_18;
        QData/*63:0*/ __PVT__regs_19;
        QData/*63:0*/ __PVT__regs_20;
        QData/*63:0*/ __PVT__regs_21;
        QData/*63:0*/ __PVT__regs_22;
        QData/*63:0*/ __PVT__regs_23;
        QData/*63:0*/ __PVT__regs_24;
        QData/*63:0*/ __PVT__regs_25;
        QData/*63:0*/ __PVT__regs_26;
        QData/*63:0*/ __PVT__regs_27;
        QData/*63:0*/ __PVT__regs_28;
        QData/*63:0*/ __PVT__regs_29;
        QData/*63:0*/ __PVT__regs_30;
        QData/*63:0*/ __PVT__regs_31;
        QData/*63:0*/ __PVT___GEN_29;
        VL_IN8(__PVT__reset,0,0);
    };
    struct {
        VL_OUTW(__PVT__io_reg_file_alL_out,2047,0,64);
        VlWide<16>/*511:0*/ __PVT__io_reg_file_alL_out_lo_lo;
        VlWide<32>/*1023:0*/ __PVT__io_reg_file_alL_out_lo;
        VlWide<16>/*511:0*/ __PVT__io_reg_file_alL_out_hi_lo;
        VlWide<32>/*1023:0*/ __PVT__io_reg_file_alL_out_hi;
        QData/*63:0*/ __Vdly__regs_0;
        QData/*63:0*/ __Vdly__regs_1;
        QData/*63:0*/ __Vdly__regs_2;
        QData/*63:0*/ __Vdly__regs_3;
        QData/*63:0*/ __Vdly__regs_31;
        VL_IN8(__PVT__clock,0,0);
        QData/*63:0*/ __Vdly__regs_4;
        QData/*63:0*/ __Vdly__regs_5;
        QData/*63:0*/ __Vdly__regs_6;
        QData/*63:0*/ __Vdly__regs_7;
        QData/*63:0*/ __Vdly__regs_8;
        QData/*63:0*/ __Vdly__regs_9;
        QData/*63:0*/ __Vdly__regs_10;
        QData/*63:0*/ __Vdly__regs_11;
        QData/*63:0*/ __Vdly__regs_12;
        QData/*63:0*/ __Vdly__regs_13;
        QData/*63:0*/ __Vdly__regs_14;
        QData/*63:0*/ __Vdly__regs_15;
        QData/*63:0*/ __Vdly__regs_16;
        QData/*63:0*/ __Vdly__regs_17;
        QData/*63:0*/ __Vdly__regs_18;
        QData/*63:0*/ __Vdly__regs_19;
        QData/*63:0*/ __Vdly__regs_20;
        QData/*63:0*/ __Vdly__regs_21;
        QData/*63:0*/ __Vdly__regs_22;
        QData/*63:0*/ __Vdly__regs_23;
        QData/*63:0*/ __Vdly__regs_24;
        QData/*63:0*/ __Vdly__regs_25;
        QData/*63:0*/ __Vdly__regs_26;
        QData/*63:0*/ __Vdly__regs_27;
        QData/*63:0*/ __Vdly__regs_28;
        QData/*63:0*/ __Vdly__regs_29;
        QData/*63:0*/ __Vdly__regs_30;
        VL_IN8(__PVT__io_WE3,0,0);
        VL_IN8(__PVT__io_A3,4,0);
        VL_IN64(__PVT__io_WD3,63,0);
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_regfile(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_regfile();
    VL_UNCOPYABLE(Vmycpu_top_regfile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
