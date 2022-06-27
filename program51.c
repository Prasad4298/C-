//PROBLEMS ON DIGITS:-    accept the number from user and display even digit
//
// input : 721
// output : 2

#include<stdio.h>

void DisplayDigit(int iNo)
{
	int iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		
		if((iDigit % 2) == 0)
		{
			printf("even digit of that number  is :%d\n",iDigit);	
		}

		iNo = iNo/10;		
	}
}

int main()
{
	int iValue = 0;

	printf("Enter number \n");
	scanf("%d",&iValue);

	DisplayDigit(iValue);
	return 0;
}



































