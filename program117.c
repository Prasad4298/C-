/*

// 	Singly Linear Linked list

	this 8 functions is same in all linked list

	InsertFirst
	InsertLast
	InsertAtPosition

	DeleteFirst
	DeleteLst
	DeleteAtPosition

	Display
	Count

*/

#include<stdio.h>
#include<stdlib.h>

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

/*
	1 : Allocate memory for node
	2 : Initialise the node
	3 : Check whether LL is empty or not
	4 : If LL is empty then new node si the First node
	5 : If Ll contains atleast the node in it then store the address of previous first node in the next pointer of new node
*/

void InsertFirst(PPNODE Head, int iNo)	// InsertFirst(struct node ** Head, int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = iNo;
	newn -> next = NULL;	

	if(*Head == NULL)	// if LL is empty
	{
		*Head = newn;
	}
	else	// if LL contains atleast one node
	{
		newn -> next = *Head;
		*Head = newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("%d\t", Head -> data);
		Head = Head -> next;
	}	
}

int main()
{
	PNODE First = NULL;		// struct node * First = NULL;

	InsertFirst(&First,101);
	InsertFirst(&First,51);
	InsertFirst(&First,21);
	InsertFirst(&First,11);

	Display(First);

	return 0;
}

/*
	Rules:-

	1 : Use only dynamic memory allocations

	2 : Don't write any techinal syantax in main

	3 : Don't use any global variables

	4 : Be careful while manipulating the First pointer

	5 : If the function is not going to modify the LL Pass the First pointer directry .	
		(Display, Count)

	6 : If the function is goint to modify the LL Pass the address of the First pointer .	
		(InserFirst, InsertLast, InsertAtPos, DeleteFirst, DeleteLast, DeleteAtPos)




*/		