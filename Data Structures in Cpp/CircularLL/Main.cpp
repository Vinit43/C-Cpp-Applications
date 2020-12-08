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
class CircularLinkedList
{
	public:
	struct Node<T> * Head;
	struct Node<T> * Tail;
	
	CircularLinkedList()
	{
		Head=NULL;
		Tail=NULL;
	}
	
	
	void InsertFirst(T iValue)
   {
	
	struct Node<T> * newn = new struct Node<T> ;
	newn -> data = iValue;
	newn -> next = NULL;
	newn -> prev = NULL;
	 
	
	  if((Head ==NULL) && (Tail == NULL)) 
     {
      Head = newn;
      Tail = newn;
      }
       else 
      {
        newn->next = Head;
		
	(Head)->prev = newn;
	Head = (Head)->prev;
      }
         (Tail)->next = Head;
         (Head)->prev = Tail; 
	
	
	
}
	
	
	 void InsertLast(T iValue )
{
	
	struct Node<T> * newn = NULL;
	struct Node<T> * temp = NULL;
	
	newn = new struct Node<T>;
	 
	 newn -> data = iValue;
	 newn -> next = NULL;
	 newn -> prev = NULL;
	 
	 if((Head==NULL) && (Tail == NULL)) // Linked list is empty
 {
  Head = newn;
  Tail = newn;
 }
 else // Linked list contains atleast one node
 {
 (Tail)->next = newn;
 newn->prev = Tail;
 Tail = (Tail) ->next; // *Tail = newn;
 }
 (Tail)->next = Head;
 (Head)->prev = Tail; 

}




void DeleteFirst()
{
	
	if((Head)==NULL&&(Tail)==NULL)
	{
		return;
	}
	
	if(Head==Tail)
	{
		
		delete(Head);
		Head=NULL;
		Tail=NULL;
		
	}

	else 
	{
	
		(Head)= (Head)->next;
		delete((Tail)->next);
		
	}
	
 (Tail)->next = Head;
 (Head)->prev = Tail; 

	
	
	
}

    void DeleteLast()
{
	struct Node<T> * temp=NULL;
	temp=Head;
	
	
	if(Head==NULL && Tail == NULL)
	{
		return;
	}
	else if(Head == Tail)
	{
		delete(Head);
		Head=NULL;
		Tail=NULL;
	}
	else
	{
		Tail  = (Tail )->prev;
        delete((Tail)->next);    
        
        (Head)->prev = Tail;
        (Tail)->next =Head;
    }
}

       void Display()
{
	if((Head == NULL) && (Tail == NULL))
 {
 return;
 }
do
 {
 cout<<"|"Head->data"|"<<"->";
 Head = Head -> next;
 }while(Head != Tail -> next);
}
   
   
   
    int Count()
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
	
	
	
void InsertAtPos(T iValue ,int iPos)
{
    int iSize = 0, i= 0;
    struct Node<T> * temp = Head;
    struct Node<T> * newn = NULL;
    
    iSize = Count();
    
    if((iPos < 1) || (iPos > (iSize + 1)))
    {
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(iValue);
    }
    else if(iPos == iSize + 1)
    {
        InsertLast(iValue);
    }
    else
    {
        newn= new struct Node<T> ;
        
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

	void DeleteAtPos(int iPos)
{
	int iSize = 0;
	int i = 0;
    struct Node<T> * temp = Head;
    
    iSize = Count();
    
    if((iPos < 1) || (iPos > iSize))
    {
		printf("Enter proper position\n");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iSize)
    {
        DeleteLast();
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

	
};



int main()
{   
    float iNo = 0.0 ;

	struct Node<float> * First=NULL;
	struct Node<float> * Last=NULL;
	
	CircularLinkedList <float>cobj;

	int iNo2=0;

	int iRet=0;

	int ch = 0;

cout<<"\n1.Insert at First\n\n2.Insert at Last\n\n3.Insert at desired Position\n\n4.Delete First Node\n\n5.Delete Last Node\n\n6.Delete a desired Position Node\n\n7.Display the Linked List\n\n8.Count the number of nodes in Linked List\n\n9.Exit\n\n";
	

while(ch <=9)
{

	cout<<"\nEnter choice:\n";
	cin>>ch;

	switch (ch)

	{
		case 1:

		cout<<"Enter data to insert at first in Linked List\n";
		cin>>iNo;

		cobj.InsertFirst(iNo);

		break;

		case 2:
		cout<<"Enter data to insert at last in Linked List\n";
		cin>>iNo;

		cobj.InsertLast(iNo);

		break;

		case 3:
		cout<<"Enter data to insert at particular position in Linked List\n";
		cin>>iNo;
	    cout<<"Enter the Position\n";
		cin>>iNo2;

		cobj.InsertAtPos(iNo,iNo2);

		break;
    
		case 4:
		
		cobj.DeleteFirst();

		break;

		case 5:

		printf("Linked List after deleting last element\n");
		cobj.DeleteLast();

		break;

		case 6:

		printf("Enter the Position to delete that node\n");
		scanf("%d",&iNo2);
		cobj.DeleteAtPos(iNo2);

		break;

    
		case 7:

		cobj.Display();

		break;


		case 8:

		iRet = cobj.Count();

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