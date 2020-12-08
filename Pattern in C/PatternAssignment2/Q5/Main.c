/*
2. Write a recursive program which display below pattern.
Output : E D C B A

*/


#include<stdio.h>

void DisplayPattern()
{
	static int i= iNo ;
	
	static char j = 'E';
	
	if(i>=iNo)
	{
		printf("%c\t",j);
		
		i--;
		j--;
		
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