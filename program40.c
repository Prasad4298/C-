//Accept the number from user and count that number of factors


#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
	int iCnt = 0;
	int iFactCnt = 0;

	for(iCnt = 1; iCnt <= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			printf("%d\n",iCnt);
			iFactCnt++;
		}
	}

	return iFactCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number : \n");
	scanf("%d",&iValue);

	iRet = CountFactor(iValue);
	printf(" number of factors are : %d \n" ,iRet);

	return 0;
}