//Two solutions to ptr1.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100
int main()
{
    char *ptr;
    //char ptr[MAX_LEN];
    //char *ptr = malloc(sizeof(char) * MAX_LEN);

    strcpy(ptr, "hello world");

    printf("%s\n", ptr);

    exit(0);
}
