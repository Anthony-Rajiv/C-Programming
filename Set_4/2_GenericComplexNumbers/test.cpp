#include "MyComplex.cpp"
#include "iostream"
#include<gtest/gtest.h>

TEST(Complex,GenericComplexTest)
{
	MyComplex<int> C1(1,1);
	std::string ExpectedOutput="1+i1\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string ActualOutput = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOutput.c_str(), ActualOutput.c_str());
}