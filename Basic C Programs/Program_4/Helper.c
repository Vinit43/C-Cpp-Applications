#include"Header.h"

////////////////////////////////////////////////////////////////////
//
//  Function Name :         Division
//  Input :                      Integrer, Interger
//  Output :                    Floating point number
//  Description:               It is used to perform division
//  Date :                       27 July 2020
//  Author name :           Piyush Manohar Khairnar
//
///////////////////////////////////////////////////////////////////

double Division(
                    int iValue1,        // First number             10
                    int iValue2         // Second numbber       0
                )
{
    double dRet = 0.0;                      // Local variable to store division
    
    if(iValue2 == 0)                            // Input validation
    {
        return 0.0;
    }
    
    dRet = (double)iValue1 / (double)iValue2;   // Typecasting
    
    return dRet;                        // Return the division      21
}


