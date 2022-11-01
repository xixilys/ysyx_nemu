#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include <elf_read.h>
#include <axi.h>
#include <verilator_use.h>
#include <debug.h>
#include <memory/paddr.h>
#include <device/mmio.h>


#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write
#define cpu_commit 1 
//cpu刚才完成了提交,后面采用dpi-c来写

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_RR,TYPE_SB,TYPE_UJ,TYPE_N, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0).

size_t *cpu_gpr = NULL;
size_t debug_pc = 0;
size_t now_pc = 0;
int cpu_commited = 1;
void cpu_commited_func(void){
  cpu_commited = 0;
}

void set_gpr_ptr(const svOpenArrayHandle r){
  cpu_gpr = (size_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

void set_debug_pc_ptr(size_t r){
  debug_pc = *(size_t*)r;
}

void set_pc_ptr(size_t r) {
  now_pc = *(size_t *)r;
}

void cpu_ebreak(){
   NEMUTRAP(debug_pc, 0);
}


static int decode_exec(Decode *s) {
  // printf("sbsbssbs\n");
  s->dnpc = s->snpc;
  int counter = 0;
  // printf("cpu_commited = %d\n",cpu_commited);
  while(cpu_commited == 1) {
    // printf("counter = %d\n",counter);
    AXI_ResponseHandler_Inst(&axi_inst_singal);
    AXI_ResponseHandler_Data(&axi_data_singal);
    single_cycle();
    counter++;
    //不可能连续10000个周期还不能够有指令commit，除非已经挂逼了
    if(counter >= 1000) {

      sim_end();
      panic("受不了了");
    }

  }
  memcpy(cpu.gpr,cpu_gpr,sizeof(word_t) * 32);
  if(debug_mem_state == 1) {
    // printf("come here\n");
    // printf("debug pc %lx\n",debug_mem_pc);
    // printf("debug mem_addr %lx\n",debug_mem_addr);
    // printf("debug mem write-state %d\n",debug_mem_write_state_get);
    mmio_search_for_skip(debug_mem_addr);
    debug_mem_state = 0;
  }
  
  // printf("debug pc = %lx\n",*debug_pc);
  // printf("debug pc = %lx\n",debug_pc);
  cpu.pc = debug_pc;
  cpu_commited = 1;
  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
