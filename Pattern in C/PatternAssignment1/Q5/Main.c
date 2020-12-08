/*
2. Write a recursive program which display below pattern.
Output : E D C B A

*/


#include<stdio.h>

void DisplayPattern()
{
	static char i= 'E' ;
	
	if(i>='A')
	{
		printf("%c\t",i);
		
		i--;
		
		DisplayPattern();
	
	}
	
}

int main()
{
	
	DisplayPattern();
    
	return 0;
	
}