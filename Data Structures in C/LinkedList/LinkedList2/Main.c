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

void InsertLast( PPNODE Head , int iValue )
{
	
	PNODE newn = NULL;
	PNODE temp = NULL;
	 newn = (PNODE)malloc(sizeof(NODE));
	 
	 newn -> data = iValue;
	 newn -> next = NULL;
	 
	 
	 if(*Head==NULL)
	 {
		 *Head=newn;
		 
	 }
	 else
	 {
		 temp = *Head;
		 
		 while(temp -> next!= NULL)
		 {
			 temp = temp -> next;
			 
		 }
		 temp -> next = newn;
	 }

}

void DeleteFirst(PPNODE Head)
{
	PNODE temp=NULL;
	
	printf("Linked after deleting first node\n");
	
	if(*Head!=NULL)
	{
		temp=*Head;
		*Head=temp->next;
		free(temp);
		
		
	}
	
	
	
}


void DeleteLast(PPNODE Head)
{
	PNODE temp=NULL;
	temp=*Head;
	printf("Linked List after deleting last element\n");
	
	if(*Head==NULL)
	{
		return;
	}
	else if((*Head)->next==NULL)
	{
		free(*Head);
		*Head=NULL;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
			
			
		}
		free(temp->next);
		temp->next=NULL;
		
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

int Count(PNODE Head)
{
	int iCnt=0;
	
	while(Head!= NULL)
	{
		
	Head = Head -> next;
	iCnt++;
	}
	
	return iCnt;
}
void InsertAtPos(PPNODE Head,int iValue,int iPos)
{
	PNODE newn = NULL;
	int size = 0;
	PNODE temp = *Head;
	int i = 0;
	
	newn=(PNODE) malloc (sizeof(NODE));
	
	newn -> data = iValue;
	newn -> next = NULL;
	
	size = Count(*Head);
	
	if((iPos<1)||(iPos>size+1))
	{
		printf("\nInvalid input\n");
		return;
	}
	
	
	else if(iPos==1)
	{
		InsertFirst(Head,iValue);
	}
	else if(iPos==size+1)
	{
		InsertLast(Head,iValue);
	}
	else 
	{
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		newn -> next = temp -> next;
		temp -> next = newn;
		
		
	}
	
}

void DeleteAtPos(PPNODE Head,int iValue,int iPos)
{
	int size = 0;
	int i = 0;
	PNODE temp = *Head;
	PNODE temp2 =NULL;
 	
	size = Count(*Head);
	
	if((iPos<1)||(iPos>size))
	{
		printf("\nInvalid input\n");
		return;
	}
	
	
	else if(iPos==1)
	{
		DeleteLast(Head);
	}
	else if(iPos==size)
	{
		DeleteLast(Head);
	}
	else 
	{
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
			
		}
		temp2=temp->next;
		temp->next=temp2->next;
		free(temp2);
		
		
		
	}
	
	
	
}

int main()
{   
    int iNo=0;
	PNODE First=NULL;
	int iNo2=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	InsertFirst(&First,iNo);
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	InsertFirst(&First,iNo);
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	InsertFirst(&First,iNo);
	
	Display(First);
	iRet=Count(First);
	printf("The number of nodes present are:\n%d\n",iRet);
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	InsertLast(&First,iNo);
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	InsertLast(&First,iNo);
	
	Display(First);
	iRet=Count(First);
	printf("The number of nodes present are:\n%d\n",iRet);
	
	DeleteFirst(&First);
	Display(First);
	iRet=Count(First);
	printf("The number of nodes present are:\n%d\n",iRet);
	
	DeleteLast(&First);
	Display(First);
	iRet=Count(First);
	printf("The number of nodes present are:\n%d\n",iRet);
	

	printf("Enter the position you want to insert the node:\n");
	scanf("%d",&iNo2);
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	InsertAtPos(&First,iNo,iNo2);
	Display(First);
	iRet=Count(First);
	printf("The number of nodes present are:\n%d\n",iRet);
	
	printf("Enter the position you want to delete the node:\n");
	scanf("%d",&iNo2);
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	DeleteAtPos(&First,iNo,iNo2);
	Display(First);
	iRet=Count(First);
	printf("The number of nodes present are:\n%d\n",iRet);
	
	
	
	return 0;
}