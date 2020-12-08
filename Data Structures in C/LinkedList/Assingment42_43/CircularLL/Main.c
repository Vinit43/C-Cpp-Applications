#include<stdio.h>
#include<stdlib.h>

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

struct Node
{
	int data;
	struct Node * next;
	struct Node * prev;
};

void InsertFirst(PPNODE Head,PPNODE Tail,int iValue )
{
	
	PNODE newn = NULL;
	
	 newn = (PNODE)malloc(sizeof(NODE));
	 
	 newn -> data = iValue;
	 newn -> next = NULL;
	 newn -> prev = NULL;
	 
	
	  if((*Head ==NULL) && (*Tail == NULL)) // Linked list is empty
 {
 *Head = newn;
 *Tail = newn;
 }
 else // Linked list contains atleast one node
 {
        newn->next = *Head;
		
	(*Head)->prev = newn;
	
	*Head = (*Head)->prev;
 }
         (*Tail)->next = *Head;
         (*Head)->prev = *Tail; 
	
	
	
}

void InsertLast( PPNODE Head ,PPNODE Tail , int iValue )
{
	
	PNODE newn = NULL;
	PNODE temp = NULL;
	 newn = (PNODE)malloc(sizeof(NODE));
	 
	 newn -> data = iValue;
	 newn -> next = NULL;
	 newn -> prev = NULL;
	 
	 if((*Head ==NULL) && (*Tail == NULL)) // Linked list is empty
 {
 *Head = newn;
 *Tail = newn;
 }
 else // Linked list contains atleast one node
 {
 (*Tail)->next = newn;
 newn->prev = *Tail;
 *Tail = (*Tail) ->next; // *Tail = newn;
 }
 (*Tail)->next = *Head;
 (*Head)->prev = *Tail; 

}

void DeleteFirst(PPNODE Head , PPNODE Tail)
{
	
	if((*Head)==NULL&&(*Tail)==NULL)
	{
		return;
	}
	
	if(*Head==*Tail)
	{
		
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
		
	}

	else 
	{
	
		(*Head)= (*Head)->next;
		free((*Tail)->next);
		
	}
	
 (*Tail)->next = *Head;
 (*Head)->prev = *Tail; 

	
	
	
}


void DeleteLast(PPNODE Head , PPNODE Tail)
{
	PNODE temp=NULL;
	temp=*Head;
	
	
	if(*Head==NULL && *Tail == NULL)
	{
		return;
	}
	else if(*Head == *Tail)
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
	}
	else
	{
		*Tail  = (*Tail )->prev;
        free((*Tail)->next);    
        
        (*Head)->prev = *Tail;
        (*Tail)->next = *Head;
    }
	}







void Display(PNODE Head,PNODE Tail)
{
	if((Head == NULL) && (Tail == NULL))
 {
 return;
 }
do
 {
 printf("|%d| -> ",Head->data);
 Head = Head -> next;
 }while(Head != Tail -> next);
}





int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    
        if((Head == NULL) && (Tail == NULL))
        {
            return 0;
        }
    
        do
        {
            iCnt++;
            Head = Head->next;
        }while(Head != Tail->next);

    return iCnt;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int iValue, int iPos)
{
    int iSize = 0, i= 0;
    PNODE temp = *Head;
    PNODE newn = NULL;
    
    iSize = Count(*Head, *Tail);
    
    if((iPos < 1) || (iPos > (iSize + 1)))
    {
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(Head, Tail, iValue);
    }
    else if(iPos == iSize + 1)
    {
        InsertLast(Head,Tail,iValue);
    }
    else
    {
        newn= (PNODE)malloc(sizeof(NODE));
        
        newn->next = NULL;
        newn->prev = NULL;
        newn->data = iValue;
        
        for(i = 1; i< iPos-1; i++)
        {
            temp = temp->next;
        }
        
        newn->next = temp->next;
        temp->next->prev = newn;
        
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteAtPos(PPNODE Head , PPNODE Tail , int iPos)
{
	int iSize = 0;
	int i = 0;
    PNODE temp = *Head;
    
    iSize = Count(*Head, *Tail);
    
    if((iPos < 1) || (iPos > iSize))
    {
		printf("Enter proper position\n");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(Head, Tail);
    }
    else if(iPos == iSize)
    {
        DeleteLast(Head, Tail);
    }
    else
    {
        for(i = 1; i<iPos-1; i++)
        {
            temp =temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
	
}



int main()
{   
    int iNo=0;

	PNODE First=NULL;
	PNODE Last=NULL;

	int iNo2=0;

	int iRet=0;

	int ch = 0;

printf("\n1.Insert at First\n\n2.Insert at Last\n\n3.Insert at desired Position\n\n4.Delete First Node\n\n5.Delete Last Node\n\n6.Delete a desired Position Node\n\n7.Display the Linked List\n\n8.Count the number of nodes in Linked List\n\n9.Exit\n\n");
	

while(ch <=9)
{

	printf("\nEnter choice:\n");
	scanf("%d",&ch);

	switch (ch)

	{
		case 1:

		printf("Enter data to insert at first in Linked List\n");
		scanf("%d",&iNo);

		InsertFirst(&First,&Last,iNo);

		break;

		case 2:
		printf("Enter data to insert at last in Linked List\n");
		scanf("%d",&iNo);

		InsertLast(&First,&Last,iNo);

		break;

		case 3:
		printf("Enter data to insert at particular position in Linked List\n");
		scanf("%d",&iNo);
		printf("Enter the Position\n");
		scanf("%d",&iNo2);

		InsertAtPos(&First,&Last,iNo,iNo2);

		break;

		case 4:
		
		DeleteFirst(&First , &Last);

		break;

		case 5:

		printf("Linked List after deleting last element\n");
		DeleteLast(&First , &Last);

		break;

		case 6:

		printf("Enter the Position to delete that node\n");
		scanf("%d",&iNo2);
		DeleteAtPos(&First,&Last,iNo2);

		break;


		case 7:

		Display(First,Last);

		break;


		case 8:

		iRet = Count(First , Last);

		printf("The number of nodes present in Linked List are:\n%d\n",iRet);

		break;

		case 9:

		exit(0);
	

		default:

		printf("Enter appropiate choice \n");

		break;

	}
}

	return 0;
}