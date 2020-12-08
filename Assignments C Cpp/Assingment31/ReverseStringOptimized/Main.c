#include<stdio.h>


void ReverseString(char str[], char qtr[])
{
	
	int iStart=0;
	int iEnd=0;
	int Temp=0;
	int i=0;
	
	
	
	while(str[iEnd]!='\0')
	{
		iEnd++;
		
	}
	iEnd--;
	
	
	while(str[iStart]!='\0')
	{
		
		qtr[iStart] = str[iEnd];
		
		iStart++;
		iEnd--;
		
	}
	qtr[iStart]='\0';
	
	//printf("The reverse string is %s\n",qtr);
	
	
	
	
}


int main()
{
	char arr[30];
	char brr[30];
    	
	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
		
	ReverseString(arr, brr);
	

	printf("The reverse new string is %s",brr);
	
	
	
	return 0;
}