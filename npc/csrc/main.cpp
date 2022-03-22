/*************************************************************************
	> File Name: light.cpp
	> Author: amoscykl
	> Mail: amoscykl@163.com 
	> Created Time: 2022年03月16日 星期三 00时25分07秒
 ************************************************************************/

#include<iostream>
#include<nvboard.h>
//#include<Vlight.h>
#include<Vfourbitalu.h>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include<bitset>
using namespace std;


//static Vlight *light = new Vlight;
//static Vm_mux12 * mux12 = new Vm_mux12;
void nvboard_bind_all_pins(Vfourbitalu *top);
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
    Vfourbitalu * top = new Vfourbitalu;
//	sim_init(top);
	nvboard_bind_all_pins(top);
	nvboard_init();
//	step_and_dump_wave(top);
	int en,y;
	int x1,x2,x3,x4,out;
	int a,b,c,s,_c;
	int i = 10;
	while(1){
		x1 = top->a;
		x2 = top->b;
		x3 = top->out;
		x4 = top->carry_flag;
		s  = top->x;
		out = top->overflower;
		cout<<"a = "<<bitset<8>(x1)<<" b = "<<bitset<8>(x2)<<"x = "<<s <<" out = "<<bitset<8>(x3)<<"carry = "<<x4<<"overflower = "<<out<<endl;
	top->eval();
		
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


