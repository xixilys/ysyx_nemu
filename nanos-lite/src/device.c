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

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T kbd;
  kbd = io_read(AM_INPUT_KEYBRD);
  int length = strlen(keyname[kbd.keycode]);
  memset(buf,0,len);
  if(kbd.keycode == AM_KEY_NONE) {
    return 0;
  }
  if(kbd.keydown == 1) {
    memcpy(buf,"kd ",3);
  }else {
    memcpy(buf, "ku ",3);
  }
  buf +=3;

  if(len <= 3 + length) {
    return -1;
  }else {
     memcpy(buf, keyname[kbd.keycode], len - 3); 
     return length + 3;
  }
   
 
  // memcpy(buf,keyname[kbd.keycode],length);
    
  
  return 0;
}
char  dispinfo_array[100] = {};
int width = 0;
int height = 0;
int read_ptr;
static void int_to_string(int num , char * value) {

  char reverse_value[100] = {0};
  int index = 0;
  if(num == 0) {
    // printf("num = %d\n",num);
    reverse_value[0] = 0 + '1' - 1;
    index = 1;
  }
  while(num != 0) {
    reverse_value [index]  = num%10 + '1' - 1 ;
    num = num / 10;
    index ++ ;
  }
  
  index --;
  for(int i = 0;i <= index;i++) {
    value[i] =  reverse_value [ index - i ];
  }
  value [(index + 1)]  = '\0';
} 
size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  memcpy(buf,&dispinfo_array[read_ptr],len);
  read_ptr += len;
  return len;
  // return 0;

}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  int start_x = offset % width ;
  int start_y = offset / width ;
  // printf("start x is %d and len is %d\n",start_x,len);
  // printf("your printf is so large\n");
  //fist line、
  //所以我感觉其实不需要考虑这么多，直接莽画就行了，肯定不会超过一行的
  if(len == 0) {
    io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);
  }
  if(len > width - start_x) {
    printf("your printf is so large\n");
    assert(0);
    return -1;
  }else {
    io_write(AM_GPU_FBDRAW,start_x,start_y,(void*)buf,len,1,false);
    return len;
  }
  
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
  width = io_read(AM_GPU_CONFIG).width ;
  height = io_read(AM_GPU_CONFIG).height ;
  int write_point = 0;
  memcpy(&dispinfo_array[write_point],"WIDTH : ",strlen("WIDTH : "));
  write_point += strlen("WIDTH : ");
  int_to_string(width,&dispinfo_array[write_point]);
  write_point += strlen(&dispinfo_array[write_point]);
  memcpy(&dispinfo_array[write_point],"\nHEIGHT : ",strlen("\nHEIGHT : "));
  write_point += strlen("\nHEIGHT : ");
  int_to_string(height,&dispinfo_array[write_point]);
  printf("%s\n",dispinfo_array);

}
