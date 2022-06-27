// best Industrial apporach:- ( for function defination)
// PPA chi punnayayi(15 wasoooooL....!)

#include<iostream>
using namespace std;

struct node		// same structor as C
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
	private:		// characteristics ( abstraction is most important)
		PNODE Head;
		PNODE Tail;

	public:		// Behaviours

		SinglyCLL();		// default constructor which accepts nothing 

		void InsertFirst(int no);		
		void InsertLast(int no);		
		void InsertAtPos(int no, int ipos);	
		void DeleteFirst();		
		void DeleteLast();		
		void DeleteAtPos(int ipos);		
		void Display();		
		int Count();		
};

SinglyCLL::SinglyCLL()		// default constructor which accepts nothing 
{
	Head = NULL;
	Tail = NULL;
}

void SinglyCLL::InsertFirst(int no)
{
	PNODE newn = NULL;

	newn = new NODE;

	newn -> data = no;
	newn -> next = NULL;

	if((Head == NULL) && (Tail == NULL))	// if LL is empty 
	{
		Head = newn;
		Tail = newn;
	}
	else		// LL contains at least one node
	{
		newn -> next = Head;
		Head = newn;
	}
	Tail -> next = Head;
}

void SinglyCLL::InsertLast(int no)
{
	PNODE newn = NULL;

	newn = new NODE;

	newn -> data = no;
	newn -> next = NULL;

	if((Head == NULL) && (Tail == NULL))	// if LL is empty 
	{
		Head = newn;
		Tail = newn;
	}
	else		// LL contains at least one node
	{
		Tail -> next = newn;
		Tail = newn;
	}
	Tail -> next = Head;
}

void SinglyCLL::InsertAtPos(int no, int ipos)
{
	int iSize = 0;
	iSize = Count();
	
	if((ipos < 1) || (ipos > (iSize + 1)))
	{
		cout<<"Invalid position\n";
		return;
	}
	
	if(ipos == 1)
	{
		InsertFirst(no);
	}
	else if(ipos == (iSize + 1))
	{
		InsertLast(no);
	}
	else
	{
		PNODE newn = NULL;

		newn = new NODE;

		newn -> data = no;
		newn -> next = NULL;
		
		PNODE temp = Head;
		int iCnt = 0;

		for(iCnt = 1; iCnt < ipos-1; iCnt++)
		{
			temp = temp -> next;
		}

		newn -> next = temp -> next;
		temp -> next = newn;
	}
};

void SinglyCLL::DeleteFirst()
{
	if((Head == NULL) && (Tail == NULL))	// if LL is empty
	{
		return;
	}
	else if(Head == Tail)	// if LL contain 1 node
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else		// If LL contains more than 1 node
	{
		Head = Head -> next;
		delete Tail -> next;

		Tail -> next = Head;
	}
}

void SinglyCLL::DeleteLast()
{
	if((Head == NULL) && (Tail == NULL))	// if LL is empty
	{
		return;
	}
	else if(Head == Tail)	// if LL contain 1 node
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else		// If LL contains more than 1 node
	{
		PNODE temp = Head;

	}
}

void SinglyCLL::DeleteAtPos(int ipos)
{
	int iSize = Count();
	{
		if((ipos < 1) || (ipos >iSize))
		{
			cout<<"Invalid position\n";
			return;
		}
		
		if(ipos == 1)
		{
			DeleteFirst();
		}
		else if(ipos == iSize)
		{
			DeleteLast();
		}
		else
		{
			PNODE temp1 = Head;
			int iCnt = 0;

			for(iCnt = 1; iCnt < ipos-1; iCnt++)
			{
				temp1 = temp1 -> next;
			}

			PNODE temp2 = temp1 -> next;

			temp1 -> next = temp2 -> next;
			delete temp2;
		}
	}
}

void SinglyCLL::Display()
{
	PNODE temp = Head;
	
	if((Head == NULL) && (Tail == NULL))	// if LL is empty
	{
		return;
	}

	do
	{
		cout << "|" << temp -> data << "|->";
		temp = temp -> next;

	}while(temp != Head);

	cout<<endl;
}

int SinglyCLL::Count()	
{
	int iCnt = 0;

	PNODE temp = Head;

	if((Head == NULL) && (Tail == NULL))	// if LL is empty
	{
		return 0;
	}

	do
	{
		iCnt++;
		cout << "|" << temp -> data << "|->";
		temp = temp -> next;
	}while(temp != Head);

	cout<<endl;

	return iCnt;
}	

int main()
{
	int iChoice = 0;

	while(1)
	{
		cout<<"enter your choice"<<endl;
		cout<<"1: Insert First"<<endl;
		cout<<"2: Insert Last"<<endl;
		cout<<"3: Insert At Position"<<endl;
		cout<<"4: Delete First"<<endl;
		cout<<"5:Delete Last"<<endl;
		cout<<"6: Delete At Position"<<endl;
		cout<<"7: count number of elements"<<endl;
		cout<<"8: "<<endl;
		

	}
	
	return 0;
}
