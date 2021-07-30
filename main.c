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
	Node * temp= (Node*)malloc(sizeof(A));

	// Filling List with value
	temp->data = 1337;

	// Pointer to next to NULL
	temp->next = NULL;

	// Writing adress in A
	A = temp;

	// Printing Node data
	printf("Value is %d \n", A->data);
    return 0;
}
