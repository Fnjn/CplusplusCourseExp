#include "Stack.h"

using namespace std;

template<typename T>
Stack<T>::Stack()
{
    size = 0;
}

template<typename T>
bool Stack<T>::isEmpty()
{
    return (size == 0);
}

template<typename T>
T Stack<T>::peek()
{
    if(size <= 0)
    {
        cout<<"Stack has no element"<<endl;
        return 0;
    }
    return elements[size - 1];
}

template<typename T>
void Stack<T>::push(T value)
{
    elements[size++] = value;
}

template<typename T>
T Stack<T>::pop()
{
    elements[--size];
}

template<typename T>
int Stack<T>::getSize()
{
    return size;
}

template<typename T>
void Stack<T>::printStack()
{
    for(int i=0; i<getSize(); i++)
        cout<<elements[i]<<" ";
	cout<<endl;
}

template<typename T>
bool Stack<T>::contains(T element)
{
    for(int i=0; i<getSize(); i++)
        if(elements[i] == element)
            return true;
    return false;
}
