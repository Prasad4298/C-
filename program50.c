//PROBLEMS ON DIGITS:-    accept the number from user and return sumesion of digits
//
// input : 132
// output : 1+3+2 = 6

#include<stdio.h>

int SumDigits(int iNo)
{
	int iSum = 0;
	int iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo/10;	
	}
	
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number \n");
	scanf("%d",&iValue);

	iRet = SumDigits(iValue);
	printf("Sumesion of digits is :%d\n",iRet);

	return 0;
}



































