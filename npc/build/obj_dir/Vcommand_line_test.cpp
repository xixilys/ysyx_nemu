// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcommand_line_test.h"
#include "Vcommand_line_test__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcommand_line_test::Vcommand_line_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcommand_line_test__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , ps2_clk{vlSymsp->TOP.ps2_clk}
    , ps2_data{vlSymsp->TOP.ps2_data}
    , vga_vs{vlSymsp->TOP.vga_vs}
    , vga_hs{vlSymsp->TOP.vga_hs}
    , vga_clk{vlSymsp->TOP.vga_clk}
    , vga_blank_n{vlSymsp->TOP.vga_blank_n}
    , vga_sync_n{vlSymsp->TOP.vga_sync_n}
    , vga_r{vlSymsp->TOP.vga_r}
    , vga_g{vlSymsp->TOP.vga_g}
    , vga_b{vlSymsp->TOP.vga_b}
    , addr_h{vlSymsp->TOP.addr_h}
    , addr_v{vlSymsp->TOP.addr_v}
    , led{vlSymsp->TOP.led}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcommand_line_test::Vcommand_line_test(const char* _vcname__)
    : Vcommand_line_test(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcommand_line_test::~Vcommand_line_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcommand_line_test___024root___eval_initial(Vcommand_line_test___024root* vlSelf);
void Vcommand_line_test___024root___eval_settle(Vcommand_line_test___024root* vlSelf);
void Vcommand_line_test___024root___eval(Vcommand_line_test___024root* vlSelf);
QData Vcommand_line_test___024root___change_request(Vcommand_line_test___024root* vlSelf);
#ifdef VL_DEBUG
void Vcommand_line_test___024root___eval_debug_assertions(Vcommand_line_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vcommand_line_test___024root___final(Vcommand_line_test___024root* vlSelf);

static void _eval_initial_loop(Vcommand_line_test__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcommand_line_test___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcommand_line_test___024root___eval_settle(&(vlSymsp->TOP));
        Vcommand_line_test___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcommand_line_test___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/npc/vsrc/command_line_test.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcommand_line_test___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcommand_line_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcommand_line_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcommand_line_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcommand_line_test___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcommand_line_test___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/npc/vsrc/command_line_test.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcommand_line_test___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vcommand_line_test::final() {
    Vcommand_line_test___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vcommand_line_test::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcommand_line_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vcommand_line_test___024root__traceInitTop(Vcommand_line_test___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcommand_line_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcommand_line_test___024root*>(voidSelf);
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vcommand_line_test___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vcommand_line_test___024root__traceRegister(Vcommand_line_test___024root* vlSelf, VerilatedVcd* tracep);

void Vcommand_line_test::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vcommand_line_test___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
