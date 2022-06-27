// this question is problems on number and problems on digits.

// accept the number from user and check whether its amstrong of not
// amstrong number : the summation of digit no and its power is no of digit in that number

/*

Input :		153
Output :	(1^3	+ 5^3	3^3)		153

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckAmstrong(int iNo)
{	
	int iTemp = 0, iDigCnt = 0, iDigit = 0, iSum = 0, iCnt = 0, iMult = 1;

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
		iMult = 1;

		iDigit = iNo % 10;

		for(iCnt = 1; iCnt <= iDigCnt; iCnt++)
		{
			iMult = iMult * iDigit;
		}

		iSum = iSum + iMult;

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

// programs on N number 
// read
// array and pointer
// loops (for loop)
// dynamic memory allocation



































