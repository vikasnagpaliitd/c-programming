// Symmetrix matrix: store half
// allocate array of row pointers also dynamically
#include <stdio.h>
#include <stdlib.h>
#define N 10 // number of rows/columns


int main()
{
 
   int **matrix; // matrix


   matrix = (int**) malloc(sizeof(int*) * N);

   //int *matrix[N]; // array of pointers
   int i, j;

   // allocate space
   for(i = 0; i < N; i++)
   {
       matrix[i] = malloc(sizeof(int) * (i + 1));
       for (j = 0; j <= i; j++)
          matrix[i][j] = 100 *i + j;
   }

   for(i = 0; i < N; i++)
   {
       for (j = 0; j <= i; j++)
          printf("%d ", matrix[i][j]);
       printf("\n");
   }

   // deallocate space
   for(i = 0; i < N; i++)
       free(matrix[i]);

   free(matrix);

  return 0;
}
