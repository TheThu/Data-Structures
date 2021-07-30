/*
 * main.c
 *
 *  Created on: 14 Jul 2021
 *      Author: T2
 */


#include "Linked_List.h"
#include "stdio.h"



int main()
{





	// Define pointer
	struct Node* A;
	// Empty List
	A = NULL;

	// allocating space in memory of size Node
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

	temp->data= 2;
	temp->next=NULL;

	A=temp;

	// Printing message
	printf("-----");
    printf("%d",A->data);
    printf("-----");
    return 0;
}
