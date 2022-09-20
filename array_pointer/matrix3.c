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

 printf("sizeof(matrix)=%ld\n", sizeof(matrix));
 printf("sizeof(matrix[0])=%ld\n", sizeof(matrix[0]));
 printf("sizeof(matrix[0][0])=%ld\n", sizeof(matrix[0][0]));

#if 0
 for(i = 0; i < NUM_ROWS; i++)
 {
    for(j = 0; j < NUM_COLS; j++)
       printf("%d ", matrix[i][j]);
    printf("\n");
 }
#endif


 return 0;
}
