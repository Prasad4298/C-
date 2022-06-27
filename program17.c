// accept the number from user and diplay that number on display
// Demonstration of ITERATION
// by using UPDATER

#include <stdio.h>

void Display(int iNo)			
{
	int iCnt = 0;
	
	if(iNo < 0 )	
	{
		iNo = -iNo;
	}
	
	//		1			2		3
	for(iCnt = 0; iCnt < iNo; iCnt ++ )
	{
		printf("Hello\n");		// 4
	}
}

int main()
{
	int iValue = 0;
	
	printf(" Enter the number \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}

