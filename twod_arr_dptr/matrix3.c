// Make display logic a function
#include <stdio.h>

#define ROWS 3
#define COLS 4

//int arr[ ][20][30][40][50][60]; // you can omit 1st dim only
#if 0
int arr[COLS];
int (*ptr_to_array)[COLS]; // ptr_to_array[i][j]
int *arr_of_ptrs[ROWS];

void func(int *ptr, int n)
void func(int arr[], int n)
void func(int arr[MAX], int n)
#endif

void display_matrix(int (*matrix)[ROWS])
//void display_matrix(int (*matrix)[COLS])
//void display_matrix(int matrix[ ][COLS])
//void display_matrix(int matrix[ROWS][COLS])
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
  int i, j;

  for(i = 0; i < ROWS; i++)
    for(j = 0; j < COLS; j++)
       matrix[i][j] = i*10 + j;

#if 0
  for(i = 0; i < ROWS; i++)
    for(j = 0; j < COLS; j++)
       printf("arr[%d][%d] = %d\n", i, j, matrix[i][j]);
#endif
  display_matrix(matrix);

  return 0;
}
