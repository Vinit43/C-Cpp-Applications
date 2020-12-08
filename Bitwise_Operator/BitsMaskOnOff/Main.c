#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(int iNo)
{
	int iMask=0X00000010;
	int iMask1=0X00020000;
	int iResult=0;
    int iResult1=0;	
	
	iResult=iMask&iNo;
	iResult1=iMask1&iNo;
	
	if((iResult==iMask)&&(iResult1==iMask1))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
	
	
}



int main()
{
	int iValue=0;
	BOOL bRet=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	bRet=CheckBit(iValue);
	
	if(bRet==TRUE)
	{
		printf("The fifth and eighteenth bits are ON\n");
		
	}
	else
	{
		printf("OFF\n");
	}
	
	
	return 0;
}

/*

Decimal      Binary       Hexadecimal

0            0000            0
1            0001            1
2            0010            2 
3            0011            3
4            0100            4
5            0101            5
6            0110            6 
7            0111            7
8            1000            8
9            1001            9
10           1010            a
11           1011            b
12           1100            c
13           1101            d
14           1110            e
15           1111            f








 Binary         0000 0000 0000 0000 0000 0000 0000 1000
 Hexadecimal     0    0    0    2     0     0   0     8
 
 
 
 HexadecimalRepresentation
 
        0X00000008-->MASK
 


   86
   
   
  binary      iNo  86            0101 0110
                                    &
  0X00000008-->MASK              0000 1000

             0000000000




*/


























