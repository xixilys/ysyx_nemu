#ifndef __VERILATOR_USE_H__
#define __VERILATOR_USE_H__


#include<Vmycpu_top.h>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include <verilated_dpi.h>

#define Vtop Vmycpu_top
#ifdef __cplusplus
extern "C" {
#endif

extern Vtop *top ;

const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

void sim_init();
void step_and_dump_wave();
void sim_end();
void single_cycle() ;
void reset(int n) ;
void cpu_commited_func(void);
void set_gpr_ptr(const svOpenArrayHandle r);
void set_pc_ptr(size_t r);
void mem_trace_func(size_t mem_write_state,size_t addr,size_t data,size_t pc ,size_t size);
void cpu_ebreak();
#ifdef __cplusplus
}
#endif
#endif
