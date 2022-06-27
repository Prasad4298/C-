// write a program to perform addition of 2 numbers
// numbers kasale ahet te tali kara( int, float, double )
#include<stdio.h>

int Addition(int iValue1, int iValue2)
{
	int iAns = 0;
	iAns = iValue1 + iValue2;
	return iAns;
}

int main()
{
	int iNo1 = 0; // 4 byte in standard 32  bit application 
	int iNo2 = 0;
	int iNo3 = 0;
	
	printf(" Enter first number \n");		// printf :- f for formating 
	scanf("%d",&iNo1);				// scanf :- f for formatate specifier,  % syntax cha part , d for decimal
	
	printf(" Enter second number \n");
	scanf("%d",&iNo2);
	
	iNo3 = Addition(iNo1,iNo2);
	
	printf(" Additoin is : %d \n",iNo3);
	
	return 0;
}

