// What happens to un-initialized variables?
#include <stdio.h>

int glob;

int main()
{
  int local;
  static int static_local;

  printf("glob=%d\n", glob);
  printf("local=%d\n", local);
  printf("static_local=%d\n", static_local);

  return 0;
}
