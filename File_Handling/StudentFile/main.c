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



void FileWrite(char FName[])
{
	int fd = 0;
	int iSize,i = 0;
	struct Student obj ;
	
	fd = open(FName,O_WRONLY);
	if(fd==-1)
	{
		printf("Unable to open file");
		return;
	}
	
	printf("Enter number of students\n");
	scanf("%d",&iSize);
	
	for(i=1;i<=iSize;i++)
	{
		printf("Enter Roll Number\n");
		scanf("%d",&obj.Rollno);
		
		printf("Enter Name\n");
		scanf("%s",&obj.Name);
	}
	
	write(fd , &obj , sizeof(obj));
	
	
	close(fd);
	
}
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
	
	FileWrite(name);
	FileRead(name);
	
	return 0;
}