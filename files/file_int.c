/* Author : Vikas Nagpal */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   FILE *fp;
   int ret; // return status
   int val;

   if (argc != 2)
   {
       fprintf(stderr, "Usage : %s <filename>\n", argv[0]);
       exit(1);
   }

   /* Open file */
   fp = fopen(argv[1], "r");
   if (fp == NULL)
   {
      printf("Unable to open file %s\n", argv[1]);
      perror("fopen");
      exit(1);
   }

   /* Process data */
   while (!feof(fp))
   {
      ret = fscanf(fp, "%d", &val);
      if (ret == 1)
         printf("val = %d\n", val);
   }

   /* Close file */
   fclose(fp);
   
   exit(0);
}
