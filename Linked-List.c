/*
 * Linked-List.c
 *
 *  Created on: 1 Aug 2021
 *      Author: T2
 */

#include "Linked_List.h"
#include "stdio.h"
#include "stdlib.h"

// Insert Node at beginning

void Insert(int x)
{
	// List is empty
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = x;
	temp->next = head;
	head = temp;
}

// Print list from head to tail
void Print_List(){

	// Begin at head
	Node* temp= head;

	while(temp!= NULL)
	{
		// Print data
		printf("--[%d]--",temp->data);
		// Go to next adress
		temp = temp->next;
	};
	printf("\n");
}
