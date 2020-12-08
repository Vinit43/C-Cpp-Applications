#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL StringVowel(char str[])
{
	int iCnt=0;
	int i=0;
	
	
	



	while(str[i]!='\0')
	{
		
		if(str[i]=='a'||str[i]=='A'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o')
		{
		return TRUE;
		
			
		}
		
		
		
		iCnt++;
		i++;
	}
	
	
	
}


int main()
{
	char arr[30];

	BOOL bRet=FALSE;
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	

	
	//printf("The count of capital letters in string is :\n %d",iRet);
	
	bRet=StringVowel(arr);
	
	
	if (bRet==TRUE)
	{
		printf("The vowel present\n");
		
	}
	else
	{
		printf("It is not present\n");
	}
	
	
	return 0;
}