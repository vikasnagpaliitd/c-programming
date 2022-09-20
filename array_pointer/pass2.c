#include <stdio.h>

void func(int* p_arg)
{
   (*p_arg)++;
}

int main()
{
  int xyz = 10;
  func(&xyz);
  printf("%d\n", xyz); // 11.
  
  return 0;
}
