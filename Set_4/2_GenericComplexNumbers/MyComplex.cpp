#include "MyComplex.h"
#include "iostream"

template<typename T>
MyComplex<T>::MyComplex():m_real{0},m_imaginary{0} {}

template<typename T>
MyComplex<T>::MyComplex(T real,T imaginary):m_real(real),m_imaginary(imaginary) {}

template<typename T>
void MyComplex<T>::display()
{
    std::cout<<m_real<<"+i"<<m_imaginary<<std::endl;
}