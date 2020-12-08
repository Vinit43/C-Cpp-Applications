#include<stdio.h>
#include<stdlib.h>

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

struct node
{
	int data;
	struct node* next;
};

void InsertFirst(PPNODE Head,int iNo)
{
	 PNODE newn = NULL;
	 newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = iNo;
	newn -> next = NULL;

	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn-> next = *Head;
		*Head = newn;
	}
	
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d|-->",Head->data);
		Head = Head ->next;
	}
	printf("| NULL |\n");
}


void ReverseData(PNODE Head)
{
	int iDigit = 0;
	int iMul = 0;
	int j=0;
	while(Head != NULL)
	{
		iMul=1;
		while(Head->data != 0)
		{
			iDigit = Head->data % 10;
			iMul=iMul*iDigit;
			Head->data = Head->data / 10;
	

		}
		
		
		printf("%d\t",iMul);
		
	Head = Head->next;
	}

}


int main()
{
	int iValue = 0;
	PNODE First = NULL;

	printf("Enter number\n");
	scanf("%d",&iValue);
	InsertFirst(&First,iValue);

	printf("Enter number\n");
	scanf("%d",&iValue);
	InsertFirst(&First,iValue);

	printf("Enter number\n");
	scanf("%d",&iValue);
	InsertFirst(&First,iValue);

	printf("Enter number\n");
	scanf("%d",&iValue);
	InsertFirst(&First,iValue);


	Display(First);

	ReverseData(First);

	return 0;
}
