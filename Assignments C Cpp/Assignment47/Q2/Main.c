/*
2. Write a recursive program which accept number from user and return
largest digit
Input : 87983
Output : 9
*/


#include<stdio.h>

int Maximum(int iNo)
{	
	static int iMax=0;
	static int iDigit=0;
	
	
	if(iNo != 0)
	{
		iDigit=iNo%10;
		
		if(iMax<iDigit)
		{
			iMax = iDigit;
		}
		
		
		
		iNo=iNo/10;
		
		Maximum(iNo);
	
	}
	
	return iMax;
	
}

int main()
{
	int iValue = 0;
    int iRet = 0;
	
	printf("Enter the value\n");
	scanf("%d",&iValue);
	
	iRet = Maximum(iValue);
	
	printf("The maximum digit is:\n%d\n",iRet);
    
	return 0;
	
}