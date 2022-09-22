#include <stdio.h>


int main()
{
  char *ptr = "hello"; // strlen = 5. sizeof(ptr)=sizeof(address)
  
   ptr[0] = 'H'; // invalid semantics.
 
  char arr1[] = "good"; //strlen = 4, sizeof(arr1) = 5
  arr1[0] = 'G'; // valid

  char arr2[20] = "good"; //strlen = 4, sizeof(arr2) = 20

  char arr3[4] = "good"; //strlen = undefined, sizeof(arr3) =4 
  char arr4[4] = {'g', 'o', 'o', 'd', '\0'}; //strlen = undefined, sizeof(arr3) =4 

  printf("%ld\n", sizeof(arr3));
  //strlen vs sizeof


  return 0;
}
