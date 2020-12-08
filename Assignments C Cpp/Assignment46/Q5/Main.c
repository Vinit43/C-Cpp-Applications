/*
5. Write a recursive program which accept number from user and return its
product of digits.
Input : 523
Output : 30

*/


#include<stdio.h>

int Multiplication(int iNo)
{	
	static int iMul=1;
	static int iDigit=0;
	
	
	if(iNo != 0)
	{
		iDigit=iNo%10;
		
		iMul=iMul*iDigit;
		
		iNo=iNo/10;
		
		Multiplication(iNo);
	
	}
	
	return iMul;
	
}

int main()
{
	int iValue = 0;
    int iRet = 0;
	
	printf("Enter the value\n");
	scanf("%d",&iValue);
	
	iRet = Multiplication(iValue);
	
	printf("The multiplication Of digits is:\n%d\n",iRet);
    
	return 0;
	
}