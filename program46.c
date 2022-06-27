//PROBLEMS ON DIGITS:-    accept the number from user and separates the digits
//
// input : 7856
// output : 
//6
//5
//8
//7

#include<stdio.h>

void DisplayDigits(int iNo)
{
	int iDigit = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		
		// logic 
		
		printf("%d\n",iDigit);
		iNo = iNo/10;
	}
}

int main()
{
	int iValue = 0;

	printf("Enter number \n");
	scanf("%d",&iValue);

	DisplayDigits(iValue);

	return 0;
}



































