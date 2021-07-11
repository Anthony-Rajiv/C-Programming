#ifndef _GSTACK_H_
#define _GSTACK_H_

#include "iostream"
#include "vector"

constexpr int max_size=50;

template<typename T>

class MyStack 
{
    private:
        T m_arr[max_size];
        int m_top;
        int m_maxlen;
    public:
        MyStack();
        MyStack(T length);
  
        void push(T val);
        T pop();
        T peek() ;
        bool isEmpty() const;
        bool isFull() const;
};
#endif