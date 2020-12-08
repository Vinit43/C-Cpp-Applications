#include<stdio.h>


int DisplayCapital(char str[])
{
	int iCnt=0;
	int i=0;
	
	printf("Loop starts\n");
	
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			iCnt++;
			
		}
		
		i++;
	}
	
	return iCnt;
	
	
	
}


int main()
{
	char arr[30];
	int iRet=0;
	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	
	printf("The entered string is :\n %s\n");
	
	iRet=DisplayCapital(arr);
	
	printf("The count of capital letters in string is :\n %d",iRet);
	
	return 0;
}