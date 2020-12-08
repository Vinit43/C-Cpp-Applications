

#include<stdio.h>  
#include<stdlib.h> 


void ThreeDigit(int arr [], int iSize) 
{
    int iCnt = 0;
    int iDigit=0; 
	int iNo=0;
	int iCnt1=0;
	
    if(arr == NULL)       
    {
        printf("Invalid address");
        return ;       
    }
    if(iSize <= 0)          
    {
        printf("Invalid size\n");
        return ;         
    }
printf("The 3 digits numbers are:\n");
    for(iCnt = 0 ; iCnt < iSize; iCnt++)     
    {
		iNo=arr[iCnt];
		
		iCnt1=0;
		
		
		while(iNo!=0)
		{
		iDigit=iNo%10;
		
		iNo=iNo/10;
		
		iCnt1++;
		}
		
	if((iCnt1)==3)
	{
	  printf("%d\t",arr[iCnt]);	
	}
	
	
	}
	
                                         
}

int main()
{
    int iValue = 0;
    //int iRet = 0;
    int iCnt = 0;
    int *ptr = NULL;
    
    printf("Enter the value of N\n");
    scanf("%d",&iValue);                // 5
    
    if(iValue == 0)
    {
        printf("Error : Inavlid Input\n");
        return -1;
    }
   
    ptr = (int *)malloc(sizeof(int) * iValue);    
    if(ptr == NULL)   
    {
        printf("Error : Unable to allocate memory\n");
        return -1;     
    }
    
    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);   
    }
    
    ThreeDigit(ptr,iValue);     
    
   //printf("Maximum number is : %d\n",iRet);
    
    free(ptr);                    
    
    return 0;              
}









