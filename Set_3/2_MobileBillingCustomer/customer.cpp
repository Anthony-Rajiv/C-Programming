#include "iostream"
#include "customer.h"
#include "prepaid.h"
#include "postpaid.h"

CustomerBase::CustomerBase(): m_customer_Id(""), m_customer_name(""), m_phone(""), m_balance(0), m_type(Prepaid) {}

CustomerBase::CustomerBase(std::string customer_Id, std::string customer_name, std::string phone, double balance,AccountType type):m_customer_Id(customer_Id),m_customer_name(customer_name),m_phone(phone),m_balance(balance),m_type(type){}

CustomerBase::CustomerBase(std::string customer_Id, std::string customer_name, std::string phone):m_customer_Id(customer_Id),m_customer_name(customer_name),m_phone(phone),m_balance(0),m_type(Prepaid) {}

CustomerBase::CustomerBase(const CustomerBase & ref):m_customer_Id(ref.m_customer_Id),m_customer_name(ref.m_customer_name),m_phone(ref.m_phone),m_balance(ref.m_balance), m_type(ref.m_type) {}

double CustomerBase::get_balance() const
{
	return m_balance;
}

PrepaidCustomer::PrepaidCustomer():CustomerBase() {}

PrepaidCustomer::PrepaidCustomer(std::string customer_Id, std::string customer_name, std::string phone):CustomerBase(customer_Id, customer_name, phone) {}

PrepaidCustomer::PrepaidCustomer(std::string customer_Id, std::string customer_name, std::string phone, double balance, AccountType type):CustomerBase(customer_Id, customer_name, phone, balance, type) {}

PostpaidCustomer::PostpaidCustomer():CustomerBase(){}

PostpaidCustomer::PostpaidCustomer(std::string customer_Id, std::string customer_name, std::string phone):CustomerBase(customer_Id,customer_name,phone){}

PostpaidCustomer::PostpaidCustomer(std::string customer_Id, std::string customer_name, std::string phone, double balance, AccountType type):CustomerBase(customer_Id, customer_name, phone, balance,type) {}

void PostpaidCustomer::credit(double amount)
{
	int balance = get_balance();
	balance += amount;
	set_balance(balance);
}
void PostpaidCustomer::makeCall(double amount)
{
	int balance = get_balance(); 
	balance -= amount;
	set_balance(balance);
}
void PostpaidCustomer::billPay(double amount)
{
	credit(amount);
}

void PostpaidCustomer::display() const
{
	std::cout<< "Balance is:"<<get_balance()<<std::endl;
}

void PrepaidCustomer::credit(double amount)
{
	int balance = get_balance();
	balance += amount;
	set_balance(balance);
}

void PrepaidCustomer::makeCall(double amount)
{
	int balance = get_balance(); 
	balance -= amount;
	set_balance(balance);
}
void PrepaidCustomer::recharge(double amount)
{
	credit(amount);
}

void PrepaidCustomer::display() const
{
	std::cout<< "Balance is:"<<get_balance()<<std::endl;
}