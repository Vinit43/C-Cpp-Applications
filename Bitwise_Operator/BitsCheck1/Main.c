#include<stdio.h>

//#define TRUE 1
//#define FALSE 0

//typedef int BOOL;

int CheckBit(int iNo1,int iNo2)
{
	
    int	iRem=0;
	int iPos=0;
	int j=0;
	int k=1;

	if(iNo1<0)
	{
		iNo1=-iNo1;
		
	}
	
	
	while(iNo1!=0)
	{
		
		iRem=iNo1%2;
	    iPos++;
       if(iPos==iNo2&&iRem==1)
	   {
		   iRem=~iRem;
	   }


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
	int iValue1=0;
	int bRet=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	
	printf("Enter the bit position\n");
	scanf("%d",&iValue1);
	
	
	
	bRet=CheckBit(iValue,iValue1);
	
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

