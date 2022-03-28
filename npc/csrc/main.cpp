/*************************************************************************
	> File Name: light.cpp
	> Author: amoscykl
	> Mail: amoscykl@163.com 
	> Created Time: 2022年03月16日 星期三 00时25分07秒
 ************************************************************************/
#define Vtop Vcommand_line_test

#include<iostream>
#include<nvboard.h>
//#include<Vlight.h>
#include<Vcommand_line_test.h>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include<bitset>
using namespace std;


//static Vlight *light = new Vlight;
//static Vm_mux12 * mux12 = new Vm_mux12;
void nvboard_bind_all_pins(Vtop *top);
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
template<class T>
void single_cycle(T * top) {
	top->clk = 0; top->eval();
	top->clk = 1; top->eval();
}

template<class T>
void reset(T *top , int n) {
	top->rst = 1;
	while(n -- > 0) single_cycle(top);
	top->rst = 0;
}

int main(int argc,char ** argv,char** env) {
	if(false && argc && argv && env) {}
	Verilated::mkdir("logs");
    Vtop * top = new Vtop;
	sim_init(top);
	nvboard_bind_all_pins(top);
	nvboard_init();
	reset(top,10);
	step_and_dump_wave(top);
	int en,y;
	int x1,x2,x3,x4,out;
	int a,b,c,s,_c;
	int i = 10;
	while(1){
		x1 = top->clk;
		x2 = top->rst;
		//a  = top->led;
		//b  = top->	keyboard_data;
		//cout<<"a = "<<bitset<8>(x1)<<" b = "<<bitset<8>(x2)<<"x = "<<s <<" out = "<<bitset<8>(x3)<<"carry = "<<x4<<"overflower = "<<out<<endl;
//	top->eval();
	//cout<<"rst  =  "<< x2<<" clk ="<< x1 <<" data "<<hex<<b<< " led "<<a<<endl;
 	single_cycle(top);
	
	/*	if(top->clk == 1) 
			top->clk = 0;
		else top->clk = 1;*/

	step_and_dump_wave(top);

		nvboard_update();
		//en = top->en;
		//x1 = top->x;
		//y = top->y;
		//out =  top->out;
//	step_and_dump_wave(top);	
	/*top->a=0;top->b=0;top->c=0;step_and_dump_wave(top);	
	top->a=0;top->b=0;top->c=1;step_and_dump_wave(top);	
	top->a=0;top->b=1;top->c=0;step_and_dump_wave(top);	
	top->a=0;top->b=1;top->c=1;step_and_dump_wave(top);	
	top->a=1;top->b=1;top->c=0;step_and_dump_wave(top);	
	top->a=1;top->b=1;top->c=1;step_and_dump_wave(top);	
	top->a=1;top->b=0;top->c=0;step_and_dump_wave(top);	
	//top->a=1;top->b=0;top->c=1;step_and_dump_wave(top);	*/
   }


	tfp->close();

}


