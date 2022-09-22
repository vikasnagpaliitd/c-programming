// Make display logic a function
#include <stdio.h>

#define ROWS 3
#define COLS 4


//void display_matrix(int (*matrix)[COLS])
//void display_matrix(int matrix[ ][COLS])
void display_matrix(int matrix[ROWS][COLS])
{
  int i, j;
  for(i = 0; i < ROWS; i++) 
  {
    for(j = 0; j < COLS; j++)
       printf("%d ", matrix[i][j]);
    printf("\n");
  }
}

int main()
{
  int matrix[ROWS][COLS];
  int (*ptr_to_arr)[COLS] = matrix;

  int i, j;

  for(i = 0; i < ROWS; i++)
    for(j = 0; j < COLS; j++)
       ptr_to_arr[i][j] = i*100 + j;

#if 0
  for(i = 0; i < ROWS; i++)
    for(j = 0; j < COLS; j++)
       printf("arr[%d][%d] = %d\n", i, j, matrix[i][j]);
#endif
  display_matrix(matrix);

  return 0;
}
