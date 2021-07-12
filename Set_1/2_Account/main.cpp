#include"account.h"
#include<iostream>

int main() 
{
  account a1("1001","Anthony",8000.0);
  std::cout << "Balance : " << a1.getBalance() << std::endl;
  a1.credit(2000.0);
  a1.debit(2800.00);
  std::cout << "Balance : " <<  a1.getBalance() << std::endl;
  a1.display();
  
  account a2("1002","Rajiv");
  std::cout << "Balance : " <<  a2.getBalance() << std::endl;
  a2.credit(3000.0);
  a2.debit(8200.00);
  std::cout << "Balance : " <<  a2.getBalance() << std::endl;
  a2.display();
  
  return 0;
}