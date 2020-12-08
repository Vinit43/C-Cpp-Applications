/*
Problem statement :
 Accept number from user and return the addition of factors of that number.
 
 Input : 12         Output :   16   (1  +  2 +  3 +  4  + 6)
  Input : 10         Output :   8   (1  +  2 +  5)
  Input : 11         Output :   1   (1)
*/

/*
    Algorith :
 
    START
            Accept number from user and store into the variable no
 
            Craete one counter as cnt and initialise to 1
            Create one variable to store the addtion as ans
 
            Iterate till the counter is less than the number/2 ie no/2
                check whether the cnt divides the no completetly
                    if yes
                        then add the value of cnt into the ans
                incremnet the value of counter by 1
 
            continue to the iteration
 
            return the value of ans
    END
*/
#include "Header.h"


int main()
{
	
	
	
	
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	
	iRet = AddFactor(iValue);
	
	printf("Addition is :\n %d",iRet);
	
	
	
	return 0;
	
	
}