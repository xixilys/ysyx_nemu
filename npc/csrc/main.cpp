/*************************************************************************
	> File Name: light.cpp
	> Author: amoscykl
	> Mail: amoscykl@163.com 
	> Created Time: 2022年03月16日 星期三 00时25分07秒
 ************************************************************************/


#include<iostream>
#include<nvboard.h>
//#include<Vlight.h>
#include<Vmycpu_top.h>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include<bitset>
using namespace std;

#define word_t uint64_t
#define paddr_t uint64_t
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)
#define PG_ALIGN __attribute((aligned(4096)))

static uint8_t pmem[CONFIG_MSIZE] ;
static inline word_t host_read(void *addr, int len) {
	
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: return 0;
  }
}

void nvboard_bind_all_pins(Vtop *top);
uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }
const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
VerilatedVcdC* tfp = NULL;
double sc_time_stamp() {return 0;}

static word_t pmem_read(paddr_t addr, int len) {

  word_t ret = host_read(guest_to_host(addr), len);

  return ret;
}
static const uint32_t img [] = {
//   0x00000297,  // auipc t0,0
//   0x7DEA02B7,//lui 
//  // 0xFFF28FE7,//jalr

//   0x0002b823,  // sd  zero,16(t0)
//   0x0102b503,  // ld  a0,16(t0)
	0x1E078C13,//addi
	0x7E078C13,//addi
	0x8E0C0C13,//addi
	0xaE0C0C13,
	0xbE0C0C13,
	0xFE0C0C13,
	0x4E0C0C13,
	0x7E0C0C13,
  	0x00100073  // ebreak (used as nemu_trap)
//   0xdeadbeef,  // some data
};
// template <class T>
// void step_and_dump_wave(T *top){
// 	top->eval();
// 	contextp->timeInc(1);
// 	tfp->dump(contextp->time());
// }
// template<class T>
// void sim_init(T * top) {
// 	tfp = new VerilatedVcdC;
// 	contextp->debug(0);
// 	contextp->randReset(2);
// 	contextp->traceEverOn(true);
// 	top->trace(tfp, 0);
// 	tfp->open("dump.vcd");	
// }
// template<class T>
// void single_cycle(T * top) {
// 	top->clock = 1; top->eval();step_and_dump_wave(top);
// 	top->clock = 0; top->eval();step_and_dump_wave(top);
// }

// template<class T>
// void reset(T *top , int n) {
// 	top->reset = 1;
// 	while(n -- > 0) single_cycle(top);
// 	top->reset = 0;
// }

int main(int argc,char ** argv,char** env) {
	// memset(pmem,0,sizeof(pmem));
	// if(false && argc && argv && env) {}
	// memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
	// Verilated::mkdir("logs");
    // Vtop * top = new Vtop;
	// sim_init(top);
	// nvboard_bind_all_pins(top);
	// // nvboard_init();
	// reset(top,10);
	// // step_and_dump_wave(top);
	// uint64_t answer,pc;
	// uint32_t src1,src2,dest,ins,trap_flag;
	// uint32_t instype,inscode;
	

	while(1){
	    
	//	x1 = top->clk;
	//	x2 = top->rst;
		//a  = top->led;
		//b  = top->	keyboard_data;
		//cout<<"a = "<<bitset<8>(x1)<<" b = "<<bitset<8>(x2)<<"x = "<<s <<" out = "<<bitset<8>(x3)<<"carry = "<<x4<<"overflower = "<<out<<endl;
//	top->eval();
	//cout<<"rst  =  "<< x2<<" clk ="<< x1 <<" data "<<hex<<b<< " led "<<a<<endl;
 

	// top->io_mem_instrution =pmem_read(top->io_pc,4);
	// single_cycle(top);
	// answer = top->io_answer;
	// pc     = top->io_pc;
	// src1   = top->io_src1;
	// src2   = top->io_src2;
	// dest   = top->io_dest;
	// ins    = top->io_riscv_instruction;
	// instype = top->io_instype;
	// inscode = top->io_inscode;
	// trap_flag = top->io_trap_flag;

	// cout<<"answer = "<<answer<<" pc = "<<pc<<" src1 = "<<src1<<" src2 = "<<hex<<src2<<endl<<"dest = "<<dest<<" ins = "<<ins<<" instype = "<<instype<<" inscode "<<inscode<<endl;
	
	
	/*	if(top->clk == 1) 
			top->clk = 0;
		else top->clk = 1;*/

	//step_and_dump_wave(top);

	// if(trap_flag == 1) {
	// 	break;
	// }
	
	// 	//en = top->en;
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


	// tfp->close();

}


