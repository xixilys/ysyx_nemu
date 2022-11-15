#include <common.h>

void init_mm(void);
void init_device(void);
void init_ramdisk(void);
void init_irq(void);
void init_fs(void);
void init_proc(void);

int main() {
  // extern const char logo[];
  // printf("%s", logo);
  // panic("Should not reach here");
  // printf("%p\n",0x20);
  // assert(0);
  //logo make my print out pool boom
  printf("=============================\n");
  printf("hehehehe\n");
  printf("=============================\n");

  Log("'Hello World!' from Nanos-lite");
  Log("Build time: %s, %s", __TIME__, __DATE__);

  init_mm();

  init_device();

  init_ramdisk();

#ifdef HAS_CTE
// printf("sbsbsbhxz");
  init_irq();
#endif

  init_fs();
  assert(0);

  init_proc();

  Log("Finish initialization");

#ifdef HAS_CTE
  yield();
#endif

  panic("Should not reach here");
}
