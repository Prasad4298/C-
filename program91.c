/*
Input :	Row = 4		columns = 4

Output:
			*	*	*	*
			*	*	*	*
			*	*	*	*
			*	*	*	*
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j = 0;

//		   1		2		3
	for(i = 1; i <= iRow; i++)	// Outer
	{
//			   1		2       3
		for(j = 1; j <= iCol; j++)	// inner (4 number of outer loop)
		{
			printf("*\t");
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

// this loop is non linear