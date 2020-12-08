#include<stdio.h>


void Pattern(int iRow, int iCol)


{
	int iCnt1=0;
		 
	for(iCnt1=1;iCnt1<=iRow*iCol;iCnt1++)
   {
	   
	   printf("%d\t",iCnt1);
     
	 
	 if(iCnt1%iCol==0)
	 {
		 
		 printf("\n");
	 
   }
  }
}

int main()
{
int iValue1 = 0, iValue2 = 0;


printf("Enter number of rows\n");

scanf("%d",&iValue1);

printf("Enter number of cloumns\n");

scanf("%d",&iValue2);

Pattern(iValue1, iValue2);

return 0;
}