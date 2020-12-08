/////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name : DisplayFactor.
//Input         : Integer.
//Output        : None.
//Description   : Used to display factors of a given number.
//Author        : Vinit Gajanan Nandurkar.
//Date          : 29 July,2020 
//
////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"



void DisplayFactor(int iNo)           // Accepting the number from user
{
  	int iCnt=0;                      //Variable
	
	
	if(iNo<0)                        //Filter
	{
		
		iNo= -iNo;                   // Makes the negative number positive.
		
	}
		 
	
	if(iNo==1||iNo==0)                       // Filter 
	{
	 printf("Factors are not considered.\n");
		}
     
		 else
		 {
	
		 printf("The Factors of above number are:\n");
		 
		 }
	
	
	for (iCnt=1;iCnt<iNo;iCnt++)    //Condition to check 
	{
		
		
		if(iNo%iCnt!=0)         // If a number is completely divisible then they are factors (condition)
		{
		printf("%d\n",iCnt);		
			
		}
		
	}
	
	
	
	
	
}

///////////////////////////////////////
//
//
//
//  Time Complexity is O(N).
// 
// It is readed as Order (Big O) of N.
// This means the loop travels N times.
//
////////////////////////////////////////