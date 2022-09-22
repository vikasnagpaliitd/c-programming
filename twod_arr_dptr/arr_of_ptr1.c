#include <stdio.h>
#define ROWS 3


int main()
{
   int x = 10;
   int y = 20;
   int z = 30;
   int i;


   int *arr_of_ptr[ROWS] = {&x, &y, &z};

   printf("&x=%p\n", &x);
   printf("&y=%p\n", &y);
   printf("&z=%p\n", &z);

   for(i = 0; i < ROWS; i++)
   {
      printf("arr_of_ptr[i] = %p\n", arr_of_ptr[i]);
      printf("*arr_of_ptr[i] = %d\n", *arr_of_ptr[i]);

   }


  return 0;
}
