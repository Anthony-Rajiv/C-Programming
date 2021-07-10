#include "box.h"

box::box(): m_length(0), m_breadth(0), m_height(0)
{
}

box::box(int value): m_length(value), m_breadth(value), m_height(value)
{
} 

box::box(int length, int breadth, int height):  m_length(length), m_breadth(breadth), m_height(height)
{
}

box::box(const box& ref): m_length(ref.m_length), m_breadth(ref.m_breadth), m_height(ref.m_height)
{
}

box::~box()
{
}

int box::length() const
{
    return m_length;
}
int box::breadth() const
{
    return m_breadth;
}
int box::height() const
{
    return m_height;
}
int box::volume() const
{
    return m_length * m_breadth * m_height;
}

/*void box::dispay() const
{
    cout << "Length : " << m_length << endl << "Breadth : " << m_breadth << endl << "Height : " << m_height << endl << "Volume : " << m_length * m_breadth * m_height << endl;
}*/
