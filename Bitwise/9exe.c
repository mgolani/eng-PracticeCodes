//Reverse the bits of a given number.
#include <stdio.h>
int main() {

  int Num=0, RevNum=0, i=0;

  printf("Enter Number\n");
  scanf("%d",&Num);

//TEST: Printing Number
for(i=sizeof(Num)-1;i>=0;i--)
	printf("%d\t",(Num>>i)&1);
  for(i=sizeof(Num)-1;i>=0;i--)
	RevNum|=(Num|1<<i);

  printf("Reversed Number is %d\n", RevNum);
  return 0;
}
