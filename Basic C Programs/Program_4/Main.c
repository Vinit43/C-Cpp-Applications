/*
    Problem statement : Accept two numebrs from user and return its division.
*/
 
/*
    Algorithm
 
    START
 
        Accept first number as no1
        Accept second number as no2
        
        Create one variable as ans
 
        Perform division of no1 & no2
        Store the result in ans
 
        return the value from ans
 
    stop
 */

#include "Header.h"
    
int main()                      // Entry point function
{
    int iNo1 = 0, iNo2 = 0;
    double dAns = 0.0;
    
    printf("Enter first number\n");
    scanf("%d",&iNo1);
    
    printf("Enter second number\n");
    scanf("%d",&iNo2);
    
    dAns = Division(iNo1, iNo2);
    
    printf("Division of two numbers is %lf\n",dAns);
    
    return 0;
}



