// function pointer: Declaring funcn ptr type
#include <stdio.h>

typedef int (*operation_t)(int);

int doubler(int x)
{
  return x*2;
}

int tripler(int x)
{
  return x*3;
}

operation_t operation_arr[] = {doubler, tripler, doubler};

int main()
{
  int arr[] = {10,20,30};
  int num = sizeof(arr) /sizeof(arr[0]);
  int op_num = sizeof(operation_arr) /sizeof(operation_arr[0]);
  int i, op;

  for(i=0;i<num;i++)
    for(op=0;op<op_num;op++)
      arr[i] = operation_arr[op](arr[i]);


  for(i=0;i<num;i++)
    printf("%d ", arr[i]);

  return 0;
}
