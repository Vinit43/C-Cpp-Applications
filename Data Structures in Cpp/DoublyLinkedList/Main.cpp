#include<stdio.h>
#include<iostream>

using namespace std;


template <class T>

    struct Node
{
	T data;
	struct Node<T> * next;
	struct Node<T> * prev;
};


template <class T>

class DoublyLinkedList
{
	public:
	struct Node<T> * Head;
	
	DoublyLinkedList()
	{
		Head=NULL;
	}
	
	void InsertFirst(T iValue)
   {
	
	struct Node<T> * newn = new struct Node<T> ;
	newn -> data = iValue;
	newn -> next = NULL;
	newn -> prev = NULL;
	 
	
	  if(Head ==NULL) 
     {
      Head = newn;
     }
	 else
	 {
		newn->next=Head;
		Head->prev=newn;
		Head=newn;

	 }
}

    void InsertLast(T iValue )
{
	
	struct Node<T> * newn = NULL;
	struct Node<T> * temp = NULL;
	
	newn = new struct Node<T>;
	 
	 newn -> data = iValue;
	 newn -> next = NULL;
	 newn -> prev = NULL;
	 
	 if(Head==NULL) // Linked list is empty
    {
      Head = newn;
    }
    else
    {
    temp = Head ;
		
		while(temp->next!=NULL)
		{
			temp=temp->next;
			
		}
		temp->next=newn;
		newn->prev=temp;
    }
 
}

     
void DeleteFirst()
{
	
	if((Head)==NULL)
	{
		return;
	}
	
	if(Head->next==NULL)
	{
		
		delete(Head);
		Head=NULL;
		
	}

	else 
	{
	
		
		Head=Head->next;
		free(Head->prev);
		Head->prev=NULL;
	}
}



   void DeleteLast()
{
	struct Node<T> * temp=NULL;
	
	if(Head==NULL)
	{
		return;
	}
	else if(Head->next==NULL)
	{
		delete(Head);
		Head=NULL;
	}
	else
	{
		temp=Head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
			
		}
		
		free(temp->next);
		temp->next=NULL;
    }
}

    int Count()
{
	int iCnt=0;
	
	while(Head!=NULL)
	{
		Head=Head->next;
		iCnt++;	
	}
	return iCnt;
}

  void Display()
{
	printf("NULL");
	
	while(Head!=NULL)
	{
		cout<<"<-"<<Head->data<<"->";
		Head=Head->next;
	}
	printf("NULL\n");
	
}


void InsertAtPos(T iValue,int iPos)
{
	struct Node<T> * newn=NULL;
	struct Node<T> * temp=NULL;
	int size=0;
	int i = 0;
	
	
	
	size=Count();
	
	if(iPos>size+1||iPos<1)
	{
		printf("Invalid Position\n");
		return;
	}
	
	else if(iPos==1)
	{
		InsertFirst(iValue);
	}
	else if(iPos==size+1)
	{
		InsertLast(iValue);
	}
	else
	{
		newn=new struct Node<T>;
	
	newn->data=iValue;
	newn->next=NULL;
	newn->prev=NULL;
	
		temp=Head;
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		
		newn->next=temp->next;
		temp->next->prev=newn;
		newn->prev=temp;
	    temp->next=newn;
	}	
}



void DeleteAtPos(int iPos)
{
	int size=0;
	struct Node<T> * temp=NULL;
	struct Node<T> * temp2=NULL;
	int i=0;
	
	size=Count();
	
	if(iPos<1||iPos>size+1)
	{
		printf("Invalid Position\n");
		return;
	}
	else if(iPos==1)
	{
		DeleteFirst();
	}
	else if(iPos==size)
	{
		DeleteLast();
	}
	else
	{
		temp=Head;
		
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		temp2=temp->next;
		temp->next=temp2->next;
		temp2->next->prev=temp;
		free(temp2);
		
		
	}	
	
}


};


int main()
{   
    float iNo=0;

	struct Node<float> * First=NULL;
	
	DoublyLinkedList <float>dobj;

	int iNo2=0;

	int iRet=0;

	int ch = 0;

printf("\n1.Insert at First\n\n2.Insert at Last\n\n3.Insert at desired Position\n\n4.Delete First Node\n\n5.Delete Last Node\n\n6.Delete a desired Position Node\n\n7.Display the Linked List\n\n8.Count the number of nodes in Linked List\n\n9.Exit\n\n");
	

while(ch <=10)
{

	printf("\nEnter choice:\n");
	scanf("%d",&ch);

	switch (ch)

	{
		case 1:

		cout<<"Enter data to insert at first in Linked List\n";
		cin>>iNo;

		dobj.InsertFirst(iNo);

		break;

		case 2:
		cout<<"Enter data to insert at last in Linked List\n";
		cin>>iNo;

		dobj.InsertLast(iNo);

		break;

		case 3:
		cout<<"Enter data to insert at particular position in Linked List\n";
		cin>>iNo;
	    cout<<"Enter the Position\n";
		cin>>iNo2;

		dobj.InsertAtPos(iNo,iNo2);

		break;
    
		case 4:
		
		dobj.DeleteFirst();

		break;

		case 5:

		printf("Linked List after deleting last element\n");
		dobj.DeleteLast();

		break;

		case 6:

		printf("Enter the Position to delete that node\n");
		scanf("%d",&iNo2);
		dobj.DeleteAtPos(iNo2);

		break;

    
		case 7:

		dobj.Display();

		break;


		case 8:

		iRet = dobj.Count();

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