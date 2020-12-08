#include<stdio.h>


void StringCopy(char str[],char qtr[])
{
     int i=0;
     int j=0;
	 
	while(str[i]!='\0') 
		
	{
		
      i++; 
	}
	  str[i]='\0';
	    	
		printf("%s",str);

    while(qtr[j]!='\0') 
		
	{
		
      j++; 
	}
	  qtr[j]='\0';
	    	
		printf(" %s",qtr);
		
		
		
}

int main()
{
	char arr[30];//="Marvellous";
	char drr[30];//="Logic Building";
    int iNo=0;	
	
	printf("Enter the string\n");
   scanf("%[^'\n']s",arr);
	
	printf("Enter the second string\n");
    scanf(" %[^'\n']s",drr);
	
	StringCopy(arr,drr);
	
	
	//printf("%s",drr);
	return 0;
}