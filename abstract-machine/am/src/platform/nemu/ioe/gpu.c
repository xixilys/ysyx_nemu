#include <am.h>
#include <nemu.h>
#include <stdio.h>


#define SYNC_ADDR (VGACTL_ADDR + 4)
int w = 0;  // TODO: get the correct width
int h = 0;  // TODO: get the correct height
void __am_gpu_init() {
  int i;
  h = inw(VGACTL_ADDR);
  w = inw(VGACTL_ADDR + 2 );
    printf("SYSNC = %p\n",VGACTL_ADDR);
  //显存捏
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) {
    fb[i] = i/2;
    if(i % 100 == 0) {
    // printf("i = %d\n", i);
    }
  }

  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = w, .height = h,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  // int max_size = ctl->w * ctl->h;
  // printf("x = %d y = %d w = %d h = %d\n",ctl->x,ctl->y,ctl->w,ctl->h);
  // printf("come here ?");
  for(int i = 0; i < ctl-> h; i++) {
    size_t x_start_ptr = (ctl->x + w*(ctl->y + i)) * 4 + FB_ADDR;
    for(int j = 0; j < ctl-> w; j++) {
      // printf("data is %d\n",((uint32_t*)(ctl->pixels))[i*ctl-> w + j]);
      outl(x_start_ptr,((uint32_t*)(ctl->pixels))[i*ctl-> w + j]);
      x_start_ptr += 4;
    }
  }
  // printf("ctl sync is %d\n",ctl->sync);
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
    // printf("read sync_addr = %d\n", inl(SYNC_ADDR));
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
