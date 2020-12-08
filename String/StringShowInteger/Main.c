#include<stdio.h>


int StringCapital(char str[])
{
	int iCnt=0;
	int i=0;
	int j=0;
	
	   while(str[i]!='\0')
	   {
		if(str[i]=='')
		{
			iCnt++
			
		}			
	
	   }	



    return iCnt;
	
	
}


int main()
{
	char arr[30];
	int iRet=0;
	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s%d",arr);
	
	//printf("The entered string is :\n %s\n");
	
	iRet=StringCapital(arr);
	
	printf("The count of integer is :\n %d",iRet);
	
	return 0;
}