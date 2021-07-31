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

	// Create empty list
	Node* A = NULL;

	// Allocating memory block of size Node during run time
	Node * temp= (Node*)malloc(sizeof(Node));

	// Filling List with value
	temp->data = 1337;

	// Pointer to next to NULL
	temp->next = NULL;

	// Insert Node

	// Writing adress in A
	A = temp;

	temp = (Node*)malloc(sizeof(Node));

	temp->data = 2;
	temp->next = NULL;


	Node* temp1 = A;
	// Traverse list
	while(temp1->next!=NULL)
	{
		temp1 = temp1->next;
	}

	temp1->next = temp;

	// Printing Node data
	printf("Value is %d \n", A->next->data);
    return 0;
}
