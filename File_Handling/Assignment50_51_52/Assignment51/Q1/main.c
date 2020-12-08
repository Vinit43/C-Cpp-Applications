/*
1.Write a program which accept file name which contains information of
student as well as accept name of student and dsplay only information of
that student.
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
	int Marks;
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
		
		printf("Enter Marks\n");
		scanf("%d",&obj.Marks);
		
		write(fd , &obj , sizeof(obj));
		
	}
	
	
	
	
	close(fd);
	
}

void FileRead(char FName[] )
{
	int fd = 0;
	int iSize,i = 0;
	int iRet = 0;
	struct Student obj ;
	char stname[20];
	int iRes = 0 ;
	
	fd = open(FName,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file");
		return ;
	}
	
	printf("Enter the name of student you want information about\n");
	scanf("%s",stname);
	
	printf("\n\n");
	
	
	
	while((iRet =read(fd , &obj ,sizeof(obj)))!=0)
	{
	 if((iRes = strcmp(obj.Name , stname))==0)
		{
		
		printf("Name is :%s\t",obj.Name);
		printf("Roll number is :%d\t",obj.Rollno);
		printf("Marks is :%d\t",obj.Marks);
		
		}
	
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