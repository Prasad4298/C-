// Accept the number from user and display the non factors of that number
// by using updator its not applicable for time complicity

#include<stdio.h>

void DisplayNonFactors(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = 1; iCnt < iNo; iCnt++)	// iNo/2 lihilya mule time complexity kami zali
	{
		if((iNo % iCnt) != 0)
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;

	printf("Enter the number : \n");
	scanf("%d",&iValue);

	DisplayNonFactors(iValue);

	return 0;
}

// time complexity : O(N/2)