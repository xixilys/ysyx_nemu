#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t i = 0;
  for(;s[i] != '\0'; i++) ;
  return i;
  // panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
    size_t i = 0;
  for(;src[i] != '\0'; i++){
    dst[i] = src[i];
  }
  dst[i] = '\0';
  
  return dst;
  // panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i = 0;
  for(;i < n; i++){
    dst[i] = src[i];
  }
  dst[i] = '\0';
  return dst;
  // panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  size_t dst_length = strlen(dst);
  size_t i = 0;
  for(;src[i] != '\0'; i++) {
    dst[i + dst_length] = src[i];
  }
  dst[i + dst_length] = '\0';
  return dst;
  
  // panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  // printf("ssss");
    size_t i = 0;
    for(; s1[i]!= '\0' && s2[i]!= '\0'; i++) {
      if (s1[i] < s2[i]) {
        return -1;
      }else if(s1[i] > s2[i]) {
        return 1;
      }
    }
    if(strlen(s1) < strlen(s2)) {
      return -1;
    }else if(strlen(s1) == strlen(s2)){
      return 0;
    }else{
      return 1;
    }

  //panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  size_t i = 0;
    for(; i < n; i++) {
      if (s1[i] < s2[i]) {
        return -1;
      }else if(s1[i] > s2[i]) {
        return 1;
      }
    }
    return 0;
    // if(strlen(s1) < strlen(s2)) {
    //   return -1;
    // }else if(strlen(s1) == strlen(s2)){
    //   return 0;
    // }else{
    //   return 1;
    // }
}

void *memset(void *s, int c, size_t n) {
  // panic("Not implemented");
    size_t i = 0;
    for(; i < n; i++) {
      ((uint8_t*)s)[i] = (uint8_t)c;
    }
    // putch('f');
    return s;
  
}

void *memmove(void *dst, const void *src, size_t n) {
    size_t i = 0;
    for(; i < n; i++) {
      ((uint8_t*)dst)[i] = ((uint8_t*)src)[i];
      ((uint8_t*)src)[i] = '\0';
    }
    return dst;


}

void *memcpy(void *out, const void *in, size_t n) {
    size_t i = 0;
    for(; i < n; i++) {
      ((uint8_t*)out)[i] = ((uint8_t*)in)[i];
    }
    return out;


}

int memcmp(const void *s1, const void *s2, size_t n) {
    size_t i = 0;
    for(; i < n; i++) {
      if (((uint8_t*)s1)[i] < ((uint8_t*)s2)[i]) {
        return -1;
      }else if(((uint8_t*)s1)[i] < ((uint8_t*)s2)[i]) {
        return 1;
      }
    }
    return 0;
 

}

#endif
