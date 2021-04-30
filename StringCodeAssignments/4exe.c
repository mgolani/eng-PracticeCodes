//Write Program to find vowels(a,e,i,o,u) found in string
#include <stdio.h>
#include <stdlib.h>

int main() {
  char *Str=malloc(10), Ch;
  int Count;
  printf("Enter String\n");
  scanf("%s", Str);

  for(;*Str!='\0'; ++Str)
    if(*Str=='a' || *Str=='e' || *Str=='i' || *Str=='o' || *Str=='u')
        Count++;

  printf("%d vowels present\n", Count);
}