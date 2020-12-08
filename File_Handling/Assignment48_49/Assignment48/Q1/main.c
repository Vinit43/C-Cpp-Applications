/*
1.Write a application which accept file name from the user and open that file in read mode

*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char name[20]={'\0'};
	
	printf("Enter the File name\n");
	scanf("%s",name);
	
	
	fd = open(name , O_RDWR);
	
	if(fd==-1)
	{
		printf("Error : Unable to open the file\n");
	}
	else
	{
	
	printf("File successfully opens with fd:\n%d\n",fd);
	
	}
	close(fd);
	return 0;
}