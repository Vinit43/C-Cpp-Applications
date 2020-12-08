#include<stdio.h>
#include<stdlib.h>

//typedef int BOOL;

//#define TRUE iCnt
//#define FALSE -1

#define ERRMEMORY -1
#define ERRSIZE -2



void Range(int arr[],int iSize,int iStart,int iEnd)
{
	
	int iCnt=0;
	//int iCnt1=0;
	
	if(arr==NULL)
	{
	printf("Error:Memory allocation failed\n");
	}
	if(iSize<=0)
	{
		printf("Error:Invalid input\n");
		
	}
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		
		if(((iStart)<(arr[iCnt]))&&((arr[iCnt])<(iEnd)))
        
		{
			printf("%d\t",arr[iCnt]);
			
		}	
		
		
		
		
		
	}
	
	
	
	
	
	
}



int main()
{
	int iValue=0;
	int *ptr=NULL;
	int iCnt=0;
	//BOOL bRet=FALSE;
	
	int iRet=0;
	int iNo1=0;
	int iNo2=0;
	
	
	printf("Enter the Value of N:\n");
	scanf("%d",&iValue);
	      
	


       printf("Enter the Range you want to display\n");
       scanf("%d%d",&iNo1,&iNo2);	

	
		  
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
	
	   
	
	
/*	if(iRet==ERRMEMORY)
	{
		printf("Error:Invalid Memory Allocation\n");
		
	}
	
	if(iRet==ERRSIZE)
		
	{
			
		printf("Error:Invalid Size\n");	
			
	}
	
	*/
     Range(ptr,iValue,iNo1,iNo2);
	

	//printf("%d\n",iRet);
	
	

	
	free(ptr);  //The memory which is dynamically allocated gets deleted of freed.
	
	return 0;
	
}