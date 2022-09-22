#include <stdio.h>
#include <string.h>



int main()
{
  //char *sentence = "how are you"; // DANGER. strtok will put \0 in string literal
  char sentence[] = "how are you";
  char *delim = " ";

  char *first;
  first = strtok(sentence, delim);

  while (first != NULL)
  {
       printf("Token : %s\n", first);
       first = strtok(NULL, delim);
  }

}

