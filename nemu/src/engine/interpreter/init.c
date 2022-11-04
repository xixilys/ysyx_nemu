#include <cpu/cpu.h>

void sdb_mainloop();

void engine_start() {
#ifdef CONFIG_TARGET_AM

  cpu_exec(-1);
#else
// fefef
  /* Receive commands from user. */

  sdb_mainloop();
#endif
}
