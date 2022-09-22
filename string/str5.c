// Comparing strings using strcmp
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

  if (!strcmp(str1, str2))
    printf("str1 is same as str2 content wise\n");
  else 
    printf("str1 is not same as str2 content wise\n");


  return 0;
}
