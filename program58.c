// this quetion is problems on number.
// accept two number from user like a and b and return the number such as a^b
// a cha power b 
/*
Input = 2 , 4
Output = 16	(2*2*2*2*2)
*/

#include<stdio.h>

unsigned long int Power(int iNo1, int iNo2)		// ungined means only positive
{
	unsigned long int lMult = 1;
	register int iCnt = 0;

	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		lMult = lMult * iNo1;
	}

	return lMult;
}

int main()
{
	auto int iValue1 = 0;
	auto int iValue2 = 0;
	auto unsigned long int lRet = 0;

	printf("Enter base :\n");
	scanf("%d",&iValue1);

	printf("Enter power :\n");
	scanf("%d",&iValue2);

	lRet = Power(iValue1, iValue2);

	printf("Result is :%ld\n",lRet);

	return 0;
}

/* 
	START
		Accept one number as no1
		Accept another number as no2
		
		Create one variable as Mult
		Set the value 1 in the variable Mult

		Create one counter as Cnt
		set the counter to 1

		LOOP:
		Itereate till teh counter is less than or equal to no2

		mult = Mult * no1
		increment the counter by 1

		Goto LOOP

		Display the value of mult 

		END

		no1 = 2
		no2 = 4 
		mult = mult * no1

		for(cnt = 1; cnt <= no2; cnt++)
		{
			mult = mult*no1;
		}

*/


































