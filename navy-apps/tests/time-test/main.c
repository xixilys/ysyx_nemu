#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
#include <time.h>
#include "syscall.h"
#include <NDL.h>



int main() {
  long get_ms = NDL_GetTicks();
  //   int fd_data =  open("/dev/events",0);
  // printf("open data is %d\n",fd_data);
  while(1) {
    if(NDL_GetTicks() == get_ms + 500)
    {
      get_ms +=500;
      printf("now time is %ld\n",get_ms);
      printf("half passed\n");
    }
    
  }
}
