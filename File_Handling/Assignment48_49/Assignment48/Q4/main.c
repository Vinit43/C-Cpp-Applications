/*
4.Write a application that accept file name from user and return the size of file
*/



#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


void DisplayWholeFile(char Name[])
{
	int fd = 0;
	char arr[100]={'\0'};
	int Ret = 0 ;
	int i=0;
	
	fd = open(Name,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file");
		return;
	}
	
	while((Ret = read(fd,arr,100)) != 0)
	{
		while(arr[i]!='\0')
		{
			i++;
		}
	}
	
	printf("The size of the file is %d Bytes\n",i);
	
	
	close(fd);
	
}

int main()
{
	
	char name[20]={'\0'};
	
	printf("Enter file name\n");
	scanf("%s",name);
	
	DisplayWholeFile(name);
	
	return 0;
}