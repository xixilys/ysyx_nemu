// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_DATA_RAM_ONE_PORT_WITH_LATENCY_H_
#define VERILATED_VMYCPU_TOP_DATA_RAM_ONE_PORT_WITH_LATENCY_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;
class Vmycpu_top_Look_up_table_read_first___05F40;


class Vmycpu_top_data_ram_one_port_with_latency final : public VerilatedModule {
  public:
    // CELLS
    Vmycpu_top_Look_up_table_read_first___05F40* __PVT__Look_up_table_read_first_;
    Vmycpu_top_Look_up_table_read_first___05F40* __PVT__Look_up_table_read_first___05F1;
    Vmycpu_top_Look_up_table_read_first___05F40* __PVT__Look_up_table_read_first___05F2;
    Vmycpu_top_Look_up_table_read_first___05F40* __PVT__Look_up_table_read_first___05F3;
    Vmycpu_top_Look_up_table_read_first___05F40* __PVT__Look_up_table_read_first___05F4;

    // DESIGN SPECIFIC STATE
    CData/*6:0*/ __PVT__Look_up_table_read_first___05Fio_aw_addr;
    CData/*6:0*/ __PVT__Look_up_table_read_first___05F1_io_aw_addr;
    CData/*6:0*/ __PVT__Look_up_table_read_first___05F4_io_aw_addr;
    CData/*6:0*/ __PVT__Look_up_table_read_first___05F3_io_aw_addr;
    CData/*6:0*/ __PVT__Look_up_table_read_first___05F2_io_aw_addr;
    VL_IN8(__PVT__io_addra,6,0);
    CData/*7:0*/ __PVT__Look_up_table_read_first___05F3_io_out;
    CData/*7:0*/ __PVT__Look_up_table_read_first___05F2_io_out;
    CData/*7:0*/ __PVT__Look_up_table_read_first___05F4_io_out;
    CData/*7:0*/ __PVT__table_4_out;
    CData/*7:0*/ __PVT__table_2_out;
    CData/*7:0*/ __PVT__table_3_out;
    CData/*6:0*/ __PVT__Look_up_table_read_first___05F3_io_ar_addr;
    CData/*6:0*/ __PVT__Look_up_table_read_first___05F2_io_ar_addr;
    CData/*6:0*/ __PVT__Look_up_table_read_first___05F4_io_ar_addr;
    CData/*6:0*/ __PVT__Look_up_table_read_first___05F1_io_ar_addr;
    CData/*6:0*/ __PVT__Look_up_table_read_first___05Fio_ar_addr;
    CData/*7:0*/ __PVT__Look_up_table_read_first___05F1_io_out;
    CData/*7:0*/ __PVT__table_1_out;
    CData/*7:0*/ __PVT__table_0_out;
    CData/*7:0*/ __PVT__Look_up_table_read_first___05Fio_out;
    VL_IN64(__PVT__io_dina,39,0);
    VL_IN8(__PVT__reset,0,0);
    CData/*0:0*/ __PVT__Look_up_table_read_first___05Freset;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05Fio_write;
    CData/*7:0*/ __PVT__Look_up_table_read_first___05Fio_in;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05F1_reset;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05F1_io_write;
    CData/*7:0*/ __PVT__Look_up_table_read_first___05F1_io_in;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05F2_reset;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05F2_io_write;
    CData/*7:0*/ __PVT__Look_up_table_read_first___05F2_io_in;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05F3_reset;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05F3_io_write;
    CData/*7:0*/ __PVT__Look_up_table_read_first___05F3_io_in;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05F4_reset;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05F4_io_write;
    CData/*7:0*/ __PVT__Look_up_table_read_first___05F4_io_in;
    VL_IN8(__PVT__io_wea,4,0);
    CData/*0:0*/ __PVT__Look_up_table_read_first___05Fclock;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05F1_clock;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05F2_clock;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05F3_clock;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05F4_clock;
    VL_IN8(__PVT__clock,0,0);
    VL_OUT64(__PVT__io_douta,39,0);
    QData/*39:0*/ __PVT__io_douta_REG;
    QData/*39:0*/ __Vdly__io_douta_REG;
    SData/*15:0*/ __PVT__io_douta_lo;
    IData/*23:0*/ __PVT__io_douta_hi;

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_data_ram_one_port_with_latency(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_data_ram_one_port_with_latency();
    VL_UNCOPYABLE(Vmycpu_top_data_ram_one_port_with_latency);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
