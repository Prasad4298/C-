// this question is problems on number and problems on digits.

// accept the number from user and check whether its amstrong of not
// amstrong number : the summation of digit no and its power is no of digit in that number

/*

Input :		153
Output :	(1^3	+ 5^3	3^3)		153

*/

#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1, int iNo2)
{
	int iMult = 1;
	int iCnt = 0;

	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		iMult = iMult * iNo1;
	}

	return iMult;
}

bool CheckAmstrong(int iNo)
{	
	int iTemp = 0;
	int iDigCnt = 0;
	int iDigit = 0;
	int iSum = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	iTemp = iNo;

	// Calculate number of digits 

	while(iNo != 0)
	{
		// iDigit = iNo % 10  ne digit milto seperate
		iDigCnt++;
		iNo = iNo/10;
	}
	
	iNo = iTemp;

	while(iNo != 0)
	{
		iDigit = iNo % 10;

		iSum = iSum + Power(iDigit,iDigCnt);

		iNo = iNo / 10;
	}

	if(iSum == iTemp)
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

	printf("Enter number :\n");
	scanf("%d",&iValue);

	bRet = CheckAmstrong(iValue);

	if(bRet == true)
	{
		printf("%d is amstrong number \n",iValue);
	}
	else
	{
		printf("%d is not amstrong number \n",iValue);
	}

	return 0;
}




































