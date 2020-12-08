/*
4.Write a application that accept file name from user and return the size of file
*/



#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


void DisplayWholeFile(char Name[] , char str[])
{
	int fd = 0;
	char arr[100]={'\0'};
	int Ret = 0 ;
	int i=0;
	
	fd = open(Name,O_RDWR);
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
	
	Ret = write(fd,str,strlen(str));
	if(Ret==-1)
	{
		printf("Unable to write the data\n");
	}
	
	close(fd);
	
}

int main()
{
	
	char name[20]={'\0'};
	char str[20]={'\0'};
	printf("Enter file name\n");
	scanf("%s",name);
	
	printf("Enter string\n");
	scanf(" %[^'\n']s",str);
	
	DisplayWholeFile(name , str);
	
	return 0;
}