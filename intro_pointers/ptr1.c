#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *ptr = NULL;

    strcpy(ptr, "hello world");

    printf("%s\n", ptr);

    exit(0);
}
