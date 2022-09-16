// one solution
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 200

int main()
{
    char *ptr = NULL;

    ptr = (char * ) malloc(sizeof(char) * MAX_LEN);

    strcpy(ptr, "hello world");

    printf("%s\n", ptr);

    free(ptr);

    exit(0);
}
