/*
Problem Statement :     Accept number from user and return the number rever of that number.
   
Input:1202
Output:4


*/


/*
Algorithm:

        START
		
	1. Accept a number from user in no.
	2. Create one variable as reverse and initialise it to zero.
	3  Create one variable as digit and initialize to zero.
	4. Iterate till the number is not equal to 0.
	5. Perform No%10 and store the result into digit.
	6. Store the result of reverse*10+digit into the same reverese variable.
    7. perform	
	6. Return the value of the counter.
	
	
*/
////////////////////////////////////////////////////////////////
//Function Name:ReverseDigit                                   
//Input:Integer                                             
//Output:Integer                                           
//Description:Used to reverse digit.                 
//Author:Vinit Gajanan Nandurkar                            
//Date:04 August 2020
////////////////////////////////////////////////////////////////
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FASLE 0


BOOL ChkPalindrome(int iNo)
{
     int iDigit=0;
     int iRev=0;       //to store the reverse number
 

   while(iNo!=0)
   {
	   iDigit=iNo%10;
	   
	   
	   iRev=(iRev*10)+iDigit;
	   
	   iNo=iNo/10;
	   
	   
	   
}

return iRev;


}

int main()
{
	
	int iValue=0;
	BOOL bRet=0;
	
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=ChkPalindrome(iValue);
	
	if(bRet==iValue)
	{
		
		printf("Palindrome\n");
	}
	else
	{
		printf("Not palindrome\n");
		
	}
	
	return 0;
	
}