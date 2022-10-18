// const, pointer to const, const pointer
#include <stdio.h>

const float PI = 3.14;
const int MAX_PERSONS=500;

int main()
{
   int xyz=100;
   int *ptr1;
   ptr1 = &MAX_PERSONS; // is it valid?

   const int *ptr2; // pointer to const
   ptr2 = &xyz; // is it valid

   int * const ptr3 = &xyz; // const pointer
   ptr3 = NULL; // will not compile

  return 0;
} 
