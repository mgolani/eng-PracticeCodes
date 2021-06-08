//Check given string is pelindrom or not
#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int main() {

  char *Str;
  int Length=0, i, j; 

  //Allocate memory Dynamically befor use
  Str = (char *)malloc(SIZE * sizeof(char));

  //Take Input from user
  printf("Please Enter String\n");
  scanf("%s",Str);

  //Length of string
  for(Length=0; Str[Length]; Length++);

  //Display Entered Input
  printf("Entered Input is:%s and length %d\n",Str, Length);

  //logic to check pelindrom
  for(i=0,j=Length-1; i<j; i++,j--) {
	if (Str[i]!=Str[j]) {
           printf("Not Pelindrom\n");
           return -1;
	}
  }
  if(Str[i] == Str[j])
	printf("String is Pelindrom\n"); 

  return 0;
}
