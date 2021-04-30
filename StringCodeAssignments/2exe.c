//One line code to copy the string into another buffer
#include <stdio.h>
#include <stdlib.h>
int main() {
  char Str[10];
  char Str1[10];
  int i;
  printf("Enter String\n");
  scanf("%s",Str);
  for(i=0; Str1[i]=Str[i], Str[i]!='\0'; ++i);
  printf("\nCopied String: %s\n",Str1);
  return 0;
}