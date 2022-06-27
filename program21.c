// Accept the number from user and display less than that number 
// by using iteration ( while loop ) and updater

#include<stdio.h>		

void Display(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
// 		return;    //ethe jar return lihilyane control khali janar nahi ( direct function chya baher ) 
	}			   // predict the output
	
	/*
	//		1		   2		  3
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\n",iCnt);	// 4
	}
	*/
	
	iCnt = 1;	//1
	
	// 			2
	while(iCnt <= iNo)
	{
		printf("%d\n",iCnt);	// 4
		iCnt++;		//3
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}