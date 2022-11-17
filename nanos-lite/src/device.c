#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  // return 0;
  size_t has_put_counter = 0;
  for(int i = 0;i < len;i++) {
      putch(*(char*)buf);
      buf++;
      has_put_counter ++;
  }
  return has_put_counter;
}
//键盘
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd);
size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T kbd;
  __am_input_keybrd(&kbd);
  if(kbd.keydown){
    int length = strlen(keyname[kbd.keycode]);
    if(length > len) {
      return -1;
    }else {
      memset(buf,0,len);
      memcpy(buf,keyname[kbd.keycode],length);
      return length;
    }
  }
  return 0;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
