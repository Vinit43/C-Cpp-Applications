/*
2. Write a recursive program which display below pattern.
Output : A B C D E 

*/


#include<stdio.h>

void DisplayPattern()
{
	static char i= 'A' ;
	
	if(i<='E')
	{
		printf("%c\t",i);
		
		i++;
		
		DisplayPattern();
	
	}
	
}

int main()
{
	
	DisplayPattern();
    
	return 0;
	
}