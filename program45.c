///Accept the number from user and check its prime or not   
// counter start from 2
// 5 
// 7
// 13

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
	int iCnt = 0;

	for(iCnt = 2; iCnt <= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0)
		{			
			break;
		}
	}
	
	if(iCnt == (iNo/2) + 1)
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
		printf(" its a prime number \n",iValue);
	}
	else
	{
		printf(" its a not a prime number",iValue);
	}

	return 0;
}