/* Number list 
   add
   delete
   search
   (CRUD : Create, Read, Update, Delete) */
#include <stdio.h>

#define MAX_NUM_ELEM 100

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

int main()
{
    int list[MAX_NUM_ELEM] ; // do not initialize for sake of performance
    int n = 0;

    n = numlist_add(list, n, 1000); // add 1000 to the list
    n = numlist_add(list, n, 2000); // add 2000 to the list

    numlist_print(list, n);
    return 0;
}









