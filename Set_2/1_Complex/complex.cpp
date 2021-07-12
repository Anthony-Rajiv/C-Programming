#include "iostream"
#include "complex.h"

complex::complex(): m_real(0), m_imaginary(0){}

complex::complex(int real, int imaginary): m_real(real), m_imaginary(imaginary){}

complex::complex(int real): m_real(real), m_imaginary(0) {}

complex complex::operator+(const complex &ref)
{
    int imaginary = m_imaginary + ref.m_imaginary;
    int real = m_real + ref.m_real;
    return complex(real, imaginary);
}

complex complex::operator-(const complex &ref)
{
    int imaginary = m_imaginary - ref.m_imaginary;
    int real = m_real - ref.m_real;
    return complex(real, imaginary);
}

complex complex::operator*(const complex &ref)
{
    int imaginary = (m_imaginary * ref.m_real) + (m_real * ref.m_imaginary);
    int real = (m_real * ref.m_real) - (m_imaginary * ref.m_imaginary);
    return complex(real, imaginary);
}

complex& complex::operator++()
{
	++m_real;
	return *this;
}

complex complex::operator ++(int number)
{
	complex original(*this);
	++m_real;
	return original;
}

bool complex::operator == (const complex &ref)
{
    return m_real == ref.m_real && m_imaginary == ref.m_imaginary;
}

void complex::display() const
{
    std::cout<<m_real<<"+i"<<m_imaginary<< std::endl; //Testing Purpose
    //std::cout<< "Complex Number : " << m_real<<"+i"<<m_imaginary<< std::endl;
}
