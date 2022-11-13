#ifndef __STRACE_H__
#define __STRACE_H__
#define MAX_STRACE_LENGTH 10
typedef struct {
    int sys_strace_type;
    size_t sys_strace_return_value;
}strace_handle;

#endif