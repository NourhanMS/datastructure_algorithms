
#include"list.h"
class queue :list
{
private: 
	node* tail;

public:
	queue(int n);
	void enque(int n);
	int deque();
	int peakHead(); //returns the head element
	int peakTail();
	bool isEmpty();
	void print();
 private:  void printPrivate(node* t);
	





};