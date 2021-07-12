#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include "iostream"

class complex 
{
    private:
	    int m_real;
	    int m_imaginary;
	
    public:
	    complex();
	    complex(int real,int imaginary);
	    complex(int real);
	
	    complex operator+(const complex& ref);
	    complex operator-(const complex& ref);
	    complex operator*(const complex& ref);
	    complex& operator++();
	    complex operator++(int number);
	    bool operator==(const complex& ref);

	    void display() const;
	    int getreal();
	    int getimag();
	    friend std::ostream& operator<<(const std::ostream&, const complex&);
};

#endif