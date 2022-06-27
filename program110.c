/*
traingle program

time complexity is 60%

Input :	Row = 4		columns = 4

Output:
		a	
		a	b		
		a	b	c	
		a	b	c	d
*/		

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j = 0;
	char ch = '\0';

	if(iRow != iCol)
	{
		return;
	}

	for(i = 1; i <= iRow; i++)
	{
		for( j = 1, ch = 'a'; j <= i; j++,ch++)
		{			
			printf("%c\t",ch);
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0,iValue2 = 0;

	printf("Enter the number of Rows :\n");
	scanf("%d",&iValue1);

	printf("Enter the number of Columns :\n");
	scanf("%d",&iValue2);


	Display(iValue1,iValue2);

	return 0;
}

// if in question to display diagonals then we have to should mention the filter in out code

/*

for(expression; expression; expression)
{
	expression;
}

all expressions are optional and can be multiple

for(; ; ;)
{

}

while(1)
{
	
}

*/