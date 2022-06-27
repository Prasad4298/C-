// Accept the number from user and stoared that number into array and display that number on screen 
// with loop

#include<stdio.h>

int main()
{
	register int iCnt = 0;
	auto int Arr[5];

	printf("Enter elements :\n");

	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}

	printf("Elements of Array are :\n");

	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}
	
	return 0;
}