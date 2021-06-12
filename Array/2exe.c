//Write a C program to input 10 numbers through the keyboard into an array and find the  biggest and smallest number in an Unsorted array without using any Sorting Technique.
#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_ARRAY 10

int main () {

	int *Array, Big=0, Small=0, i=0;

	Array = (int *)malloc(sizeof(int)*SIZE_OF_ARRAY);

	for (i=0;i<SIZE_OF_ARRAY;i++) {
		printf("Element: %d\t",i+1);
		scanf("%d", &Array[i]);
		printf("\n");
	}

	Big = Array[0];
	Small = Array[0];
	
	for(i=0;i<SIZE_OF_ARRAY;i++) {
		if(Array[i]>Big)
			Big=Array[i];
		if(Array[i]<Small)
			Small=Array[i];
	}
	
	printf("Biggest = %d Smallest = %d\n", Big, Small);
}
