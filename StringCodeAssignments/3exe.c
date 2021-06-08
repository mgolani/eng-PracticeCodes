//Write a program to find the no. of times the character is found in a given string.
#include <stdio.h>
#include <stdlib.h>

#define SOURCE_STRING_SIZE 10

int main () {
	char *SrcStr, ch;
	int Count=0, i=0;

	//Allocate memory	
	SrcStr = (char*)malloc(SOURCE_STRING_SIZE * sizeof(char));
	
	//Fetch string and character to search from user
	printf("Enter String\n");
	scanf("%s",SrcStr);

	printf("Enter character to search\n");
	scanf(" %c",&ch);
	

	//Algo to search in string
	for(i=0;SrcStr[i];i++) {
		if (ch == SrcStr[i])
			Count++;
	}

	//Print Result
	printf("'%c' is found %d time is '%s'\n", ch, Count, SrcStr);
	return 0;
}
