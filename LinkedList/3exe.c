//Write a Singly linked list program to delete a particular according to any signature of a given structure.
#include <stdio.h>
#include <stdlib.h>
#include "LinkedListHelper.h"

ST *HeadPtr=0;

int main() {

	int Status;

	//Adding few nodes at beginning
	Status = AddBegin(&HeadPtr);
	if(Status!=0) {
		printf("Error adding node at begining\n");
		return -1;
	}

	AddBegin(&HeadPtr);
        if(Status!=0) {
                printf("Error adding node at begining\n");
                return -1;
        }

	AddBegin(&HeadPtr);
	if(Status!=0) {
                printf("Error adding node at begining\n");
                return -1;
        }

	AddBegin(&HeadPtr);
        if(Status!=0) {
                printf("Error adding node at begining\n");
                return -1;
        }

	//Print Nodes
	PrintNodes(HeadPtr);
        if(Status!=0) {
                printf("Error printing Nodes\n");
                return -1;
        }
	//Delete Node
	DeleteNode(&HeadPtr,2);
        if(Status!=0) {
                printf("Error Deleting node\n");
                return -1;
        }

	//Print Nodes
	PrintNodes(HeadPtr);
        if(Status!=0) {
                printf("Error Printing Node\n");
                return -1;
        }

	return 0;
}
