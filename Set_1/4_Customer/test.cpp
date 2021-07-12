#include "iostream"
#include "customer.h"
#include <gtest/gtest.h>

TEST(Customer, DefaultConstructor) 
{
	Customer C1;
	EXPECT_DOUBLE_EQ(0, C1.getBalance());
}
TEST(Customer, ParameterizedConstructor) 
{
	Customer C1("1001","Anthony", "84205XXXXX", 5000.0);
	EXPECT_EQ(5000.0, C1.getBalance());

}
TEST(Customer, CopyConstructor) 
{
	Customer C1("1001","Anthony", "84205XXXXX", 5000.0);
	Customer C2(C1);
	EXPECT_EQ(5000.0, C2.getBalance());

}
TEST(Customer, CreditTest) 
{
	Customer C1("1001","Anthony", "84205XXXXX", 5000.0);
	C1.credit(3000);
	EXPECT_EQ(8000.0, C1.getBalance());

}
TEST(Customer, makecallTest) 
{
	Customer C1("1001","Anthony", "84205XXXXX", 5000.0);
	std::string Expected = "84205XXXXX\n";
	testing::internal::CaptureStdout();
	C1.makeCall();
	std::string Actual = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected.c_str(), Actual.c_str());
	
}

TEST(Customer, displayTest) 
{
	Customer C1("1001","Anthony", "84205XXXXX", 5000.0);
	std::string ExpectedOut = "1001,Anthony,84205XXXXX,5000.0,0\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
}