// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_mycpu_top.h"

VL_INLINE_OPT void Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__0(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__0\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_port_bvalid = vlSelf->axi_mem_port_1_bvalid;
    vlSelf->__PVT__u_riscv_cpu_ext_int = vlSelf->ext_int;
    vlSelf->__PVT__data_cache_io_port_rlast = vlSelf->axi_mem_port_1_rlast;
    vlSelf->__PVT__data_cache_io_port_wready = vlSelf->axi_mem_port_1_wready;
    vlSelf->__PVT__data_cache_io_port_awready = vlSelf->axi_mem_port_1_awready;
    vlSelf->__PVT__data_cache_io_port_arready = vlSelf->axi_mem_port_1_arready;
    vlSelf->__PVT__inst_cache_io_port_arready = vlSelf->axi_mem_port_0_arready;
    vlSelf->__PVT__inst_cache_io_port_rlast = vlSelf->axi_mem_port_0_rlast;
    vlSelf->__PVT__data_cache_io_port_rdata = vlSelf->axi_mem_port_1_rdata;
    vlSelf->__PVT__inst_cache_io_port_rvalid = vlSelf->axi_mem_port_0_rvalid;
    vlSelf->__PVT__data_cache_io_port_rvalid = vlSelf->axi_mem_port_1_rvalid;
    vlSelf->__PVT__inst_cache_clock = vlSelf->aclk;
    vlSelf->__PVT__u_riscv_cpu_clk = vlSelf->aclk;
    vlSelf->__PVT__data_cache_clock = vlSelf->aclk;
    vlSelf->__PVT__inst_cache_reset = (1U & (~ (IData)(vlSelf->aresetn)));
    vlSelf->__PVT__data_cache_reset = (1U & (~ (IData)(vlSelf->aresetn)));
    vlSelf->__PVT__u_riscv_cpu_resetn = vlSelf->aresetn;
    vlSelf->__PVT__inst_cache_io_port_rdata = vlSelf->axi_mem_port_0_rdata;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_bvalid 
        = vlSelf->__PVT__data_cache_io_port_bvalid;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ext_int 
        = vlSelf->__PVT__u_riscv_cpu_ext_int;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rlast 
        = vlSelf->__PVT__data_cache_io_port_rlast;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_wready 
        = vlSelf->__PVT__data_cache_io_port_wready;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awready 
        = vlSelf->__PVT__data_cache_io_port_awready;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_arready 
        = vlSelf->__PVT__data_cache_io_port_arready;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_arready 
        = vlSelf->__PVT__inst_cache_io_port_arready;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rlast 
        = vlSelf->__PVT__inst_cache_io_port_rlast;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rdata 
        = vlSelf->__PVT__data_cache_io_port_rdata;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rvalid 
        = vlSelf->__PVT__inst_cache_io_port_rvalid;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_rvalid 
        = vlSelf->__PVT__data_cache_io_port_rvalid;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__clock 
        = vlSelf->__PVT__inst_cache_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__clk 
        = vlSelf->__PVT__u_riscv_cpu_clk;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__clock 
        = vlSelf->__PVT__data_cache_clock;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__reset 
        = vlSelf->__PVT__inst_cache_reset;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__reset 
        = vlSelf->__PVT__data_cache_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn 
        = vlSelf->__PVT__u_riscv_cpu_resetn;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_port_rdata 
        = vlSelf->__PVT__inst_cache_io_port_rdata;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__1(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__1\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_stage2_stall = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_stage2_stall;
    vlSelf->__PVT__inst_cache_io_stage2_stall = vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage2_stall;
    vlSelf->__PVT__u_riscv_cpu_data_stage2_stall = vlSelf->__PVT__data_cache_io_stage2_stall;
    vlSelf->__PVT__u_riscv_cpu_stage2_stall = vlSelf->__PVT__inst_cache_io_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_stage2_stall 
        = vlSelf->__PVT__u_riscv_cpu_data_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall 
        = vlSelf->__PVT__u_riscv_cpu_stage2_stall;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__2(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__2\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_inst_sram_en = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_en;
    vlSelf->__PVT__inst_cache_io_sram_req = vlSelf->__PVT__u_riscv_cpu_inst_sram_en;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_req 
        = vlSelf->__PVT__inst_cache_io_sram_req;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__3(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__3\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_stage1_valid_flush = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage1_valid_flush;
    vlSelf->__PVT__u_riscv_cpu_inst_sram_addr = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_addr;
    vlSelf->__PVT__u_riscv_cpu_inst_cache = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_cache;
    vlSelf->__PVT__u_riscv_cpu_inst_ready_to_use = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_ready_to_use;
    vlSelf->__PVT__inst_cache_io_stage1_valid_flush 
        = vlSelf->__PVT__u_riscv_cpu_stage1_valid_flush;
    vlSelf->__PVT__inst_cache_io_sram_addr = vlSelf->__PVT__u_riscv_cpu_inst_sram_addr;
    vlSelf->__PVT__inst_cache_io_sram_cache = vlSelf->__PVT__u_riscv_cpu_inst_cache;
    vlSelf->__PVT__inst_cache_io_inst_ready_to_use 
        = vlSelf->__PVT__u_riscv_cpu_inst_ready_to_use;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage1_valid_flush 
        = vlSelf->__PVT__inst_cache_io_stage1_valid_flush;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_addr 
        = vlSelf->__PVT__inst_cache_io_sram_addr;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_sram_cache 
        = vlSelf->__PVT__inst_cache_io_sram_cache;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_inst_ready_to_use 
        = vlSelf->__PVT__inst_cache_io_inst_ready_to_use;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___ico_sequent__TOP__mycpu_top__4\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_sram_en = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_en;
    vlSelf->__PVT__u_riscv_cpu_stage2_flush = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_flush;
    vlSelf->__PVT__data_cache_io_sram_req = vlSelf->__PVT__u_riscv_cpu_data_sram_en;
    vlSelf->__PVT__inst_cache_io_stage2_flush = vlSelf->__PVT__u_riscv_cpu_stage2_flush;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_req 
        = vlSelf->__PVT__data_cache_io_sram_req;
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage2_flush 
        = vlSelf->__PVT__inst_cache_io_stage2_flush;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__1(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__1\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_inst_buffer_full 
        = vlSelf->__PVT__inst_cache_io_inst_buffer_full;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__1(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__1\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_rdata 
        = vlSelf->__PVT__u_riscv_cpu_data_sram_rdata;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__2(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__2\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_sram_cache = vlSelf->__PVT__u_riscv_cpu_data_cache;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra 
        = (7U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE, 0U, 3U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_42 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_28, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulhsu_answer
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulw_answer 
        = VL_CONCAT_QII(64,32,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___mulw_answer_T_33, 
                        VL_SEL_IWII(128, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulu_answer, 0U, 0x20U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remuw_answer_T_35 
        = VL_CONCAT_III(32,1,31, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remuw_answer_T_2, 0x1fU)), 
                        VL_CONCAT_III(31,1,30, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remuw_answer_T_2, 0x1fU)), 
                                      VL_CONCAT_III(30,1,29, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remuw_answer_T_2, 0x1fU)), 
                                                    VL_CONCAT_III(29,1,28, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                  VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__remuw_answer_lo_lo), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__remuw_answer_lo))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_38 
        = VL_CONCAT_III(32,1,31, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                        VL_CONCAT_III(31,1,30, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                      VL_CONCAT_III(30,1,29, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                    VL_CONCAT_III(29,1,28, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                                  VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__remw_answer_lo_lo), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__remw_answer_lo))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___GEN_12 
        = VL_EXTEND_QQ(64,33, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_32);
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__3(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__3\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_cache 
        = vlSelf->__PVT__data_cache_io_sram_cache;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_27 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xffU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_23 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xfU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_80 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_15 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 3U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_39 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_21, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__mulw_answer
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__remuw_answer 
        = VL_CONCAT_QII(64,32,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remuw_answer_T_35, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remuw_answer_T_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__remw_answer 
        = VL_CONCAT_QII(64,32,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_38, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___remw_answer_T_5);
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__3(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__3\n"); );
    // Body
    vlSelf->debug_wb_rf_wnum = vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wnum;
    vlSelf->debug_wb_rf_wdata = VL_SEL_IQII(64, vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wdata, 0U, 0x20U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BHT_banks_oneissue_io_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__5(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__5\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_rdata_L 
        = vlSelf->__PVT__u_riscv_cpu_inst_sram_rdata_L;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__4\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_p_addr_for_tlb 
        = vlSelf->__PVT__inst_cache_io_p_addr_for_tlb;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__6(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__6\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_wr 
        = vlSelf->__PVT__data_cache_io_sram_wr;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__7(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__7\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_write_en 
        = vlSelf->__PVT__u_riscv_cpu_inst_write_en;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__11(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__11\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_req 
        = vlSelf->__PVT__data_cache_io_sram_req;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__12(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__12\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_stage2_stall = vlSelf->__PVT__inst_cache_io_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall 
        = vlSelf->__PVT__u_riscv_cpu_stage2_stall;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__13(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__13\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage1_valid_flush 
        = vlSelf->__PVT__inst_cache_io_stage1_valid_flush;
}
