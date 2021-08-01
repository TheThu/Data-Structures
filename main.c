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
	int n,i,x;

	printf("How many numbers? \n");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("Enter the number \n");
		scanf("%d",&x);
		Insert(x);
		Print_List();

<<<<<<< HEAD
	}
=======

// Inserting Nodes
	Insert(2,1);
	Insert(5,2);
	Insert(4,3);


	Print_List();
>>>>>>> cb41224... Inserting Node in n position
    return 0;
}
