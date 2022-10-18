#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p_x; 
    int *p_y;
    
    //int x,y;

    int **pp_x = &p_x;
    int **pp_y = &p_y;

    p_x = (int *) malloc(sizeof(int));
    p_y = (int *) malloc(sizeof(int));
    //p_x = &x;
    //p_y = &y;

    printf("Enter x: ");
    scanf("%d", *pp_x);

    printf("Enter y: ");
    scanf("%d", *pp_y);

    int z = **pp_x + **pp_y;

    printf("z is %d\n", z);

    free(p_x);
    free(p_y);
    exit(0);
}
