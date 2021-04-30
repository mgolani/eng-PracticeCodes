//Find String Length using Pointer
#include <stdio.h>
int main() {

  char Str[10]="HELLO";
  char *Ptr;
  int Length=0;

  Ptr=Str;

  for(;*Ptr!='\0';++Ptr,++Length);
  printf("Str Length=%d\n",Length);

  return 0;
}