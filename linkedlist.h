#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/*
*	A struct that contains the value and the next node.
*	The value should be changed according to the desired type
*/
typedef struct Linkedlist
{
	int val;
	Linkedlist *next;
}Linkedlist;

//Deprecated
void addNode(Linkedlist *n)
{
	int _n;
	printf("Inserire valore: ");
	scanf("%d", &_n);
	n->val = _n;
	n->next = NULL;
	
}

/*
*	Internal method used to create a new node, not suggested for
*	external use. See addToEnd
*/
Linkedlist* createNode()
{
	Linkedlist *newNode = (Linkedlist*) malloc(sizeof(newNode));
	int _n;
	printf("Inserire valore: ");
	scanf("%d", &_n);
	newNode->val = _n;
	newNode->next = NULL;
	return newNode;
}

/*
*	Returns the size of the linked list
*/
int size(Linkedlist *n)
{
	Linkedlist *current = n;
	int count=0;
	
	while(current->next!=NULL)
	{
		current = current->next;
		count++;
	}
	
	return (count+1);
}

/*
*	The suggested method to use for inserting a new node
*/
void addToEnd(Linkedlist *n)
{
	Linkedlist *current = n;
	while(current->next!=NULL) {current = current->next;}
	current->next = createNode();
}

/*
*	Prints all the values contained in the list
*/
void printStream(Linkedlist *n)
{
	Linkedlist *current = n;
	while (current!=NULL)
	{
		printf("%d\n", current->val);
		current = current->next;
	}
}

/*
*	Returns the value stored at a certain node
*/
int get(Linkedlist *n, int index) {
	Linkedlist *current = n;
	for(int i=0;i<index;i++) {
		current = current->next;
	}
	return current->val;
}

/*
*	Creates a new instance of the list
*/
Linkedlist* newlinkedlist()
{
	Linkedlist *n = (Linkedlist*) malloc(sizeof(n));
	addNode(n);
	return n;
}
