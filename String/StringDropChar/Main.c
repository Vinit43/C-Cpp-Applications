#include<stdio.h>


void StringCopy(char *str,char *qtr,char ch)
{
 int i =0, j=0;

 while(str[i]!=ch)
 {
	 
	 qtr[j]=str[i];
	 
	 
	 i++;
	 j++;
	 
	 
	 
	 
 }
 
 i++;
  while(str[i]!='\0')
  {
	  
  
    qtr[j]=str[i];
  j++;
  i++;
  }
  
  printf("%s",qtr);
  
        
}


int main()
{
	char arr[30]={'\0'};
	char brr[30]={'\0'};
	char cChar='\0';
	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	

	printf("Enter the character\n");
    scanf(" %c",&cChar);
	
	
	StringCopy(arr,brr,cChar);
	
	//printf("The new string is :\n%s",arr);
	
	
	//printf("%s",drr);
	return 0;
}



