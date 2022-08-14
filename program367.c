/*
************* Use of LinkeList ************

Accept linkedlist from user and display addition of digit of each elements;
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
  printf("\nElements of linked list are : \n");
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

void DisplayPerfect(PNODE Head)
{
  int iNo = 0, iSum = 0,i = 0;

  while(Head != NULL)
  {
    for(i = 1, iSum = 0, iNo = Head->Data; i <= iNo/2; i++)
    {
      if(iNo%i == 0)
      {
        iSum = iSum + i;
      }
    }
    if(iSum == iNo)
    {
      printf("\n%d is perfect number \n",iNo);
    }

    Head = Head->next;  
  }
}

void SumDigit(PNODE Head)
{
  int iNo = 0, iSum = 0;

  while(Head != NULL)
  {
    iNo = Head->Data;

    while(iNo != 0)
    {
      iSum = iSum + (iNo % 10);
      Head->Data = iNo / 10;
    }
    iSum = 0;
    printf("%d \t",iSum);
    Head = Head->next;
  }
}

int main()
{
  PNODE First = NULL;
  int iRet = 0;

  InsertFirst(&First,6);
  InsertFirst(&First,28);
  InsertFirst(&First,496);
  InsertFirst(&First,24);
  InsertFirst(&First,22);
  InsertFirst(&First,128);

  Display(First);

  SumDigit(First);

  return 0;
}