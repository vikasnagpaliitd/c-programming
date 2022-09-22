#include <stdio.h>

#define MAX_ROWS 3
#define MAX_COLS 4

int main()
{
  int matrix[MAX_ROWS][MAX_COLS];

  printf("sizeof(matrix)=%ld\n", sizeof(matrix));  
  printf("sizeof(matrix[0])=%ld\n", sizeof(matrix[0]));  
  printf("sizeof(matrix[0][0])=%ld\n", sizeof(matrix[0][0]));  

  return 0;
}
