// Accept the number from user and stoared that number into array and display that number on screen 
// by using pointer array in simple method ( array subscript operator)

#include<stdio.h>

void Display(int ptr[])	// array is internally consider as array and pointer is internally treated as array 
{
	register int iCnt = 0;

	printf("Elements of Array are :\n");

	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		printf("%d\n",ptr[iCnt]);	
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

/*

Arr[2];
*(Arr + 2);
*(2 + Arr);
2[Arr];

*/