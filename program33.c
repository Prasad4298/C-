//Accept the number from user and check this no is perfect no or not 

// perfect no is the addition of factors no is = that no
// 6  // 1+2+3 = 6;
// 28 // 1+2+4+7+14 = 28;


#include<stdio.h>
#include<stdbool.h>

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

bool CheckPerfect(int iNo)
{
	int Ans = 0;
	Ans = AdditionOfFactors(iNo);

	if (Ans == iNo)
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
	int iNumber = 0;
	bool bRet = 0;

	printf("Enter the number :");
	scanf("%d",&iNumber);

	bRet = CheckPerfect(iNumber);

	if(bRet == iNumber)
	{
		printf("you Enter number is perfect :%d",bRet);
	}
	else
	{
		printf("your Enter number is not perfect :%d",bRet);
	}

	return 0;
}