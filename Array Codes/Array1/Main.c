#include<stdio.h>
#include<stdlib.h>

#define INPUTERROR -1

int Difference(int arr[],int iSize)
{
	int iDiff=0;
	int  iEvenAd=0;
	int iOddAd=0;
	int iCnt=0;
	
	if(iSize<=0)
	{
		return INPUTERROR;
		
	}
	for(iCnt=0;iCnt<iSize;iCnt++)
		
	{
    	if(((arr[iCnt])%2)==0)
		{
			iEvenAd=iEvenAd+arr[iCnt];
			
			
		}

 	else if(((arr[iCnt])%2)!=0)
	{
		
		iOddAd=iOddAd+arr[iCnt];
	}
			
			
	}
	iDiff=iEvenAd-iOddAd;
	
	return iDiff;
	
	
	
}



int main()
{
	int iValue=0;
	int *ptr=NULL;
	int iCnt=0;
	int iRet=0;
	
	printf("Enter the value of N:\n");
	scanf("%d",&iValue);
	
	ptr=(int *)malloc(sizeof(int) * iValue);
	
	if(ptr==NULL)
	{
		
		printf("Error:Unable to allocate memory\n");
		return -1;
	}
	
	
	printf("Enter Values\n");
	
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		
		scanf("%d",&ptr[iCnt]);
		
	}
	
	iRet=Difference(ptr,iValue);
	
	if(iRet==INPUTERROR)
	{
		printf("Error:Invalid input\n");
		
	}
	else
	{
	printf("The Difference is:%d\n",iRet);
	}
	
	
	free(ptr);
	
	return 0;
}