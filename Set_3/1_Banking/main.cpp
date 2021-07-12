#include "iostream"
#include "account.h"
#include "credit.h"
#include "savings.h"

int main()
{
	CreditAccount C1("xxxx","Anonymous",500);
	C1.credit(500);
	C1.debit(800);
	std::cout<< "Balance:" << C1.getBalance()<< "\n";
	std::cout<< "AccountNumber:" << C1.get_account_number()<< "\n";
	std::cout<< "AccountName:" << C1.get_account_name()<< "\n";
}
