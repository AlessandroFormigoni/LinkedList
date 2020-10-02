#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

const char *symb ="\\|/-";

typedef struct Node
{
	int val;
	Node *next;
}Node;

void addNode(Node *n)
{
	int _n;
	printf("Inserire valore: ");
	scanf("%d", &_n);
	n->val = _n;
	n->next = NULL;
	
}

Node* createNode()
{
	Node *newNode = (Node*) malloc(sizeof(newNode));
	int _n;
	printf("Inserire valore: ");
	scanf("%d", &_n);
	newNode->val = _n;
	newNode->next = NULL;
	return newNode;
}

int size(Node *n)
{
	Node *current = n;
	int count=0;
	
	while(current->next!=NULL)
	{
		current = current->next;
		count++;
	}
	
	return count;
}

void addToEnd(Node *n)
{
	Node *current = n;
	while(current->next!=NULL) {current = current->next;}
	current->next = createNode();
}

void printStream(Node *n)
{
	Node *current = n;
	while (current!=NULL)
	{
		printf("%d\n", current->val);
		current = current->next;
	}
}
