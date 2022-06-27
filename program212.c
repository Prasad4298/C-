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
	printf("Data from file is :\n");
	write(1,Data,iRet);		// 1 is consider as show data on monistor stdio

	return 0;
}

/*
0 :- STDIN		Keyboard
1 :- STDOUT		Monitor
2 :- STDERR 	Monitor Display Error		(standard error)
*/