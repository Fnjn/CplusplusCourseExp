#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>

template<typename T>
class Stack
{
public:
    Stack();
    bool isEmpty();
    T peek();
    void push(T value);
    T pop();
    int getSize();

    void printStack();
    bool contains(T element);

private:
    T elements[100];
    int size;
};

#endif // STACK_H_INCLUDED
