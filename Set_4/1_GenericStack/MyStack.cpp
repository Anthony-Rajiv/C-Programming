#include "MyStack.h"
#include "iostream"

template<typename T>
MyStack<T>::MyStack():m_top(0) {}

template<typename T>
MyStack<T>::MyStack(T length):m_maxlen(50) {}

template<typename T>
void MyStack<T>::push(T val)
{
    if(m_top>=m_maxlen-1)
        std::cout<<"Stack Overflow"<<std::endl;
    else
    {
        m_top++;
        m_arr[m_top]=val;
    }

}

template<typename T>
T MyStack<T>::pop()
{

    if(m_top<=-1)
        std::cout<<"Stack Underflow"<<std::endl;
    else
    {
        std::cout<<"The popped element is "<< m_arr[m_top] <<std::endl;
        m_top--;
    }
}

template<typename T>
T MyStack<T>::peek()
{
    for(int i=0; i<m_maxlen; i++)
    {
        std::cout<<m_arr[i]<<std::endl;
    }
}

template<typename T>
bool MyStack<T>::isEmpty() const
{

    if(m_top<=-1)
    {
        return true;
    }
    else
    {
        return false;

    }
}

template<typename T>
bool MyStack<T>::isFull() const
{
    if(m_top>=m_maxlen-1)
    {

        return true;
    }
    else
    {
        return false;

    }
}