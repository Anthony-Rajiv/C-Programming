#include "iostream"
#include "customer.h"
#include "prepaid.h"
#include "postpaid.h"
#include <gtest/gtest.h>

TEST(PrepaidCustomer, DefaultConstructor) 
{
	PrepaidCustomer C1;
	EXPECT_DOUBLE_EQ(0, C1.getBalance());
}
TEST(PrepaidCustomer, ParameterizedConstructor1) 
{
	PrepaidCustomer C1("1001","Anthony", "84205XXXXX", 5000.0, Prepaid);
	EXPECT_EQ(5000.0, C1.getBalance());

}
TEST(PrepaidCustomer, ParameterizedConstructor2) 
{
	PrepaidCustomer C1("1001","Anthony", "84205XXXXX");
	EXPECT_EQ(5000.0, C1.getBalance());

}
TEST(PrepaidCustomer, CreditTest) 
{
	PrepaidCustomer C1("1001","Anthony", "84205XXXXX", 5000.0, Prepaid);
	C1.recharge(3000);
	EXPECT_EQ(8000.0, C1.getBalance());
}
TEST(PrepaidCustomer, makecallTest) 
{
	PrepaidCustomer C1("1001","Anthony", "84205XXXXX", 5000.0, Prepaid);
	C1.makeCall(1000);
	EXPECT_EQ(4000.0, C1.getBalance());
}

TEST(PrepaidCustomer, displayTest) 
{
	PrepaidCustomer C1("1001","Anthony", "84205XXXXX", 5000.0, Prepaid);
	std::string ExpectedOut = "Balance is:5000.0\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
}