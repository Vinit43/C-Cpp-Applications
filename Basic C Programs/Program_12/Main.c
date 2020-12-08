
#include "Header.h"



int main()                                    //Entry point function
{
	int iValue=0;                            //Creating a variable to store a number
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	
	DisplayFactor(iValue);                //Function call
	
	
	return 0;                            // Successful termination
	
	
}