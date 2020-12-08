#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	int fd = 0;
	int iRet = 0;
	char arr[20]={'\0'};
	char name[20]={'\0'};
	
	
	printf("Enter the File name\n");
	scanf("%s",name);
	
	
	fd = open(name, O_RDWR);
	
	if(fd==-1)
	{
		printf("Error : Unable to open the file\n");
	}
	else
	{
	
	printf("File successfully opened with fd:\n%d\n",fd);
	
	}
	iRet = read(fd , arr , 10);
	if(iRet == -1)
	{
		printf("Error:Unable to write data\n");
	}
	else
	{
		printf("Data successfully written\n");
		printf("The data is:\n%s\n",arr);
	}
	
	
	
	close(fd);
	return 0;
}