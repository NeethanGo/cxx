#include <gtest/gtest.h>


int add(int value1, int value2) {
  return (value1 + value2);
}

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}


TEST(add, case1)
{
    EXPECT_LT(-2, add(1, 2));
    EXPECT_EQ(-1, add(1, 2));
    ASSERT_LT(-2, add(1, 2));
    ASSERT_EQ(-1, add(1, 2));
}
