// Que. accept number from user and return factorial of that number.

//	4 			24
// 	1*2*3*4		24

#include<stdio.h>

int Factorial(int iNo)
{
	int iFact = 1;
	int iCnt = 0;

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		// fancy coding with *short hand operator:
		
		iFact *= iCnt; // iFact = iFact * iCnt;
	}
	return iFact;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number \n");
	scanf("%d",&iValue);

	iRet = Factorial(iValue);

	printf("Factorial is : %d\n",iRet);
	
	return 0;
}