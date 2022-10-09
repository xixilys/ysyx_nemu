#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}


void int_to_string(int num , char * value) {

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

int sprintf(char *out, const char *fmt, ...) {

    va_list ap;
    // int index = 0;
    int d  = 0;

    char *s;
    va_start(ap, fmt);

    while (*fmt) {
      if(*fmt == '%')   {
        fmt++ ;
        
        switch (*fmt) {
        case 's':              /* string */
            s = va_arg(ap, char *);
            out = memcpy(out,s,strlen(s));
            out = out + strlen(s);
            break;
        case 'd':              /* int */

            d = va_arg(ap, int);
            char num_string[100] = {0};
            int_to_string(d,num_string);
            out = memcpy(out,num_string,strlen(num_string));
            out += strlen(num_string);
            break;
        default : out = out;        
        }
      }else{
        out[0] = *fmt;
        out++;
        
      }
      fmt++;
              // printf(" fmt = %c\n",*fmt);
      }
    va_end(ap);
    out[0] = '\0';
    return 0;
}


int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
