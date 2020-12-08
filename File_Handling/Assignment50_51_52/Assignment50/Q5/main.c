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

int FileRead(char FName[])
{
	int fd = 0;
	int iSize,i = 0;
	int iRet = 0;
	int iSum = 0;
	struct Student obj ;
	
	fd = open(FName,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	printf("Data is:\n\n");
	
	while((iRet =read(fd , &obj ,sizeof(obj)))!=0)
	{
		printf("Name is :%s\t",obj.Name);
		printf("Roll number is :%d\t",obj.Rollno);
		printf("Marks is :%d\t",obj.Marks);
		printf("\n\n");
		
		iSum = iSum + obj.Marks;
	}
	
	
	
	close(fd);
	
	return iSum;
}



int main()
{
	
	char name[20]={'\0'};
	int iRet = 0;
	
	printf("Enter file name\n");
	scanf("%s",name);
	
	FileWrite(name);
	iRet=FileRead(name);
	
	printf("Addition of marks is:\n%d",iRet);
	return 0;
}