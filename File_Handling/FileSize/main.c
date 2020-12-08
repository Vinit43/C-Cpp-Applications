#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include<IO.h>


int FileSize(char *Name )
{
	int fd = 0;
	char *arr = NULL;
	int iRet = 0;

	
	fd = open(Name , O_RDONLY);
	
	if(fd == -1)
	{
		printf("Not able to open the file\n");
		return -2;
	}
	
	iRet = lseek(fd , 0 , SEEK_SET);
	
	close(fd);
	
	return iRet;
}


int main()
{
	int iRes = 0;
	char Name[20]={'\0'};
	
	iRes=FileSize(Name);
	printf("The size of the file is :\n%d\n",iRes);
	
	
	return 0;
}