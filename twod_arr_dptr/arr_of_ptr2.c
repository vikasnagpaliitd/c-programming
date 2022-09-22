#include <stdio.h>
#define ROWS 3
#define DIM_ARR 2


int main()
{
   int x_arr[DIM_ARR] = {10, 11};
   int y_arr[DIM_ARR] = {20, 21};
   int z_arr[DIM_ARR] = {30, 31};
   int i, j;


   int *arr_of_ptr[ROWS] = {x_arr, y_arr, z_arr};


   for(i = 0; i < ROWS; i++)
   {
      printf("Contents of row %d  are: ", i);
      for(j = 0; j < DIM_ARR; j++)
         //printf("%d ", arr[j]);
         printf("%d ", arr_of_ptr[i][j]);
   }


  return 0;
}
