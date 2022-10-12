#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <cpu/sdb.h>
#include "memory/vaddr.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT ;
  return -1;
}

static int cmd_help(char *args);
static int cmd_info(char *args);
static int cmd_watch_memory(char *args);
static int cmd_cal_express(char *args);
static int cmd_set_watchpoint(char *args);
static int cmd_delete_watchpoint(char *args);

static void display_watch_point(char *args);

static int cmd_single_step(char *args) ;
static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","Single Step of the program", cmd_single_step},
  { "info", "show the state of the pragram", cmd_info},
  { "x", "show the memory of address",cmd_watch_memory},
  { "p", "calculate the value of expressions",cmd_cal_express},
  { "w", "set watch point",cmd_set_watchpoint},
  { "d", "delete watch point",cmd_delete_watchpoint}

  /* TODO: Add more commands */

};

static struct {
  const char * name ;
  const char * description;
  void (*handler) (char *); 
}info_table [] = {
  {"r","Display the register of cpu", (void (*)(char*))isa_reg_display},
  {"w","Display the watch point of the debugger",display_watch_point},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }
//后面就是检测到底输入了啥
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

static int cmd_single_step(char *args)  {
  char *arg = strtok(NULL, " ");
  int i;
  int step_value;

  if (arg == NULL) {
    /* no argument given */
    step_value = 1;  //默认没有数据的时候为1
  }  else { 
    for(i = 0;i < strlen(arg); i ++) {
      if(arg[i] > '9' || arg[i] < '0') {
        printf("wrong parameters for si\n");
        return 0;
      }
    } 
    step_value = atoi(arg);
  }
  //printf("step_value = %d\n",step_value);
  cpu_exec(step_value);
  return 0;
}
//static char test_buf[755350];
//static char test_answer_buf[1000];
static int cmd_info(char *args) { 
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    isa_reg_display();
  }
  else {
    for (i = 0; i < 2 ; i ++) {
      if (strcmp(arg, info_table[i].name) == 0) {
        info_table[i].handler(args);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static void display_watch_point(char *args) { 
  printf("have do no thing\n");
}
static int cmd_watch_memory(char *args) {
  char *arg = strtok(NULL, " ");
  unsigned long i;
  int watch_num ;
  if(arg == NULL) {
     /* no argument given */
     printf("please enter the expressions\n");
     return 0;
  }
  else {
    if((watch_num = atoi(arg)) == 0) {
      watch_num = 1;
    }else {
      arg = strtok(NULL, " ");
    }
  }
  if (arg == NULL) {
    /* no argument given */
    printf("please enter the expressions\n");
    
  }
  else {
    i = strtoul(arg,NULL,16); //mains the entering number is  hex
    int num ;
    printf("watch_num = %x  i = %lx\n",watch_num,i);
    for(num = 0;num < watch_num;num++) {
      //printf("num = %d\n",num);
       printf("memory 0x%lx is %08x\n",(i+num*4),(unsigned int)vaddr_read((i+num*4),4)); 
    }
  
  }
  return 0;

}
static int cmd_cal_express(char *args) { 
  bool cal_state;
  word_t  answer;
  // int true_answer;
  // FILE *fp = fopen("/media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/nemu/tools/gen-expr/build/input", "r");
  // assert(fp != NULL);
   
  // for(int i = 0;i<1000;i++) {
  //   int a = fscanf(fp,"%s",test_answer_buf); 
  //   if(a != 1) {
  //     printf("error fscanf\n");
  //   }
  //   char *b = fgets(test_buf,700000,fp);
  //   //printf("length is %lu\n",strlen(test_buf));
  //   test_buf[strlen(test_buf)-1] = '\0';
  //   if(b == NULL) {
  //     printf("here wrong fgets\n");
  //   }
  //   true_answer = atoi(test_answer_buf);
  //   //printf(" true is %d and test_buf is %s length is %lu\n",true_answer,test_buf,strlen(test_buf));
  //   answer = expr(test_buf,&cal_state);
  //   if(cal_state == true) {
  //     if(answer == true_answer){
  //       printf("ok\n");
  //     }
  //     else {
  //       panic("error answer\n");
  //       while (1){
  //         printf("wrongwrongwrong\n");
  //       }
  //     }
  //   }
  // } 
  // fclose(fp);
  answer = expr(args,&cal_state);
  
  if(cal_state == true) {
    printf("the answer is Dec:%ld Hex: %016lx\n",answer,answer);
  }

  //printf("have do no thing\n");
  return 0;
}
  

static int cmd_set_watchpoint(char *args){ 
  //printf("here");
  WP* p = NULL;
  p = new_wp();
  strcpy(p->str,args);
  bool cal_state;
  p->last_value = expr(args,&cal_state);
  if(cal_state == false) {
    printf("cal wrong!!!\n");
  }
  if(p != NULL) {
    printf("%s\n",p->str);
  }else {
    printf("shabi\n");
  }
  return 0;
}
static int cmd_delete_watchpoint(char *args){
  int num = atoi(args);
  if(delete_wp(num) == true) {
    printf("delete completely !!!\n");
  }else{
    printf("delete fail !!!\n");
  }
  return 0;

}
void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
