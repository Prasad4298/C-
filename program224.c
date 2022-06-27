/*
*** Maximum throughput in minimum hardware movement ***.
kamit kami wela os la hard disk kade jav lagal pahije

//////////////////////////////////////////////////////////////////////////

Q.) Accept Two file name from user and open that files and compaire the data from that file.
	if data is same then return true.
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>

#define FILESIZE 1024

bool FileCompaire(char Source[], char Destination[])
{
	int Fdsrc = 0, Fddest = 0, iRet1 = 0, iRet2 = 0, iCmp = 0;
	char Buffer1[FILESIZE], Buffer2[FILESIZE];

	Fdsrc = open(Source,O_RDONLY);
	if(Fdsrc == -1)
	{
		printf("Unable to open Source file \n");
		return false;
	}

	Fddest = open(Destination,O_RDONLY);
	if(Fddest == -1)
	{
		printf("Unable to open destination file \n");
		return false;
	}

	while(1)	// unconditional loop(infinite loop)
	{
		iRet1 = read(Fdsrc,Buffer1,FILESIZE);
		iRet2 = read(Fddest,Buffer2,FILESIZE);

		if((iRet1 == 0) || (iRet2 == 0) || (iRet1 != iRet2))
		{
			break;
		}

		iCmp = memcmp(Buffer1,Buffer2,iRet1);	//memory compaire (return values is <0, >0)	third parameter is Data size
												// compaire the data character by character

		if(iCmp != 0)
		{
			break;
		}
	}

	if((iRet1 == 0) && (iRet2 == 0))
	{
		return true;
	}
	else
	{
		return false;
	}

	close(Fdsrc);
	close(Fddest);
}

int main()
{
	char Fname1[20], Fname2[20];
	bool bRet; 
	
	printf("Enter file name to open \n");
	scanf("%s",Fname1);

	printf("Enter another file name to open \n");
	scanf("%s",Fname2);

	bRet = FileCompaire(Fname1, Fname2);

	if(bRet == true)
	{
		printf("Files are identical \n");
	}
	else
	{
		printf("Files are different \n");
	}

	return 0;
}