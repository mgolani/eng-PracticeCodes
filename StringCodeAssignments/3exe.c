//Write Program to find number of times character found in string
#include <stdio.h>
#include <stdlib.h>

int main() {
  char *Str=malloc(10), Ch;
  int Count;
  printf("Enter String\n");
  scanf("%s", Str);

  printf("enter character\n");
  scanf(" %c",&Ch);

  for(;*Str!='\0'; ++Str)
    if(*Str==Ch)
        Count++;

  printf("%d times char %c present\n", Count, Ch);
}