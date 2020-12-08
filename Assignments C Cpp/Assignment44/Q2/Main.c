/*
2. Write a recursive program which display below pattern.
Output : 1 2 3 4 5

*/


#include<stdio.h>

void DisplayPattern()
{
	static int i=1;
	
	if(i<=5)
	{
		printf("%d\t",i);
		
		i++;
		
		DisplayPattern();
	
	}
	
}

int main()
{
	
	DisplayPattern();
    
	return 0;
	
}