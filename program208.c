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
	char Fname[20];
	int fd = 0; 	// file descripter

	printf("Enter file name to open \n");
	scanf("%s",Fname);

	fd = open(Fname,O_RDONLY);		// creat madhe end la e nahi
	if(fd == (-1))
	{
		printf("Unable to open file \n");
		return -1;	// Failure
	}

	printf("File is succefully opened with FD %d\n",fd);

	return 0;
}

/*
O_RDONLY
O_WRONLY
O_RDWR
*/