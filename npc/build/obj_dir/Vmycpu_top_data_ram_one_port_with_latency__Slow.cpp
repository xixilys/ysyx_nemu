// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_data_ram_one_port_with_latency.h"

void Vmycpu_top_data_ram_one_port_with_latency___ctor_var_reset(Vmycpu_top_data_ram_one_port_with_latency* vlSelf);

Vmycpu_top_data_ram_one_port_with_latency::Vmycpu_top_data_ram_one_port_with_latency(Vmycpu_top__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmycpu_top_data_ram_one_port_with_latency___ctor_var_reset(this);
}

void Vmycpu_top_data_ram_one_port_with_latency::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmycpu_top_data_ram_one_port_with_latency::~Vmycpu_top_data_ram_one_port_with_latency() {
}
