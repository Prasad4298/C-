//PROBLEMS ON DIGITS:-    accept the number from user and separates the digits
// by using updator and display number of digits
//
// input : 7856
// output : 
//6
//5
//8
//7

#include<stdio.h>

int CountDigits(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iCnt++;	
		iNo = iNo/10;	
	}
	
	return iCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number \n");
	scanf("%d",&iValue);

	iRet = CountDigits(iValue);
	printf("the No. of digits is :%d\n",iRet);

	return 0;
}



































