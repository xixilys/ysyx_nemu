#include <isa.h>
#include <etrace.h>

#define MAX_ETRACE_LOOP_DEPTH  30



#ifdef CONFIG_ITRACE_COND
  typedef struct 
  {
    /* data */
    word_t mepc;
    word_t error_vec;
    word_t mcause;
  }etrace_decoder;
  etrace_decoder etrace_loop[100] = {};
  int  etrace_loop_index = 0;
  
  static void etrace_loop_push(etrace_decoder * loop,etrace_decoder instance , int* index) {
  
    loop[*index] = instance;
    (*index) ++;
    if(*index >= MAX_ETRACE_LOOP_DEPTH) {
      *index = 0;
    }
  }

  static void etrace_loop_print(etrace_decoder * loop,int index) {
    int i = index;
    for(;i < MAX_ETRACE_LOOP_DEPTH;i++) {
       printf("     epc ->  %08lx  cause  ->  %08lx  e_vec  ->  %08lx  \n",loop[i].mepc,loop[i].mcause,loop[i].error_vec);
    }
    for(i = 0;i < index - 1;i++) {
       printf("     epc ->  %08lx  cause  ->  %08lx  e_vec  ->  %08lx  \n",loop[i].mepc,loop[i].mcause,loop[i].error_vec);
   
    }
      printf("---->epc ->  %08lx  cause  ->  %08lx  e_vec  ->  %08lx  \n",loop[i].mepc,loop[i].mcause,loop[i].error_vec);

  }
  void etrace_printfall(){
    etrace_loop_print(etrace_loop,etrace_loop_index);
  }

#endif


word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.special_reg[MCAUSE] = NO;
  cpu.special_reg[MEPC]   = epc;
  #ifdef CONFIG_ITRACE_COND
  etrace_decoder cpu_error_data = {};
  cpu_error_data.error_vec = cpu.special_reg[MTVEC];
  cpu_error_data.mcause    = NO;
  cpu_error_data.mepc      = epc;
  etrace_loop_push(etrace_loop,cpu_error_data,&etrace_loop_index);
  #endif
  return cpu.special_reg[MTVEC];
}
word_t isa_query_intr() {
  return INTR_EMPTY;
}
