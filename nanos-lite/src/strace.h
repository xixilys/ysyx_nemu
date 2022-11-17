#ifndef __STRACE_H__
#define __STRACE_H__
#define MAX_STRACE_LENGTH 10
typedef struct {
    Context c;
}strace_handle;

size_t  strace_push(Context *c);
void strace_printf();

#endif