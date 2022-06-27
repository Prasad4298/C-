// accept N number from user and as well as get another number and return the last occurance of that number.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LastOccur(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;

	for(iCnt =(iLength - 1) ; iCnt >= 0 ; iCnt--)
	{
		if(iNo == Arr[iCnt])
		{
			break;
		}
	}
	return iCnt;
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

	iRet = LastOccur(ptr, iSize, iValue);

	if(iRet == -1 )
	{
		printf("there is no such element in array : %d\n",iRet);
	}
	else
	{		
		printf(" Element Last occured at : %d\n",iRet);
	}

	
	free(ptr);
	return 0;

}