#include"queue.h"
#include<cassert>
#include"iostream"
using namespace std;
queue:: queue(int n):list(n)
{
	tail=head;
}

void queue:: enque(int n)
{
	if(tail==nullptr)
	{
		list(n);
		tail=head;
	}
	else
	{
      node* temp=new node(n);
      tail->setNext(temp);
	  tail=temp;
	}
}

int queue:: deque()
{
	node*  temp=head;
	int rv=head->getData();
	head=head->getNext();
	delete temp;
	return rv;
}

int queue:: peakHead()
{
	assert(head!=nullptr);
	return head->getData();
}

int queue:: peakTail()
{
	assert(tail!=nullptr);
	return tail->getData();
}
	
bool queue::isEmpty()
{
	return (head==nullptr);
}

void queue:: printPrivate( node* t)
{

	if(t==nullptr) return ;
	
	cout<<t->getData()<<endl;
	printPrivate(t->getNext());
	
}
void queue:: print()
{
	printPrivate(head);
}