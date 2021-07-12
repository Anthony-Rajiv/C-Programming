#include "iostream"
#include "customer.h"

Customer::Customer() : m_customer_Id(""), m_customer_name(""), m_phone(""), m_balance(0), m_type(Prepaid) {}

Customer::Customer(std::string customer_Id, std::string customer_name, std::string phone, double bal) : m_customer_Id(customer_Id), m_customer_name(customer_name), m_phone(phone), m_balance(bal), m_type(Prepaid) {}

Customer::Customer(std::string customer_Id, std::string customer_name, std::string phone) : m_customer_Id(customer_Id), m_customer_name(customer_name), m_phone(phone), m_balance(0), m_type(Prepaid) {}

Customer::Customer(const Customer& ref) : m_customer_Id(ref.m_customer_Id), m_customer_name(ref.m_customer_name), m_phone(ref.m_phone), m_balance(ref.m_balance), m_type(ref.m_type) {}

void Customer::credit(double amount) 
{
	m_balance += amount;
}
void Customer::makeCall() 
{
	std::cout<<m_phone<<std::endl;
}
double Customer::getBalance() const 
{
	return m_balance;
}
void Customer::display() const
{
	std::cout << m_customer_Id << "," << m_customer_name <<","<< m_phone <<","<< m_balance << ","<< m_type << std::endl;
}