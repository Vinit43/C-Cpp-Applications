#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
	int fd = 0;
	char name[20]={'\0'};
	
	printf("Enter the File name\n");
	scanf("%s",name);
	
	
	fd = open(name, O_RDONLY | O_CREAT , 0777);
	
	if(fd==-1)
	{
		printf("Error : Unable to create the file\n");
	}
	else
	{
	
	printf("File successfully created with fd:\n%d\n",fd);
	
	}
	close(fd);
	return 0;
}