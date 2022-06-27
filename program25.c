// Accept the number from user and chek that number is divisible by 3 and 5 or not 
// by using selection

#include<stdio.h>
#include<stdbool.h>

int Check(int iNo)
{
	/*
    if(
		((iNo%3)== 0) &&
		((iNO%5)== 0)
	   )					 // || operator is 1 jari condition true asel tar true asat 
	*/    					// && operator is 2 condition true true asel tar = true 
	
	if(((iNo%3) == 0) && ((iNo%5) == 0))		// mode operator (%) gives the output remainder 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int iValue = 0;
	int iRet = 0;   // default value of bool is 0 and ithe o mhanje false ahe bool madhe 
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = Check(iValue);
	if(iRet == 1)
	{
		printf("%d is divisible by 3 and 5\n",iValue);
	}
	else
	{
		printf("%d is not divisible by 3 and 5\n",iValue);
	}

	return 0;
}