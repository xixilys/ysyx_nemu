#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <assert.h>
#include <time.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int screen_offset = 0;
static int open_w = 0,open_h = 0;

static long start_time = 0;
struct timeval timeval_use;
struct timeval timezone_use;
uint32_t NDL_GetTicks() {
  if(gettimeofday(&(timeval_use),&(timezone_use)) != 0){
    assert(0);
  }
  return (timeval_use.tv_usec / 1000 - start_time);
}

int NDL_PollEvent(char *buf, int len) {

  // printf("open data is %d\n",fd_data);
  return read(evtdev,(void*)buf,len);
}


void NDL_OpenCanvas(int *w, int *h) {
  printf("I come here\n");
  //下面这玩意是native用的，和咱们没啥关系
  

  if (getenv("NWM_APP")) {
    
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }else{
    char buf[100];
    int fp = open("/proc/dispinfo");
    read(fp,buf,99);
    int data[10];
    int data_index = 0;
    int readptr = 0;
    int has_trans = 0;
    int buf_length = strlen(buf);
    for(;readptr < buf_length;readptr++) {
      if(buf[readptr] >= '0' && buf[readptr] <= '9' ) {
        if(!has_trans) {
          data[data_index++] = atoi(&buf[readptr]);
          has_trans = 1;
        }
      }else {
        has_trans = 0;
      }
    }
    open_w = data[0];
    open_h = data[1];
    if(open_w < *w || open_h < *h  ) {
      assert(0);
    }else{
      screen_w = (open_w - *w) / 2;
      screen_h = (open_h - *h) / 2;
      screen_offset = screen_w + screen_h * open_h;
      printf("screen_w is %d screen_h is %d\n",screen_w,screen_h);
    }
    printf("open w is %d open h is %d\n",open_w,open_h);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  printf("x = %d y = %d w = %d h = %d\n",x,y,w,h);
  for(int i = 0;i < h;i++) {
    // printf("offset is %d\n",(y*open_w + x + i*open_w ));
    // printf
    assert(lseek(fbdev,((y + screen_h)*open_w + x + screen_w + i*open_w  ),0) != -1);
    write(fbdev,&pixels[w*i],w);
  }
   write(fbdev,pixels,0);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }else {

    // printf("buf is %s\n",buf);
    
  }
  if(gettimeofday(&(timeval_use),&(timezone_use)) != 0){
    assert(0);
  }
  start_time = timeval_use.tv_usec / 1000;
  evtdev = open("/dev/events",0);
  fbdev  = open("/dev/fb",0);
  return 0;
}

void NDL_Quit() {
 
}
