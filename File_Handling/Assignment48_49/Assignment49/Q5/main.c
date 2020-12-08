#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include<IO.h>


void RandomAccess(char *Name , int iNo , int iSize)
{
	int fd = 0;
	char *arr = NULL;
	int iRet = 0;
	
	arr = (char*)malloc(sizeof(char));
	
	fd = open(Name , O_RDONLY);
	
	if(fd == -1)
	{
		printf("Not able to open the file\n");
		return;
	}
	
	lseek(fd , iNo , SEEK_SET);
	
	iRet=read(fd , arr , iSize);
	
	printf("THE DATA OF FILE IS:\n");
	
	printf("Return value of the read is : %d\n",iRet);
	write(1 , arr , iRet);
	
	
	free(arr);
	close(fd);
	
}


int main()
{
	char Name[20]={'\0'};
	int iNo = 0;
	int iSize = 0;
	
	printf("Enter the existing file name\n");
	scanf("%s",Name);
	
	printf("Enter the position\n");
	scanf("%d",&iNo);
	
	printf("Enter the no of bytes \n");
	scanf("%d",&iSize);
	
	
	RandomAccess(Name , iNo , iSize);
	
	return 0;
}