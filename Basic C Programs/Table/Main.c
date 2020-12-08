
#include<stdio.h>

int Display(int iNo)
{
	int iCnt=0;
	
	int iMult=1;
 for(iCnt=10;iCnt>=1;iCnt--)
 {
	 
	 
	 iMult=iNo*iCnt;
	 printf("\t %d",iMult);
	 
	 
	 
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