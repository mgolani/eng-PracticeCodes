//Write a program to compare two strings without using strcmp function.
#include <stdio.h>
#include <stdlib.h>
int main () {

	#define STRING_SIZE 20
	char *Str1, *Str2;
	int i=0;

	Str1 = (char *)malloc(STRING_SIZE);
	Str2 = (char *)malloc(STRING_SIZE);
	printf("Enter String:1\t");
	scanf("%s", Str1);

        printf("\nEnter String:2\t");
        scanf("%s", Str2);

	for(i=0;Str1[i];i++) {
		if(Str1[i]!=Str2[i])
			break;
		else
			continue;
	}

	if(Str1[i]==Str2[i])
		printf ("Same\n");
	else
		printf("Not Same\n");
	
	return 0;
}
