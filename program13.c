// Program to display 5 times Hello on screen 
// Demonstration of SEQUANCE

#include <stdio.h>

void Display()			
{
	int iCnt = 0;
	
	// 1 Initiaization
	// 2 Condition
	// 3 Displacement 
	// 4 Loop body
	
	//		1			2		3
	for(iCnt = 1; iCnt <= 5; iCnt ++ )
	{
		printf("Hello\n");		// 4
	}
}

int main()
{
	Display();
	
	return 0;
}

