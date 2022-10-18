#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM 100

int main()
{

   int arr[MAX_NUM] = {10,20,30,40};
   int i, len = 4;
   int sum = 0;
   for(i = 0; i < len; i++)
      sum += arr[i];

   printf("sum = %d\n", sum);

   exit(0);
}
