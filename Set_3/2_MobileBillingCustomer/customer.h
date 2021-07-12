#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

#include "iostream"

enum AccountType 
{
  Prepaid,
  Postpaid
};

class CustomerBase 
{
    private:
        std::string m_customer_Id;
        std::string m_customer_name;
        std::string m_phone; 
        double m_balance;
        AccountType m_type;
    public:
        CustomerBase();
        CustomerBase(std::string,std::string,std::string,double, AccountType);
        CustomerBase(std::string,std::string,std::string);
        CustomerBase(const CustomerBase& ref);
  
        virtual void credit(double amount)=0;          
        virtual void makeCall(double amount)=0;
        double get_balance() const;
        void set_balance(double amount);
        virtual void display() const=0;
};  

#endif