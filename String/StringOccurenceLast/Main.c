#include<stdio.h>




int StringCheck(char str[],char ch)
{
	
	int i=0;
	int iPos=-1 ;
	
	
	if(str==NULL)
	{
		return -2;
	}
	
	while(str[i]!='\0')
	{
		
		if(str[i]==ch)
		{
        iPos=i;
		
			
		}
			
		i++;	
		
	}
	return iPos;
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
	
	
	
	
	iRet=StringCheck(arr,ch);
	if (iRet==-1)
	{
		printf("No such character found\n");
	}
	else
	{
	printf("The Last Occurence of entered character is:\n%d",iRet);
	}
	
	return 0;
}