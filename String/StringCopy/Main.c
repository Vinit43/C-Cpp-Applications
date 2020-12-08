#include<stdio.h>


void StringCopy(char str[],char qtr[])
{
     int i=0;
     int j=0;
	 int iStart=0;
	 int iEnd=0;
	 int Temp=0;
	 int k=0; 
	while(str[i]!='\0') 
	{
		 qtr[i]=str[i];
		
		
		i++; 
	}
	qtr[i]='\0';
	
	while(str[iEnd]!='\0')
	{
		iEnd++;
		
	}


	k=iEnd;
	printf("%d\n",iEnd);
	iEnd--;
	
	while(iStart<iEnd)
	{
		
		Temp = str[iStart];
		str[iStart] = str[iEnd];
		str[iEnd] = Temp;
		
		iStart++;
		iEnd--;
		
	}
	printf("The reverse string is %s\n",str);
	
	int l=0;
	for(l=0;l<k;l++)
	{
	   	if(str[l]==qtr[l])
		{
			printtf("Palindrome\n");
			
			
		}
		else
		{
			printf("dsajdasd\n");
			break;
		}
	}	
   	
	
	
	}


int main()
{
	char arr[30];
	char drr[30];
	
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	

	
	
	StringCopy(arr,drr);
	
	
	
	//printf("%s",drr);
	return 0;
}