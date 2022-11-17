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
  while(1) {
    if(NDL_GetTicks() == get_ms + 500)
    {
      get_ms +=500;
      printf("now time is %ld\n",get_ms);
      printf("half passed\n");
    }
    
  }
}
