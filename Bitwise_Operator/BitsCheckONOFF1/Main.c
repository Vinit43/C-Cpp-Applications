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
		if(iPos==1&&iRem==1)
	{
		
		iRem = ~iRem;
		
	}
	  printf("%d",iRem);	
	
	
        iNo=iNo/2;
	
	}
	
	
	
	return TRUE;
	
	
	
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


/*
     64  32    16     8    4     2    1    --->  k=k*2;
       
     0   0     0     1     1     1    1    --->  20     

	   
	   if(iRem==1)
	   {
		   
		 j=j+k; //1+2+4+8+00==15;
		    
		   
	   }
*/
























