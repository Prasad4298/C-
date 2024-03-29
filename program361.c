/*
************* Use of LinkeList ************
*/
#include<stdio.h>
#include<lib.h>

typedef struct node
{
  int Data;
  struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int no)
{
  PNODE newn = NULL;
 
  newn = (PNODE) malloc (sizeof(NODE));
  newn->data = no;
  newn->next = NULL;

  if(*Head != NULL)
  {
    newn->next = *Head;
  }
  *Head = newn;
}

void Display(PNODE Head)
{
  printf("Elements of linked list are : ");
  while(Head != NULL)
  {
    printf("|%d|-> ",Head->data);
    Head = Head->next;
  }
  printf("NULL\n");
}

int main()
{
  PNODE First = NULL;

  InsertFirst(&First,50);
  InsertFirst(&First,40);
  InsertFirst(&First,30);
  InsertFirst(&First,20);
  InsertFirst(&First,10);

  Display(First);

  return 0;
}