// Accept the number from user and stoared that number into array and display that number on screen 

#include<stdio.h>

int main()
{
	// Arr is one dimentional array 
	// which contains 5 elements
	// and each element is of type int

	auto int Arr[5];

	printf("Enter elements :\n");

	scanf("%d",&Arr[0]);
	scanf("%d",&Arr[1]);
	scanf("%d",&Arr[2]);
	scanf("%d",&Arr[3]);
	scanf("%d",&Arr[4]);

	printf("Elements of Array are :\n");

	printf("%d\n",Arr[0]);
	printf("%d\n",Arr[1]);
	printf("%d\n",Arr[2]);
	printf("%d\n",Arr[3]);
	printf("%d\n",Arr[4]);

	return 0;
}