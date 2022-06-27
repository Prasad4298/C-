//Accept the number from user and return addition of factors of that number and display that no.
// 10
// 1+2+5 = 8

#include<stdio.h>

int AdditionOfFactors(int iNo)
{
	int iCnt = 0;
	int iAdd = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = 1; iCnt <= iNo/2; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);
			iAdd = iAdd + iCnt;
		}
	}
	return iAdd;
}

int main()
{
	int iNumber = 0;
	int iRet = 0;

	printf("Enter the number :");
	scanf("%d",&iNumber);

	iRet = AdditionOfFactors(iNumber);
	printf("Addition of factors : %d\n",iRet);

	return 0;
}