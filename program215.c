/*
Q.) Accept file name and cat all data from that file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>	
#include<string.h>

void DisplayData(char Fname[])
{
	char Data[10];		
	int fd = 0, iRet = 0;

	fd = open(Fname,O_RDWR);	
	if(fd == (-1))
	{
		printf("Unable to open file \n");
		return;	
	}

	printf("File is succefully opened with Fd %d \n",fd);

	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		write(1,Data,iRet);			
	}

	close(fd);
}

int main()
{
	char Fname[20];

	printf("Enter file name to open \n");
	scanf("%s",Fname);

	DisplayData(Fname);

	return 0;
}

/*
0 :- STDIN		Keyboard
1 :- STDOUT		Monitor
2 :- STDERR 	Monitor Display Error		(standard error)
*/