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

Vtop *top = new Vtop;
VerilatedFstC* tfp = NULL;
extern "C" void sim_init() {	
	contextp->debug(0);
	contextp->randReset(2);
	contextp->traceEverOn(true);
	Verilated::mkdir("logs");
	Verilated::traceEverOn(true);
	tfp = new VerilatedFstC;
	top->trace(tfp, 0);
	// printf("sbsbsbsbssbsb\n");
	tfp->open("dump.fst");	
	// printf("sbsbsb\n");
}
extern "C" void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

extern "C" void single_cycle() {
	// printf(contextp->time)
	// cout << contextp->time() << endl;
	top->aclk = 1; step_and_dump_wave();
	top->aclk = 0; step_and_dump_wave();
}
extern "C" void reset(int n) {
	top->aresetn = 0;
	while(n -- > 0) single_cycle();
	top->aresetn = 1;
}

extern "C" void sim_end(){
	tfp->close();
}