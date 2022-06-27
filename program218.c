/*
*** Maximum throughput in minimum hardware movement ***.

kamit kami wela os la hard disk kade jav lagal pahije
*/


/*
Q.) Accept file name and Count small character in that file.
	(String ch logic is not user for this code)
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>	
#include<string.h>

int CountSmall(char Fname[])
{
	char Data[1024];		
	int fd = 0, iRet = 0, i = 0, iCnt = 0;

	fd = open(Fname,O_RDWR);	
	if(fd == (-1))
	{
		printf("Unable to open file \n");
		return -1;	
	}

	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		for(i = 0; i < iRet; i++)
		{
			if((Data[i] >= 'a') && (Data[i] <= 'z'))
			{
				iCnt++;
			}
		}
	}

	close(fd);
	return iCnt;
}

int main()
{
	char Fname[20];
	int iRet = 0;

	printf("Enter file name to open \n");
	scanf("%s",Fname);

	iRet = CountSmall(Fname);
	printf("Number of Small Character from that file is : %d",iRet);

	return 0;
}

