//Dynamic implementation of stack

// push , pop , Display

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
	
}NODE ,*PNODE , **PPNODE;


void Push(PPNODE Head , int iValue)
{
	PNODE newn =NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data = iValue;
	newn->next = NULL;
	
	if(*Head==NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next=*Head;
		*Head = newn;
	}
	
	
}

int Pop(PPNODE Head )
{
	int iNo=0;
	PNODE temp = NULL;
	
	temp=*Head;
	
	if(*Head==NULL)
	{
		printf("STACK is empty\n");
		return -1;
	}
	else
	{
		iNo=(*Head)->data;
		*Head = (*Head)->next;
		free(temp);
		return iNo;
	}
	
	
}

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|\t",Head->data);
		Head=Head->next;
	}
	
}

int Count(PNODE Head)
{
	int iCnt = 0;
	
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
	
	int ch=1;
	int iNo = 0;
	int iRet = 0;
	
	printf("Dynamic Implementation of STACK\n");
	
	while(ch!=0)
	{
		
	printf("\n1:Push the element");
	printf("\n2:Pop the element");
	printf("\n3:Display the elements");
	printf("\n4:Count the element");
	printf("\n0:EXIT\n\n");
		
	printf("Enter your choice:\n");
	scanf("%d",&ch);
	
	
	
	switch(ch)
	{
		case 1:
		
		printf("Enter the element\n");
		scanf("%d",&iNo);
		
		Push(&First , iNo);
		break;
		
		case 2:
		
		iRet=Pop(&First);
		if(iRet!=-1)
		{
	    printf("The Popped element is:%d\n",iRet);
		}
	    break;
		
		case 3:
	
		Display(First);
		break;
		
		case 4:
		
		iRet= Count(First);
		
		
		printf("The count of elements is:%d\n",iRet);
		
		break;
		
		case 0:
		
		printf("Thank You for using this project\n");
		break;
		
		default:
		printf("Choice is wrong\n");
		break;
	
		
	}
	
}
	return 0;
}