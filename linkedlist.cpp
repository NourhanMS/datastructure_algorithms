#include<iostream>
using namespace std;
#include"list.h"

list:: ~list()
{
	delete head;
	head=nullptr;
}
void list::addFront(int d)
{
	node * temp= new node(d);
	temp->next=head;
	head=temp;
}
void list::addEnd(int d)
{  
	node * temp=head;
	if(head!=nullptr)
	{ 
	   while( temp->next!=nullptr)
	     	{
			  
			  temp=temp->next ; //last temp points to the last node

	        }
	  temp->next =new node(d);
	}
	else
	{
		head=new node(d);
	}

}
/*
void list::printAll()
{
	if(head !=nullptr)
	{
		node*temp=head;
		cout<<temp->data<<endl;
		while(temp->next!= nullptr)
		{
			temp=temp->next;
			cout<<temp->data<<endl;
		}

	}
	else
		cout<<"No nodes exists"<<endl;
}
*/
void list::printAll(node* temp)
{
	if(temp !=nullptr)
	{
		cout<<temp->getData()<<endl;
		printAll(temp->getNext() );
	}
}
void list::removeNodes( node* temp)
{
	if(temp != nullptr)
	{	
		removeNodes(temp->next);
		delete temp;
	}
	head=nullptr;
}
void list:: printList()
{
	printAll(head);
}

void list:: remove(int d)
{
	if(head==nullptr) return ; //list is empty 
	else if(head->data ==d) 
	{
		node*temp =head;
		head=head->next;
		delete temp;
		return;
	}
	else 
	{
		node*temp=head;
		while(temp->next!= nullptr)
		{
			 if(temp->next->data ==d)
			 {
				 node* removethis= temp->next;
				 temp->next=removethis->next;
				 delete removethis;

			 }
			 else 
			   temp=temp->next;
			 
		}

		return; //not found
	}


}

void list:: removeList()
{
	removeNodes(head);
}

node* list:: find(int d)
{
	if(head!=nullptr)
	{
		for(node* temp=head;temp!=nullptr;temp=temp->next)
		{
			if(temp->data==d) 
	     			return temp;	    
		}

	}
	return nullptr;
}
	
void  list:: bubbleSort()
{
	if(head==nullptr) return ;

	node* check=head;
	node* end=nullptr;
	
	while( head->next!=end    )
	{   bool sorted=0;
    	while(check->next !=end)
	  {

		 if(check->next->data  < check->data ) //swap
		  {
			 sorted=1;
			 int swap=check->data;
			 check->data= check->next->data;
			 check->next->data=swap;
		  }
		  check=check->next;
	  }
	  if( !sorted)
	  {  cout<<"bestCase";
		  return; 
	  }//it makes best case with O(n)
	  end=check;
	  check=head;
	}
	
}
bool list:: identicalLists(list L)
{
	 if(head==nullptr && L.head ==nullptr) return true;
	 node* temp=head, *ltemp=L.head;
	for( ; temp!=nullptr && ltemp!=nullptr ; temp=temp->next,ltemp=ltemp->next)
	{
		if(temp->data != ltemp->data) return false;
	}

	if (temp==nullptr && ltemp==nullptr) return true;
	else return false;

} 

int list::get_n_from_end (int n)
{
	node * p1 =head,*p2=head;
	for(int i=0;i<n;i++)
	{
		if(p2->next) p2=p2->next;
		else
			{
					return '\0';
		   }
	}
	for( ;p2!=nullptr;p2=p2->next,p1=p1->next);
	 return p1->data;

}
int list::get_middle_element()
{
	if(head->next==nullptr) return head->data;
	node * p1 =head,*p2=head;
	while (!(p2==nullptr || p2->next==nullptr )) 
	{
		p1=p1->next;
		p2=p2->next->next;
	}
	
	return p1->data;

}