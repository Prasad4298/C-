// Accept the number and check that number is even or odd 
// by using selection

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
	if((iNo % 2) == 0)		// mode operator (%) gives the output remainder 
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
	bool bRet = false;   // default value of bool is 0 and ithe o mhanje false ahe bool madhe 
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet = CheckEven(iValue);
	if(bRet == true)
	{
		printf("%d is even number\n",iValue);
	}
	else
	{
		printf("%d is odd number\n",iValue);
	}

	return 0;
}