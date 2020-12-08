/*
1.Write 
*/
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


void FileWrite(char FName[])
{
    int fd = 0;
    int ret,i = 0;
    int size = 0;
    struct student sobj;
    
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

}

void FileRead(char FName[])
{
    int fd = 0;
    int iRet,iMax = 0;
    int size = 0;
    struct student sobj;
    
    fd = open(FName,O_RDONLY);
    
    if (fd == -1)
    {
        printf("Unable to open the file\n");
        return;
    }

    while((iRet = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        if(sobj.Marks > iMax)
        {
            iMax = sobj.Marks;
        }
    }
	close(fd);
	
	fd = open(FName , O_RDONLY);
	
	
	printf("Highest Marks of student is :\n");

    while((iRet = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        

        if( iMax == sobj.Marks)
        {            
            printf("Roll no : %d\n",sobj.Roll_no);

            printf("Name : %s\n",sobj.Name);

            printf("Marks : %d\n",sobj.Marks);
        }
    }

  close(fd);

}

int main()
{
    char Name[20] = {'\0'};

    printf("Enter file name\n");
    scanf("%s",Name);


    FileWrite(Name);

    FileRead(Name);

    return 0;
}