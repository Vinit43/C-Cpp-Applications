#include<stdio.h>


int StringCopy(char str[])
{
     int iStart=0;
	 int iEnd=0;
	 int Temp=0;
	 
	
	while(str[iEnd]!='\0')
	{
		iEnd++;
		
	}


	iEnd--;
	
	while(iStart<iEnd)
	{
		
		if(str[iStart]!=str[iEnd])
		{
			return 0;
		}
		iStart++;
		iEnd--;
		
	}
	printf("The reverse string is %s\n",str);
	
	return 1;
}

int main()
{
	char arr[30];
	int iRet=0;
	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	

	
	
	iRet=StringCopy(arr);
	if(iRet==0)
	{
		printf("Not palindrome\n");
		
	}
	else
	{
		printf("Palindrome\n");
	}
	
	
	//printf("%s",drr);
	return 0;
}