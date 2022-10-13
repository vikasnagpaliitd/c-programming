#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LEN 80
#define MAX_ADDRESS_LEN 80
#define MAX_LINE_LENGTH 256

int main(int argc, char *argv[])
{
   FILE *fp;
   int ret; // return status
   int age;
   char name[MAX_NAME_LEN];
   char address[MAX_ADDRESS_LEN];
   char line[MAX_LINE_LENGTH];
   char *ret_str;

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
   while((ret_str = fgets(line, MAX_LINE_LENGTH, fp)) != NULL)
   {
      // Remove the newline at end
      line[strlen(line) - 1] = '\0';
      // Name, Age, Address
      ret = sscanf(line, "%[^,],%d,%[^,]", name, &age, address);
      if (ret == 3)
         printf("name=[%s], age=%d, address =[%s]\n", name, age, address);
      else
         printf("fscanf could not read 3 values : Ignoring line=%s\n", line);
   }

   /* Close file */
   fclose(fp);
   
   exit(0);
}
