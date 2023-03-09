#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.special_reg[MCAUSE] = NO;
  cpu.special_reg[MEPC]   = epc;
  return cpu.special_reg[MTVEC];
  return 0;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
