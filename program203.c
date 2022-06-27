#include<stdio.h>
/*
input 123
output 321
*/

void DisplayI(int no)	
{
	while(no != 0)
	{
		printf("%d\t",no % 10);
		no = no/10;
	}
}

void DisplayR(int no)	// R for Recursive
{
	if(no != 0)
	{
		printf("%d\t",no % 10);
		no = no/10;
		DisplayR(no);	// tail recursion
	}
}

int main()
{	
	//DisplayI(123);
	DisplayR(123);

	return 0;
}