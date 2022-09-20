#include <stdio.h>
#define MAX_NUM_ELEM 4

int main()
{
  int i;
 
  //int array[MAX_NUM_ELEM] = {10, 20, 30, 40}; // array of 4 elements
  //int array[MAX_NUM_ELEM] = {10, 20}; 
  int array[MAX_NUM_ELEM] = {10, 20, 30, 40, 50, 60}; 
  //int array[] = {10, 20, 30, 40, 50, 60}; // array of 6 elements

  int len = sizeof(array)/sizeof(array[0]); 

  printf("Array length=%d\n", len);
  printf("Array contents=");
  for(i = 0; i <  len; i++)
     printf("%d ", array[i]); 
  printf("\n");
  
  printf("sizeof(array)=%d\n",(int) sizeof(array));
  
  return 0;
}
