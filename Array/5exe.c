//Write a C program to reverse  the elements of a given array [same array to reverse]
#include <stdio.h>
#include <stdlib.h>
int main () {
	int *Arr,i=0,j=0,tmp=0;

	Arr = (int *)malloc(5);
  	printf ("Insert 5 elements\n");	
	for (i=0; i<5 ; i++) {
	  printf ("%d:\t",i+1);
	  scanf("%d",&Arr[i]);
	}
	  printf("Entered Elements\n{%d,%d,%d,%d,%d}\n",Arr[0],Arr[1],Arr[2],Arr[3],Arr[4]);

	  for(i=0,j=4;i<j;i++,j--) {
	    tmp=Arr[j];
	    Arr[j]=Arr[i];
	    Arr[i]=tmp;
	  }

	  printf("Entered Elements\n{%d,%d,%d,%d,%d}\n",Arr[0],Arr[1],Arr[2],Arr[3],Arr[4]);

	return 0;
}
