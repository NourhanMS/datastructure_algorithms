class node
{
	int data;
	node * next;
  public:
	  node();
	  node(int data);
	 // ~node();
	  void setData(int d);
	  int getData();
	  node* getNext();
	  void setNext(node* n);
	  friend class list;

};
