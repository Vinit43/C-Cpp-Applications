
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

struct student
{
    int Roll_no;
    char Name[20];
    int Marks;
};

float FileRead(char FName[] ,int size)
{
    int k = size ;
	int fd = 0 ; 
    int iRet=0 ;
	int i = 0;
	float Avg = 0.0;
    struct student sobj;
	
	
    
    fd = open(FName,O_RDONLY);
    
    if (fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    while((iRet = read(fd,&sobj,sizeof(sobj))) != 0)
    {
		i = i + sobj.Marks;
    }
	
	Avg = i/size;
	
	return Avg ;
}

void FileWrite(char FName[])
{
    int fd = 0;
    int ret,i = 0;
    int size = 0;
    struct student sobj;
	float avg = 0.0;
    
    fd = open(FName,O_WRONLY);
    
    if (fd == -1)
    {
        printf("Unable to open the file\n");
        return;
    }

    printf("Enter number of students\n");
    scanf("%d",&size);

    for(i = 1; i <= size ; i++)
    {
        printf("Enter roll no\n");
        scanf("%d",&sobj.Roll_no);

        printf("Enter name of students\n");
        scanf(" %[^'\n']s",&sobj.Name);

        printf("Enter marks\n");
        scanf("%d",&sobj.Marks);

        write(fd,&sobj,sizeof(sobj));
    }

    close(fd);
	avg  = FileRead(FName,size);
	printf("The average score is:\n%f\n",avg);

}


int main()
{
    char Name[20] = {'\0'};

    printf("Enter file name\n");
    scanf("%s",Name);


    FileWrite(Name);

    return 0;
}