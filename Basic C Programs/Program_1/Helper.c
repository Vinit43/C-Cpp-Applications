#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :      ChkEvenOdd
// Parameters :           Integer
// Return value :         Integer
// Description :           It is used to check number is even / odd
// Author :                  Piyush Manohar Khairnar
// Date :                     20 July 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
BOOLEAN ChkEvenOdd(
                                    int iNo             // Input of the function
                                )
{
    int iReult = 0;                                 // Local variable
    
    iReult = iNo % 2;       // Mod operator which returns remainder after devision
    
    if(iReult == 1)         // If remainder is 1 means number is Odd
    {
        return FALSE;       // False indicates number is odd
    }
    else
    {
        return TRUE;        // True indicates numbe is even
    }
}

