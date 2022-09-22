// our own my_strcpy()
#include <stdio.h>
#include <string.h>

void my_strcpy(char *dest, const char *src)
{

   int i;
   int len = strlen(src);
 
   for(i = 0; i < len + 1; i++)
     dest[i] = src[i];
#if 0
   //while (*src != '\0')
   while (*src)
   {
      *dest = *src;
      src++;
      dest++;
   }
#endif
#if 0 
   while (*src)
      *dest++ = *src++;
   *dest = '\0';
#endif

}

int main()
{
  char str1[] = "hello abcd efgh uytr";
  char str2[] = "good world";

  my_strcpy(str1, str2); 
  //strncpy(str1, str2, sizeof(str1));  // danger. no space for '\0'
  //strncpy(str1, str2, sizeof(str1)-1); 

  printf("str1=%s\n", str1);


  return 0;
}
