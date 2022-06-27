// accept the number from user and diplay that number on display
// Demonstration of ITERATION

#include <stdio.h>

void Display(int iNo)			
{
	int iCnt = 0;
	
	//		1			2		3
	for(iCnt = 0; iCnt < iNo; iCnt ++ )
	{
		printf("%d\n",iNo);		// 4
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

