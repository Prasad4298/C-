/*
Q) Accept file name from user and create file of that name.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>	// file control

int main()
{
	char Fname[20];
	int fd = 0; 	// file descripter

	printf("Enter file name to create \n");
	scanf("%s",Fname);

	fd = creat(Fname,0777);		// creat madhe end la e nahi
	if(fd == (-1))
	{
		printf("Unable to create file \n");
		return -1;	// Failure
	}

	printf("File is succefully create with FD %d\n",fd);

	return 0;
}

/*
Read : 4
Write : 2
execute : 1

Permission : 0_Owner_Group_Other
*/