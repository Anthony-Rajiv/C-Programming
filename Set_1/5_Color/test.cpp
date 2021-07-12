#include "iostream"
#include <gtest/gtest.h>
#include "color.cpp"

TEST(color,DefaultConstructor) 
{
    Color c1;
    std::string ExpectedOut="The Color has been inverted 255,255,255\n";
    testing::internal::CaptureStdout();
    c1.invert();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(color,ParameterizedConstructor) 
{
    Color c1(20,20,20);
    std::string ExpectedOut="The Color has been inverted 235,235,235\n";
    testing::internal::CaptureStdout();
    c1.invert();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(color,CopyConstructor) 
{
    Color c1(20,20,20);
    Color c2(c1);
    std::string ExpectedOut="The Color has been inverted 235,235,235\n";
    testing::internal::CaptureStdout();
    c2.invert();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());;
}

TEST(color,EnumTest) 
{
    Color c1(color_t::BLACK);
    std::string ExpectedOut="The Color composition is as follows: \nRed: 255, Green: 255,Blue: 255\n";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(color,DisplayTest) 
{
    Color c1(10,10,10);
    std::string ExpectedOut="The Color composition is as follows: \nRed: 10, Green: 10,Blue: 10\n";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}