#include <common.h>
#include "strace.h"
#include "syscall.h"
strace_handle strace_handle_buffer[MAX_STRACE_LENGTH] = {};
int strace_handle_value = 0;
size_t  strace_push(int type,size_t return_value) {
    strace_handle_buffer[strace_handle_value].sys_strace_return_value = return_value;
    strace_handle_buffer[strace_handle_value].sys_strace_type = type;
    strace_handle_value++;
    if(strace_handle_value >= MAX_STRACE_LENGTH) {
        strace_handle_value = 0;
    }
    return return_value;
}
void strace_printf(){
    for(int i = 0;i < MAX_STRACE_LENGTH;i++) {
        if(i == strace_handle_value) {
            printf("-->");
        }else{
            printf("   ");
        }
        printf("id: %d name: %s return value: %lx\n",strace_handle_buffer[i].sys_strace_type, 
        syscall_names[strace_handle_buffer[i].sys_strace_type],strace_handle_buffer[i].sys_strace_return_value);
    }

}

