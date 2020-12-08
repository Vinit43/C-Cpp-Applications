#include<stdio.h>


void Pattern(int iRow, int iCol)


{
	int iCnt=0;
	int iCnt1=0;


for(iCnt=1;iCnt<=iRow;iCnt++)
   {
	
	printf("\n");

	
for(iCnt1=1;iCnt1<=iCol;iCnt1++)

{
	
	printf("*#\t");

}
	
	
	
}


}


int main()
{
int iValue1 = 0, iValue2 = 0;


printf("Enter number of rows and columns\n");

scanf("%d %d",&iValue1, &iValue2);

Pattern(iValue1, iValue2);

return 0;
}