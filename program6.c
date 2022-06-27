// internal documentation

#include<stdio.h>

///////////////////////////////////////////////////////////
//
// function Nmme : Addition
// Description :   Used to perform additoin of 2 numbers
// Input :		   Integer, Integer
// Output :		   Integer
// Date :		   12/04/2022
// Author:		   Prasad Ashok Kshirsagar 
//
///////////////////////////////////////////////////////////

int Addition(int iValue1, int iValue2)
{
	int iAns = 0;
	iAns = iValue1 + iValue2;
	return iAns;
}

///////////////////////////////////////////////////////////
// write a program to perform addition of 2 numbers
///////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0; 
	int iNo2 = 0;
	int iNo3 = 0;
	
	printf(" Enter first number \n");
	scanf("%d",&iNo1);
	
	printf(" Enter second number \n");
	scanf("%d",&iNo2);
	
	iNo3 = Addition(iNo1,iNo2);
	
	printf(" Additoin is : %d \n",iNo3);
	
	return 0;
}

//////////////////////////////////////////////////////////
//
// Input :   11   10
// Output :  21
//
//////////////////////////////////////////////////////////
