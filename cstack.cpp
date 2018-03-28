#include<iostream>
using namespace std;

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

template <class T> cstack<T> ::cstack()
{
	top=0;
	capacity=100;
	dataPtr=new T[capacity];
}

template<class T> cstack<T>::cstack(int capacity)
{
	top=0;
	this->capacity =(capacity>0)?capacity:100;
	dataPtr=new T[capacity];
}
template<class T> cstack<T>:: cstack(int number,T *a)
{
	top=0;
	capacity=(number>100)?number:100; 
	
	for(int i=0;i<number;i++)
	{
		dataPtr[top++]=a[i];
	}

}
template<class T> void cstack<T>:: resize()
{
	    capacity*=2;
		T *newPtr=new T[capacity];
		for(int i=0;i<capacity/2;i++)
		{
			newPtr[i]=dataPtr[i];
		}
		delete[] dataPtr;
		dataPtr=newPtr;

}
template<class T> void cstack<T>::push(T pushMe )
{
   if(top< capacity)
	{
		dataPtr[top]=pushMe;
		top++;
	}
	else    //we will resize the stack by doubling its capacity
	{
		resize();
		dataPtr[top++]=pushMe;
		
	}
}

template<class T> T cstack<T>:: pop()
{
	return dataPtr[--top];
}
template<class T> void cstack<T> ::pushArray(int number,T*a)
{
	if(capacity-top-1 >= number)
	{
		for(int i=0;i<number;i++)
		{
			dataPtr[top++]=a[i];
		}
	}
	else
	{
		resize();
		for(int i=0;i<number;i++)
		{
			dataPtr[top++]=a[i];
		}
	}

}
template<class T> int cstack<T>:: size()
{
	return top;
}