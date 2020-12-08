////////////////////////////////////////////////////////////////
//Function Name:CountDigit                                   
//Input:Integer                                             
//Output:Integer                                           
//Description:Used to Count No of Digits.                 
//Author:Vinit Gajanan Nandurkar                            
//Date:03 August 2020
////////////////////////////////////////////////////////////////

#include"Header.h"


 int CountDigit(int iNo)
{
     int iCnt=0;
	
	while(iNo!=0)
	{
		
		iNo=iNo/10;
		
		iCnt++;
            		
		
	}	
	return iCnt;

	
	}
		
