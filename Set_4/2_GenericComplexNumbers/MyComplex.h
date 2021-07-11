#ifndef _GCOMPLEX_H_
#define _GCOMPLEX_H_


template<typename T>
class MyComplex 
{
    private:
        T m_real;
        T m_imaginary;
    public:
        MyComplex();
        MyComplex(T real,T imaginary);
        void display();
};
#endif