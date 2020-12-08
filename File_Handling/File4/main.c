#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	int fd = 0;
	int iRet = 0;
	int length = 0;
	char arr[20]={'\0'};
	char name[20]={'\0'};
	
	printf("Enter the File name\n");
	scanf("%s",name);
	
	
	fd = open(name, O_RDWR | O_CREAT , 0777);
	
	if(fd==-1)
	{
		printf("Error : Unable to create the file\n");
	}
	else
	{
	
	printf("File successfully created with fd:\n%d\n",fd);
	
	}
	
	printf("Enter data you want to enter in the file\n");
	
	scanf(" %[^'\n']s",arr);
	
	length = strlen(arr);
	
	iRet = write(fd, arr , length);
	
	if(iRet == -1)
	{
		printf("Error:Unable to write data\n");
	}
	else
	{
		printf("Data successfully written\n");
	}
	
	
	close(fd);
	return 0;
}