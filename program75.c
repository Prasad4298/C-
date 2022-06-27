// accept N number from user and return the minimum Number.
// positive and negative number.
// time complaxity is N

#include<stdio.h>
#include<stdlib.h>

int MinimumNumber(int Arr[], int iLength)
{
	int iMin = Arr[0];		
	int iCnt = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iMin > Arr[iCnt])	// sign madhe change
		{
			iMin = Arr[iCnt];
		}
	}
	return iMin;
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

	iRet = MinimumNumber(ptr,iSize);

	printf("The minimum number is :%d\n",iRet);
	
	free(ptr);
	return 0;

}