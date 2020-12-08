/*
Accept N numbers from user and display number of perfect numbers .
*/


#include<stdio.h>
#include<stdlib.h>

void PerfectNumber(int *arr,int iSize)
{
	int iCnt=0;
	int iSum=0;
	int iNo=0;
	int iCnt1=0;
	int iCnt2=0;
	
	
	if(iSize<=0)
	{
		printf("Error:Invalid input\n");
		return;
	}
	if(arr==NULL)
	{
		
		printf("Error:Unable to allocate memory\n");
		
	}
	printf("The perfect numbers are:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iNo=arr[iCnt];
		iSum=0;
		
		for(iCnt1=1;iCnt1<=iNo/2;iCnt1++)
	{
		if(iNo%iCnt1==0)

		{
			iSum=iSum+iCnt1;
			
		}			
			
	
	}
	if(iSum==iNo)
	{ 
        iCnt2++;
 		
	}
	
	

    }

	printf("%d\n",iCnt2);
	
}



int main()
{
	int iValue=0;
	int *ptr=NULL;
	int iCnt=0;
	
	
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
	
	
	PerfectNumber(ptr,iValue);
	
	
	
	
	free(ptr);  //The memory which is dynamically allocated gets deleted of freed.
	
	return 0;
	
}