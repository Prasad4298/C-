/*
************* Use of LinkeList ************
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
  int Data;
  struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int no)
{
  PNODE newn = NULL;
 
  newn = (PNODE) malloc (sizeof(NODE));
  newn->Data = no;
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
    printf("|%d|-> ",Head->Data);
    Head = Head->next;
  }
  printf("NULL\n");
}

int summation(PNODE Head)
{
  int iSum = 0;

  while(Head != NULL)
  {
    iSum = iSum + (Head->Data);
    Head = Head->next;
  }
  return iSum;
}

int Maximum(PNODE Head)
{
  int iMax = 0;
  
  if(Head != NULL)
  {
    iMax = Head->Data;
  }

  while(Head != NULL)
  {
    if(iMax < Head->Data)
    {
      iMax = Head->Data;
    }
    Head = Head->next;
  }
  return iMax;
}

int Frequency(PNODE Head, int iNo)
{
  int iCnt = 0;

  while(Head != NULL)
  {
    if(iNo == Head->Data)
    {
      iCnt++;
    }
    Head = Head->next;
  }
  return iCnt;
}

int main()
{
  PNODE First = NULL;
  int iRet = 0;

  InsertFirst(&First,50);
  InsertFirst(&First,40);
  InsertFirst(&First,30);
  InsertFirst(&First,20);
  InsertFirst(&First,10);

  Display(First);

  iRet = Frequency(First,20);
  printf("Frequency is : %d\n",iRet);

  return 0;
}