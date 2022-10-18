/*
  Assignment :  
  Part1) implement calc_sum
  Part2) allocate arr dynamically
     int *arr;
     arr = ...malloc(...)
     fill some values manually
  Part3) enhance that the values are taken using scanf
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM 100

int main()
{

   int arr[] = {10,20,30,40, 50};
   int i, len = sizeof(arr) / sizeof(arr[0]);
   int sum = 0;

   printf("len = %d\n", len);

   sum = calc_sum(arr, len);
#if 0
   for(i = 0; i < len; i++)
      sum += arr[i];
#endif

   printf("sum = %d\n", sum);

   exit(0);
}

