//Write Program to compare two strings without strcmp function
//int strcmp(const char *s1, const char *s2);
#include <stdio.h>
#include <stdlib.h>
int
StrCmp (char *Str1, char *Str2) {
    while(*Str1!='\0') {
      if(*Str1!=*Str2)
        break;
    
      Str1++;
      Str2++;
    }
    if(*Str1==*Str2){
        printf("Both are same\n");
        return 0;
    } else {
        printf("Both are not same\n");
        return -1;
    }
}

int
main() {
  char *Str1=malloc(10);
  char *Str2=malloc(10);
  int  Status;

  printf("Please enter String-1\n");
  scanf("%s", Str1);
  printf("Please enter String-2\n");
  scanf("%s", Str2);

  Status=StrCmp(Str1,Str2);
  return Status;
}