/*************************************************************************
	> File Name: light.cpp
	> Author: amoscykl
	> Mail: amoscykl@163.com 
	> Created Time: 2022年03月16日 星期三 00时25分07秒
 ************************************************************************/

#include<iostream>
#include<nvboard.h>
#include<Vlight.h>
#include<verilated.h>

using namespace std;

static Vlight *light = new Vlight;
void nvboard_bind_all_pins(Vlight *top);
double sc_time_stamp() {return 0;}
void single_cycle(){
	light->clk = 1;
	light->eval();
	light->clk = 0;
	light->eval();
}

void reset(int n) {
	light->rst = 1;
	while(n --> 0) single_cycle();
	light->rst = 0;
}

int main(int argc,char ** argv,char** env) {
	if(false && argc && argv && env) {}
	Verilated::mkdir("logs");
	nvboard_bind_all_pins(light);
	nvboard_init();
	reset(10);
	while(1) {
		nvboard_update();
		single_cycle();
	}

}


