#include <stdio.h>
#define MAX_LEN 20

int main()
{
 int array[MAX_LEN];
 int *ptr1, *ptr2;

 // Fill values in array
 for(i = 0; i < MAX_LEN; i++)
   array[i] = 20 + i;

 printf("sizeof(pointer)=%ld", sizeof(ptr1));
 printf("sizeof(array)=%ld", sizeof(array));


 ptr1 = array;

 printf("*ptr1=%d\n", *ptr1);
 printf("ptr1[0]=%d\n", ptr1[0]); // will this syntax work?


 ptr2 = ptr1 + 5; 
 printf("*ptr2=%d\n", *ptr1);
 printf("*(ptr1+5)=%d\n", *(ptr1+5));
 printf("ptr1[5]=%d\n", ptr1[5]);

 return 0;
}
