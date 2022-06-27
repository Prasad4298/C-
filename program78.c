// accept N number from user and as well as get another number and check whether that number is present or not
// with bFlag

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;
	bool bFlag = false;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iNo == Arr[iCnt])
		{
			bFlag = true;
			break;
		}
	}
	return bFlag;
}

int main()
{
	int iSize = 0, iCnt = 0, iValue = 0;
	bool bRet;
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

	bRet = Search(ptr, iSize, iValue);

	if(bRet == true)
	{
		printf("Your Enter number %d is present in the array",iValue);
	}
	else
	{
		printf("Your Enter number %d is not present in the array",iValue);
	}

	
	free(ptr);
	return 0;

}