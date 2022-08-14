/*
********* Binory Search Tree ************

Q.1) Accept tree from user and count leaf node and return count.  
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
  int data; 
  struct node *lchild;
  struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int iNo)
{
  PNODE temp = *Head;
  PNODE newn = (PNODE)malloc(sizeof(NODE));
  newn->data = iNo;
  newn->lchild = NULL;
  newn->rchild = NULL;

  if(*Head == NULL)   // BST empty
  {
    *Head = newn;
  }
  else
  {
    while(1)
    {
      if(iNo > temp->data)    // R
      {
        if(temp->rchild == NULL)
        {
          temp->rchild = newn;
          break;
        }
        temp = temp->rchild;
      }
      else if(iNo < temp->data)   // L
      {
        if(temp->lchild == NULL)
        {
          temp->lchild = newn;
          break;
        }
        temp = temp->lchild;
      }
      else if(iNo == temp->data)   // Duplicate data
      {
        free(newn);
        printf("Data is already there in BST");
        break;
      }
    }
  }
}

void Inorder(PNODE Head)
{
  if(Head != NULL)
  {
    Inorder(Head->lchild);
    printf("%d\t",Head->data);
    Inorder(Head->rchild);
  }
}

void Preorder(PNODE Head)
{
  if(Head != NULL)
  {
    printf("%d\t",Head->data);
    Preorder(Head->lchild);
    Preorder(Head->rchild);
  }
}

void Postorder(PNODE Head)
{
  if(Head != NULL)
  {
    Postorder(Head->lchild);
    Postorder(Head->rchild);
    printf("%d\t",Head->data);
  }
}

bool Search(PNODE Head, int iNo)
{
  while(Head != NULL)
  {
    if(Head->data == iNo)   // if data is present
    {
      break;
    }
    else if(iNo > Head->data)
    {
      Head = Head->rchild;
    }
    else if(iNo < Head->data)
    {
      Head = Head->lchild;
    }
  }
  
  if(Head == NULL)
  {
    return false;
  }
  else
  {
    return true;
  }
}

// no child
int CountLeafNode(PNODE Head)
{
  static int iCnt = 0;

  if(Head != NULL)
  {
    if((Head->lchild == NULL) && (Head->rchild == NULL))
    {
      iCnt++;
    }
    
  CountLeafNode(Head->lchild);
  CountLeafNode(Head->lchild);
  }
  return iCnt;
}

// if at list one child is there
int CountLeafNode1(PNODE Head)
{
  static int iCnt = 0;

  if(Head != NULL)
  {
    if((Head->lchild == NULL) || (Head->rchild == NULL))
    {
      iCnt++;
    }
    
  CountLeafNode(Head->lchild);
  CountLeafNode(Head->lchild);
  }
  return iCnt;
}

// contains two child
int CountLeafNode2(PNODE Head)
{
  static int iCnt = 0;

  if(Head != NULL)
  {
    if((Head->lchild != NULL) && (Head->rchild != NULL))
    {
      iCnt++;
    }
    
  CountLeafNode(Head->lchild);
  CountLeafNode(Head->lchild);
  }
  return iCnt;
}

int main()
{
  PNODE First = NULL;
  bool bret = false;
  int i = 0;

  Insert(&First, 11);
  Insert(&First, 21);
  Insert(&First, 7);

  // 7  11  21   L D R    Inorder    
  // 11 7 21     D L R    Preorder
  // 7  21  11   L R D    Postorder

  printf("\nInorder data\n");
  Inorder(First);

  printf("\nPreorder data\n");
  Preorder(First);

  printf("\nPostorder data\n");
  Postorder(First);

  bret = Search(First,17);
  if(bret == true)
  {
    printf("\nElements is there in tree\n");
  }
  else
  {
    printf("\nThere is no element in tree\n");
  }

  i = CountLeafNode(First);
  printf("Number of leaf no is: %d",i);

  return 0;
}

// full tree jar travel karayachi asel tar recorsion karav lagel