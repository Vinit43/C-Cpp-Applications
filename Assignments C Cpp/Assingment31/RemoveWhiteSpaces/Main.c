#include<stdio.h>


void StringCopy(char str[],char qtr[])
{
	int i=0;
	int j=0;
	
  if(
  (str==NULL)||
  (qtr==NULL)
    )
  {
	printf("Error\n");  
	  return ;
  }
  

  while(str[i]!='\0')
  {  
     if(str[i]==' ')
     {
		 
		 i++;
	 }  

    qtr[j]=str[i];

	  i++;
	  j++;
	  
  }	  

  
  
	
	
	
        
}


int main()
{
	char arr[30]={'\0'};
	char drr[30]={'\0'};
	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	


	
	StringCopy(arr,drr);
	
	printf("The new string is :\n%s",drr);
	
	
	//printf("%s",drr);
	return 0;
}



