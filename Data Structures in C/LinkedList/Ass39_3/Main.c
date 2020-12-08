#include<stdio.h>
#include<stdlib.h>

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

struct Node
{
	int data;
	struct Node * next;
};

void InsertFirst(PPNODE Head , int iValue )
{
	
	PNODE newn = NULL;
	
	 newn = (PNODE)malloc(sizeof(NODE));
	 
	 newn -> data = iValue;
	 newn -> next = NULL;
	 
	 
	 if(*Head==NULL)
	 {
		 *Head=newn;
		 
	 }
	else
	{
		newn -> next = *Head;
		*Head = newn;
	}
	
	
	
}



void Display(PNODE Head)
{
	while(Head!= NULL)
	{
	
	printf("|%d|-->",Head -> data);
	Head = Head -> next;
	
	}
	printf("NULL\n");
}




void  Perfect(PPNODE Head )
{
	PNODE temp=*Head;
	
	int iDigit=0;
	
	while((temp->next)!=NULL)
	{
	
	   temp=temp->next;
	   
	   int sum =0;
     while(temp->data !=0)
	 {
		 
		 iDigit= temp->data %10;
		 temp->data=temp->data/10;
		 
		 sum=sum+iDigit;
	 }
	 
	 printf("%d\t",sum);
     
	}
		
		
	
	
}


int main()
{   
    int iNo=0;

	PNODE First=NULL;

	

	int iRet = 0;

	
	printf("Enter vakue\n");
	scanf("%d",&iNo);
	InsertFirst(&First,iNo);
	
	
	printf("Enter vakue\n");
	scanf("%d",&iNo);
	InsertFirst(&First,iNo);
	
	
	printf("Enter vakue\n");
	scanf("%d",&iNo);
	InsertFirst(&First,iNo);
	
	Display(First);
	
	Perfect(&First);

	
	
	
	
	return 0;
}