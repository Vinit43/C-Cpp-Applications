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
	
	
	
	for(j=1;j<=iCol;j++)
	{
    
        if(i==j)
		{
			
		//	printf("%d\t",j*2);
			printf("*\t");
			
		}
	else //if(k%2==0)
	{
		
		printf("#\t");
		
	
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