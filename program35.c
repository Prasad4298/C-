//Accept the number from user and check this no is perfect no or not 

// perfect no is the addition of factors no is = that no
// 6  // 1+2+3 = 6;
// 28 // 1+2+4+7+14 = 28;


#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
	int iCnt = 0;
	int iSum = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = 1; iCnt <= iNo/2; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);
			iSum = iSum + iCnt;
		}
		if(iSum >= iNo)		// less number of iteration
		{
			break;
		}
	}
	
	if(iSum == iNo)
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

	printf("Enter the number : \n");
	scanf("%d",&iNumber);

	bRet = CheckPerfect(iNumber);

	if(bRet == true)
	{
		printf("you Enter number is perfect :%d",iNumber);
	}
	else
	{
		printf("your Enter number is not perfect :%d",iNumber);
	}

	return 0;
}