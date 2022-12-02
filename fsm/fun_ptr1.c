// function pointer: introduction
#include <stdio.h>

int doubler(int x)
{
  return x*2;
}

int tripler(int x)
{
  return x*3;
}

int main()
{
  int arr[] = {10,20,30};
  int num = sizeof(arr) /sizeof(arr[0]);
  int i;

  int (*operation)(int); // declaring a function point
  operation = doubler;
  //operation = tripler;


  for(i=0;i<num;i++)
    arr[i] = operation(arr[i]);


  for(i=0;i<num;i++)
    printf("%d ", arr[i]);

  return 0;
}
