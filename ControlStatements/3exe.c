//Write a C Program to reverse the digits of a given number
#include <stdio.h>
int main () {
	int Num=0,Sum=0;

	//Fetch Number from User
	printf("Enter Number\n");
	scanf("%d",&Num);

	//Algo to reverse Digit
	for (;Num;Sum=Sum*10+Num%10, Num/=10);

	//Print Result
	printf("Result:%d\n",Sum);
	return 0;
}
