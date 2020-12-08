#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(int iNo)
{
	
    int	iRem=0;
	int iPos=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
		
	}
	
	
	while(iNo!=0)
	{
		
		iRem=iNo%2;
	    iPos++;
       if(iPos==4)
	   {
		   break;
	   }


    	 iNo=iNo/2;
	
	}
	
	
	if(iPos==4&&iRem==1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
	
	
}



int main()
{
	int iValue=0;
	BOOL bRet=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	bRet=CheckBit(iValue);
	
	if(bRet==TRUE)
	{
		printf("The fourth bit is ON\n");
		
	}
	else
	{
		printf("The fourth bit is OFF\n");
	}
	
	
	return 0;
}

