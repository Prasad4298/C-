#include<stdio.h>

// Display	 *		*		*		* 	(static)

void DisplayI()	// I for Iterative
{
	auto int iCnt = 0;
	
	while(iCnt < 4)
	{
		printf("*\t");
		iCnt++;
	}
}

void DisplayR()	// R for Recursive
{
	static int iCnt = 0;
	
	if(iCnt < 4)
	{
		printf("*\t");
		iCnt++;
		DisplayR();		// Recursive Call
	}
}

int main()
{	
	//DisplayI();	both functions output is same
	DisplayR();

	return 0;
}