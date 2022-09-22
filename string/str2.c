#include <stdio.h>
#include <string.h>


int main()
{
  char str1[] = "hello";
  char str2[] = "good world";

  //strcpy(str1, str2); 
  //strncpy(str1, str2, sizeof(str1));  // danger. no space for '\0'
  strncpy(str1, str2, sizeof(str1)-1); 

  printf("str1=%s\n", str1);


  return 0;
}
