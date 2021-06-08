//WAP to find the given number is +ve or -ve using bitwise operators.
#include <stdio.h>
int main () {

	int Num, LDigit, Result;

	printf("Enter Number ?\n");
	scanf("%d",&Num);

	LDigit = (sizeof(Num)*8)-1;

	Result = Num & (1 << LDigit);

	Result ? printf("Negative\n") : printf("Positive\n");

	return 0;
}
