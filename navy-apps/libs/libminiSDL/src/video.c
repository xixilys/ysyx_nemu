#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <fixedptc.h>
 
#define start_vedio 1

void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  // printf()
  assert(dst && src); 
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  // print
  // printf("depth is %d\n",src->format->BitsPerPixel);
  int src_w = srcrect == NULL ? src->w : srcrect -> w;
  int src_h = srcrect == NULL ? src->h : srcrect -> h;
  int src_x = srcrect == NULL ?  0 : srcrect->x;
  int src_y = srcrect == NULL ?  0 : srcrect->y; 
  int dst_x = dstrect == NULL ?  0 : dstrect->x;
  int dst_y = dstrect == NULL ?  0 : dstrect->y;
  // printf("blit surface is going \n");
  #if(start_vedio)
  if((src_y + src_h) <= src->h && (dst_y + src_h) <= dst->h &&  (src_x + src_w) <= src->w && (dst_x + src_w) <= dst->w) {
    // printf("src x is %d src y is %d src w is %d src h is %d and dst_x is %d dst_y is %d\n",src_x,src_y,src_w,src_h,dst_x,dst_y);
    if(dst->format->BitsPerPixel == 32) {
      for(int i = 0 ;i < src_h;i++) {
          for(int j = 0; j < src_w; j++) {
            ((uint32_t*)(dst->pixels))[( i + dst_y)* dst->w + j + dst_x] = ((uint32_t*)(src->pixels))[(i +  src_y) *src->w + j + src_x];
          }
        }
    }else if (dst->format->BitsPerPixel == 8) {

      for(int i = 0 ;i < src_h;i++) {
          for(int j = 0; j < src_w; j++) {
            ((uint8_t*)(dst->pixels))[( i + dst_y)* dst->w + j + dst_x] = ((uint8_t*)(src->pixels))[(i +  src_y) *src->w + j + src_x];
          }
        }
    }
  }
  #endif
}

void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
    // printf("depth is %d\n",dst->format->BitsPerPixel);
  int src_w = dstrect == NULL ? dst->w : dstrect -> w;
  int src_h = dstrect == NULL ? dst->h : dstrect -> h;
  int src_x = dstrect == NULL ?  0 : dstrect->x;
  int src_y = dstrect == NULL ?  0 : dstrect->y; 
  // printf("src x is %d src y is %d src w is %d src h is %d and dst h is %d dst w is %d\n",src_x,src_y,src_w,src_h,dst->h,dst->w);
   #if(start_vedio)
  if((dst->h >= (src_h + src_y)) && (dst->w >= (src_w + src_x))){
      // printf("surface size is %d\n",dst->w * dst->h);
      if(dst->format->BitsPerPixel == 32) {
        for(int i = 0 ;i < src_h;i++) {
          for(int j = src_x; j < src_w + src_x; j++) {  
            ((uint32_t*)(dst->pixels))[(i + src_y)*(dst->w) + j] = color;
          }
        }
      }else if(dst->format->BitsPerPixel == 8) {
        for(int i = 0 ;i < src_h;i++) {
          for(int j = src_x; j < src_w + src_x; j++) {  
            ((uint8_t*)(dst->pixels))[(i + src_y)*(dst->w) + j] = color;
          }
        }
      }
     
  }
  #endif
  // SDL_UpdateRect(dst,src_x,src_y,src_w,src_h);
}

