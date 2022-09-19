#include <stdio.h>
#include "numlist.h"


int numlist_add(int list[], int n, int elem)
{
   //check for overflow. handle error
   if (n == MAX_NUM_ELEM)
   {
      fprintf(stderr, "Error:List full\n");
      return n;
   }

   list[n] = elem;
   return n + 1;
}

#if 0
numlist_delete()
{
    /* some comment */

}

numlist_search()
{

}
#endif

void numlist_print(int list[], int n)
{
  int i;

  printf("List : ");
  for(i = 0; i < n; i++)
     printf("%d ", list[i]);
  printf("\n");

}



