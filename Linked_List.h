/*
 * Linked_List.h
 *
 *  Created on: 14 Jul 2021
 *      Author: T2
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_


//struct Node{
//    int data;
//    struct Node *next;
// };

// Type def struct
typedef struct Node{
	int data;
	struct Node *next;
}Node_t;

// Function prototypes
//void Insert(int x);
void Print_List();

int getNumberOfNodes(Node_t* head);

void Insert(int data, int n);

// Define head as global node
Node_t* head;

#endif /* LINKED_LIST_H_ */
