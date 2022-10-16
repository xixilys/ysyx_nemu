// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_BTB_BANKS_ONEISSUE_WITH_BLOCK_RAM_H_
#define VERILATED_VMYCPU_TOP_BTB_BANKS_ONEISSUE_WITH_BLOCK_RAM_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;
class Vmycpu_top_btb_tag_with_block_ram;
class Vmycpu_top_btb_data_with_block_ram;


class Vmycpu_top_BTB_banks_oneissue_with_block_ram final : public VerilatedModule {
  public:
    // CELLS
    Vmycpu_top_btb_tag_with_block_ram* __PVT__btb_tag_with_block_ram;
    Vmycpu_top_btb_tag_with_block_ram* __PVT__btb_tag_with_block_ram_1;
    Vmycpu_top_btb_tag_with_block_ram* __PVT__btb_tag_with_block_ram_2;
    Vmycpu_top_btb_tag_with_block_ram* __PVT__btb_tag_with_block_ram_3;
    Vmycpu_top_btb_data_with_block_ram* __PVT__btb_data_with_block_ram;
    Vmycpu_top_btb_data_with_block_ram* __PVT__btb_data_with_block_ram_1;
    Vmycpu_top_btb_data_with_block_ram* __PVT__btb_data_with_block_ram_2;
    Vmycpu_top_btb_data_with_block_ram* __PVT__btb_data_with_block_ram_3;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        QData/*63:0*/ __PVT__btb_data_with_block_ram_2_io_rdata;
        QData/*63:0*/ __PVT__btb_banks_2_rdata;
        VL_OUT8(__PVT__io_hit_L,0,0);
        CData/*7:0*/ __PVT___GEN_13;
        CData/*7:0*/ __PVT___GEN_14;
        CData/*7:0*/ __PVT___GEN_15;
        VL_OUT64(__PVT__io_out_L,63,0);
        QData/*63:0*/ __PVT___GEN_1;
        QData/*63:0*/ __PVT___GEN_2;
        CData/*7:0*/ __PVT__tag_banks_0_rdata;
        CData/*7:0*/ __PVT__tag_banks_2_rdata;
        CData/*7:0*/ __PVT__btb_tag_with_block_ram_io_rdata;
        CData/*7:0*/ __PVT__btb_tag_with_block_ram_2_io_rdata;
        SData/*8:0*/ __PVT__btb_tag_with_block_ram_io_waddr;
        SData/*8:0*/ __PVT__btb_tag_with_block_ram_2_io_waddr;
        CData/*7:0*/ __PVT__btb_tag_with_block_ram_1_io_rdata;
        CData/*7:0*/ __PVT__btb_tag_with_block_ram_3_io_rdata;
        QData/*63:0*/ __PVT__btb_data_with_block_ram_io_rdata;
        QData/*63:0*/ __PVT__btb_data_with_block_ram_1_io_rdata;
        CData/*7:0*/ __PVT__tag_banks_1_rdata;
        CData/*7:0*/ __PVT__tag_banks_3_rdata;
        QData/*63:0*/ __PVT__btb_banks_0_rdata;
        QData/*63:0*/ __PVT__btb_banks_1_rdata;
        QData/*63:0*/ __PVT__btb_banks_3_rdata;
        SData/*8:0*/ __PVT__btb_tag_with_block_ram_1_io_waddr;
        SData/*8:0*/ __PVT__btb_tag_with_block_ram_3_io_waddr;
        SData/*8:0*/ __PVT__btb_data_with_block_ram_3_io_waddr;
        QData/*63:0*/ __PVT__btb_data_with_block_ram_3_io_rdata;
        VL_IN64(__PVT__io_ar_addr_L,63,0);
        QData/*63:0*/ __PVT__ar_addr_reg;
        VL_IN8(__PVT__clock,0,0);
        CData/*0:0*/ __PVT__btb_tag_with_block_ram_clock;
        CData/*0:0*/ __PVT__btb_tag_with_block_ram_1_clock;
        CData/*0:0*/ __PVT__btb_tag_with_block_ram_2_clock;
        CData/*0:0*/ __PVT__btb_tag_with_block_ram_3_clock;
        CData/*0:0*/ __PVT__btb_data_with_block_ram_clock;
        CData/*0:0*/ __PVT__btb_data_with_block_ram_1_clock;
        CData/*0:0*/ __PVT__btb_data_with_block_ram_2_clock;
        CData/*0:0*/ __PVT__btb_data_with_block_ram_3_clock;
        SData/*8:0*/ __PVT__btb_tag_with_block_ram_io_raddr;
        SData/*8:0*/ __PVT__btb_tag_with_block_ram_1_io_raddr;
        SData/*8:0*/ __PVT__btb_tag_with_block_ram_2_io_raddr;
        SData/*8:0*/ __PVT__btb_tag_with_block_ram_3_io_raddr;
        SData/*8:0*/ __PVT__btb_data_with_block_ram_io_raddr;
        SData/*8:0*/ __PVT__btb_data_with_block_ram_1_io_raddr;
        SData/*8:0*/ __PVT__btb_data_with_block_ram_2_io_raddr;
        SData/*8:0*/ __PVT__btb_data_with_block_ram_3_io_raddr;
        QData/*63:0*/ __Vdly__ar_addr_reg;
        VL_IN64(__PVT__io_aw_target_addr,63,0);
        QData/*63:0*/ __PVT__btb_data_with_block_ram_io_wdata;
        QData/*63:0*/ __PVT__btb_data_with_block_ram_1_io_wdata;
        QData/*63:0*/ __PVT__btb_data_with_block_ram_2_io_wdata;
        QData/*63:0*/ __PVT__btb_data_with_block_ram_3_io_wdata;
        SData/*8:0*/ __PVT__btb_data_with_block_ram_io_waddr;
        SData/*8:0*/ __PVT__btb_data_with_block_ram_1_io_waddr;
        SData/*8:0*/ __PVT__btb_data_with_block_ram_2_io_waddr;
        VL_IN8(__PVT__reset,0,0);
        CData/*0:0*/ __PVT__btb_tag_with_block_ram_reset;
        CData/*0:0*/ __PVT__btb_tag_with_block_ram_io_wen;
        CData/*7:0*/ __PVT__btb_tag_with_block_ram_io_wdata;
        CData/*0:0*/ __PVT__btb_tag_with_block_ram_1_reset;
        CData/*0:0*/ __PVT__btb_tag_with_block_ram_1_io_wen;
        CData/*7:0*/ __PVT__btb_tag_with_block_ram_1_io_wdata;
        CData/*0:0*/ __PVT__btb_tag_with_block_ram_2_reset;
    };
    struct {
        CData/*0:0*/ __PVT__btb_tag_with_block_ram_2_io_wen;
        CData/*7:0*/ __PVT__btb_tag_with_block_ram_2_io_wdata;
        CData/*0:0*/ __PVT__btb_tag_with_block_ram_3_reset;
        CData/*0:0*/ __PVT__btb_tag_with_block_ram_3_io_wen;
        CData/*7:0*/ __PVT__btb_tag_with_block_ram_3_io_wdata;
        CData/*0:0*/ __PVT__btb_data_with_block_ram_reset;
        CData/*0:0*/ __PVT__btb_data_with_block_ram_io_wen;
        CData/*0:0*/ __PVT__btb_data_with_block_ram_1_reset;
        CData/*0:0*/ __PVT__btb_data_with_block_ram_1_io_wen;
        CData/*0:0*/ __PVT__btb_data_with_block_ram_2_reset;
        CData/*0:0*/ __PVT__btb_data_with_block_ram_2_io_wen;
        CData/*0:0*/ __PVT__btb_data_with_block_ram_3_reset;
        CData/*0:0*/ __PVT__btb_data_with_block_ram_3_io_wen;
        CData/*0:0*/ __PVT___btb_banks_0_wen_T_1;
        CData/*0:0*/ __PVT___btb_banks_1_wen_T_1;
        CData/*0:0*/ __PVT___btb_banks_2_wen_T_1;
        CData/*0:0*/ __PVT___btb_banks_3_wen_T_1;
        CData/*4:0*/ __PVT___tag_banks_0_wdata_T_1;
        VL_IN8(__PVT__io_write,0,0);
        VL_IN64(__PVT__io_aw_addr,63,0);
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_BTB_banks_oneissue_with_block_ram(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_BTB_banks_oneissue_with_block_ram();
    VL_UNCOPYABLE(Vmycpu_top_BTB_banks_oneissue_with_block_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
