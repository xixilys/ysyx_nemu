// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_data_ram_one_port_with_latency_16.h"

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___combo__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___combo__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_4_out))));
}
