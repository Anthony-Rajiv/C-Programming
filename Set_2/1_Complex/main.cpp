#include "iostream"
#include "complex.h"

int main()
{
	complex C1(1,2);
	complex C2(4,5);

	std::cout << "C1 : ";
    C1.display();
    std::cout << std::endl;

    std::cout << "C2 : ";
    C2.display();
    std::cout << std::endl;

    complex C3 = C1 + C2;
    std::cout << "C1 + C2 : ";
    C3.display();
    std::cout << std::endl;

    complex C4 = C1 - C2;
    std::cout << "C1 - C2 : ";
    C4.display();
    std::cout << std::endl;

    complex C5 = C1 * C2;
    std::cout << "C1 * C2 : ";
    C5.display();
    std::cout << std::endl;

    ++C1;
    std::cout << "++C1 : ";
    C1.display();
    std::cout << std::endl;

    C2++;
    std::cout << "C2++ : ";
    C2.display();
    std::cout << std::endl;
}