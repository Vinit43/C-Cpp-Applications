/*
    Problem statement : Accept number from user and check whether the
    number is even or odd.
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue = 0;                             // Local variable
    BOOLEAN iAnswer = FALSE;         // Local variable
    
    printf("Enter number\n");       // Display on screen
    scanf("%d",&iValue);              // Accept the input from keyboard
    
    iAnswer = ChkEvenOdd(iValue);   // Function call
    
    if(iAnswer == TRUE)                     // If number is even
    {
        printf("Number is even\n");
    }
    else                                              // If number is odd
    {
        printf("Number is odd\n");
    }
    
    return 0;                               // It indicates successfull termination.
}




