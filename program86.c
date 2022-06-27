// display the number in decresing order
// Input :		4
// Output: 		1	2	3	4	4	3	2	1
// complexity: 	O(2N)

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\t",iCnt);
	}

	for(iCnt = iNo; iCnt >= 1; iCnt--)
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