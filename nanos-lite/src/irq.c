#include <common.h>

#define XLEN  8

static void yield_event_control(Context* c){
  // printf("come yield haoye\n");
  #if defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
  c->mepc = c->mepc + 4;
  #endif
}
extern void do_syscall(Context *c);
static Context* do_event(Event e, Context* c) {
  
  switch (e.event) {
    case EVENT_YIELD: yield_event_control(c); break;
    case EVENT_SYSCALL: do_syscall(c); break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}

