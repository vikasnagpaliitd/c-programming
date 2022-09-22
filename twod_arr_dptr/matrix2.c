#include <stdio.h>

#define ROWS 3
#define COLS 4

int main()
{
  int matrix[ROWS][COLS];
  int i, j;

  for(i = 0; i < ROWS; i++)
    for(j = 0; j < COLS; j++)
       matrix[i][j] = i*10 + j;

#if 0
  for(i = 0; i < ROWS; i++)
    for(j = 0; j < COLS; j++)
       printf("arr[%d][%d] = %d\n", i, j, matrix[i][j]);
#endif
  for(i = 0; i < ROWS; i++) 
  {
    for(j = 0; j < COLS; j++)
       printf("%d ", matrix[i][j]);
    printf("\n");
  }

  return 0;
}
