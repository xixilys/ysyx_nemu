/*************************************************************************
	> File Name: light.cpp
	> Author: amoscykl
	> Mail: amoscykl@163.com 
	> Created Time: 2022年03月16日 星期三 00时25分07秒
 ************************************************************************/

#include<iostream>
#include<nvboard.h>
//#include<Vlight.h>
#include<Vmux2bit41.h>
#include<verilated.h>
#include<verilated_vcd_c.h>
using namespace std;

VerilatedVcdC * tfp = NULL;

//static Vlight *light = new Vlight;
//static Vm_mux12 * mux12 = new Vm_mux12;
void nvboard_bind_all_pins(Vmux2bit41 *top);
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
    Vmux2bit41 * mux41 = new Vmux2bit41;
//Veril:ated::traceEverOn(true);
	//	contextp->traceEverOn(true);
	mux41->trace(tfp,99);
	tfp->open("dump.vcd");
	nvboard_bind_all_pins(mux41);
	nvboard_init();
	mux41->y = 0;
	mux41->x[0]=0;
	mux41->x[1]=1;
	mux41->x[2]=2;
	mux41->x[3]=3;
	step_and_dump_wave(mux41);
//	reset(10);
	int a,b,s,y,f; 
	int x1,x2,x3,x4;
	y = mux41->f;
	s = mux41->y;
	mux41->y = 0;
	int i = 10;
	while(i>=0) {
	//	mux41->x[0] = 0;
	//	mux41->x[1] = 1;
	//	mux41->x[2] = 2;
	//	mux41->x[3] = 3;
	//	mux41-> y   = y+1;
		x1 = mux41->x[0];
		x2 = mux41->x[1];
		x3 = mux41->x[2];
		x4 = mux41->x[3];
		y  = mux41->y;
		f = mux41->f;
		cout<<"y is "<<y<<" x1 = "<<x1<<" x2 = "<<x2<<" x3 = "<<x3<<" x4 = "<<x4<<endl;
		cout<<"f = "<<f<<endl;
		step_and_dump_wave(mux41);
		nvboard_update();

	//	single_cycle();
	}
	tfp->close();

}


