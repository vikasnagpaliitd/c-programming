#include <stdio.h>

#define NUM_ROWS 3
#define NUM_COLS 4

//void func(int arr[100]) // array of 
///void func(int arr[])
//void func(int *arr)

//void display_matrix(int matrix[NUM_ROWS][NUM_COLS])
//void display_matrix(int matrix[ ][NUM_COLS])
void display_matrix(int (*matrix)[NUM_COLS])

{
 int i,j;
 printf("sizeof(matrix)=%ld\n", sizeof(matrix));
 printf("matrix=%p\n", matrix);
 matrix++;
 printf("after incr: matrix=%p\n", matrix);

#if 0
 for(i = 0; i < NUM_ROWS; i++)
 {
    for(j = 0; j < NUM_COLS; j++)
       printf("%d ", matrix[i][j]);
    printf("\n");
 }
#endif

}

int main()
{
  int matrix[NUM_ROWS][NUM_COLS]=
               {  
                {10, 11, 12, 13},
                {20, 21, 22, 23},
                {30, 31, 32, 33}
               };


 display_matrix(matrix);


 return 0;
}
