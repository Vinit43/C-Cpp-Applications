#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL StringCheck(char str[],char ch)
{
	int iCnt=0;
	int i=0;
	
	
	



	while(str[i]!='\0')
	{
		
		if(str[i]==ch)
		{
		return TRUE;
		break;
			
		}
		
		
		
		iCnt++;
		i++;
	}
	
	
	
}


int main()
{
	char arr[30];
	char ch = '\0';
	int iNo=0;
	BOOL bRet=FALSE;
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	
	printf("Enter the Character\n");
	scanf(" %c",&ch);
	
	
	//printf("The count of capital letters in string is :\n %d",iRet);
	
	bRet=StringCheck(arr,ch);
	
	
	if (bRet==TRUE)
	{
		printf("The entered character is present\n");
		
	}
	else
	{
		printf("It is not present\n");
	}
	
	
	return 0;
}