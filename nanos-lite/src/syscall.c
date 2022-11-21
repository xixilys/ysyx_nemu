#include <common.h>
#include "syscall.h"
#include "strace.h"
#include <sys/time.h>
#include <time.h>
size_t fs_open(const char *pathname, int flags, int mode);
size_t fs_write(int fd,const void * buf,size_t len);
size_t fs_read(int fd,const void * buf,size_t len);
size_t fs_lseek(int fd,size_t offset,int whence) ;
size_t fs_close(int fd);

static size_t sys_exit(Context *c){
    // panic("guabi le ");
  halt(0);
  return 0;
}
extern int fife_num ;
// extern fs_writer
static size_t sys_write(Context *c) {
  int fd = c -> GPR2;
  size_t buf = c -> GPR3;
  size_t count = c -> GPR4;
  return fs_write(fd,(void*) buf,count);

}
static size_t sys_brk(Context *c) {
  //tmd 把這萬億想复杂了，其实很简单，要改的话得到多进程去了
  return 0;
}
static size_t sys_close(Context *c) {
  return 0;
}
static size_t sys_read(Context *c) {
  return fs_read(c->GPR2,(void*)c->GPR3,c->GPR4);
}
static size_t sys_open(Context *c) {
  return fs_open((char *)c->GPR2,c->GPR3,c->GPR4);
}
static size_t sys_lseek(Context *c) {
  return fs_lseek(c->GPR2,c->GPR3,c->GPR4);
}

AM_TIMER_UPTIME_T uptime = {};
static size_t sys_gettimeofday(Context * c) {
  uint64_t us = io_read(AM_TIMER_UPTIME).us;
  // printf("i come here\n");
  if(((struct timeval *)(c->GPR2)) != NULL) {
      ((struct timeval *)(c->GPR2))->tv_sec = us / 1000;
  ((struct timeval*)(c->GPR2))->tv_usec = us ;
  }

  //struct timezone
  if(((struct timezone*)(c->GPR3)) != NULL) {
  ((struct timezone*)(c->GPR3)) -> tz_minuteswest = us / 1000 / 60;
    ((struct timezone*)(c->GPR3)) -> tz_dsttime = us / 1000 / 60 / 60;
  }
  
  if(us < 0) {
    return -1;
  }else {
    return 0;
  }
  return 0;
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
    case SYS_exit  : c->GPRx = sys_exit(c)  ; break;
    case SYS_write : c->GPRx = sys_write(c) ;break;
    case SYS_brk   : c->GPRx = sys_brk(c)   ;break;
    case SYS_open  : c->GPRx = sys_open(c)  ;break;
    case SYS_read  : c->GPRx = sys_read(c)  ;break;
    case SYS_close : c->GPRx = sys_close(c) ;break;
    case SYS_lseek : c->GPRx = sys_lseek(c) ;break;
    case SYS_gettimeofday: c->GPRx = sys_gettimeofday(c); break;
    default: panic("Unhandled syscall ID = %d", a[0]);break;
  }
  strace_push(c);
  #if defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
  c->mepc = c->mepc + 4;
  #endif
  // printf("system call find !\n");
}
