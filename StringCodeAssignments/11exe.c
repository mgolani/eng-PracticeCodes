//Delete Duplicate characters in a given string
#include <stdio.h>
int main() {
  char *Str;
  int Length=0, i, j, k,l;
  //Take Input from user
  printf("Please Enter String\n");
  scanf("%s",Str);

  //Length of string
  for(Length=0; Str[Length]!='\0'; Length++);

  //Display Entered Input
  printf("Entered Input is:%s and length %d\n",Str, Length);

  //Logic to delete duplicate characters.
  for(i=0;i<Length-1;i++) {
     for(j=i+1;j<Length;j++) {
	      if(Str[i]==Str[j]){
	        l=j;
	        for(k=j+1;k<Length;k++)
	           Str[j++]=Str[k];
	        Str[k-1]='\0';
          j=l-1;
          Length--;
        }
     }
  }

  //Display Entered Input
  printf("Result String:%s\n",Str);
  return 0;
}
