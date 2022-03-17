/*************************************************************************
	> File Name: light.cpp
	> Author: amoscykl
	> Mail: amoscykl@163.com 
	> Created Time: 2022年03月16日 星期三 00时25分07秒
 ************************************************************************/

#include<iostream>
#include<nvboard.h>
//#include<Vlight.h>
#include<Vm_mux12.h>
#include<verilated.h>
#include<verilated_vcd_c.h>
using namespace std;

VerilatedVcdC * tfp = NULL;

//static Vlight *light = new Vlight;
//static Vm_mux12 * mux12 = new Vm_mux12;
void nvboard_bind_all_pins(Vm_mux12 *top);
const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
double sc_time_stamp() {return 0;}


/*void single_cycle(){
	light->clk = 1;
	light->eval();
	light->clk = 0;
	light->eval();
}
void reset(int n) {
	light->rst = 1;
	while(n --> 0) single_cycle();
	light->rst = 0;
}*/
template <class T>
void step_and_dump_wave(T *top){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

int main(int argc,char ** argv,char** env) {
	if(false && argc && argv && env) {}
	Verilated::mkdir("logs");
	contextp->debug(0);
	contextp->randReset(2);
	contextp->traceEverOn(true);
	tfp = new VerilatedVcdC;
    Vm_mux12 * mux12 = new Vm_mux12;
//Veril:ated::traceEverOn(true);
	//	contextp->traceEverOn(true);
	mux12->trace(tfp,99);
	tfp->open("dump.vcd");
	nvboard_bind_all_pins(mux12);
	nvboard_init();

//	reset(10);
	mux12->s=0;mux12-> a = 0;mux12->b=0; step_and_dump_wave(mux12);
	        cout<<"a="<<mux12->a<<" b="<<mux12->b<<" s="<<mux12->s<<"and y="<<mux12->y<<endl;
			mux12->a=0;mux12->b=1;step_and_dump_wave(mux12);
			mux12->a=1;mux12->b=1;step_and_dump_wave(mux12);
			mux12->a=1;mux12->b=0;step_and_dump_wave(mux12);
	mux12->s=1;
			mux12->a=0;mux12->b=0;step_and_dump_wave(mux12);
			mux12->a=0;mux12->b=1;step_and_dump_wave(mux12);
			mux12->a=1;mux12->b=1;step_and_dump_wave(mux12);
			mux12->a=1;mux12->b=0;step_and_dump_wave(mux12);
			tfp->close();
/*	while(1) {
		cout<<"count is adding "<<endl;
		nvboard_update();

		single_cycle();
	}
*/
}


