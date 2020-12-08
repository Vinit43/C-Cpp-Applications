/*
1. Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3
*/

#include<stdio.h>

int StrlenR(char arr[] )
{
	
	static int i=0;
	
	if(*arr != '\0')
	{
		/*if(*arr == ' ')
		{
			i++;
		}*/
		i++;

		arr++;
		
		StrlenR(arr);
	
	}
	return i;
	
}

int main()
{
	
	char str[20];
	
	printf("Enter string\n");
	scanf("%[^'\n']s",str);
	
	int iRet=StrlenR(str);
	
	printf("The count of whitespaces are:\n%d\n",iRet);
    
	return 0;
	
}