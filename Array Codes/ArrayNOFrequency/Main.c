#include<stdio.h>
#include<stdlib.h>

#define ERRMEMORY -1
#define ERRSIZE -2



int CountNO(int arr[],int iSize,int NO)
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
		if((arr[iCnt])==NO)
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
	int iNo=0;
	
	printf("Enter the Value of N:\n");
	scanf("%d",&iValue);
	      
	printf("Enter NO\n");
    scanf("%d",&iNo);	
		  
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
	
	
	iRet=CountNO(ptr,iValue,iNo);
	
	
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
	   printf("The Frequency of NO is:\n%d",iRet);	
	}
	
	
	free(ptr);  //The memory which is dynamically allocated gets deleted of freed.
	
	return 0;
	
}