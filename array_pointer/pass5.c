#include <stdio.h>
#define MAX_PERSONS 20

void func(int* *pp_arg)
{
   (*pp_arg)++;
}

int main()
{
  int marks[MAX_PERSONS]  = {10,20,30,40,50 };
  int *ptr = marks;
  printf("ptr before func=%p\n", ptr);
  printf("*ptr before func=%d\n", *ptr);

  func(&ptr);

  printf("ptr after func=%p\n", ptr); // same as earlier OR increment-value?
  printf("*ptr after func=%d\n", *ptr);
  
  return 0;
}
