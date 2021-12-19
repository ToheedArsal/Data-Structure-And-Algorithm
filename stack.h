#pragma once
#include<iostream>
using namespace std;
//abstract class
template<class T>
class stack
{
protected:
	T* arr;         // to store the data in the stack
	int maxSize;   // to store the maximum size of stack
	int currentSize;    // to store currentSize of stack

public:
	virtual void push(T item) = 0;
	virtual T pop() = 0;
 };