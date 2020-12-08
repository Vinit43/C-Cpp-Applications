#include<stdio.h>

//#define TRUE 1
//#define FALSE 0

//typedef int BOOL;

int CheckBit(int iNo1)
{
	
    int	iRem=0;
	int iPos=0;
	int j=0;
	int k=1;
	int Last=4;
	int First=1;

	if(iNo1<0)
	{
		iNo1=-iNo1;
		
	}
	
	
	while(iNo1!=0)
	{
		
		iRem=iNo1%2;
	    
		
		iPos++;
		
		if(iPos==1&&iRem==1)
		{
			iRem=~iRem;
			
		}
		if(iPos==1&&iRem==0)
		{
			iRem=~iRem;
		}
		if(iPos==4&&iRem==1)
		{
			iRem=~iRem;
			
		}
		if(iPos==4&&iRem==0)
		{
			iRem=~iRem;
		}
		
		
		
		
    /*   if((iPos==First)&&(iRem==1))
	   {
		
		iRem=~iRem;
    First=First+4;
		}
		if((iPos==First)&&(iRem==0))
	   {
		
		iRem=~iRem;
        First=First+4;
		}
         
		 
		 
		 
       if((iPos==Last)&&(iRem==1))
	   {
		
		iRem=~iRem;
        Last=Last+4;
		}
        
       if((iPos==Last)&&(iRem==0))
	   {
		
		iRem=~iRem;
Last=Last+4;
		}
		
		
		 
		 */

    	 iNo1=iNo1/2;
		 
		 if(iRem==1)
		 {
			 j=k+j;
			 
		 }
		 
		 k=k*2;
		
	
	}
	 
	return j;
		
	
}



int main()
{
	int iValue=0;
	
	int bRet=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	
	
	
	bRet=CheckBit(iValue);
	
	/*if(bRet==TRUE)
	{
		printf("The %d th bit is ON\n",iValue1);
		
	}
	else
	{
		printf("The %d th bit is OFF\n",iValue1);
	}
	
	*/
	printf("The new number is\n%d",bRet);
	
	
	
	
	
	return 0;
}

