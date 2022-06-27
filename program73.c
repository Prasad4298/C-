// accept N number from user and return the largest Number.( all positive number and some negative number).

#include<stdio.h>
#include<stdlib.h>

int MaxNumber(int Arr[], int iLength)
{
	int iMax = 0, iCnt = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iMax < Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}
	}
	return iMax;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
	int *ptr = NULL;

	printf("Enter number of elements\n");
	scanf("%d",&iSize);

	ptr = (int *) malloc (sizeof(int) * iSize);

	printf("Enter the values\n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet = MaxNumber(ptr,iSize);

	printf("The maximum number is :%d\n",iRet);
	
	free(ptr);
	return 0;

}