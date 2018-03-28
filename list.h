#include"node.h"
class list
{
protected:
	node* head;
 public:
	  list()
	  { 
		  head=nullptr;
	  }
	  list (int d)
	  {
		  head=new node(d);
	  }
	  ~list();
	  void addFront (int d); //to add a front item 
	  void addEnd(int d); //to add an item at the end of the list
	  void printList();
private:
	void printAll(node* temp); //print function in a recursive form
	void removeNodes(node* head);
public:
	void remove(int d);
    void removeList();
	node* find(int d);
	void bubbleSort();
	bool identicalLists(list L);
	int get_n_from_end (int n ); //retuns the nth element from end
	int get_middle_element();	 

};