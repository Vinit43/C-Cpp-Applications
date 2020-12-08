#include"Header.h"

////////////////////////////////////////////////////////////////////
//
//  Function Name :         Division
//  Input :                      Integrer, Interger, Address of double
//  Output :                    Boolean
//  Description:               It is used to perform division
//  Date :                       27 July 2020
//  Author name :           Piyush Manohar Khairnar
//
///////////////////////////////////////////////////////////////////

BOOLEAN Division(
                    int iValue1,        // First number
                    int iValue2,         // Second numbber
                    double *pData   // Address of empty variable
                )
{
    double dRet = 0.0;                      // Local variable to store division

    if(iValue2 == 0)                            // Input validation
    {
        return FALSE;           // Return FALSE as a failure
    }
    
    dRet = (double)iValue1 / (double)iValue2;   // Typecasting
    
    *pData = dRet;    // Store the value in the empty variable through pointer
    
    return TRUE;                        // Return the TRUE as a success
}


