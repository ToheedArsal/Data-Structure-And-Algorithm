#pragma once
#include"stack.h"

template<class T>
class myStack :public stack<T>
{
public:
	myStack(int size=100)
	{
		stack<T>::maxSize = size;
		stack<T>::currentSize = 0;
		stack<T>::arr = new T[stack<T>::maxSize];
	}
	bool IsFull()
	{
		return (stack<T>::currentSize == stack<T>::maxSize);
	}
	bool IsEmpty()
	{
		return(stack<T>::currentSize == 0);
	}
	void push(T item)
	{
		if (IsFull())
		{
			cout << "Stack Is Full (Cannot Push) " << endl;
			EXIT_FAILURE;
		}
		else
		{
			stack<T>::arr[stack<T>::currentSize] = item;
			stack<T>::currentSize++;
		}
	}
	T pop()
	{
		if (IsEmpty()) 
		{
			cout << "Stack Is Empty (Cannot Pop) " << endl;
			EXIT_FAILURE;
		}
		else  
		{
			stack<T>::currentSize--;
			return stack<T>::arr[stack<T>::currentSize];
		}
	}
	int Size()   // function to return current size of stack
	{
		return stack<T>::currentSize;
	}
	T Top() //to return the top element of stack 
	{
		if (IsEmpty())
		{
			cout << "Stack Is Empty" << endl;
			EXIT_FAILURE;
		}
		else
		{
			return stack<T>::arr[stack<T>::currentSize - 1];
		}
		
	}
	void Display() // to display the stack
	{
		if (IsEmpty())
		{
			cout << "Stack Is Empty" << endl;
			EXIT_FAILURE;
		}
		else
		{
			cout << "Stack :";
			for (int i = 0; i < stack<T>::currentSize; i++)
			{
				cout << stack<T>::arr[i] << " ";
			}
			cout << endl;
		}
	}
	~myStack()
	{
		delete[] stack<T>::arr;
		stack<T>::arr = nullptr;
	}
};