#include <am.h>
#include <soc.h>

// uint32_t _appmem_start  = 0x80000000;
extern char _heap_start;
int main(const char *args);

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

int uart_putchar(char ch);

void putch(char ch) {
  // outb(SERIAL_PORT, ch);
  uart_putchar(ch);
  
}


void halt(int code) {
  nemu_trap(code);

  // should not reach here
  while (1);
}

void _trm_init() {
  // )
  int ret = main(mainargs);
  halt(ret);
}
