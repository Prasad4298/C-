//Accept the number from user and count that number of factors
// counter start from 2

#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
	int iCnt = 0;
	int iFactCnt = 0;

	for(iCnt = 2; iCnt <= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0)
		{			
			iFactCnt++;
		}
	}

	return iFactCnt;
}

bool CheckPrime(int iNo)
{
	int iRet = 0;

	iRet = CountFactor(iNo);

	if(iRet == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = 0;

	printf("Enter the number : \n");
	scanf("%d",&iValue);

	bRet = CheckPrime(iValue);
	if(bRet == true)
	{
		printf("%d is prime number",iValue);
	}
	else
	{
		printf("%d is not prime number",iValue);
	}	
	return 0;
}