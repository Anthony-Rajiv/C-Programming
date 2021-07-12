#include "iostream"
#include "account.h"
#include "credit.h"
#include "savings.h"

AccountBase::AccountBase(): m_account_number(""), m_account_name(""), m_balance(0){}

AccountBase::AccountBase(std::string account_number, std::string account_name, double balance):m_account_number(account_number),m_account_name(account_name),m_balance(balance){}

AccountBase::AccountBase(std::string account_number,std::string account_name):m_account_number(account_number),m_account_name(account_name),m_balance(0){}

AccountBase::AccountBase(const AccountBase &ref):m_account_number(ref.m_account_number),m_account_name(ref.m_account_name),m_balance(ref.m_balance){
}

double AccountBase::getBalance() const
{
	return m_balance;
}
void AccountBase::set_balance(double amount)
{
    m_balance = amount;
}
double AccountBase::get_balance() const
{
    return m_balance;
}
std::string AccountBase::get_account_number() const
{
    return m_account_number;
}
std::string AccountBase::get_account_name() const
{
    return m_account_name;
}

CreditAccount::CreditAccount():AccountBase(){}

CreditAccount::CreditAccount(std::string account_number, std::string account_name, double balance):AccountBase(account_number, account_name, balance){}

CreditAccount::CreditAccount(std::string account_number, std::string account_name):AccountBase(account_number, account_name){}

SavingsAccount::SavingsAccount():AccountBase(){}

SavingsAccount::SavingsAccount(std::string account_number, std::string account_name, double balance):AccountBase(account_number, account_name, balance) {}

SavingsAccount::SavingsAccount(std::string account_number, std::string account_name):AccountBase(account_number, account_name) {}

double CreditAccount::debit(double amount)
{
    double balance = get_balance();
    balance -= amount;
    set_balance(balance);
    return balance;
}
double SavingsAccount::debit(double amount)
{
    double balance = get_balance();
    balance -= amount;
    set_balance(balance);
    return balance;
}
double CreditAccount::credit(double amount)
{
    double balance = get_balance();
    balance += amount;
    set_balance(balance);
    return balance;
}
double SavingsAccount::credit(double amount)
{
    double balance = get_balance();
    balance += amount;
    set_balance(balance);
    return balance;
}
void CreditAccount::display() const
{
    std::cout<<"Current:"<<get_account_number()<<" "<<get_account_name()<<" "<<get_balance()<<std::endl;
}
void SavingsAccount::display() const
{
    std::cout<<"Savings:"<<get_account_number()<<" "<<get_account_name()<<" "<<get_balance()<<std::endl;
}