#include <common.h>

#define XLEN  8

static void yield_event_control(Context* c){
  printf("come yield haoye\n");
  c->mepc = c->mepc + 4;
}

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD: yield_event_control(c); break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}

