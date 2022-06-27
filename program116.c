#include<stdio.h>
#include<stdlib.h>

// Stucture declaration
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

// juna naw			Nawin naw
// struct node 		NODE
// struct node *	PNODE
// struct node **	PPNODE	

int main()
{
	// static memory allocation
	NODE obj;

	// dynamic memory allocation
	PNODE ptr = (PNODE)malloc(sizeof(NODE));

	obj.data = 11;
	obj.next = NULL;

	ptr -> data = 11;
	ptr -> next = NULL;

	return 0;
}