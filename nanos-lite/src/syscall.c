#include <common.h>
#include "syscall.h"

static int sys_exit(Context *c){
  halt(0);
  return 0;
}
static int sys_write(Context *c) {
  int fd = c -> GPR2;
  size_t buf = c -> GPR3;
  size_t count = c -> GPR4;
  int has_put_counter = 0;
  if(fd == 1 || fd == 2){
    for(int i = 0;i < count;i++) {
      putch(*(char*)buf);
      buf++;
      has_put_counter ++;
    }
    if(count == 0) {
      return -1;
    }
  }
  return  has_put_counter;
}


 char *syscall_names[]={
  "SYS_exit",
  "SYS_yield",
  "SYS_open",
  "SYS_read",
  "SYS_write",
  "SYS_kill",
  "SYS_getpid",
  "SYS_close",
  "SYS_lseek",
  "SYS_brk,"
  "SYS_fstat",
  "SYS_time",
  "SYS_signal",
  "SYS_execve",
  "SYS_fork",
  "SYS_link",
  "SYS_unlink",
  "SYS_wait",
  "SYS_times",
  "SYS_gettimeofday"
};
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  switch (a[0]) {
    case SYS_yield : yield();c->GPRx = 0;break;
    case SYS_exit  : c->GPRx = sys_exit(c); break;
    case SYS_write : c->GPRx = sys_write(c);break;
    default: panic("Unhandled syscall ID = %d", a[0]);break;
  }
  #if defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
  c->mepc = c->mepc + 4;
  #endif
  // printf("system call find !\n");
}
