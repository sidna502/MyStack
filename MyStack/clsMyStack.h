#pragma once
#include <iostream>
#include "D:\Prorgramming_device\programing\ProblemSolvingLevel5\MyQueue\MyQueue\clsMyQueue.h"

using namespace std;

template <class T>
class clsMyStack : public clsMyQueue <T>
{
	using clsMyQueue<T> ::front;
	using clsMyQueue<T> ::back;
public:
	void push(T item)
	{
		clsMyQueue<T>::_MyList.InsertAtBeginning(item);
	}
	T Top()
	{
		//return clsMyQueue<T>::front();
		return front();
	}
	T Bottom()
	{
		//return clsMyQueue<T>::back();
		return back();
	}
};