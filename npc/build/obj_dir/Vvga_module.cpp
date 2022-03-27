// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvga_module.h"
#include "Vvga_module__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vvga_module::Vvga_module(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vvga_module__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
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
    , rootp{&(vlSymsp->TOP)}
{
}

Vvga_module::Vvga_module(const char* _vcname__)
    : Vvga_module(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vvga_module::~Vvga_module() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vvga_module___024root___eval_initial(Vvga_module___024root* vlSelf);
void Vvga_module___024root___eval_settle(Vvga_module___024root* vlSelf);
void Vvga_module___024root___eval(Vvga_module___024root* vlSelf);
QData Vvga_module___024root___change_request(Vvga_module___024root* vlSelf);
#ifdef VL_DEBUG
void Vvga_module___024root___eval_debug_assertions(Vvga_module___024root* vlSelf);
#endif  // VL_DEBUG
void Vvga_module___024root___final(Vvga_module___024root* vlSelf);

static void _eval_initial_loop(Vvga_module__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vvga_module___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vvga_module___024root___eval_settle(&(vlSymsp->TOP));
        Vvga_module___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vvga_module___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/npc/vsrc/vga_module.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vvga_module___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vvga_module::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvga_module::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvga_module___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vvga_module___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vvga_module___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/npc/vsrc/vga_module.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vvga_module___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vvga_module::final() {
    Vvga_module___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vvga_module::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vvga_module::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vvga_module___024root__traceInitTop(Vvga_module___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vvga_module___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvga_module___024root*>(voidSelf);
    Vvga_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vvga_module___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vvga_module___024root__traceRegister(Vvga_module___024root* vlSelf, VerilatedVcd* tracep);

void Vvga_module::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vvga_module___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
