//Reverse String using Loops
#include <stdio.h>
#include <stdlib.h>

int
StrRev (char *Str) {
    int Length=0, i=0, j=0;
    char Temp;
    char *Ptr=Str;

    for(Length=0 ; (*Ptr)!='\0';++Ptr,++Length);
    for(i=0,j=Length-1;i<j;i++,j--) {
        Temp=Str[j];
        Str[j]=Str[i];
        Str[i]=Temp;
    }
    printf("\n%s\n",Str);
    return 0;
}

int
main(){
    char *Str=malloc(10);
    int Status;

    printf("Enter String\n");
    scanf("%s", Str);

    Status = StrRev(Str);

    return Status;
}
