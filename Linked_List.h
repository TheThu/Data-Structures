/*
 * Linked_List.h
 *
 *  Created on: 14 Jul 2021
 *      Author: T2
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_


struct Node{
    int data;
    struct Node *next;
 };

// Type def struct
typedef struct{
	int data;
	struct Node *next;
}Node;

// Function prototypes
void Insert(int x);
void Print_List();

// Define head as global node
Node* head;

#endif /* LINKED_LIST_H_ */
