#include<stdio.h>




int StringCheck(char str[],char ch)
{
	
	int i=0;
	int iPos=0;
	
	while(str[i]!='\0')
	{
		
		if(str[i]==ch)
		{
        
		break;
			
		}
			
		i++;
		
		
		
		
	}
	if(str[i]==ch)
	{
		return i;	
	}
     else
	{
		return -1;
	}
	
	
	
	
	
	
}

int main()
{
	char arr[30];
	char ch = '\0';
	
	int iRet=0;
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	
	printf("Enter the Character\n");
	scanf(" %c",&ch);
	
	
	//printf("The count of capital letters in string is :\n %d",iRet);
	
	iRet=StringCheck(arr,ch);
	if (iRet==-1)
	{
		printf("No such character found\n");
	}
	else
	{
	printf("The First Occurence of entered character is:\n%d",iRet);
	}
	
	return 0;
}