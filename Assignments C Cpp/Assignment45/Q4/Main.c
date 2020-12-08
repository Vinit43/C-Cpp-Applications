/*
2. Write a recursive program which display below pattern.
Output : A B C D E 

*/


#include<stdio.h>

void DisplayPattern(int iNo)
{
	static int i = 1;
	static char j  = 'A';
	
	if(i<=iNo)
	{
		printf("%c\t",j);
		
		j++;
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