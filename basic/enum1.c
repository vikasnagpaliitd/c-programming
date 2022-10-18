#include <stdio.h>


typedef enum DAY {MON, TUE, WED, THU, FRI, SAT, SUN} day_t;

//char* id_to_name_tbl[] = {"MON", "TUE", }


int main()
{
  day_t day1 = MON;

  printf("day1=%d\n", (int) day1);

  return 0;
}
