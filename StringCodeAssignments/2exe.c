//- [ ] Write a one line code to copy the string into another buffer.

#include <stdio.h>
#include <stdlib.h>
#define SIZE_OF_STRING 10
int main () {
	char *Str, *DupStr;
	int i;
	Str=(char *)malloc(sizeof(char) * SIZE_OF_STRING);
	DupStr = (char *)malloc(sizeof(char) * SIZE_OF_STRING);

	printf("Enter String\n");
	scanf("%s",Str);

	for(i=0;DupStr[i]=Str[i],Str[i];i++);
	DupStr[i]='\0';

	printf("DupStr:%s\n",DupStr);
	
	return 0;
}
