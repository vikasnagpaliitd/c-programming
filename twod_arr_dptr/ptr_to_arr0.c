// Make display logic a function
#include <stdio.h>
#define COLS 4

int main()
{
  int array[COLS] = {10, 20, 30, 40};
  //int (*ptr_to_arr)[COLS] = array; // hope that we get warning
  int (*ptr_to_arr)[COLS] = &array;

  int i;

  for(i = 0; i < COLS; i++)
      (*ptr_to_arr)[i] += 100;
       
  for(i = 0; i < COLS; i++)
      printf("%d ", array[i]);
  printf("\n");
  

  return 0;
}
