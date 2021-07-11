#include "MyPoint.cpp"
#include "iostream"
#include<gtest/gtest.h>

TEST(Point,GenericPointTest)
{
	MyPoint<int> p1(1,1);
	std::string ExpectedOut="X axis:1\nY axis:1\n";
	testing::internal::CaptureStdout();
	p1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(point,GenericPointQuadrantTest)
{
	MyPoint<int> p1(1,1);
	ASSERT_EQ(1,p1.quadrant());
}

TEST(point,GenericPointDistanceTest)
{
	MyPoint<int> p1(1,1);
	std::string ExpectedOut="Distance from Origin:1\n";
	testing::internal::CaptureStdout();
	p1.distanceFromOrigin();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}