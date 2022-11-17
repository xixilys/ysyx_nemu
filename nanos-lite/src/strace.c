#include <common.h>
#include "strace.h"
#include "syscall.h"
#include <fs.h>
strace_handle strace_handle_buffer[MAX_STRACE_LENGTH] = {};

int strace_handle_value = 0;
static int find_file_syscall(size_t syscall_id) {
    return syscall_id == SYS_open || syscall_id == SYS_close || syscall_id == SYS_read || syscall_id == SYS_write ;
}

size_t  strace_push(Context *c) {
    strace_handle_buffer[strace_handle_value].c = *(c);
    strace_handle_value++;
    if(strace_handle_value >= MAX_STRACE_LENGTH) {
        strace_handle_value = 0;
    }
    return c->GPRx;
}
void strace_printf(){
    for(int i = 0;i < MAX_STRACE_LENGTH;i++) {
        if(i == strace_handle_value) {
            printf("-->");
        }else{
            printf("   ");
        }
        printf("id: %d name: %s return value: %lx",strace_handle_buffer[i].c.GPR1, 
        syscall_names[strace_handle_buffer[i].c.GPR1],strace_handle_buffer[i].c.GPRx);
        if(find_file_syscall(strace_handle_buffer[i].c.GPR1) == 1) {
            printf("file name is %s\n",get_file_name(strace_handle_buffer[i].c.GPR2));
        }else{
            printf("\n");
        }
    }

}

