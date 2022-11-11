#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define printf_max_size 5000
#define size_length 16

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

void sizet_to_string_x(size_t num , char * value) {

  char reverse_value[100] = {0};
  int index = 0;
  if(num == 0) {
    // printf("num = %d\n",num);
    
    reverse_value[0] = 0 + '1' - 1;
    index = 1;
  }
  
  while(num != 0) {
    char temp_value = num%16 ;
    if(temp_value >= 0 && temp_value <= 9) {
      temp_value += '1'- 1;
    }else {
      temp_value += 'A' - 10;
    }
    reverse_value [index]  =  temp_value;
    num = num / 16;
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
    va_start(ap, fmt);
    int i = vsprintf(out, fmt, ap);
    return i;
}


int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  char out[printf_max_size] ;
  int i = vsprintf(out, fmt, ap);
  putstr(out);
  return i;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  int d  = 0;
  char *s;
  char sb_s = 0;
  int length = 0;
  size_t the_long_data = 0;
  while (*fmt) {
    if(*fmt == '%')   {
      fmt++ ;
      if(*fmt < '0' || *fmt > '9') {
        char num_string[100] = {0};
        switch (*fmt) {
        case 's':              /* string */
            s = va_arg(ap, char *);
            out = memcpy(out,s,strlen(s));
            length += strlen(s);
            out = out + strlen(s);
            break;
        case 'd':              /* int */
            d = va_arg(ap, int);
            int_to_string(d,num_string);
            out = memcpy(out,num_string,strlen(num_string));
            length += strlen(num_string);
            out += strlen(num_string);
            break;
        case 'c':
            sb_s = (char)va_arg(ap, int);
            *out = sb_s;
            out++;break;
        case 'p': /* point */
            // printf("i come herererere\n");
            the_long_data = (size_t)va_arg(ap, size_t);
            // printf("the long data is %d\n",the_long_data);
            // char num_string[100] = {0};
            sizet_to_string_x(the_long_data,num_string);
            // printf("num_string is %s\n",num_string);
            int value_length = strlen(num_string);
            // printf("value")
            for(int i_for = 0; i_for < size_length - value_length; i_for++){
               num_string[i_for] = '0';
            }
            sizet_to_string_x(the_long_data,&num_string[size_length - value_length]);
            out = memcpy(out,num_string,strlen(num_string));
            out += strlen(num_string);
            // printf("sum data = %s \n",num_string);
        default : out = out;        
        }
      }else{
        char presion_buff[1000];
        int i_presion = 0 ;
        for(;*fmt >= '0' && *fmt <= '9';fmt++) {
          presion_buff[i_presion++] = *fmt;
        }
        presion_buff[i_presion] = '\0' ;
        int presion_data = atoi(presion_buff);
        switch (*fmt) {
          case 'd':              /* int */
              d = va_arg(ap, int);
              char num_string[100] = {0};
              int_to_string(d,num_string);
              int presion_temp_num = 0;
              for(;presion_temp_num < presion_data - strlen(num_string);presion_temp_num ++ ) {
                if(presion_buff[0] == '0') {
                  *out = '0';
                }else {
                  *out = ' ';
                }
                out++;  
              }
              out = memcpy(out,num_string,strlen(num_string));
              length += strlen(num_string);
              out += strlen(num_string);
              break;
          // cacse 'p':   /* point */
          //     size_t data_p = 0;
          //     data_p = va_arg(ap, size_t);

          //     break;
          default : out = out;       
        }
      }
    }else{
      out[0] = *fmt;
      out++;
      length ++;
    }
    fmt++;
            // printf(" fmt = %c\n",*fmt);
    }
    *out = '\0';
    return length;
}


#endif
