/*
1. Write a recursive program which display below pattern.
Output : * * * * *

*/


#include<stdio.h>

void DisplayPattern()
{
	static int i=1;
	
	if(i<=5)
	{
		printf("*\t");
		
		i++;
		
		DisplayPattern();
	
	}
	
}

int main()
{
	
	DisplayPattern();
    
	return 0;
	
}