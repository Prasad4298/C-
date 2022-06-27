/*
Q) Accept file name from user and create file of that name.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>	// file control
#include<string.h>

int main()
{
	char Fname[20], Data[100];
	int fd = 0; 	// file descripter
	int iRet = 0;

	printf("Enter file name to create \n");
	scanf("%s",Fname);

	printf("Enter teh data that you want to write \n");
	scanf(" %[^'\n']s",Data);

	fd = creat(Fname,0777);		// creat madhe end la e nahi
	if(fd == (-1))
	{
		printf("Unable to create file \n");
		return -1;	// Failure
	}

	printf("File is succefully create with FD %d\n",fd);

	iRet = write(fd,Data,strlen(Data));
	printf("%d bytes successufully witten in the file \n",iRet);
	
	return 0;
}