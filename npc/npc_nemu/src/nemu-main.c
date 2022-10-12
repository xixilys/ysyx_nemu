#include <common.h>
#include <stdarg.h>
#include <verilator_use.h>
#include <cpu/cpu.h>
#include <cpu/sdb.h>



void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start() {
#ifdef CONFIG_TARGET_AM
  cpu_exec(-1);
#else
  /* Receive commands from user. */
  sdb_mainloop();
#endif
}

int is_exit_status_bad();



int main(int argc, char *argv[]) {
  /* Initialize the monitor. */

#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
// printf("hxz sbsbsbsbsb\n");
//verilator仿真开始了
  sim_init();
  // printf("sbsbsb\n");
  reset(10);
  engine_start();

  return is_exit_status_bad();
  

}
