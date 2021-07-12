#include "iostream"
#include "iomanip"
#include "point.h"


int main()
{
	point P1(4,5);
	std::cout << std::fixed << std::setprecision(2) <<P1.distanceFromOrigin() << std::endl;
	std::cout << P1.quadrant() << std::endl;
	std::cout << P1.isOrigin() << std::endl;
	std::cout << P1.isOnXAxis() << std::endl;
	std::cout << P1.isOnYAxis() << std::endl;
	P1.display(); 
}