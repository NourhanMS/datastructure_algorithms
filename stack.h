
template <class T> 
class cstack 
{
	int capacity,top;
	T* dataPtr;
 public:
	 cstack();
	 cstack(int capacity);
	 cstack(int number,T *a); 
	 void resize(); //to double the capacity of the stack
	 void push(T pushMe );
	 T pop();
	 void pushArray(int number,T*a);
	 int size();




};