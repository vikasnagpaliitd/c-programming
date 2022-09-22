// Comparing strings using strncmp
#include <stdio.h>
#include <string.h>

#define MAX 100
int main()
{

  //char *str1 = "hello";
  //char *str2 = "hello";
  char str1[] = "helxy";
  char str2[] = "helab";

  printf("str1=%p\n", str1);
  printf("str2=%p\n", str2);

  if (!strncmp(str1, str2, 3))
    printf("str1 is same as str2 content wise for 3 chars\n");
  else 
    printf("str1 is not same as str2 content wise for 3 chars\n");

  return 0;
}
