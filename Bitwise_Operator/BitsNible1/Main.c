#include<stdio.h>

//#define TRUE 1
//#define FALSE 0

//typedef int BOOL;

int CheckBit(int iNo1)
{
	
    int	iRem=0;
	int iPos=0;
	int iMask=0X99999999;
	int iResult=0;
	  
	  iResult=iMask^iNo1;
	  
	printf("%d",iResult);
	return iResult;
	
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

