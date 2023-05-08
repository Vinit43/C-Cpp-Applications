
#include<stdio.h>

int Display(int iNo)
{
	int iCnt=0;
	
	
 for(iCnt=-iNo;iCnt<=iNo;iCnt++)
 {
	 
	// printf("$\t*\n");                        Display stars and symbol
	printf("%d\t",iCnt);
	 
	 
}
 
}


int main()
{
	int iValue=0;
	
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	
	
	
	return 0;
	
	
}
