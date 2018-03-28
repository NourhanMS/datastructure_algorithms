
#include"node.h"
node::node()
{
	next=nullptr;
	data=0;
}
node::node(int data)
{
	this->data=data;
	next=nullptr;
}
/*
node::~node()
{
	delete next;
	next=nullptr;
}
*/
void node::setData(int d)
{
	data=d;
}
int node::getData()
{
	return data;
}
node* node::getNext()
{
	return next;
}
void node::setNext(node* n)
{
	next=n;
}