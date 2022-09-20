#include <stdio.h>

#define NUM_ROWS 3
#define NUM_COLS 4

int main()
{
  int matrix[NUM_ROWS][NUM_COLS]=
               {  
                {10, 11, 12, 13},
                {20, 21, 22, 23},
                {30, 31, 32, 33}
               };

  int i,j;
  int *ptr = matrix;

 for(i = 0; i < NUM_ROWS * NUM_COLS; i++, ptr++)
      printf("%d ", *ptr);


 return 0;
}
