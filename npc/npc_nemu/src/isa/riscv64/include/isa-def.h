#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>
#include <math.h>
#define special_reg_length  4096
typedef struct {
  word_t gpr[32];
  vaddr_t pc;
  //all special regs
  word_t special_reg[special_reg_length];
  
} riscv64_CPU_state;

enum {
    MEPC = 0x341,
    MSTATUS = 0x300,
    MCAUSE = 0x342,
    MTVEC = 0x305,
    MIP = 0x344,
    MIE = 0x304
};
// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif