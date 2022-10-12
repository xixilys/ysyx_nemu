#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
// int num_index = 0;
#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
// int num_index = 0;
const char *sbregs[]={
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
void ref_reg_show(CPU_state *ref_r, vaddr_t pc) {
   int i;
  printf("ref reg :\n");
  for(i = 0;i<8;i++) {
    for( int j = 0;j<4;j ++) {
      printf("%4s : %016lx  ",sbregs[i*4 + j],ref_r->gpr[i*4 + j]);
    }
    printf("\n");
    
  }
  printf("pc : %lx\n",pc);
}
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  // printf("good\n");
  for(int i = 0;i<32;i++) {
    if(cpu.gpr[i] != ref_r->gpr[i]) {
      printf("reg %d ",i);
      printf(" %s wrong\n",sbregs[i]);
      ref_reg_show(ref_r, pc);
      return false;
    }
  }
  if(cpu.pc != ref_r -> pc) {
    printf("cpu_pc = %lx and ref pc = %lx\n", cpu.pc, ref_r -> pc);
    printf("pc wrong\n");
    ref_reg_show(ref_r, ref_r -> pc);
    return false;
  }
  // num_index ++;
  // if(num_index == 10) {
  //   printf("reg check good and pc -> %lx\n",cpu.pc);
  //   num_index = 0;
  // }
    
  return true;
}

void isa_difftest_attach() {
}
