/*
 * Write a C program to input 10 numbers through the keyboard and find the number of prime numbers count
 * store  them into a seperate array and display it
 */
#include <stdio.h>
#include <stdlib.h>

#define SOURCE_ARRAY_SIZE 10

int main () {

	int *SourceArr, *DestArr,i,j,PrimeNumCount=0,Ele=0;

	//Memory Allocations to array
	SourceArr = (int *)malloc(SOURCE_ARRAY_SIZE * sizeof(int));
	DestArr = (int *)malloc(SOURCE_ARRAY_SIZE * sizeof(int));

	//Scanning Source elements
	printf("Enter %d Elements to array\n", SOURCE_ARRAY_SIZE);
	for(i=0;i<SOURCE_ARRAY_SIZE;i++) {
		printf("Element %d:\t", i+1);
		scanf("%d",&SourceArr[i]);
		printf("\n");
	}

	//Finding and Sorting Prime Numbers
	for(i=0;i<SOURCE_ARRAY_SIZE;i++) {
		if(SourceArr[i]==1) {
			printf("1 can not be counted as prime number\n");
			continue;
		}
		for(j=2;j<=SourceArr[i];j++) {
			if((SourceArr[i]%j)==0)
				break;
		}
		if(j==SourceArr[i]) {
			PrimeNumCount++;
			DestArr[Ele]=SourceArr[i];
			Ele++;
		}	
	}

	printf("Prime number count is %d\n",PrimeNumCount);
	for(i=0;i<PrimeNumCount;i++) {
		printf("Element %d:\t%d\n\n", i, DestArr[i]);
	}
	return 0;
}
