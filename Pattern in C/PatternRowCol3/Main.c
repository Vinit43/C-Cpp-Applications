#include<stdio.h>


void Pattern(int iRow, int iCol)


{
	 int i=0;
	 int j=0;
	 int k=0;
	 int l=0;
	
	 k=1;
	 l=1;
	 
	 for(i=1;i<=iRow;i++)
	 {
	
	if(i%2!=0)
		{
	
	for(j=1;j<=iCol;j++)
	{
    
        
			
			printf("%d\t",j*2);
			
		}
		
		}
	else 
	{
		
		
		for(j=0;j<iCol;j++)
	{
    
        /*if(j==0)
		{
			j=1;
			
		}*/
			
			printf("%d\t",(j*2)+1);
			
		}
	
		
	}

	printf("\n"); 
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