// Accept the number from user and stoared that number into array and display that number on screen 
// by using pointer arithmatic

#include<stdio.h>

void Display(int *ptr)
{
	register int iCnt = 0;

	printf("Elements of Array are :\n");

	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		printf("%d\n",*ptr);
		ptr++;		// poiter arithmatic
	}	
}

int main()
{
	register int iCnt = 0;
	auto int Arr[5];

	printf("Enter elements :\n");

	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}

	Display(Arr);		// Display(100);

	return 0;
}