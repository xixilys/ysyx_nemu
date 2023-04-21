#ifndef __VERILATOR_USE_H__
#define __VERILATOR_USE_H__



#include<Vmycpu_top.h>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include <verilated_dpi.h>

#define Vtop  Vmycpu_top
#ifdef __cplusplus
extern "C" {
#endif

extern Vtop *top ;

const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

void sim_init(int argc, char **argv);
void step_and_dump_wave();
void sim_end();
void single_cycle() ;
void reset(int  n) ;
void cpu_commited_func(void);
void cpu_timer_int_get(void);
void cpu_out_int_get(void);
void set_gpr_ptr_lys(const svOpenArrayHandle r);
void set_pc_ptr(size_t r);
void set_debug_pc_ptr(size_t r);
void mem_trace_func(const svOpenArrayHandle r,size_t mem_write_state,size_t size,size_t cache);
void cpu_ebreak();

typedef struct {
  int timer;
  int out;
}int_source;
extern int_source cpu_int ;

#ifdef __cplusplus
}
#endif
#endif
