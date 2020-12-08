/*
Problem statement :
 Accept number from user and check whether that number is perfect number or not.
 
 */
 
 
 
 
#include "Header.h"


int main()
{
	
	
	
	
	int iValue=0;
	BOOLEAN bRet=FALSE;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	
	bRet = AddFactor(iValue);
	
	printf("Addition is :\n %d",bRet);
	
	
	
	return 0;
	
	
	
}