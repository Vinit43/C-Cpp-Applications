/*
2. Write a program which read all the information of students from the
file.
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

struct Student
{
	int Rollno;
	char Name[20];
};

void FileRead(char FName[])
{
	int fd = 0;
	int iSize,i = 0;
	int iRet = 0;
	struct Student obj ;
	
	fd = open(FName,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file");
		return;
	}
	
	
	while((iRet =read(fd , &obj ,sizeof(obj)))!=0)
	{
		printf("Roll Number is :%d\n",obj.Rollno);
		printf("Name is :%s\n",obj.Name);
	}
	
	
	close(fd);
	
}



int main()
{
	
	char name[20]={'\0'};
	
	printf("Enter file name\n");
	scanf("%s",name);
	
	FileRead(name);
	
	return 0;
}