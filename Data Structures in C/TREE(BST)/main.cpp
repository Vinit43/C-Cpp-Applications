#include<iostream>

using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

struct Node 
{
	int data;
	struct Node *lchild;
	struct Node *rchild;
};

typedef struct Node NODE;
typedef struct Node * PNODE;



class BinarySearchTree
{
	private:
	PNODE Root;
	
	public:
	BinarySearchTree();
	void Insert(int);
	BOOL Search(int);
	void InorderDisplay(PNODE);
	void PreOrderDisplay();
	void PostOrderDisplay();
};

BinarySearchTree::BinarySearchTree()
{
	Root = NULL;
	
}

void BinarySearchTree::Insert(int iValue)
{
	PNODE newn = NULL;
	newn = new NODE;
	
	PNODE temp = Root;
	newn -> data = iValue;
	newn -> lchild = NULL;
	newn -> rchild = NULL;
	
	if(temp == NULL)
	{
		temp = newn;
	}
	else
	{
	while(1)
	{
	
	if(temp -> data == iValue)
	{
		printf("Unable to insert\n");
		free(newn);
		return;
	}
	else if( iValue < temp->data )
	{
		if(temp -> lchild == NULL)
		{
			temp -> lchild = newn;
			break;
		}
		temp = temp -> lchild ;
		
	}
	else if( iValue > temp->data )
	{
		if(temp -> rchild == NULL)
		{
			temp -> rchild = newn;
			break;
		}
		temp = temp -> rchild ;
		
	}
	
	}
	}
	
}

BOOL BinarySearchTree::Search(int iValue)
{
	while(Root!=NULL)
	{
		if(iValue == Root->data)
		{
			break;
		}
		if(Root->data > iValue)
		{
			Root=Root->lchild;
		
		}
		else if(Root->data < iValue)
		{
			Root=Root->rchild;
			
		}
		
	}
	
	if(Root==NULL)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
	
	
}
void BinarySearchTree::InorderDisplay(PNODE Root)        // LDR
{
    if(Root != NULL)
    {
		
        InorderDisplay(Root->lchild);
        printf("%d\t",Root->data);
        InorderDisplay(Root->rchild);
    }
}

int main()
{
	
	BinarySearchTree obj;
	PNODE First = NULL;
	int ch = 1 ;
	int iNo = 0 ;
	BOOL bRet = 0 ;
	
	
	
	while(ch)
	{
		cout<<"\n\n---------------------------------------\n\n";
		cout<<"1.Insert in the BSt\n";
		cout<<"2.Search the element in BST\n";
		cout<<"3.InorderDisplay\n";
		cout<<"4.PreorderDisplay\n";
		cout<<"5.PostorderDisplay\n";
		cout<<"0.Exit\n\n";
		cout<<"\n\n---------------------------------------\n";
		cout<<"Enter Choice\n";
	    cin>>ch;
		
		
		switch(ch)
		{
			case 1:
			cout<<"Enter the data to enter in BST\n";
			cin>>iNo;
			obj.Insert(iNo);
			break;
			
			case 2:
			cout<<"Enter the data you want to search\n";
			cin>>iNo;
			
			bRet=obj.Search(iNo);
			
			if(bRet==FALSE)
			{
				cout<<"Not Found\n";
			}
			else
			{
				cout<<"Element Searched is Found\n";
			}
			
			break;
			
			case 3:
			obj.InorderDisplay(First);
			break;
			
			
			case 0:
			cout<<"THANK YOU\n";
			break;
			
			default:
			cout<<"Invalid choice\n";
			break;
			
		}
		
		
	}
	return 0;
}