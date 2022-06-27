// Accept the number from user and stoared that number into array and display that number on screen 
// by using pointer array in simple method ( array subscript operator)

#include<stdio.h>

void Display(int Arr[])	// array is internally consider as array and pointer is internally treated as array 
{
	register int iCnt = 0;

	printf("Elements of Array are :\n");

	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		printf("%d\n",Arr[iCnt]); 	
	}	
}

int main()
{
	register int iCnt = 0;
	auto int Brr[5];

	printf("Enter elements :\n");

	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d",&Brr[iCnt]);
	}

	Display(Brr);		// Display(100);	// call by address

	return 0;
}

/*

Arr[2];
*(Arr + 2);
*(2 + Arr);
2[Arr];

*/