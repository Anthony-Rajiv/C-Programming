#include "MyTime.h"
#include "cstring"
#include <gtest/gtest.h>

TEST(MyTime,Display)
{
    MyTime t1(1,2,3);
    MyTime t2;
    t2 = t1++;
    std::string ExpectedOutput = "1:2:3\n";
    testing::internal::CaptureStdout();
    t2.display();
    std::string ActualOutput = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOutput.c_str(), ActualOutput.c_str());

    std::string ExpectedOutput2 = "2:3:4\n";
    testing::internal::CaptureStdout();
    t1.display();
    std::string ActualOutput2 = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOutput2.c_str(), ActualOutput2.c_str());
}