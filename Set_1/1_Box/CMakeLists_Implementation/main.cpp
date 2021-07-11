#include <iostream>
#include "box.h"

int main()
{
	box b1(10,20,30);
	std::cout << "Length of box b1 is "<<b1.length() << std::endl;
	std::cout << "Breadth of box b1 is "<<b1.breadth() << std::endl;
	std::cout << "Height of box b1 is "<<b1.height() << std::endl;
	std::cout << "Volume of box b1 is "<<b1.volume() << std::endl;
	//b1.display(); 

    box b2(b1);
    std::cout << "Length of box b2 is "<<b2.length() << std::endl;
	std::cout << "Breadth of box b2 is "<<b2.breadth() << std::endl;
	std::cout << "Height of box b2 is "<<b2.height() << std::endl;
	std::cout << "Volume of box b2 is "<<b2.volume() << std::endl;
	//b2.display();

    box b3(10);
    std::cout << "Length of box b3 is "<<b3.length() << std::endl;
	std::cout << "Breadth of box b3 is "<<b3.breadth() << std::endl;
	std::cout << "Height of box b3 is "<<b3.height() << std::endl;
	std::cout << "Volume of box b3 is "<<b3.volume() << std::endl;
	//b3.display();
}