#include<stdio.h>
#include<stdlib.h>

#define ERRMEMORY -1
#define ERRSIZE -2



int CountEven(int arr[],int iSize)
{
	
	int iCnt=0;
	int iCnt1=0;
	
	if(arr==NULL)
	{
		return ERRMEMORY;
	}
	if(iSize<=0)
	{
		return ERRSIZE;
		
	}
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((arr[iCnt])%2==0)
		{
			iCnt1++;
			
		}
		
		
	}
	
	
	return iCnt1;
	
	
	
	
}



int main()
{
	int iValue=0;
	int *ptr=NULL;
	int iCnt=0;
	int iRet=0;
	
	printf("Enter the Value of N:\n");
	scanf("%d",&iValue);
	      
	ptr=(int *)malloc(sizeof(int)*iValue);  //sizeof() is flexible with bit processor.
	
	if(ptr==NULL)
	{
		
		printf("Error:Unable to allocate memory\n");
		return -1;
		
	}
	
	
	printf("Enter the numbers\n");
	
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		
		scanf("%d",&ptr[iCnt]);
		
	}
	
	
	iRet=CountEven(ptr,iValue);
	
	
	if(iRet==ERRMEMORY)
	{
		printf("Error:Invalid Memory Allocation\n");
		
	}
	
	if(iRet==ERRSIZE)
		
	{
			
		printf("Error:Invalid Size\n");	
			
	}
	
	else
	{
	   printf("The Frequency of Even Numbers is:\n%d",iRet);	
	}
	
	
	free(ptr);  //The memory which is dynamically allocated gets deleted of freed.
	
	return 0;
	
}