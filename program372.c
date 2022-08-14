/*
************* Use of LinkeList ************

Accept linkedlist from user and return middle elements.
(reduce time complicity)
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

int MaxNo(PNODE Head)
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
      iNo = iNo / 10;
    }
    iSum = 0;
    printf("%d \t",iSum);
    Head = Head->next;
  }
}

int SearchFirstOccur(PNODE Head, int iNo)
{
  int iPos = 1;
  while(Head != NULL)
  {
    if(Head->Data == iNo)
    {
      break;
    }
    iPos++;
    Head = Head->next;
  }
  if(Head == NULL)
  {
    return -1;
  }
  else
  {
    return iPos;
  }
}

int SearchLastOccur(PNODE Head, int iNo)
{
  int iPos1 = 1, iPos2 = 1;

  while(Head != NULL)
  {
    if(Head->Data == iNo)
    {
      iPos2 = iPos1;
    }
    iPos1++;
    Head = Head->next;
  }
  return iPos2;
}

int MiddleElement(PNODE Head)
{
  int iSize = 0, i = 0;
  PNODE temp = Head;

  while(Head != NULL)
  {
    iSize++;
    Head = Head->next;
  }

  Head = temp;

  for(i = 0; i < iSize/2; i++)
  {
    Head = Head->next;
  }
  return Head->Data;
}

int MiddleElementX(PNODE Head)
{
  PNODE Fast = Head;
  PNODE Slow = Head;

  while((Fast != NULL) && (Fast->next != NULL))
  {
    Fast = Fast->next->next;
    Slow = Slow->next;
  }
  return Slow->Data;
}

int main()
{
  PNODE First = NULL;
  int iRet = 0;

  InsertFirst(&First,6);
  InsertFirst(&First,28);
  InsertFirst(&First,496);
  InsertFirst(&First,24);
  InsertFirst(&First,28);
  InsertFirst(&First,128);
  InsertFirst(&First,150);
  InsertFirst(&First,111);
  InsertFirst(&First,90);

  Display(First);

  iRet = MiddleElementX(First);
  
  printf("Middle elements is: %d",iRet);
  
  return 0;
}