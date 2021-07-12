#include "iostream"
#include "customer.h"

int main()
{
	Customer C1;
	C1.makeCall();
	std::cout << C1.getBalance() <<"\n";
	C1.display();
	C1.credit(5000);
	std::cout << C1.getBalance() <<"\n";
}