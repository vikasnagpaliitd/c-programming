#include <stdio.h>

int main()
{
  int data = 10;
  int *ptr = &data;
  int **dptr = &ptr;


  printf("data=%d\n", data);
  printf("&data=%p\n", &data);


  printf("ptr=%p\n", ptr);
  printf("&ptr=%p\n", &ptr);


  printf("dptr=%p\n", dptr);
  printf("&dptr=%p\n", &dptr);

  
  return 0;
}
