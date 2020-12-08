#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node * next;
	
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head,int value)
{
	PNODE newn = NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=value;
	newn->next=NULL;
	
	if(*Head==NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
	
}

void InsertLast(PPNODE Head,int value)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=value;
	newn->next=NULL;
	
	if(*Head==NULL)
	{
		*Head = newn;
	}
	else
	{
    temp = *Head;
     
	 while(temp->next!=NULL)
	 {
		 temp = temp->next;
		 
		 
	 }
    	temp->next = newn;
	
	}
	
}

void DeleteLast(PPNODE Head)
{
	PNODE temp =NULL;
	temp = *Head;
	
	
	if(*Head!= NULL)
	{
	 return;
	}
	else if(*Head->==NULL)
	{
		free(*Head);
		*Head=NULL;
	}
	else
	{
		while(temp->next!=NULL)
		{
			
			temp=temp->next;
			
		}
	free(temp->next);
    temp->next=NULL;	
		
	}
}

void DeleteFirst(PPNODE Head)
{
	PNODE temp =NULL;
	temp=*Head;
	
	if(*Head!= NULL)
	{
		*Head = (*Head)->next;
		free(temp);
	}
	
}


void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|-->",Head->data);
		Head = Head->next;
	}
	
	
}


int main()
{
	PNODE First=NULL;
	
	int no=0;
	
	printf("Enter Number\n");
	scanf("%d",&no);
	InsertFirst(&First,no);
	
	printf("Enter Number\n");
	scanf("%d",&no);
	InsertFirst(&First,no);
	
	printf("Enter Number\n");
	scanf("%d",&no);
	InsertFirst(&First,no);
	
	Display(First);
	
	printf("\nEnter Number\n");
	scanf("%d",&no);
	InsertLast(&First,no);
	
	DeleteFirst(&First);
	
	DeleteLast(&First);
	
	Display(First);
	
	
	return 0;
}