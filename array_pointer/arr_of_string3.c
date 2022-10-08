// Read N lines from user
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRING_LEN 256
#define MAX_NUM_STRINGS 50

int main()
{ 
  int num, i;
  char str[MAX_STRING_LEN];

  //int arr[100];
  //int *arr;
  //arr= malloc(sizeof(int) * num)
  //X arr[100];
  //X *arr;
  //arr= malloc(sizeof(X) * num)
  //char* arr[100];
  //char* *arr;
  //arr= malloc(sizeof(char*) * num)
  
  //char* arr_of_str[MAX_NUM_STRINGS];
  char* *arr_of_str;

  printf("How many strings you wish to enter: ");
  scanf("%d", &num);

  arr_of_str = (char**) malloc(sizeof(char*) * num); // dyn allocated array


  printf("Please enter %d string\n", num);

  // Workaround solution : consume the newline lying after the num 
  getchar();

  for(i = 0; i < num; i++)
  {
    //scanf("%s", str);
    fgets(str, MAX_STRING_LEN, stdin);
    str [ strlen(str) - 1] = '\0'; // remove newline (last char )
    //printf("You entered:[%s]\n", str);

    arr_of_str[i] = (char*) malloc(sizeof(char) * (strlen(str) + 1));
    strcpy(arr_of_str[i], str);
  }
  
  printf("Printing array of strings\n");
  for(i = 0; i < num; i++)
    printf("%d:%s\n", i, arr_of_str[i]);
 
 
  // Deallocate 
  for(i = 0; i < num; i++)
    free(arr_of_str[i]);

  free(arr_of_str);

  return 0;
}
