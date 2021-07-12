#include<iostream>
#include "account.h"


account::account() : m_account_number("0"), m_account_name(""), m_balance(0) {}

account::account(std::string account_number, std::string account_name) : m_account_number(account_number), m_account_name(account_name), m_balance(5000.0) {}

account::account(std::string account_number, std::string account_name, double balance) : m_account_number(account_number), m_account_name(account_name), m_balance(balance) {}

account::account(const account& ref) : m_account_number(ref.m_account_number), m_account_name(ref.m_account_name), m_balance(ref.m_balance) {}

void account::credit(double amount) 
{
    m_balance += amount;
}

void account::debit(double amount) 
{
    m_balance -= amount;
    if(m_balance < 0)
    {
        std::cout << "Insufficient Balance" << std::endl << "Your Current Balance is : " << m_balance + amount << std::endl << "Transaction Declined!!!" << std::endl;
        m_balance += amount;
    }
    
}

double account::getBalance() const 
{
    return m_balance;
}

void account::display() const
{
    std::cout << "Account Number : " << m_account_number << std::endl << "Account Number : " <<m_account_name << std::endl << "Account Balance : "<< m_balance << std::endl;
}