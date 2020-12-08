#include<stdio.h>

void DisplayBinary(int iValue)
{
	
	
    int iRem = 0;
	int iCnt=0;
	

    if(iValue < 0)
    {
        iValue = -iValue;
    }
    
    while(iValue != 0)
    {
		
        iRem = iValue % 2;
        iValue = iValue / 2;
		printf("%d",iRem);
		
		
		{
			if(i==1)
			
			
		}
		
		
		
		if(iRem==1)
		{
           iCnt++;
           		
		}
    }
	
	
	
	printf("The count of 1 is :\n%d",iCnt);
}

int main()
{
    int iNo = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
        
    DisplayBinary(iNo);
    
    return 0;
}
