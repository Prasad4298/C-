// 1  gm   4000
// 2  gm   8000
// 5  gm   20000
// 10 gm   40000

#include<stdio.h>

void JwelersPortal(int iWeight)
{
	switch(iWeight)
	{
		case 1:
		printf("Your bill amount is 4000\n");
		break;
		
		case 2:
		printf("Your bill amount is 8000\n");
		break;
		
		case 5:
		printf("Your bill amount is 20000\n");
		break;
		
		case 10:
		printf("Your bill amount is 40000\n");
		break;
		
		default:
		printf("Invalid weight\n");
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the gold coin size that you want to purchase \n");
	printf("Enter 1 for 1 gm \n");
	printf("Enter 2 for 2 gm \n");
	printf("Enter 5 for 5 gm \n");
	printf("Enter 10 for 10 gm \n");
	
	scanf("%d",&iValue);
		
	JwelersPortal(iValue);
	
	return 0;
}
