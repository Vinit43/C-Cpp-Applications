#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[],int iSize)
{
	
	int iCnt=0;
	int iCnt1=0;
	int iCnt2=0;
	int iDiff=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((arr[iCnt]%2)==0)
		{
			
			iCnt1++;
			
		}
		else if((arr[iCnt]%2)!=0)
		{
		
			iCnt2++;
			
		}
		
	}
	iDiff = iCnt1 - iCnt2;
	

	return iDiff;
	
	
}



int main()
{
	int iCnt=0;
	int iValue=0;
	int *ptr=NULL;
	int iRet=0;
	
	printf("Enter the value of N:\n");
	scanf("%d",&iValue);
	
	ptr=(int *)malloc(sizeof(int)*iValue);
	
	
	if(ptr==NULL)
	{
		printf("Error:Memory cannot allocate\n");
		return -1;
		
	}
	printf("Enter values:\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
		
	}
	

	iRet=Difference(ptr,iValue);
	
	printf("The difference is %d\n",iRet);
	
	free(ptr);
	return 0;
}