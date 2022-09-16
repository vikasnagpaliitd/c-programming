// second solution
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 200

int main()
{
    char ptr[MAX_LEN];

    strcpy(ptr, "hello world");

    printf("%s\n", ptr);

    exit(0);
}
