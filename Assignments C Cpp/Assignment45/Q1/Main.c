/*
1. Write a recursive program which display below pattern.
Output : * * * * *

*/


#include<stdio.h>

void DisplayPattern(int iNo)
{
	static int i=1;
	
	if(i<=iNo)
	{
		printf("*\t");
		
		i++;
		
		DisplayPattern(iNo);
	
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter the value\n");
	scanf("%d",&iValue);
	
	DisplayPattern(iValue);
    
	return 0;
	
}