// ./a.out file1
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  FILE *fp;
  long int size;

  if (argc != 2)
  {
     fprintf(stderr, "Usage:%s filename\n", argv[0]);
     return 1;
  }

  fp = fopen(argv[1], "r");
  if (fp == NULL)
  {
     fprintf(stderr, "Unable to open file\n");
     perror(argv[1]);
     exit(1);
  }

  // fseek() to end
  fseek(fp, 0, SEEK_END);

  // get value of ftell()
  size = ftell(fp);

  printf("%s has size %ld\n", argv[1], size); 

  return 0;
}
