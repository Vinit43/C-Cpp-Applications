#include<stdio.h>


void StringCapital(char str[])
{
	int iCnt=0;
	int i=0;
	int j=0;
	
	



	while(str[i]!='\0')
	{
		
		if(str[i]>='A'&&str[i]<='Z')
		{
			printf("%c",str[i]+32);
			
		}
		
		
		if(str[i]>='a'&&str[i]<='z')
		{
			printf("%c",str[i]-32);
			
		}
		
		iCnt++;
		i++;
	}
	
	
	
}


int main()
{
	char arr[30];
	//char cRet=0;
	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s%d",arr);
	
	//printf("The entered string is :\n %s\n");
	
	StringCapital(arr);
	
	//printf("The count of capital letters in string is :\n %d",iRet);
	
	return 0;
}