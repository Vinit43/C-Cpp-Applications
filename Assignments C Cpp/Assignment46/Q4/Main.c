/*
4. Write a recursive program which accept number from user and return its
factorial.
Input : 5
Output : 120
*/


#include<stdio.h>

int Factorial(int iNo)
{
	static int Fact = 1;
		
	if(iNo>0)
	{
		Fact = Fact * iNo ;
		
		iNo--;
		
		Factorial(iNo);
	
	}
	return Fact;
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the value\n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
    printf("%d",iRet);
	
	return 0;
	
}