#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
#endif

#include <verilator_use.h>
#include <iostream>

#include<Vmycpu_top.h>
#include<verilated.h>
#include<verilated_fst_c.h>


#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic pop
#endif

using namespace std;
#define open_dump 0

Vtop *top = new Vtop;
VerilatedFstC* tfp = NULL;
extern "C" void flash_init(char *img);

void sim_init(int argc, char **argv) {	
	contextp->debug(0);
	contextp->randReset(2);
	contextp->traceEverOn(true);
	Verilated::mkdir("logs");
	Verilated::traceEverOn(true);
	Verilated::commandArgs(argc,argv);
	tfp = new VerilatedFstC;
	top->trace(tfp, 0);
	#if(open_dump) 
	tfp->open("dump_difftest.fst");	
	#endif
	//soc test only
	// /home/ddddddd/my_learn/cpu_relative/ysyxSoC_test/ysyx/program/bin/flash/memtest-flash.bin
	// flash_init("/home/ddddddd/my_learn/cpu_relative/ysyxSoC_test/ysyx/program/bin/loader/rtthread-loader.bin");
	flash_init("/home/ddddddd/my_learn/cpu_relative/ysyx4_soc/ysyx/prog/bin/mem/rtthread-mem.bin");
}
extern uint64_t g_nr_guest_inst;
void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	#if(open_dump) 
	// if(g_nr_guest_inst > 44000 ){
		tfp->dump(contextp->time());
	// }
	
	
	#endif
}

void single_cycle() {
	top->clock = 0; step_and_dump_wave();
	top->clock = 1; step_and_dump_wave();
}

void reset(int n) {
	top->reset = 0;
	while(n -- > 0) single_cycle();
	top->reset = 1;
}

void sim_end(){
	tfp->close();
}
