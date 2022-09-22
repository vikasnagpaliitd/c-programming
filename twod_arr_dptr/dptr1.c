#include <stdio.h>


int main()
{
   int x=100;

   int *ptr = &x;

   int **dptr = &ptr;


   printf("value = %d\n", **dptr);


  return 0;
}
