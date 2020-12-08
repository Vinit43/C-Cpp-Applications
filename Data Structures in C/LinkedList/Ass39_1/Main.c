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

void DeleteAtPos(PPNODE Head,int iPos)
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
		DeleteFirst(Head);
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
int SearchFirst(PPNODE Head , int iValue)
{
	int iCnt=0;
	int iPos=0;
	PNODE temp=NULL;
	temp=*Head;
	
	while(temp->next!=NULL)
	{
		iCnt++;
		temp=temp->next;
		
		
		
		if((temp->data)==iValue)
		{
			iPos=iCnt;
		  	
		}
		
	}
	return iPos;
	
	
}

int Max(PPNODE Head )
{
	PNODE temp=*Head;
	int iMax=0;
	
	iMax=temp->data;
	
	while(temp->next!=NULL);
	{
		temp=temp->next;
		
		if((temp->data)>iMax)
		{
			iMax = temp->data; 
		}
		
		
	}
	
	return iMax;
}


int main()
{   
    int iNo=0;

	PNODE First=NULL;

	int iNo2=0;

	int iRet=0;

	int ch = 0;
	
	int iNo3=0;
	
	int iRet1=0;

printf("\n1.Insert at First\n\n2.Insert at Last\n\n3.Insert at desired Position\n\n4.Delete First Node\n\n5.Delete Last Node\n\n6.Delete a desired Position Node\n\n7.Display the Linked List\n\n8.Count the number of nodes in Linked List\n\n9.Exit\n\n10.SearchFirst\n\n");
	

while(ch <=11)
{

	printf("\nEnter choice:\n");
	scanf("%d",&ch);

	switch (ch)

	{
		case 1:

		printf("Enter data to insert at first in Linked List\n");
		scanf("%d",&iNo);

		InsertFirst(&First,iNo);

		break;
	

		case 2:
		printf("Enter data to insert at last in Linked List\n");
		scanf("%d",&iNo);

		InsertLast(&First,iNo);

		break;

		case 3:
		printf("Enter data to insert at particular position in Linked List\n");
		scanf("%d",&iNo);
		printf("Enter the Position\n");
		scanf("%d",&iNo2);

		InsertAtPos(&First,iNo,iNo2);

		break;

		case 4:
		
		DeleteFirst(&First);

		break;

		case 5:

		printf("Linked List after deleting last element\n");
		DeleteLast(&First);

		break;

		case 6:

		printf("Enter the Position to delete that node\n");
		scanf("%d",&iNo);
		DeleteAtPos(&First,iNo2);

		break;


		case 7:

		Display(First);

		break;


		case 8:

		iRet = Count(First);

		printf("The number of nodes present in Linked List are:\n%d\n",iRet);

		break;

		case 9:

		return 0;
		
		case 10:
		
		printf("Enter the Number\n");
		scanf("%d",&iNo3);
		
		iRet1=SearchFirst(&First,iNo3);
		printf("The first occurence of number is %d\n",iRet1);
		break;

		case 11:
		
		iRet=Max(&First);
		printf("Max is %d",iRet);
		break;

		default:

		printf("Enter appropiate choice \n");

		break;

		   

	}
}

	return 0;
}