void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
  //  printf("depth is %d\n",s->format->BitsPerPixel);
  //  for(int i = 0;i<256;i++) {
  //   printf("color is %d\n",((s->format->palette->colors)[i].val));
  //  }
  if(x == 0 && y == 0 && w == 0 && h == 0) {
    x =0;
    y = 0;
    w = s-> w;
    h = s-> h;
  }else {
    assert(x >= 0 && y >= 0 && w > 1 && h > 1 );
  }
  // for(int i = 0 ;i< 256;i++) {
  //   printf(" i = %x ",(uint32_t)(s->format->palette->colors[i].val));
  //   // printf()
  //   if(i % 10 == 5) {
  //     printf("\n");
  //   }
  // }
   #if(start_vedio)
  if(s->format->BitsPerPixel == 32) {
    NDL_DrawRect(s->pixels,x,y,w,h);
  }else if(s->format->BitsPerPixel == 8){
    uint32_t *pixels_data = malloc(sizeof(uint32_t) *w * h);
    for(int i = 0 ;i <  h;i++) {
        for(int j = 0; j <  w; j++) {  
          pixels_data[(i)*(w) + j] = (s->format->palette->colors[(((uint8_t*)(s->pixels))[(i + y)*(s->w) + x + j])].val);
        }
    }
    NDL_DrawRect(pixels_data,x,y,w,h);
    free(pixels_data);

  }
  #endif
    
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  // printf("i come here and i know the depth is %d\n",depth);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);
  //之给深度为8的用吗，暂时只需要考虑深度为8的应用

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);
  // printf("w = %d dstrect-> w is %d h is %d dstrect->h is %d\n",w,dstrect->w,h,dstrect->h);
  // printf("x = %d dstrect-> x is %d y is %d dstrect->y is %d\n",x,dstrect->x,y,dstrect->y);
  // for(int i = 0;i< 256 ; i++)
  // printf("sbhxz\n");
  assert(dstrect);
   #if(start_vedio)
  if((w == dstrect->w && h == dstrect->h) ) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    printf("come here\n");
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    //自己来完成拉伸，用到之前写的定点库，不知道能不能用
    fixedpt src_x_fixed = fixedpt_fromint(x);
    fixedpt src_y_fixed = fixedpt_fromint(y);
    fixedpt src_w_fixed = fixedpt_fromint(w);
    fixedpt src_h_fixed = fixedpt_fromint(h);
    fixedpt dst_w_fixed = fixedpt_fromint(dstrect->w);
    fixedpt dst_h_fixed = fixedpt_fromint(dstrect->h);
    int dst_x = dstrect->x;
    int dst_y = dstrect->y;
    //先完成源数据的比较，然后弄出一个大小为dst_w dst_h 的数据，然后给他复制过去就行了

    fixedpt x_rate =  fixedpt_div(src_w_fixed, dst_w_fixed);
    fixedpt y_rate =  fixedpt_div(src_h_fixed, dst_h_fixed);


    // assert(dstrect);
    // assert(0);
    for(int i = 0;i < dstrect->h;i++) {
      for(int j = 0; j < dstrect->w; j++) {
        // assert(0);
        fixedpt raw_w =  fixedpt_muli(x_rate,j);
        fixedpt raw_h =  fixedpt_muli(y_rate,i);
        fixedpt u =  (raw_w - fixedpt_floor(raw_w));
        fixedpt v =  (raw_h - fixedpt_floor(raw_h));
        fixedpt u_1 = fixedpt_fromint(1)- u;
        fixedpt v_1 = fixedpt_fromint(1)- v;  
        // printf("raw_w is %d u is %d ||",raw_w,u);
        // printf("raw_h is %d v is %d ||",raw_w,u);
        int src_j =  fixedpt_toint(fixedpt_floor(raw_w)) + x;
        int src_i =  fixedpt_toint(fixedpt_floor(raw_h)) + y;
        int src_j_next =  fixedpt_toint(fixedpt_ceil(raw_w)) + x;
        int src_i_next =  fixedpt_toint(fixedpt_ceil(raw_h)) + y;
        // printf("src_i is %d src_i_next is %d\n",src_i,src_i_next);
        // printf
        uint8_t f_i_j             = src->pixels[src_i*src->w + src_j];
        uint8_t f_i_next_j        = src->pixels[(src_i_next) *src->w + src_j];

        uint8_t f_i_next_j_next   = src->pixels[(src_i_next) *src->w + src_j_next];
        uint8_t f_i_j_next        = src->pixels[(src_i) *src->w + src_j_next];  
        uint8_t  sum_data = 0;
        // printf("rconst 0.5 is %d\n",fixedpt_rconst(0.5));
        if(u <= fixedpt_rconst(0.5)) {
          if(v <=  fixedpt_rconst(0.5)) {
            sum_data = (f_i_j);
          }else {
            sum_data = f_i_next_j;
          }
        }else{
          if(v <=  fixedpt_rconst(0.5)) {
            sum_data = (f_i_j_next);
          }else {
            sum_data = f_i_next_j_next;
          }
        }

        // fixedpt_mul( fixedpt_mul(u_1,v_1),f_i_j)   + fixedpt_mul( fixedpt_mul(u_1,v),f_i_j_next)
        //     + fixedpt_mul( fixedpt_mul(u,v_1),f_i_next_j) + fixedpt_mul( fixedpt_mul(u,v),f_i_next_j_next);
        
        // if(fixedpt_toint(sum_data) != 0 ) {
        //   printf("sum_data is %d\n",fixedpt_toint(sum_data));
        //   // assert(0);
        // }
        // printf("sum data = %d  ",fixedpt_toint(sum_data));
        // if(j % 10 == 1) {
        //   printf("\n");
        // }
        // printf("")
        dst->pixels[dst_x + (dst_y + i) * dst->w + j] = sum_data;
      }
    }
    // assert(0);
  }
  #endif
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  assert(0);
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
}
