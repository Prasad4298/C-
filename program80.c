// accept N number from user and as well as get another number and return the first occurance of that number.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FirstOccur(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iNo == Arr[iCnt])
		{
			break;
		}
	}

	if(iCnt == iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}	
}

int main()
{
	int iSize = 0, iCnt = 0, iValue = 0;
	int  iRet;
	int *ptr = NULL;

	printf("Enter number of elements\n");
	scanf("%d",&iSize);

	ptr = (int *) malloc (sizeof(int) * iSize);

	printf("Enter the values\n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	printf("Enter the element to search \n");
	scanf("%d",&iValue);

	iRet = FirstOccur(ptr, iSize, iValue);

	if(iRet == -1 )
	{
		printf("there is no such element in array \n");
	}
	else
	{		
		printf(" Element first occured at : %d\n",iRet);
	}

	
	free(ptr);
	return 0;

}