// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_BHT_banks_oneissue.h"
#include "Vmycpu_top__Syms.h"

void Vmycpu_top_BHT_banks_oneissue___ctor_var_reset(Vmycpu_top_BHT_banks_oneissue* vlSelf);

Vmycpu_top_BHT_banks_oneissue::Vmycpu_top_BHT_banks_oneissue(Vmycpu_top__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmycpu_top_BHT_banks_oneissue___ctor_var_reset(this);
}

void Vmycpu_top_BHT_banks_oneissue::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmycpu_top_BHT_banks_oneissue::~Vmycpu_top_BHT_banks_oneissue() {
}