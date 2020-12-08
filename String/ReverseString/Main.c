#include<stdio.h>


void DisplayCapital(char str[])
{
	int iCnt=0;
	int i=0;
	int j=0;
	
	
	
	
	while(str[i]!='\0')
	{
		iCnt++;
		i++;
	
	}
	
	printf("The reverse string is\n");
	
	for(j=iCnt;j>=0;j--)
	{
		printf("%c",str[j]);
		
	}
	
	
	/*
	while(str[iCnt]!='\0'-1)
	{
		printf("%[^'\n']s",str);
	}
	
	*/
	
	
}


int main()
{
	char arr[30];
	//int iRet=0;
	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	
	printf("The entered string is :\n %s\n");
	
	DisplayCapital(arr);
	
	//printf("The count of capital letters in string is :\n %d",iRet);
	
	return 0;
}