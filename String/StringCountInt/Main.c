#include<stdio.h>


int StringCopy(char *str)
{
  
  
  int iCnt=0;
  
  if(
  (str==NULL)
  
    )
  {
	printf("Error\n");  
	  
  }
  

  
  
	while(*str!='\0')
  { 
    
    if(*str>='0'&&*str<='9')
	{
		iCnt++;
		printf("%c",*str);
	}

      str++;
  }	  
    
return iCnt;

	 
	
	
        
}


int main()
{
	char arr[30]={'\0'};
	int iRet=0;
	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	

	
	iRet=StringCopy(arr);
	
	printf("The count of digits is :\n%d",iRet);
	
	
	//printf("%s",drr);
	return 0;
}