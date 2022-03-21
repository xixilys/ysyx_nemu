/*************************************************************************
	> File Name: light.cpp
	> Author: amoscykl
	> Mail: amoscykl@163.com 
	> Created Time: 2022年03月16日 星期三 00时25分07秒
 ************************************************************************/

#include<iostream>
#include<nvboard.h>
//#include<Vlight.h>
#include<Vencoder83.h>
#include<verilated.h>
#include<verilated_vcd_c.h>
using namespace std;


//static Vlight *light = new Vlight;
//static Vm_mux12 * mux12 = new Vm_mux12;
void nvboard_bind_all_pins(Vencoder83 *top);
const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
VerilatedVcdC* tfp = NULL;
double sc_time_stamp() {return 0;}

template <class T>
void step_and_dump_wave(T *top){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}
template<class T>
void sim_init(T * top) {
	tfp = new VerilatedVcdC;
	contextp->debug(0);
	contextp->randReset(2);
	contextp->traceEverOn(true);
	top->trace(tfp, 0);
	tfp->open("dump.vcd");	
}


int main(int argc,char ** argv,char** env) {
	if(false && argc && argv && env) {}
	Verilated::mkdir("logs");
    Vencoder83 * top = new Vencoder83;
	//sim_init(bcd7seg);
	nvboard_bind_all_pins(top);
	nvboard_init();
	//step_and_dump_wave(bcd7seg);
	int en,y; 
	int x1,x2,x3,x4,out;
	int i = 10;
	while(1){
		en = top->en;
		x1 = top->x;
		y = top->y;
		out =  top->out;
		cout<<"en = "<<en<< " x = "<<x1<<" y = "<<y<<"out = "<<out<<endl;
		top->eval();
	//step_and_dump_wave(bcd7seg);	
		nvboard_update();	
	}

	nvboard_update();

	tfp->close();

}


