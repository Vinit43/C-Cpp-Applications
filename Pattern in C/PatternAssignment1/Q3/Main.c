/*
2. Write a recursive program which display below pattern.
Output : 5 4 3 2 1

*/


#include<stdio.h>

void DisplayPattern()
{
	static int i=5;
	
	if(i>0)
	{
		printf("%d\t",i);
		
		i--;
		
		DisplayPattern();
	
	}
	
}

int main()
{
	
	DisplayPattern();
    
	return 0;
	
}