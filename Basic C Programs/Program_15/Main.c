/*
Problem Statement :     Accept number from user and return the number of digits
   
Input:1202
Output:4


*/


/*
Algorithm:

        START
		
	1. Accept a number from user in no.
	2. Create one counter as cnt and initialise it to 0.
	3  Iterate till the number is not equal to 0.
	4. Increment the counter by 1.
	5. Return the value of the counter.
	
	
*/
#include"Header.h"

int main()
{
	
	int iValue;
	int iRet;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=CountDigit(iValue);
	
	printf("Number of digits are :\n%d",iRet);
	
	
	return 0;
	
}