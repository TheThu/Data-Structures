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




// Inserting Nodes at positiontemp3
	Insert(2,1);
	Insert(3,2);
	int a= getNumberOfNodes(head);
	printf("Numbers o Nodes %d ",a);
//	Insert(4,1);
//	Insert(5,2);

	Print_List();
    return 0;
}
