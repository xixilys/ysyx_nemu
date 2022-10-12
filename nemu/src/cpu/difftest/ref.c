#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>


//在这里
//dut -> nemu
//ref -> 其他模拟器
uint8_t * paddr_to_uint8(paddr_t addr) {
  return (uint8_t*)NULL + addr;
}

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  // printf("i am here\n");
  // if(direction == DIFFTEST_TO_REF){
  //   memcpy(buf, paddr_to_uint8(addr), n) ;
  // }else{//to dut 即 nemu
  //   memcpy(paddr_to_uint8(addr), buf, n);
  // }
  // printf("herererere\n");
  assert(0);
}

void difftest_regcpy(void *dut, bool direction) {
  
  // ref_difftest_memcpy
  assert(0);
}


void difftest_exec(uint64_t n) {
   assert(0);
  // cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
