#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME_LEN 80

int main(int argc, char *argv[])
{
   FILE *fp;
   int ret; // return status
   int val;
   char name[MAX_NAME_LEN];

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
      ret = fscanf(fp, "%s%d", name, &val);
      if (ret == 2)
         printf("name=%s, val = %d\n", name, val);
   }

   /* Close file */
   fclose(fp);
   
   exit(0);
}
