/*
3.Write a program to diplay all the data from the file
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
	
	fd = open(Name,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file");
		return;
	}
	printf("Data from the file is:\n");
	
	while((Ret = read(fd,arr,100)) != 0)
	{
		write(1,arr,Ret);
	}
	
	
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