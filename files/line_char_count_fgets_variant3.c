// ./a.out infile outfile
// line:charcount is written to outfile
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main(int argc, char *argv[])
{
  FILE *infile;
  FILE *outfile;

  char line[MAX_LINE_LENGTH];
  int count;
  //int len;
  char *ret;

  if (argc != 3)
  {
     fprintf(stderr, "Usage:%s infile outfile\n", argv[0]);
     return 1;
  }

  infile = fopen(argv[1], "r");
  if (infile == NULL)
  {
     fprintf(stderr, "Unable to open input file\n");
     perror(argv[1]);
     exit(1);
  }

  outfile = fopen(argv[2], "w");
  if (outfile == NULL)
  {
     fprintf(stderr, "Unable to open input file\n");
     perror(argv[2]);
     exit(1);
  }


  ret = fgets(line, MAX_LINE_LENGTH, infile);
  while(ret != NULL)
  {

     // Remove the newline at end of string
     //len = strlen(line);
     line[strlen(line) - 1] = '\0'; 
 
     // count char using strlen
     count = strlen(line);

     // print line and count in outfile
     fprintf(outfile, "%s:%d\n", line, count);

     ret = fgets(line, MAX_LINE_LENGTH, infile);
  }

  fclose(infile);
  fclose(outfile); 

  return 0;
}
