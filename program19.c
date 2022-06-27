// Program display 1 to 5 on screen 
// Output 1 2 3 4 5 
// by using iteration

#include<stdio.h>		// its a defeault header file ( automatic inserted )

void Display()
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= 5; iCnt++)
	{
		printf("%d\n",iCnt);
	}
}

int main()
{
	Display();
	
	return 0;
}