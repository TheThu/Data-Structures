/*
 * Linked_List.h
 *
 *  Created on: 14 Jul 2021
 *      Author: The Thu Tran
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_




// Type def struct
typedef struct Node{
	int data;
	struct Node *next;
}Node_t;

// Function prototypes



void Insert(int data, int n);
void Print_List();
void Delete(int n);

// Define head as global node
Node_t* head;

#endif /* LINKED_LIST_H_ */
