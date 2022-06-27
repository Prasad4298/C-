/*
Q) Accept file name and Read all data from that file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>	// file control
#include<string.h>

int main()
{
	char Fname[20];
	char Data[10];		// Mug
	int fd = 0, iRet = 0; 	// file descripter

	printf("Enter file name to open \n");
	scanf("%s",Fname);

	fd = open(Fname,O_RDWR | O_APPEND);	
	if(fd == (-1))
	{
		printf("Unable to open file \n");
		return -1;	// Failure
	}

	printf("File is succefully opened with Fd %d \n",fd);

	read(fd,Data,sizeof(Data));
	read(fd,Data,sizeof(Data));
	read(fd,Data,sizeof(Data));	// it sequence

	return 0;
}

/*
0 :- STDIN		Keyboard
1 :- STDOUT		Monitor
2 :- STDERR 	Monitor Display Error		(standard error)
*/