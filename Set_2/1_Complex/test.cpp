#include "iostream"
#include "complex.h"
#include <gtest/gtest.h>

TEST(Complex, DefaultConstructor) 
{
    complex C1;
    std::string Expected="0+i0\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected.c_str(), Actual.c_str());
}
TEST(Complex, ParameterizedConstructor1) {
	complex C1(4,5);
	std::string Expected="4+i5\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected.c_str(), Actual.c_str());
}
TEST(Complex,ParameterizedConstructor2) 
{
	complex C1(4);
	std::string Expected="4+i0\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected.c_str(), Actual.c_str());
}
TEST(Complex, Operatorplus)
{
	complex C1(1,2);
	complex C2(2,3);

	std::string Expected1="1+i2\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual1 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected1.c_str(), Actual1.c_str());

	std::string Expected2="2+i3\n";
	testing::internal::CaptureStdout();
	C2.display();
	std::string Actual2 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected2.c_str(), Actual2.c_str());

    complex C3 = C1+C2;
	std::string Expected3="3+i5\n";
	testing::internal::CaptureStdout();
	C3.display();
	std::string Actual3 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected3.c_str(), Actual3.c_str());
}
TEST(Complex, Operatorminus)
{
	complex C1(1,2);
	complex C2(2,3);

	std::string Expected1="1+i2\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual1 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected1.c_str(), Actual1.c_str());

	std::string Expected2="2+i3\n";
	testing::internal::CaptureStdout();
	C2.display();
	std::string Actual2 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected2.c_str(), Actual2.c_str());

    complex C3 = C2-C1;
	std::string Expected3="1+i1\n";
	testing::internal::CaptureStdout();
	C3.display();
	std::string Actual3 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected3.c_str(), Actual3.c_str());
}
TEST(Complex, Operatormultiply)
{
	complex C1(1,2);
	complex C2(2,3);

	std::string Expected1="1+i2\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual1 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected1.c_str(), Actual1.c_str());

	std::string Expected2="2+i3\n";
	testing::internal::CaptureStdout();
	C2.display();
	std::string Actual2 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected2.c_str(), Actual2.c_str());

    complex C3 = C1*C2;
	std::string Expected3="-4+i7\n";
	testing::internal::CaptureStdout();
	C3.display();
	std::string Actual3 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected3.c_str(), Actual3.c_str());
}
TEST(Complex, Operatorequal)
{
	complex C1(1,2);
	complex C2(1,2);
	std::string Expected1="1+i2\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual1 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected1.c_str(), Actual1.c_str());
	std::string Expected2="1+i2\n";
	testing::internal::CaptureStdout();
	C2.display();
	std::string Actual2 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected2.c_str(), Actual2.c_str());

	EXPECT_EQ(true,(C1==C2));
}
TEST(Complex, Operatorpreincrement)
{
	complex C1(1,2);
	std::string Expected1="1+i2\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual1 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected1.c_str(), Actual1.c_str());

    ++C1;
	std::string Expected2="2+i2\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual2 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected2.c_str(), Actual2.c_str());

    
}
TEST(Complex, Operatorpostincrement)
{
	complex C1(1,2);
	std::string Expected1="1+i2\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual1 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected1.c_str(), Actual1.c_str());

    C1++;
	std::string Expected2="2+i2\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual2 = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected2.c_str(), Actual2.c_str());
}


TEST(Complex,DisplayTest) 
{
	complex C1(10,20);
	std::string Expected="10+i20\n";
	testing::internal::CaptureStdout();
	C1.display();
	std::string Actual = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected.c_str(), Actual.c_str());
}