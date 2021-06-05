//Write a C program to print multiplication tables from 10 to 20
#include <stdio.h>

int main () {
	unsigned int i = 0, j= 0;
	for (i=10; i<=20; i++) {
	  for (j=1;j<=10;j++) {
		printf("%d * %d = %d\n", i,j,i*j);
	  }
	  printf("\n");
        }

	return 0;
}
