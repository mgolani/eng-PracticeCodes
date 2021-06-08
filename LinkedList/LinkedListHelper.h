#include <stdlib.h>

typedef struct st{
        int Num;
        struct st *Next;
}ST;

int
CountNodes (
	ST *Ptr
	)
{
	int Count = 0;
	while(Ptr) {
		Ptr = Ptr->Next;
		Count++;
	}

	return Count;
}

int
AddBegin (
	ST **Ptr
	)
{
	
	ST *Temp;

	//Allocate Memory
	Temp = malloc(sizeof(ST));

	//Fetch Data
	printf("enter data\n");
	scanf("%d", &Temp->Num);

	//Setup Link
	Temp->Next=*Ptr;
	*Ptr=Temp;

	return 0;
}

int
PrintNodes (
	ST *Ptr
	) 
{

	int Count = 0;
	while(Ptr) {
		printf("Node:%d = %d\n",Count++,Ptr->Num);
		Ptr=Ptr->Next;
	}

	return 0;
}

int
DeleteNode (
	ST 	**Ptr,
	int 	NodeNum
	)
{
	ST *Temp=*Ptr, *Temp1=*Ptr;
	int Count=0, i;
	Count = CountNodes(*Ptr);
	printf("**TEST**NodeCount:%d NodeNum:%d\n",Count, NodeNum);
	if (!(Count>=NodeNum && Count>=0)) {
		printf("Invalid Node to delete\n");
		return -1;
	}

	if(NodeNum==0) {
		*Ptr=Temp->Next;
		free(Temp);
	} else {
		for(i=0;i<2;i++) {
			Temp1=Temp;
			Temp=Temp->Next;
		}
		Temp1->Next=Temp->Next;
		free(Temp);
	}

	return 0;
}
