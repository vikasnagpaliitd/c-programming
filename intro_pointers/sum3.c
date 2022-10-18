// Part1 solution

#include <stdio.h>
#include <stdlib.h>

//int calc_sum(int *arr, int num)
int calc_sum(int arr[], int len)
//int calc_sum(int arr[100], int num)
{
   //printf("sizeof(arr)=%ld", sizeof(arr)); // 8 bytes // pointer
   /* some code */
   int i, sum = 0;
   for(i = 0; i < len; i++)
      sum += arr[i];

   return sum;
}

#define MAX_NUM 100

int main()
{

   int arr[] = {10,20,30,40, 50};
   int len = sizeof(arr) / sizeof(arr[0]);
   int sum = 0;

   printf("len = %d\n", len);

   sum = calc_sum(arr, len);

   printf("sum = %d\n", sum);

   exit(0);
}

