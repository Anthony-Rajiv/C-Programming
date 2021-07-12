#include "account.h"
#include <gtest/gtest.h>

TEST(Account,EmptyConstructor) 
{
    account a1;
    ASSERT_EQ(0.0,a1.getBalance());
}

TEST(account,ParameterizedConstructor1) 
{
    account a1("1001","Anthony");
    EXPECT_EQ(5000.0,a1.getBalance());

}

TEST(account,ParameterizedConstructor2) 
{
    account a1("1001","Anthony",10000.0);
    EXPECT_EQ(10000.0,a1.getBalance());

}

TEST(account,CopyConstructor) 
{
    account a1("1001","Rajiv",7000.0);
    account a2(a1);
    EXPECT_EQ(7000.0,a2.getBalance());

}
TEST(Account,CreditTest) 
{
    account a1("1001","Francis");
    a1.credit(3000);
    EXPECT_EQ(8000.0,a1.getBalance());

}
TEST(Account,DebitTest) {
    account a1("1001","Anthony",10000.0);
    a1.debit(1200);
    EXPECT_EQ(8800.0,a1.getBalance());
}