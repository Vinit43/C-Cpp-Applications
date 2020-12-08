/////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name : AddNonFactor.
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
	int iAdd=0;

	
	
	/*if(iNo<0)
	{
		iNo= -iNo;
		
	}
	
	
	
	if(iNo==0)
	{
		
		return 0;
		
	}
	*/
	for (iCnt=1;iCnt<iNo;iCnt++)    //Condition to check     //Condition to check 
	{
		
		
		if(iNo%iCnt==0)         // If a number is completely divisible then they are factors (condition)
		{
		 	
        iAdd=iAdd+iCnt;

		
		
	    }
		
		
	}
	return iAdd;
	
}





int AddFct(int iNO)

{
	  	int iCnt=0;                      //Variable
	    int iAddn=0;
        int iDiff=0;
		int iRet1=0;
	
	
	/*if(iNO<0)
	{
		iNO= -iNO;
		
	}
	
	
	
	if(iNO==0)
	{
		
		return 0;
		
	}
	
	*/
	for (iCnt=iNO-1;iCnt>=1;iCnt--)    //Condition to check 
	{
		
		
		if(iNO%iCnt!=0)         // If a number is completely divisible then they are factors (condition)
		{
		 	
        iAddn=iAddn+iCnt;

		
		
	    }
		
		
	}
	iRet1=AddFactor(iNO);
	
	
	
	return iDiff=iRet1-iAddn;
	
	
	
	
}
	
	
	
	
	
	
	
	
	
	




