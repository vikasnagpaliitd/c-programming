#include <stdio.h>
#include "func.h"


int count_called = 0;

void do_something(int a)
{
   printf("do_Something %d\n", a);
}
