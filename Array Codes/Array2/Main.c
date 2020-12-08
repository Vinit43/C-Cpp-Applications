#include<stdio.h>
#include<stdlib.h>

//#define INPUTERROR -1

void Difference(int arr[],int iSize)
{
	int iCnt=0;
	
	
	/*if(iSize<=0)
	{
		return INPUTERROR;
		
	}*/
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((arr[iCnt]%2==0)&&(arr[iCnt]%5==0))
		{
			
			printf("%d\t",arr[iCnt]);
	
		}
		else if((arr[iCnt]%2!=0)&&(arr[iCnt]%5!=0))
		{
			return;
			
		}
		
		
		
	}
	
	
	
}



int main()
{
	int iValue=0;
	int *ptr=NULL;
	int iCnt=0;
	//int iRet=0;
	
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
	
	Difference(ptr,iValue);
	
	
	
	free(ptr);
	
	return 0;
}