#include <stdio.h>

void func(int arg)
{
   arg++;
}

int main()
{
  int xyz = 10;
  func(xyz);
  printf("%d", xyz); // 10. Pass by value
  
  return 0;
}
