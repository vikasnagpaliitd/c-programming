#include <stdio.h>
#include <string.h>

#define MAX 100
int main()
{
  char str[MAX];

  printf("Enter name: ");
  scanf("%s", str);

  printf("Your name is %s\n", str);


  return 0;
}
