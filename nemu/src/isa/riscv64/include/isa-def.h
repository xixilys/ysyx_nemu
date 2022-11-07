#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
  //all special regs
  word_t special_reg[2*12];
  
} riscv64_CPU_state;

enum {
    MEPC = 0x341,
    MSTATUS = 0x300,
    MCAUSE = 0x342,
    MTVEC = 0x305
};
// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
