#include "iostream"
#include "account.h"
#include "credit.h"
#include "savings.h"
#include <gtest/gtest.h>

TEST(CreditAccount,DefaultConstructor) 
{
	CreditAccount C1;
	EXPECT_DOUBLE_EQ(0,C1.getBalance()); 
}
TEST(CreditAccount,ParameterizedConstructor1) 
{
	CreditAccount C1("xxxx","Anonymous",500);
	EXPECT_EQ(500,C1.getBalance()); 
	EXPECT_EQ(1000,C1.credit(500));
	EXPECT_EQ(500,C1.debit(500));
}
TEST(CreditAccount,ParameterizedConstructor2) 
{
	CreditAccount C1("xxxx","Anonymous");
	EXPECT_EQ(0,C1.getBalance()); 
	EXPECT_EQ(500,C1.credit(500));
	EXPECT_EQ(0,C1.debit(500));
}
TEST(SavingsAccount,DefaultConstructor) 
{
	SavingsAccount C1;
	EXPECT_EQ(0,C1.getBalance()); 
	EXPECT_EQ(500,C1.credit(500));
	EXPECT_EQ(0,C1.debit(500));
}
TEST(SavingsAccount,ParameterizedConstructor1) 
{
	SavingsAccount C1("xxxx","Anonymous",500);
	EXPECT_EQ(500,C1.getBalance()); 
	EXPECT_EQ(1000,C1.credit(500));
	EXPECT_EQ(500,C1.debit(500));
}
TEST(SavingsAccount,ParameterizedConstructor2) 
{
	SavingsAccount C1("xxxx","Anonymous");
	EXPECT_EQ(0,C1.getBalance()); 
	EXPECT_EQ(500,C1.credit(500));
	EXPECT_EQ(0,C1.debit(500));
}
TEST(CreditAccount, DisplayTest) 
{
	CreditAccount C1("xxxx","Anonymous",500);
	std::string Expected="Current:xxxx Anonymous 500\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected.c_str(), Actual.c_str());
}
TEST(SavingsAccount, DisplayTest) 
{
	SavingsAccount C1("xxxx","Anonymous",500);
	std::string Expected="Savings:xxxx Anonymous 500\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected.c_str(), Actual.c_str());
}