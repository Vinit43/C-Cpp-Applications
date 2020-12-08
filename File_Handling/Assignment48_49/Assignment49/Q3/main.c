#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int DisplayWholeFile(char Name[])
{
	int fd = 0;
	char arr[100]={'\0'};
	int Ret = 0 ;
	int i , j = 0;
	
	fd = open(Name,O_RDONLY);
	if(fd==-1)
	{
		//printf("Unable to open file");
		return -2;
	}
	

	
	while((Ret = read(fd , arr , 100)!=0))
	{
		for(i=0;i<Ret;i++)
	{
		if(arr[i]==' ')
		{
			j++;
		}
	}
	}
	
	return j;
	close(fd);
	
}

int main()
{
	
	char name[20]={'\0'};
	int iRet = 0;
	
	printf("Enter file name\n");
	scanf("%s",name);
	
	iRet=DisplayWholeFile(name);
	
	if(iRet == -2)
	{
		printf("Unable to open the file\n");
	}
	
	printf("The number of capital letters are :\n%d\n",iRet);
	
	return 0;
}