//Accept the number from user and check wether that no is prime number of not  and return no of factor
// 5 
// 7
// 13

#include<stdio.h>
#include<stdbool.h>

boolCheckPrime(int iNo)
{
	int iCnt = 0;
	bool bFlag = true;		// hi default value nahi boolean chi

	for(iCnt = 2; iCnt <= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0)
		{			
			bFlag = false;
			break;
		}
	}
	return bFlag;
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