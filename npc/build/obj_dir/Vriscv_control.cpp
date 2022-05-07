// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vriscv_control.h"
#include "Vriscv_control__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vriscv_control::Vriscv_control(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vriscv_control__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_mem_instrution{vlSymsp->TOP.io_mem_instrution}
    , io_pc{vlSymsp->TOP.io_pc}
    , io_riscv_instruction{vlSymsp->TOP.io_riscv_instruction}
    , io_answer{vlSymsp->TOP.io_answer}
    , io_src1{vlSymsp->TOP.io_src1}
    , io_src2{vlSymsp->TOP.io_src2}
    , io_dest{vlSymsp->TOP.io_dest}
    , io_inscode{vlSymsp->TOP.io_inscode}
    , io_instype{vlSymsp->TOP.io_instype}
    , io_trap_flag{vlSymsp->TOP.io_trap_flag}
    , rootp{&(vlSymsp->TOP)}
{
}

Vriscv_control::Vriscv_control(const char* _vcname__)
    : Vriscv_control(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vriscv_control::~Vriscv_control() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vriscv_control___024root___eval_initial(Vriscv_control___024root* vlSelf);
void Vriscv_control___024root___eval_settle(Vriscv_control___024root* vlSelf);
void Vriscv_control___024root___eval(Vriscv_control___024root* vlSelf);
QData Vriscv_control___024root___change_request(Vriscv_control___024root* vlSelf);
#ifdef VL_DEBUG
void Vriscv_control___024root___eval_debug_assertions(Vriscv_control___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscv_control___024root___final(Vriscv_control___024root* vlSelf);

static void _eval_initial_loop(Vriscv_control__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vriscv_control___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vriscv_control___024root___eval_settle(&(vlSymsp->TOP));
        Vriscv_control___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vriscv_control___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/npc/vsrc/digital_experiment/riscv_control.v", 871, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vriscv_control___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vriscv_control::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_control::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vriscv_control___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vriscv_control___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vriscv_control___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/npc/vsrc/digital_experiment/riscv_control.v", 871, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vriscv_control___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vriscv_control::final() {
    Vriscv_control___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vriscv_control::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vriscv_control::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vriscv_control___024root__traceInitTop(Vriscv_control___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_control___024root*>(voidSelf);
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vriscv_control___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vriscv_control___024root__traceRegister(Vriscv_control___024root* vlSelf, VerilatedVcd* tracep);

void Vriscv_control::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vriscv_control___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
