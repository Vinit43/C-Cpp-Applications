#include<stdio.h>


void ReverseString(char str[])
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
	
	while(iStart<iEnd)
	{
		
		Temp = str[iStart];
		str[iStart] = str[iEnd];
		str[iEnd] = Temp;
		
		iStart++;
		iEnd--;
		
	}
	printf("The reverse string is %s\n",str);
	
	
	
	
}


int main()
{
	char arr[30];
	
    	
	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
		
	ReverseString(arr);
	

	
	
	
	
	return 0;
}