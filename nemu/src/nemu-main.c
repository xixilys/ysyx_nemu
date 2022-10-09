#include <common.h>
#include <stdarg.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

// void int_to_string(int num , char * value) {

//   char reverse_value[100] = {0};
//   int index = 0;
//   if(num == 0) {
//     // printf("num = %d\n",num);
//     reverse_value[0] = 0 + '1' - 1;
//     index = 1;
//   }
//   while(num != 0) {
//     reverse_value [index]  = num%10 + '1' - 1 ;
//     num = num / 10;
//     index ++ ;
//   }
  
//   index --;
//   for(int i = 0;i <= index;i++) {
//     value[i] =  reverse_value [ index - i ];
//   }
//   value [(index + 1)]  = '\0';

// } 

// int sprintf(char *out, const char *fmt, ...) {

//     va_list ap;
//     // int index = 0;
//     int d  = 0;

//     char *s;
//     va_start(ap, fmt);

//     while (*fmt) {
//       if(*fmt == '%')   {
//         fmt++ ;
        
//         switch (*fmt) {
//         case 's':              /* string */
//             s = va_arg(ap, char *);
//             out = memcpy(out,s,strlen(s));
//             out = out + strlen(s);
//             break;
//         case 'd':              /* int */
          
//             d = va_arg(ap, int); 
//             // printf("d = %d\n",d);
//             char num_string[100] = {0};
//             int_to_string(d,num_string);
//             // printf("int_to_string = %s\n",num_string);
//             out = memcpy(out,num_string,strlen(num_string));
//             out += strlen(num_string);
//             break;
//         default : out = out;        
//         }
//       }else{
//         out[0] = *fmt;
//         out++;
        
//       }
//       fmt++;
//               // printf(" fmt = %c\n",*fmt);
//       }
//     out[0] = '\0';
//     va_end(ap);
//     return 0;
// }

// void check(bool cond) {
//   if (!cond) printf("error");
//   // printf("num = cond = %d\n",cond);
// }

// int strcmp(const char *s1, const char *s2) {
//   // printf("sssss");
//     size_t i = 0;
//     for(; s1[i]!= '\0' && s2[i]!= '\0'; i++) {
//       if (s1[i] < s2[i]) {
//         return -1;
//       }else if(s1[i] > s2[i]) {
//         return 1;
//       }
//     }
//     if(strlen(s1) < strlen(s2)) {
//       return -1;
//     }else if(strlen(s1) == strlen(s2)){
//       return 0;
//     }else{
//       return 1;
//     }

//   //panic("Not implemented");
// }
int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

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
