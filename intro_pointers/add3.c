#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p_x; 
    int *p_y;

    p_x = (int *) malloc(sizeof(int));
    p_y = (int *) malloc(sizeof(int));

    printf("p_x=%p\n", p_x);
    printf("p_y=%p\n", p_y);

    printf("Enter x: ");
    scanf("%d", p_x);

    printf("Enter y: ");
    scanf("%d", p_y);

    int z = *p_x + *p_y;

    printf("z is %d\n", z);

    free(p_x);
    free(p_y);
    exit(0); 
}
