/*
*** Maximum throughput in minimum hardware movement ***.
kamit kami wela os la hard disk kade jav lagal pahije

//////////////////////////////////////////////////////////////////////////

Q.) Accept Two file name from user and 1st file is existing (to open that file) and 2nd file to create.
	and Copy the data from 1st file to 2nd file
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

#define FILESIZE 1024

void FileCopy(char Source[], char Destination[])
{
	int Fdsrc = 0, Fddest = 0, iRet = 0;
	char Buffer[FILESIZE];

	Fdsrc = open(Source,O_RDONLY);
	if(Fdsrc == -1)
	{
		printf("Unable to open Source file \n");
		return;
	}

	Fddest = creat(Destination,0777);
	if(Fddest == -1)
	{
		printf("Unable to create new file \n");
		return;
	}

	while((iRet = read(Fdsrc,Buffer,FILESIZE)) != 0)	// file name, kashyat data ghyaycha ahe to , kiti data read karayach ahe
	{
		write(Fddest, Buffer, iRet);		// kasyat lihayach aahe, Mug(data kuthun ghe), jo data read kela ahe to (iRet) 	
	}

	close(Fdsrc);
	close(Fddest);
}

int main()
{
	char Fname1[20]; 
	char Fname2[20];

	printf("Enter file name which contains the data \n");
	scanf("%s",Fname1);

	printf("Enter the file name that you want to create \n");
	scanf("%s",Fname2);

	FileCopy(Fname1, Fname2);

	return 0;
}