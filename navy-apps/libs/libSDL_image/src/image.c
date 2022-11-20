#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  // return NULL;
  FILE *fp = fopen(filename, "r");
  // printf("????\n");
  // int file_size = fp->
  assert(fp != NULL);
  fseek(fp,0,SEEK_END);
  long size = ftell(fp);
  printf("f size is %ld\n",size);
  char *img_buf = (char*)malloc(size);
  fseek(fp,0,SEEK_SET);
  printf("sbhxzwocaonima\n");
  fread(img_buf, 1, size, fp);
  // for(int i = 0;i < size;i++) {
  //   printf("num %d is %d\n",i,img_buf[i]);
  // }
  SDL_Surface * my_surface = STBIMG_LoadFromMemory(img_buf,size);
  fclose(fp);
  free(img_buf);
  return my_surface;

}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
