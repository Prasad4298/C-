/*
*** Maximum throughput in minimum hardware movement ***.
kamit kami wela os la hard disk kade jav lagal pahije

//////////////////////////////////////////////////////////////////////////

Q.) Accept the file name from user and read data after 10bytes. ( by using lseek inbuild function)

*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>


int main()
{
	char Fname[20], Data[10];
	int fd = 0;
	
	printf("Enter file name to open \n");
	scanf("%s",Fname);

	fd = open(Fname, O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file \n");
		return -1;
	}

	/*

	0	Startin point
	1	Current Position
	2	Endpoint
	
	*/

//		      Read data After 10 bytes, kiti data read karayacha aahe to 
	lseek(fd,10,10);	// lseek(kashat, kiti, kuthun)

	read(fd,Data,5);
	write(1,Data,5);

	return 0;
}