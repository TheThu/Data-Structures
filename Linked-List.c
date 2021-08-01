/*
 * Linked-List.c
 *
 *  Created on: 1 Aug 2021
 *      Author: T2
 */

#include "Linked_List.h"
#include "stdio.h"
#include "stdlib.h"

#include <stdbool.h>

// Insert Node_t at beginning

//void Insert(int x)
//{
//	// List is empty
//	Node_t* temp = (Node_t*)malloc(sizeof(Node_t));
//	temp->data = x;
//	temp->next = head;
//	head = temp;
//}




int getNumberOfNodes(Node_t* head){

	int NumberOfNodes = 0;
	while(head!=NULL){
		NumberOfNodes++;
		head= head->next;
	}
	return NumberOfNodes;
}


// Insert at position
void Insert(int data, int n){



		Node_t* temp1 = (Node_t*)malloc(sizeof(Node_t));
		temp1->data = data;
		temp1->next = NULL;


		// List if empty
		if(n==1)
		{
			temp1->next = head;
			head = temp1;
			return;
		}



		// Go to n-1 Node_t
		Node_t* temp2 = head;
		for (int i = 0;i<n-2;i++){
			temp2 = temp2->next;
		}
		// Adjust Link field of n-1 Node_t to adress of the last Node_t
		temp1->next = temp2->next;

		// Adjust Link field of n-2 Node_t to n-1 Node_t adress
		temp2->next = temp1;

}

// Print list from head to tail
void Print_List(){

	// Begin at head
	Node_t* temp= head;

	while(temp!= NULL)
	{
		// Print data
		printf("--[%d]--",temp->data);
		// Go to next adress
		temp = temp->next;
	};
	printf("\n");
}
