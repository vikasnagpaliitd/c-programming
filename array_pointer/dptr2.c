#include <stdio.h>

int main()
{
  int data = 10;
  int *ptr = &data;
  int **dptr = &ptr;

  // Increment data given dptr....
  //(**dptr)++;
  **dptr++;
  printf("%d\n", data);

  
  return 0;
}
