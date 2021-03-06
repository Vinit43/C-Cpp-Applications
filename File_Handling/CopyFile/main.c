/*
1.Accept two file names from the user and copy the contents of one file into the other file.
*/


#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include<IO.h>


void FileCopy(char *src , char *dest)
{
	int fdsrc = 0;
	int fddest = 0;
	char arr[100]={'\0'};
	int iRet = 0;
	int i = 1 ;
	
	fdsrc = open(src , O_RDONLY );
	
	if(fdsrc == -1)
	{
		printf("Error:Unable to open the file\n");
		return;
	}
	
	fddest = open(dest , O_RDWR|O_CREAT, 0777);
	
	if(fddest == -1)
	{
		printf("Error:Unable to open the file\n");
		close(fdsrc);
		return;
		
	}
	
	
	
	while((iRet = read(fdsrc , arr , sizeof(arr)))!=0)
	{
		printf("Iteration : %d Size: %d\n",i,iRet);
		i++;
		write(fddest , arr , iRet);
	}
	
	close(fdsrc);
	close(fddest);
	
}


int main()
{
	char name1[20]={'\0'};
	char name2[20]={'\0'};
	
	printf("Enter the existing file name\n");
	scanf("%s",name1);
	
	printf("Enter the destination file name\n");
	scanf(" %s",name2);
	
	FileCopy(name1 , name2);
	
	return 0;
}