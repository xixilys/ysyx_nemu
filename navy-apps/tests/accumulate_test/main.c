#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
// count from zero
int accumulate_cal(int source, int times)
{
  int sum;
  __asm__ __volatile__(
      ".insn r 0x33 ,0x0 , 0x60 ,%[dest], %[srcl],  %[src2]" // 使用add指令，一个目标操作数（命名为dest），
                                                             // 两个源操作数（分别命名为src1和src2）
      : [dest] "=r"(sum)                                     // 将指令的目标操作数dest和C程序中的sum变量绑定。

      : [srcl] "r"(source), [src2] "r"(times) // 将指令的源操作数source和C程序中的times变量绑
  );
  return sum;
}

int main()
{
  int i = 2;
  volatile int j = 0;
  int source_answer = 1;
  int times = 100;
  int answer = accumulate_cal(source_answer, times);
  int sum_answer = source_answer;
  // for (int j  = 0; j<= times;j++)
  // {
  //   sum_answer = sum_answer + source_answer + j + 1;
  // }
  // printf("sum true answer is %d\n",sum_answer);
  // printf("answer is %d\n", answer);
  // printf("random is %d\n",random()%10000);

  for(int sb = 0;sb <= 100;sb++)
  {
    source_answer = random()%10000;
    times = random() % 100;
    answer = accumulate_cal(source_answer, times);
    sum_answer = source_answer;
    for (int j  = 0; j<= times;j++)
    {
      sum_answer = sum_answer + source_answer + j + 1;
    }
    // printf("sum true answer is %d\n",sum_answer);
    // printf("answer is %d\n", answer);
    assert(sum_answer == answer);
  }
  printf("all pass !!!\n");
  return 0;
}
