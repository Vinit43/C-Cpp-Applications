#include<stdio.h>


void StringCopy(char *str,char *qtr)
{
  
  
  
  
  if(
  (str==NULL)||
  (qtr==NULL)
    )
  {
	printf("Error\n");  
	  return ;
  }
  

  while(*str!='\0')
  {
	  *qtr=*str;
	  str++;
	  qtr++;
	  
  }	  
	
    *qtr='\0';

        
}


int main()
{
	char arr[30]={'\0'};
	char drr[30]={'\0'};
	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	

	
	
	StringCopy(arr,drr);
	
	printf("The copied string is :\n%s",drr);
	
	
	//printf("%s",drr);
	return 0;
}