/*
 * main.c
 *
 *  Created on: 14 Jul 2021
 *      Author: T2
 */


#include "Linked_List.h"
#include "stdio.h"
#include "stdlib.h"


int main()
{

	head = NULL;


	// Inserting Nodes
	Insert(2,1);
	Insert(5,2);
	Insert(4,3);
	// Print List
	Print_List();

	int n;
	printf(" Enter a deleting position \n ");

	// Read deleting position n
	scanf("%d",&n);
	// Delete Node at nth position
	Delete(n);

	// Print List

	Print_List();

    return 0;
}
