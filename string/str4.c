// Comparing strings
#include <stdio.h>
#include <string.h>

#define MAX 100
int main()
{

  //char *str1 = "hello";
  //char *str2 = "hello";
  char str1[] = "hello";
  char str2[] = "hello";

  printf("str1=%p\n", str1);
  printf("str2=%p\n", str2);

  if (str1 == str2) // we are comparing pointers
    printf("str1==str2 is true\n");
  else 
    printf("str1==str2 is false\n");


  return 0;
}
