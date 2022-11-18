#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>
#include <BMP.h>
#include <fixedptc.h>
int main() {
  NDL_Init(0);
  int w, h;
  void *bmp = BMP_Load("/share/pictures/projectn.bmp", &w, &h);
  fixedpt data = fixedpt_rconst(0.2);
  float float_data = 40.2458f;
  printf("trans data is %d\n",fixedpt_fromfloat(&float_data));
  printf("floor -1.5 is %d  and ceil -1.5 is %d\n",fixedpt_floor(data),fixedpt_ceil(data));
  printf("w = %d and  h = %d\n",w,h);
  assert(bmp);
  NDL_OpenCanvas(&w, &h);
  NDL_DrawRect(bmp, 0, 0, w, h);
  free(bmp);
  NDL_Quit();
  printf("Test ends! Spinning...\n");
  while (1);
  return 0;
}
