/////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name : AddFactor.
//Input         : Integer.
//Output        : BOOLEAN.
//Description   : Used to return the addition of factors of a given number.
//Author        : Vinit Gajanan Nandurkar.
//Date          : 29 July,2020 
//
////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"



int AddFactor(int iNo)           // Accepting the number from user
{
  	int iCnt=0;                      //Variable
	int iAdd=1;

	
	
	if(iNo<0)
	{
		iNo= -iNo;
		
	}
	
	
	
	if(iNo==0||iNo==1)
	{
		
		return 0;
		
	}
	
	for (iCnt=2;iCnt<=iNo/2;iCnt++)    //Condition to check 
	{
		
		
		if(iNo%iCnt==0)         // If a number is completely divisible then they are factors (condition)
		{
		 	
        iAdd=iAdd+iCnt;

		
		
	    }
		
		
	}
	return iAdd;
	
}

///////////////////////////////////////
//
//
//
//  Time Complexity is O(N/2).
// 
// It is readed as Order (Big O) of N/2.
// This means the loop travels N/2 times.
//
////////////////////////////////////////