// Part2 and 3 : Solution
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

   //int arr[] = {10,20,30,40, 50};
   int *ptr;
   int n,i;
   //int len = sizeof(arr) / sizeof(arr[0]);
   int sum = 0;

   printf("Enter N:");
   scanf("%d", &n);

   ptr = (int *)malloc(sizeof(int) * n);  // dyn allocated array

   if (ptr == NULL)
     exit(1);
   printf("Enter %d integers: ", n);

   for(i = 0; i < n; i++)
	scanf("%d",&ptr[i]);    
	//scanf("%d",ptr + i);    

   //printf("len = %d\n", len);

   sum = calc_sum(ptr, n);

   printf("sum = %d\n", sum);

   free(ptr);

   exit(0);
}

