#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[655360] = {};
static char code_buf[655360 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  int result = %s; "
"  printf(\"%%d\", result); "
"  return 0; "
"}";

static int buf_value = 0;
int choose(int a) {
  return rand() % a;
}

static void gen_rand_expr() {
 // printf("value = %d\n",buf_value);
  if(buf_value >= 1000) {
      int value = rand()%10;
      sprintf(&buf[buf_value], "%d", value);
      buf_value += strlen(&buf[buf_value]);
  }else {
    switch (choose(3)) {
        case 0:{
        // printf("case def here and buf_value = %d\n",buf_value);
        gen_rand_expr(); 
        switch(choose(3)) {
          case 0 : buf[buf_value++] = '+';break;
          case 1 : buf[buf_value++] = '-';break;
          case 2 : buf[buf_value++] = '*';break;
          //default: buf[buf_value++] = '/';break;
        }
        gen_rand_expr(); 
        break;
      }
      case 1: {
        //printf("case 1 here and buf_value = %d\n",buf_value);
        buf[buf_value++] = '('; 
        gen_rand_expr(); 
        buf[buf_value++] = ')';
        break;
      } default: {
        //printf("case 0 here and buf_value = %d\n",buf_value);
        int value = rand()%10;
        sprintf(&buf[buf_value], "%d", value);
        buf_value += strlen(&buf[buf_value]);
        break;
      }
    
    }
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    //printf("i = %d\n",i);
    buf_value = 0;
    memset(buf,0,sizeof(buf));
    gen_rand_expr();
   // printf("buf = %s\n",buf);
    //printf("lzydsdddddsb\n");
    sprintf(code_buf, code_format, buf);
    //printf("lzydsb\n");
    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    int a = fscanf(fp, "%d", &result);
    //printf("a = %d\n",a);
    pclose(fp);

    printf("%u %s\n", result, buf);
    result = a;
  }
  return 0;
}
