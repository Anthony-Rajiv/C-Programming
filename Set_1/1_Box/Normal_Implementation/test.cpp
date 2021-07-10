#include "box.h"
#include <gtest/gtest.h>

TEST(Box, EmptyConstructor)
{
    box b1;
    ASSERT_EQ(0, b1.length());
    ASSERT_EQ(0, b1.breadth());
    ASSERT_EQ(0, b1.height());
    ASSERT_EQ(0, b1.volume());
}

TEST(Box, ParameterizedConstructor1)
{
    box b1(10);
    ASSERT_EQ(10, b1.length());
    ASSERT_EQ(10, b1.breadth());
    ASSERT_EQ(10, b1.height());
    ASSERT_EQ(1000, b1.volume());
}

TEST(Box, ParameterizedConstructor2)
{
    box b1(10,20,30);
    ASSERT_EQ(10, b1.length());
    ASSERT_EQ(20, b1.breadth());
    ASSERT_EQ(30, b1.height());
    ASSERT_EQ(6000, b1.volume());
}

TEST(Box, CopyConstructor)
{
    box b1(10,20,30);
    box b2(b1);
    ASSERT_EQ(10, b2.length());
    ASSERT_EQ(20, b2.breadth());
    ASSERT_EQ(30, b2.height());
    ASSERT_EQ(6000, b2.volume());
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}