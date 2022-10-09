#include <isa.h>
#include "local-include/reg.h"

const char *regs[]={
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  int i;
  for(i = 0;i<8;i++) {
    for( int j = 0;j<4;j ++) {
      printf("%4s : %016lx  ",regs[i*4 + j],cpu.gpr[i*4 + j]);
    }
    printf("\n");
    
  }
  printf("%ld\n",(uint64_t)5+(uint64_t)-2);
  printf("pc : %lx\n",cpu.pc);
}

word_t isa_reg_str2val(const char *s, bool *success) {
  int i = 0;
  for(;i<32;i++) {
   if( strcmp(s,regs[i]) == 0) {
    *success = true; 
    return  cpu.gpr[i];
   }
  }
  *success = false;
  return -1;
}
