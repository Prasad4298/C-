//Accept the number from user and check this no is perfect no or not 

// perfect no is the addition of factors no is = that no
// 6  // 1+2+3 = 6;
// 28 // 1+2+4+7+14 = 28;


#include<stdio.h>
#include<stdbool.h>

void DisplayF(int iNo)
{
	int iCnt = 0;

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\n",iCnt);
	}
}

void DisplayB(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = iNo; iCnt >= 1; iCnt--)
	{
		printf("%d\n",iCnt);
	}
}

int main()
{
	int iValue = 0;

	printf("Enter the number : \n");
	scanf("%d",&iValue);

	printf("Forward Display \n");
	DisplayF(iValue);

	printf("Backward Display \n");
	DisplayB(iValue);

	return 0;
}