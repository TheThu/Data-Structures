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
	Insert(1,1);
	Insert(2,2);
	Insert(3,3);
	Insert(4,4);
	Insert(5,5);
	Insert(6,6);
	// Print List
	printf("Forward");
	Print_List();



	Revert_Linked_List();
	printf("Reverse");
	Print_List();
    return 0;
}
