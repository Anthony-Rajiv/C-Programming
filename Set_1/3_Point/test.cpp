#include "iostream"
#include "point.h"
#include <gtest/gtest.h>

TEST(Point, DefaultConstructor)
{
	point P1;
	EXPECT_EQ(0, P1.distanceFromOrigin());
	EXPECT_EQ(0,P1.quadrant());
	EXPECT_EQ(true, P1.isOrigin());
	EXPECT_EQ(true, P1.isOnXAxis());
	EXPECT_EQ(true, P1.isOnYAxis());
}
TEST(Point, ParameterizedConstructor)
{
	point P1(3, 4);
	EXPECT_EQ(5, P1.distanceFromOrigin());
	EXPECT_EQ(0,P1.quadrant());
	EXPECT_EQ(false, P1.isOrigin());
	EXPECT_EQ(false, P1.isOnXAxis());
	EXPECT_EQ(false, P1.isOnYAxis());
}
TEST(Point, CopyConstructor)
{
	point P1(8, 6);
	point P2(P1);
	EXPECT_EQ(10, P2.distanceFromOrigin());
	EXPECT_EQ(0,P2.quadrant());
	EXPECT_EQ(false, P2.isOrigin());
	EXPECT_EQ(false, P2.isOnXAxis());
	EXPECT_EQ(false, P2.isOnYAxis());
}
TEST(Point,DisplayTest)
{
	point P1(10,20);
	std::string Expected="cordinates of x and y are 10,20\n";
	testing::internal::CaptureStdout();
	P1.display();
	std::string Actual = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(Expected.c_str(), Actual.c_str());
}
