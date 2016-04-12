#include "StackOfIntegers.h"

using namespace std;

StackOfIntegers::StackOfIntegers()
{
    size = 0;
}

bool StackOfIntegers::isEmpty()
{
    return (size == 0);
}

int StackOfIntegers::peek()
{
    if(size <= 0)
    {
        cout<<"Stack has no element"<<endl;
        return 0;
    }
    return elements[size - 1];
}

void StackOfIntegers::push(int value)
{
    elements[size++] = value;
}

int StackOfIntegers::pop()
{
    return elements[--size];
}

int StackOfIntegers::getSize()
{
    return size;
}

void StackOfIntegers::printStack()
{
    for(int i=0; i<getSize(); i++)
        cout<<elements[i]<<" ";
}

bool isPrime(int n)
{
    for(int i=2; i*i<n;i++)
    {
        if(!(n%i))
            return false;
    }
    return true;
}

void primeDivisor(int n, StackOfIntegers &S)
{
    while(n > 1)
    {
        if(isPrime(n))
        {
            S.push(n);
            break;
        }

        for(int i=2; i<n/2;i++)
        {
            if(isPrime(i) && !(n%i))
            {
                S.push(i);
                n /= i;
                break;
            }
        }
    }
}
