/*
2. Write a recursive program which display below pattern.
Output : 1 2 3 4 5

*/


#include<stdio.h>

void DisplayPattern(int iNo)
{
	static int i=1;
	
	if(i<=iNo)
	{
		printf("%d\t",i);
		
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