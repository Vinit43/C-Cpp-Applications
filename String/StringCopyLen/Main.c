#include<stdio.h>


void StringCopy(char str[],char qtr[],int iCnt)
{
     int i=0;
     
	 
	while(i<iCnt) 
		
	{
		 qtr[i]=str[i];
		
		i++; 
	}
	   qtr[i]='\0';
	    
		printf("%s",qtr);
}

int main()
{
	char arr[30];
	char drr[30];
    int iNo=0;	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	
    printf("Enter the number\n");
	scanf("%d",&iNo);
	
	StringCopy(arr,drr,iNo);
	
	
	//printf("%s",drr);
	return 0;
}