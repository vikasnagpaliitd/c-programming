// Insert a string in middle of another string
#include <stdio.h>
#include <string.h>
#define MAX_LEN 50

int main()
{
  char str[MAX_LEN] ="hello world";
  int num = strlen(str);
  char *new_substr="nice";
  int len_new_substr = strlen(new_substr);

  int pos=5, i; // starts from 0. 
  
  //We wish to insert at position pos.
  
  // Shift everything from pos till end len_new_substr steps right
  for(i=num-1; i >= pos; i--)
     str[i + len_new_substr] = str [i];
  // Use strncpy, as strcpy would also copy '\0'
  strncpy(str + pos, new_substr, len_new_substr);

  printf("str=%s\n", str);
  return 0;

}
