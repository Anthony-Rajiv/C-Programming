#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include "iostream"
#include "cstring"


 class account 
 {
    private:
        std::string m_account_number;
        std::string m_account_name;
        double m_balance;
    public:
        account();
        account(std::string account_number,std::string account_name);
        account(std::string account_number,std::string account_name,double balance);
        account(const account&);

        void display() const;
        void debit(double amount);
        void credit(double amount);
        double getBalance() const;
        
};

#endif 