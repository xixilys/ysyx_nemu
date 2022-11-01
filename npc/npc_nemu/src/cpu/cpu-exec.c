#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include <disass.h>
#include <verilator_use.h>
#include <memory/paddr.h>



#include <cpu/sdb.h>
#include <elf_read.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 1000
#define MAX_ITRACE_LOOP_DEPTH  30

CPU_state cpu = {};
static uint64_t g_timer = 0; // unit: us
uint64_t g_nr_guest_inst = 0;
static bool g_print_step = false;
#ifdef CONFIG_ITRACE_COND
  Decode itrace_loop[100] = {};
  int  itrace_loop_index = 0;
  
  static void itrace_loop_push(Decode * loop,Decode instance , int* index) {
  
    loop[*index] = instance;
    (*index) ++;
    if(*index >= MAX_ITRACE_LOOP_DEPTH) {
      *index = 0;
    }
  }
  static void itrace_loop_print(Decode * loop,int index) {
    int i = index;
    for(;i < MAX_ITRACE_LOOP_DEPTH;i++) {
       printf("     inst ->  %08x __ pc ->  ",loop[i].isa.inst.val);
       printf("%s\n",loop[i].logbuf);
  
    }
    for(i = 0;i < index - 1;i++) {
      printf("     inst ->  %08x __ pc ->  ",loop[i].isa.inst.val);
      printf("%s\n",loop[i].logbuf);
    }
    printf("---->inst ->  %08x __ pc ->  ",loop[i].isa.inst.val);
    printf("%s\n",loop[i].logbuf);
  }

#endif


void device_update();

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
  WP* p = head;
  bool cal_state;
  while(p != NULL){
    word_t answer;
    answer = expr(p->str,&cal_state);
    if(cal_state != true) {
      printf("cal wrong\n");
    }
    if (answer != p->last_value) {
      sim_end();
      Log("%s is different after executing instruction at pc = " FMT_WORD ", dnpc = "
      FMT_WORD  ", last = " FMT_WORD ", now = " FMT_WORD ,
        p->str, _this->pc,dnpc,  p->last_value, answer ); 
      p->last_value = answer;
      nemu_state.state = NEMU_STOP; 
    }
    p = p->next;
  }
}


static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  // printf("inst ->  %08x __ pc ->  %016lx\n",s->isa.inst.val,s->pc);
  


#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = 0; i < ilen; i ++) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;


  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
  itrace_loop_push(itrace_loop,*s,&itrace_loop_index);
#endif

  
  // printf("index = %d\n",itrace_loop_index);
// printf("inst ->  %08x __ pc ->  %08lx\n",itrace_loop[itrace_loop_index - 1].isa.inst.val,itrace_loop[itrace_loop_index - 1].pc);
//   printf("log buffer %s\n",s->logbuf);
}

static void execute(uint64_t n) {
  Decode s;
 // printf("n = %lud\n",n);传一个负数进来，注意形参n为无符号数，就会一直跑直到break;
  for (;n > 0; n --) {
    //printf("hjyshabi\n");
    exec_once(&s, cpu.pc);
    
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    static uint64_t run_counter = 0;
    if(run_counter >= 100000) {
      IFDEF(CONFIG_DEVICE, device_update());
      run_counter = 0;
    }else{
      run_counter ++;
    }
    
    
  }
}

static void statistic() {
  if(nemu_state.halt_ret == 1){
    #ifdef CONFIG_ITRACE_COND
      itrace_loop_print(itrace_loop,itrace_loop_index); 
      ftrace_loop_print(ftrace_loop,ftrace_loop_index);
      mtrace_printf();

    #endif

   
 } 
 sim_end();
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {  
 
  isa_reg_display();
  #ifdef CONFIG_ITRACE_COND
    itrace_loop_print(itrace_loop,itrace_loop_index);
    ftrace_loop_print(ftrace_loop,ftrace_loop_index);
    mtrace_printf();
  #endif
  
  
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
    #ifdef CONFIG_ITRACE_COND
      itrace_loop_print(itrace_loop,itrace_loop_index);
      ftrace_loop_print(ftrace_loop,ftrace_loop_index);
      mtrace_printf();
    #endif
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
