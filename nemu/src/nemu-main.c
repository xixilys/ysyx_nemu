#include <common.h>
#include <stdarg.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

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


int my_vsprintf(char *out, const char *fmt, va_list ap) {
  int d  = 0;
  char *s;
  char sb_s = 0;
  int length = 0;
  while (*fmt) {
    if(*fmt == '%')   {
      fmt++ ;
      if(*fmt < '0' || *fmt > '9') {
        switch (*fmt) {
        case 's':              /* string */
            s = va_arg(ap, char *);
            out = memcpy(out,s,strlen(s));
            length += strlen(s);
            out = out + strlen(s);
            break;
        case 'd':              /* int */
            d = va_arg(ap, int);
            char num_string[100] = {0};
            int_to_string(d,num_string);
            out = memcpy(out,num_string,strlen(num_string));
            length += strlen(num_string);
            out += strlen(num_string);
            break;
        case 'c':
            sb_s = (char)va_arg(ap, int);
            *out = sb_s;
            out++;
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
          default : out = out;       
        }
      }
    }else{
      out[0] = *fmt;
      // printf("out = %c  ",*fmt);
      out++;
      length ++;
    }
    fmt++;
            // printf(" fmt = %c\n",*fmt);
    }
    *out = '\0';
    return length;
}


int my_sprintf(char *out, const char *fmt, ...) {

    va_list ap;
    va_start(ap, fmt);
    int i = my_vsprintf(out, fmt, ap);
    return i;
}

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
int sec = 0;
while(0) {
    int temp = 0;
    while(temp < 1000000) {temp ++;}
      char out_buffer[100];
      my_sprintf(out_buffer,"%d second).\nhere", sec);
      puts(out_buffer);
    // }
    if(sec >= 100) {
      assert(0);
    }
   
    sec ++ ;
  }
  //   char sprintf_table[100] = {0};
  // printf("%d\n",sprintf(sprintf_table,"fdaf45d_%d__%s___%d",4516,"fdsafaefew",4516));
  // printf("%sis here\n",sprintf_table);
  /* Start engine. */
  // char buf[100] = {0};

	// sprintf(buf, "%s", "Hello world!\n");
	// check(strcmp(buf, "Hello world!\n") == 0);

	// sprintf(buf, "%d + %d = %d\n", 1, 1, 2);
	// check(strcmp(buf, "1 + 1 = 2\n") == 0);

	// sprintf(buf, "%d + %d = %d\n", 2, 10, 12);
  // // printf("buf = %s\n",buf);
	// check(strcmp(buf, "2 + 10 = 12\n") == 0);

  engine_start();

  return is_exit_status_bad();
}
