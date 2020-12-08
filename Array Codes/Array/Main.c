#include<stdio.h>
#include<stdlib.h>

int SumNumbers(int arr[],int iSize)

{
	
  int iSum=0;

  int iCnt=0;


for(iCnt=0;iCnt<iSize;iCnt++)
{
	
iSum=iSum+arr[iCnt];	
	
	
}	
	return iSum;
	
}




int main()
{
	int iValue=0;
	int iCnt=0;
	int iRet=0;
	int *ptr=NULL;
	
	printf("Enter the Value of N:\n");
	scanf("%d",&iValue);
	
	ptr=(int *)malloc(4*iValue);
	
	
	printf("Enter the numbers\n");
	
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		
	scanf("%d",&ptr[iCnt]);	
		
		
	}
	
	
	printf("Your Entered Numbers are\n");
	
	
	for(iCnt=0;iCnt<iValue;iCnt++)
	
	{
		
	printf("%d\t",ptr[iCnt]);
		
	}
	printf("\n");
	
	iRet=SumNumbers(ptr,iValue);
	
	printf("\nThe sum is %d\n",iRet);
	
}