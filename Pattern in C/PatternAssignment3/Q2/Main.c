/*
2. Write a recursive program which accept number from user and return
summation of its digits.
Input : 879
Output : 24
*/


#include<stdio.h>

int AdditionR(int iNo)
{	
	static int iSum=0;
	int iDigit=0;
	
	
	if(iNo != 0)
	{
		iDigit=iNo%10;
		
		iSum=iSum+iDigit;
		
		iNo=iNo/10;
		
		AdditionR(iNo);
	
	}
	
	return iSum;
	
}

int main()
{
	int iValue = 0;
    int iRet = 0;
	
	printf("Enter the value\n");
	scanf("%d",&iValue);
	
	iRet = AdditionR(iValue);
	
	printf("The Addition Of digits is:\n%d\n",iRet);
    
	return 0;
	
}