#include <isa.h>
#include <memory/paddr.h>

word_t vaddr_ifetch(vaddr_t addr, int len) {
  
  return paddr_read(addr, len,mem_inst_fec);
}

word_t vaddr_read(vaddr_t addr, int len) {
  return paddr_read(addr, len,mem_others);
}

void vaddr_write(vaddr_t addr, int len, word_t data) {
  paddr_write(addr, len, data);
}
