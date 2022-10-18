#include <stdio.h>
#include "func.h"

extern int count_called;

int main()
{
    do_something(1000);
    printf("count_called=%d\n", count_called);

    do_something(1000);
    printf("count_called=%d\n", count_called);
    return 0;
}









