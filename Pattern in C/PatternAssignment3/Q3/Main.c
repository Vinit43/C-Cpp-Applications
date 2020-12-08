/*
3. Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5

*/


#include<stdio.h>

int StrLen(char arr[20] )
{
	
	static int i=0;
	
	if(*arr != '\0')
	{
		
		i++;
		arr++;
		
		StrLen(arr);
	
	}
	return i;
	
}

int main()
{
	
	char arr[20];
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	int iRet=StrLen(arr);
	
	printf("%d",iRet);
    
	return 0;
	
}