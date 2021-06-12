//WAP to find the given number is even or odd using bitwise operators.
#include <stdio.h>
int main() {

	int Num;

	printf("Enter Num\n");
	scanf("%d",&Num);

	(Num & 1) ? printf("Odd Number\n") : printf("Even Number\n");

	return 0;
}
