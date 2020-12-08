/*
1. Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *
*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
	static int i=1;
	
	if(i<=iNo)
	{
		printf("%d\t*\t",i);
		
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