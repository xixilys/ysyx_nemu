#ifndef __MEMORY_PADDR_H__
#define __MEMORY_PADDR_H__

#include <common.h>

#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)

#define mem_inst_fec 1
#define mem_others   0


/* convert the guest physical address in the guest program to host virtual address in NEMU */
uint8_t* guest_to_host(paddr_t paddr);
/* convert the host virtual address in NEMU to guest physical address in the guest program */
paddr_t host_to_guest(uint8_t *haddr);

static inline bool in_pmem(paddr_t addr) {
  // printf("addr is %x\n", addr);
  // printf("mbase is %x\n",CONFIG_MBASE);
  // printf("m size if %x\n",CONFIG_MSIZE);
  return (addr >= CONFIG_MBASE) && (addr < (paddr_t)CONFIG_MBASE + CONFIG_MSIZE);
}

word_t paddr_read(paddr_t addr, int len ,uint8_t mem_type);
void paddr_write(paddr_t addr, int len, word_t data);

void mtrace_printf();
#endif
