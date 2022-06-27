//PROBLEMS ON DIGITS:-    accept the number from user and that number will be reverse order
//and that number return

// input : 721
// output : 127

#include<stdio.h>

int Reverse(int iNo)
{
	int iDigit = 0;
	int iRev = 0;

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = iRev * 10 + iDigit;
		iNo = iNo / 10;
	}
	return iRev;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number \n");
	scanf("%d",&iValue);

	iRet = Reverse(iValue);
	printf("reverse  number  is :%d\n",iRet);

	return 0;
}



































