// palendrome number  = its application for string
// mam = mam
//PROBLEMS ON DIGITS:-    accept the number from user and check whether its palendrome or not
//and that number return

// input : 151
// output : 151

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	int iTemp = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	iTemp = iNo;

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = iRev * 10 + iDigit;
		iNo = iNo / 10;
	}

	if(iRev == iTemp)
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
	bool bRet;

	printf("Enter number \n");
	scanf("%d",&iValue);

	bRet = CheckPallindrome(iValue);
	if(bRet == true)
	{
		printf("%d is pallendorm number \n",iValue);
	}
	else
	{
		printf("%d is not a  pallendorm number \n ", iValue);
	}

	return 0;
}



































