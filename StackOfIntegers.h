#include <iostream>

#ifndef STACKOFINTEGERS_H_INCLUDED
#define STACKOFINTEGERS_H_INCLUDED

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