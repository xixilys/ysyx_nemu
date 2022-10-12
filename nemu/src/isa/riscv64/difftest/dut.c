#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
// int num_index = 0;
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  // printf("good\n");
  for(int i = 0;i<32;i++) {
    if(cpu.gpr[i] != ref_r->gpr[i]) {
       return false;
    }
  }
  if(cpu.pc != ref_r -> pc) {
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
