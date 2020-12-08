/*
    Problem statement :
 1.Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number. 
Input : 79
Output : 15 
 */

 
 
 

 
#include<stdio.h>


int ToggleBit(int iNo)
{
	int iRem=0;
	int j=0;
	int k=1;
	int iPos=0;



    if(iNo < 0)
    {
        iNo = -iNo;
    }
 

   
   while (iNo != 0)    
	{
		iRem  = iNo % 2;
		
		iNo = iNo /2; 
		
		iPos++;
		
		
		
		if ((iPos==7)&&(iRem==1))
		{
			iRem = ~iRem;
		}
		if((iPos==7)&&(iRem==0))
		{
			
			iRem = ~iRem; 
			
		}
		if ((iPos==10)&&(iRem==1)||(iPos==10)&&(iRem==0))
		{
			iRem = ~iRem;
		}
		
		
		
		
		if(iRem == 1)
	{
		j = k+j;   
		
	}
	
	k = k*2;
	
	}
	
	return j;
	
	
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
    iRet=ToggleBit(iNo);
	
	printf("%d\n",iRet);
    
    return 0;
}


/*
     64  32    16     8    4     2    1    --->  k=k*2;
       
     0   0     0     1     1     1    1    --->  20     

	   
	   if(iRem==1)
	   {
		   
		 j=j+k; //1+2+4+8+00==15;
		    
		   
	   }
*/
























