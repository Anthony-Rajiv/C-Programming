#include "iostream"
#include "MyPoint.h"
#include "cmath"

template<typename T>
MyPoint<T>::MyPoint():m_x(0),m_y(0) {}

template<typename T>
MyPoint<T>::MyPoint(T x,T y):m_x(x),m_y(y) {}

template<typename T>
void MyPoint<T>::distanceFromOrigin()
{
    T distance;
    distance = sqrt((m_x*m_x)+(m_y*m_y));
    std::cout<<"Distance from Origin:"<<distance<<std::endl;
}


template<typename T>
Quadrant MyPoint<T>::quadrant()
{

    if((m_x>0)&&(m_y>0))
    {
        return Q1;
    }
    else if((m_x<0)&&(m_y>0))
    {
        return Q2;   
    }
    else if((m_x<0)&&(m_y<0))
    {
        return Q3;        
    }
    else
    {
        return Q4;        
    }


}
template<typename T>
void MyPoint<T>::display()
{
    std::cout<<"X axis:"<<m_x<<"\n"<<"Y axis:"<<m_y<<std::endl;
}
