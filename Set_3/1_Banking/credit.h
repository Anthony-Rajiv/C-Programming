#include "iostream"
#include "account.h"
#include "cstring"

class CreditAccount : public AccountBase 
{
    public:
        CreditAccount();
        CreditAccount(std::string account_number,std::string account_name,double balance);
        CreditAccount(std::string account_number,std::string account_name);
  
        double debit(double amount);
        double credit(double amount);
        void display() const;
};