#include <stdio.h>
#include <string.h>


int main()
{
  char str1[10] = "hello";
  char str2[] = "good world";

  //strcat(str1, str2); // buffer overflow, memory error

  int space_left = sizeof(str1) - strlen(str1) - 1;
  strncat(str1, str2, space_left);


  printf("%s\n", str1);


  return 0;
}
