#include <stdio.h>
#include <string.h>
#define MAX_LEN 50

int main()
{
  char str[MAX_LEN] ="hello world";
  int num = strlen(str);
  char ch=':';
  int pos=5, i; // starts from 0. 
  
  //We wish to insert at position pos.
  
  // Shift everything from pos till end 1 step right
  for(i=num-1; i >= pos; i--)
     str[i + 1] = str [i];
  str[pos] = ch;

  printf("str=%s\n", str);
  return 0;

}
