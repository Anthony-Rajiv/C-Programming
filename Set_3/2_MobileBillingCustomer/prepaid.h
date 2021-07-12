#include "iostream"
#include "customer.h"

class PrepaidCustomer : public CustomerBase 
{ 
    public:
        PrepaidCustomer();
        PrepaidCustomer(std::string customer_Id,std::string customer_name,std::string phone,double balance, AccountType type);
        PrepaidCustomer(std::string customer_Id,std::string customer_name,std::string phone);
      
        void recharge(double amount);
        void credit(double amount);           
        void makeCall(double amount);
        double getBalance() const;
        void display() const;
};