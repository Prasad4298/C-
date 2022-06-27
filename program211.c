/*
Q) open the file and write the data After the existing data.(APPENED)
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>	// file control
#include<string.h>

int main()
{
	char Fname[20], Data[100];
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

	iRet = read(fd,Data,10);

	printf("%d bytes gets successfully Read from the file \n",iRet);
	printf("Data from file is : %s\n", Data);

	return 0;
}

/*
O_RDONLY
O_WRONLY
O_RDWR
*/