#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;
//CTE ： 上下文扩展 context extension
Context* __am_irq_handle(Context *c) {
  // printf("user_handle = %d\n");
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 0xb : ev.event = EVENT_SYSCALL; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  //内嵌汇编呗
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  // printf("come here\n");
  // asm volatile("li a7, -1; ecall");
  printf("system has yield\n");
  // asser"t(0);
    // printf("come here\n");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
