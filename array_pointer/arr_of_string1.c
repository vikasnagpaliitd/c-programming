// Read N lines from user
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRING_LEN 256

int main()
{ 
  int num, i;
  char str[MAX_STRING_LEN];

  printf("How many strings you wish to enter: ");
  scanf("%d", &num);
  printf("Please enter %d string\n", num);

  // Workaround solution : consume the newline lying after the num 
  getchar();

  for(i = 0; i < num; i++)
  {
    //scanf("%s", str);
    fgets(str, MAX_STRING_LEN, stdin);
    str [ strlen(str) - 1] = '\0'; // remove newline (last char )
    printf("You entered:[%s]\n", str);
  }

  return 0;
}
