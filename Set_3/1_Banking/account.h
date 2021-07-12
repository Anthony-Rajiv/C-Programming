#ifndef _BANKING_H_
#define _BANKING_H_

#include "iostream"
#include "cstring"

class AccountBase 
{
    private:
        std::string m_account_number;
        std::string m_account_name;
        double m_balance;
    public:
        AccountBase();
        AccountBase(std::string account_number,std::string account_name,double balance);
        AccountBase(std::string account_number,std::string account_name);
        AccountBase(const AccountBase& ref);
  
        virtual double debit(double amount)=0;
        virtual double credit(double amount)=0;
        virtual void display() const = 0;
        double getBalance() const;
        void set_balance(double amount);
        double get_balance() const;
        std::string get_account_number() const;
        std::string get_account_name() const;  
};

#endif