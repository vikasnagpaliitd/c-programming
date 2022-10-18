// Scope, lifetime, Process segments (stack, heap, data, text)
// Where does each variable / memory block takes memory from? Heap/Stack/DataSegment/CodeSegment
#include <stdio.h>
#include <stdlib.h>

int glob=100;

int calc_sum(int a, int b)
{
   int sum;
   static int count_called = 0;
   sum = a + b;
   count_called++;
   return sum;
}

int main()
{
   int result;
   int *ptr1, *ptr2;
 
   ptr1 = (int *) malloc(sizeof(int));
   ptr2 = (int *) malloc(sizeof(int));

   scanf("%d%d", ptr1,ptr2);
   result = calc_sum(*ptr1, *ptr2);
   printf("result = %d\n", result);

   return 0;
}
