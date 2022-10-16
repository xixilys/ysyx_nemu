// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_ICACHE_DATA_H_
#define VERILATED_VMYCPU_TOP_ICACHE_DATA_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;
class Vmycpu_top_data_ram_one_port_with_latency;


class Vmycpu_top_icache_data final : public VerilatedModule {
  public:
    // CELLS
    Vmycpu_top_data_ram_one_port_with_latency* __PVT__icache_data_ram_0;

    // DESIGN SPECIFIC STATE
    CData/*6:0*/ __PVT__icache_data_ram_0_io_addra;
    VL_IN64(__PVT__io_addr,63,0);
    VL_IN64(__PVT__io_wdata,39,0);
    QData/*39:0*/ __PVT__icache_data_ram_0_io_dina;
    VL_IN8(__PVT__reset,0,0);
    CData/*0:0*/ __PVT__icache_data_ram_0_reset;
    VL_IN8(__PVT__io_wen,4,0);
    CData/*4:0*/ __PVT__icache_data_ram_0_io_wea;
    VL_IN8(__PVT__clock,0,0);
    CData/*0:0*/ __PVT__icache_data_ram_0_clock;
    VL_OUT64(__PVT__io_rdata,39,0);
    QData/*39:0*/ __PVT__icache_data_ram_0_io_douta;

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_icache_data(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_icache_data();
    VL_UNCOPYABLE(Vmycpu_top_icache_data);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
