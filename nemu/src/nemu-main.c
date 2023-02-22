#include <common.h>
#include <stdarg.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();




int main(int argc, char *argv[]) {
  // printf("sbhere\n");
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

 
  engine_start();

  return is_exit_status_bad();
}
