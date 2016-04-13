#ifndef STACKOFINTEGERS_H_INCLUDED
#define STACKOFINTEGERS_H_INCLUDED

#include <iostream>
#include <stdexcept>

class EmptyStackException: public logic_error
{
public:
	EmptyStackException():logic_error("Error:: Stack is empty!\n"){}
};

class StackOfIntegers
{
public:
    StackOfIntegers();
    bool isEmpty();
    int peek();
    void push(int value);
    int pop();
    int getSize();
    void printStack();

private:
    int elements[100];
    int size;
};

#endif // STACKOFINTEGERS_H_INCLUDED
