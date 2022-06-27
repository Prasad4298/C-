// Accept the N numbers from user and and Display only even number.
// by dynamic memory alloccation

#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iLength)
{
	int iCnt = 0;

	printf("Even elements are :\n");

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			printf("%d\n", Arr[iCnt]);
		}		
	}
}

int main()
{
	int iSize = 0 , iCnt = 0;
	int *ptr = NULL;


	printf("Enter the number of element:\n");
	scanf("%d",&iSize);

	ptr = (int *) malloc (iSize * sizeof(int));

	printf("Enter the values of array :\n");

	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	DisplayEven(ptr,iSize);

	free(ptr);

	return 0;
}



/*

	STEPS : to solve Problems on N numbers

STEPS 1 :	Accept the size of array from user						// (main)

STEPS 2 :	Allocate the memory dinamically for the array 			//(main)

STEPS 3 :	Accept the values from user and store in the array		// (main)

STEPS 4 :	Pass that array and size to the function(Logic)			//(Helper Function)

STEPS 5 :	deallocate memory of that array 						//(main)

*/


