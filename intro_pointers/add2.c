#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p_x; 
    int *p_y;

    int x;
    int y;

    p_x = &x;
    p_y = &y;
    printf("p_x=%p\n", p_x);
    printf("p_y=%p\n", p_y);
    printf("&x=%p\n", &x);
    printf("&y=%p\n", &y);

    printf("Enter x: ");
    scanf("%d", p_x);

    printf("Enter y: ");
    scanf("%d", p_y);

    int z = *p_x + *p_y;

    printf("z is %d\n", z);
    exit(0);
}
