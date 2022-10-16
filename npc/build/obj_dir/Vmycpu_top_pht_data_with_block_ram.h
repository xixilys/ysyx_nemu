// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_PHT_DATA_WITH_BLOCK_RAM_H_
#define VERILATED_VMYCPU_TOP_PHT_DATA_WITH_BLOCK_RAM_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;
class Vmycpu_top_data_ram_simple_two_ports;


class Vmycpu_top_pht_data_with_block_ram final : public VerilatedModule {
  public:
    // CELLS
    Vmycpu_top_data_ram_simple_two_ports* __PVT__btb_data_ram_0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__io_waddr,4,0);
    CData/*4:0*/ __PVT__btb_data_ram_0_io_addra;
    VL_IN8(__PVT__clock,0,0);
    CData/*0:0*/ __PVT__btb_data_ram_0_clock;
    VL_IN8(__PVT__io_raddr,4,0);
    CData/*4:0*/ __PVT__btb_data_ram_0_io_addrb;
    VL_IN8(__PVT__io_wen,0,0);
    CData/*0:0*/ __PVT__btb_data_ram_0_io_wea;
    VL_OUT8(__PVT__io_rdata,7,0);
    CData/*7:0*/ __PVT__btb_data_ram_0_io_doutb;
    VL_IN8(__PVT__reset,0,0);
    CData/*0:0*/ __PVT__btb_data_ram_0_reset;
    VL_IN8(__PVT__io_wdata,7,0);
    CData/*7:0*/ __PVT__btb_data_ram_0_io_dina;

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_pht_data_with_block_ram(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_pht_data_with_block_ram();
    VL_UNCOPYABLE(Vmycpu_top_pht_data_with_block_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
