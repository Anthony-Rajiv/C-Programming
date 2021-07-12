#include "iostream"
#include "point.h"
#include "cmath"

point::point():m_x(0),m_y(0){}

point::point(int x,int y):m_x(x),m_y(y){}

point::point(const point& ref) 
{
	m_x = ref.m_x;
	m_y = ref.m_y;
}
double point::distanceFromOrigin() const
{
	double distance;
	distance = sqrt(pow(m_x, 2) + pow(m_y, 2));
	return distance;
}
Quadrant point::quadrant() const 
{
	if (m_x < 0 && m_y < 0) 
	{
		return Q3;
	}
	else if(m_x < 0 && m_y > 0){
		return Q2;
	}
	else if (m_x > 0 && m_y < 0) {
		return Q4;
	}
	else {
		return Q1;
	}
}
bool point::isOrigin() const 
{
	if (m_x == 0 && m_y == 0) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}
bool point::isOnXAxis() const
{
	if (m_y == 0) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}
bool point::isOnYAxis() const
{
	if (m_x == 0) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}
void point::display() const 
{
	std::cout << "cordinates of x and y are " << m_x << "," << m_y<< std::endl;
}