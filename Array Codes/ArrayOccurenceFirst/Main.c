#include<stdio.h>
#include<stdlib.h>

//typedef int BOOL;

//#define TRUE iCnt
//#define FALSE -1

#define ERRMEMORY -1
#define ERRSIZE -2
#define NOFOUND -3


int CountNO(int arr[],int iSize,int NO)
{
	
	int iCnt=0;
	//int iCnt1=0;
	
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
			return iCnt;
			break;
			
			
		}
		
	}
	if((arr[iCnt])!=NO)
	{
		return NOFOUND;
		
	}
	
	
	
	
	
	
}



int main()
{
	int iValue=0;
	int *ptr=NULL;
	int iCnt=0;
	//BOOL bRet=FALSE;
	int iNo=0;
	int iRet=0;
	
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
	
	
	
	
	
	if(iRet==ERRMEMORY)
	{
		printf("Error:Invalid Memory Allocation\n");
		
	}
	
	if(iRet==ERRSIZE)
		
	{
			
		printf("Error:Invalid Size\n");	
			
	}
	
	
	iRet=CountNO(ptr,iValue,iNo);
	if(iRet==NOFOUND)
	{
		printf("not found\n");
	}
	else
	{
    printf("The first occurence is at:\n%d\n",iRet);
	}
	
	
	free(ptr);  //The memory which is dynamically allocated gets deleted of freed.
	
	return 0;
	
}