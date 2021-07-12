#include "iostream"
#include "account.h"
#include "cstring"

class SavingsAccount : public AccountBase 
{
    public:
        SavingsAccount();
        SavingsAccount(std::string account_number,std::string account_name,double balance);
        SavingsAccount(std::string account_number,std::string account_name);
  
        double debit(double amount);
        double credit(double amount);
        void display() const;
};