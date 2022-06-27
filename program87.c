// display the number in decresing order
// Input :		4
// Output: 		4	3	2	1	1	2	3	4
// complexity: 	O(2N)	= 4*2 = 8 times

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;

	for(iCnt = iNo; iCnt >= 1; iCnt--)
	{
		printf("%d\t",iCnt);
	}

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\t",iCnt);
	}	
}

int main()
{
	int iValue = 0;

	printf("Enter the value :\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}

// this loop is sequencial 