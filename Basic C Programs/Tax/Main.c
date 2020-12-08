/*2. Design application for income tax department to calculate tax
amount. According to the income tax department there is no
income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20%
tax.
And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax
amount.

 
Input : 600000 Output : 10000 (0 + 10000)
Input : 450000 Output : 0
Input : 1200000 Output : 90000 (0 + 50000 + 40000) 

 */


#include<stdio.h>

float Bill(int iAmount)
{
	float fTax=0;
	
	
	
	if(iAmount<500000)
	{
		
		return iAmount;
	}
	
	
	else if(iAmount>(200000))
	{
		
		fTax = iAmount*(0.3);
		return  fTax;
		
	}
	
	else if(1000000<iAmount<2000000)
		
		{
		fTax = iAmount*(0.2);
		return  fTax;	
			
		}
	
	else if(500000<iAmount<1000000)
	{
		
		fTax = iAmount*(0.1);
		return  fTax;
		
	}
}





int main()
{
	
	int iValue=0;
	float fRet=0;
	
	
	printf("Enter the total Income:\n");
	scanf("%d",&iValue);
	
	fRet=Bill(iValue);
	printf("%f\n",fRet);
	
	
	
}