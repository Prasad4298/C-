///////////////////////////////////////////////////////////
//
// function Nmme : Addition
// Description :   Used to perform additoin of 2 numbers
// Input :		   Integer, Integer
// Output :		   Integer
// Date :		   12/04/2022
// Author:		   Prasad Ashok Kshirsagar 
//
///////////////////////////////////////////////////////////

int Addition(int iValue1, int iValue2)
{
	int iAns = 0;
	
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}
	
	if(iValue2 < 0)
	{
		iValue2 = -iValue2;
	}
	
	iAns = iValue1 + iValue2;		// business logic
	return iAns;
}