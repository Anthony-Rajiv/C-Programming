#include "iostream"

enum AccountType 
{
  Prepaid,
  Postpaid
};

class Customer 
{
  std::string m_customer_Id;
  std::string m_customer_name;
  std::string m_phone; 
  double m_balance;
  AccountType m_type;
  public:
  Customer();
  Customer(std::string customer_Id,std::string customer_name,std::string phone,double balance);
  Customer(std::string customer_Id,std::string customer_name,std::string phone);
  Customer(const Customer& ref);
  
  void credit(double amount);          
  void makeCall();
  double getBalance() const;
  void display() const;
};