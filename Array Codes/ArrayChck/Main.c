#include<stdio.h>
#include<stdlib.h>

//typedef int BOOL;

/*#define TRUE 1
#define FALSE 0*/
#define ERRMEMORY -1
#define ERRSIZE -2



int ChckEleven(int arr[],int iSize)
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
		if(arr[iCnt]==11)
		{
			iCnt1++;
		}
		
		
	}
	return iCnt1;
	
	
	/*while(arr[iCnt]==11)
	{
		iCnt++;
		return TRUE;
		
		
	}*/
	
	
	
	
	
	
}



int main()
{
	int iValue=0;
	int *ptr=NULL;
	int iCnt=0;
	//BOOL bRet=0;
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
	
	
	//bRet=ChckEleven(ptr,iValue);
	iRet=ChckEleven(ptr,iValue);
	
	/*if(bRet==ERRMEMORY)
	{
		printf("Error:Invalid Memory Allocation\n");
		
	}
	
	if(bRet==ERRSIZE)
		
	{
			
		printf("Error:Invalid Size\n");	
			
	}*/
	
	/*if(bRet==TRUE)
	{
	   printf("11 is present\n");	
	}
	else
	{
		printf("11 is absent\n");
		
	}*/
	
	
	iRet=ChckEleven(ptr,iValue);
	
	printf("%d",iRet);
	
	free(ptr);  //The memory which is dynamically allocated gets deleted of freed.
	
	return 0;
	
}