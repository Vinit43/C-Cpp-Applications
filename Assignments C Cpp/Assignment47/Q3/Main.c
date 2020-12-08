/*
3. Write a recursive program which accept string from user and count number
of small characters.
Input : HElloWOrlD
Output : 5

*/


#include<stdio.h>

int StrLenSmall(char arr[20] )
{
	
	static int i = 0 ;
	
	if( *arr != '\0')
	{
		if( (*arr>='a') && (*arr<='z') )
		{
			i++;
		}
		
		arr++;
		
		StrLenSmall(arr);
	
	}
	return i;
	
}

int main()
{
	
	char arr[20];
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	int iRet=StrLenSmall(arr);
	
	printf("%d",iRet);
    
	return 0;
	
}