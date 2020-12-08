#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int data;
	struct Node *next;
	struct Node *prev;
	
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;


void InsertFirst(PPNODE Head,int iValue)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn -> data = iValue;
	newn -> next = NULL; 
    newn -> prev = NULL;

    if(*Head==NULL)
    {
    	*Head = newn;
    }
    else
    {
    	newn -> next = *Head;
    	(*Head) -> prev = newn;
    	*Head = newn;
   }
 
}

void InsertLast(PPNODE Head,int iValue)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	newn = (struct Node *)malloc(sizeof(struct Node));

    newn -> data = iValue;
	newn -> next = NULL;
	newn -> prev = NULL;

	if(*Head==NULL)
	{
		*Head=newn;
	}

	else
	{
		temp=*Head;

		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;

		newn->prev=temp;

	}
}

void DeleteFirst(PPNODE Head)
{
	if(*Head!=NULL)
	{
		(*Head)=(*Head)->next;
		free((*Head)->prev);
		(*Head)->prev=NULL;


	}


}


void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|-->\t",Head->data);

		Head=Head->next;

	}

    printf("NULL\n");
 

}

int Count(struct Node * Head)
{
	int iCnt=0;
    while(Head!=NULL)
    {
    	Head=Head->next;
    	iCnt++;
    }
    return iCnt;


}


int main()
{
	PNODE First = NULL;
	int iNo = 0;
	int iRet = 0;


 	printf("Enter Number:\n");
	scanf("%d",&iNo);

	InsertFirst(&First,iNo);

    printf("Enter Number:\n");
	scanf("%d",&iNo);

	InsertFirst(&First,iNo);

	printf("Enter Number:\n");
	scanf("%d",&iNo);

	InsertFirst(&First,iNo);

	Display(First);

	iRet = Count(First);
	printf("Number of nodes are:\n%d\n",iRet);

	printf("Enter Number:\n");
	scanf("%d",&iNo);

	InsertLast(&First,iNo);
	
	Display(First);

	iRet = Count(First);
	printf("Number of nodes are:\n%d\n",iRet);

    DeleteFirst(&First);
	Display(First);

	iRet = Count(First);
	printf("Number of nodes are:\n%d\n",iRet);


    
    return 0;

}
