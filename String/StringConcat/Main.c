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
	  str++;
	  
  }	  
    *str=' ';
     str++;
  
  
	while(*qtr!='\0')
  { 
      *str=*qtr;
	  str++;
	  qtr++;
	  
  }	  
    *str='\0';

	 
	
	
        
}


int main()
{
	char arr[30]={'\0'};
	char drr[30]={'\0'};
	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	

	printf("Enter the string\n");
    scanf(" %[^'\n']s",drr);
	
	
	StringCopy(arr,drr);
	
	printf("The new string is :\n%s",arr);
	
	
	//printf("%s",drr);
	return 0;
}



