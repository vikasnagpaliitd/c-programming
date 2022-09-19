#include <stdio.h>
#include "numlist.h"

int main()
{
    int list[MAX_NUM_ELEM] ; // do not initialize for sake of performance
    int n = 0;

    n = numlist_add(list, n, 1000); // add 1000 to the list
    n = numlist_add(list, n, 2000); // add 2000 to the list

    numlist_print(list, n);
    return 0;
}









