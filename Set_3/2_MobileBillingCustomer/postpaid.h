#include "iostream"
#include "customer.h"


class PostpaidCustomer : public CustomerBase 
{
    public:
        PostpaidCustomer();
        PostpaidCustomer(std::string customer_Id,std::string customer_name,std::string phone,double balance,AccountType type);
        PostpaidCustomer(std::string customer_Id,std::string customer_name,std::string phone);

        void billPay(double amount);
        void credit(double amount);           
        void makeCall(double amount);
        double getBalance() const;
        void display() const;
};