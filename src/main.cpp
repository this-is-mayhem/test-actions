#include "math.h"
#include <gtest/gtest.h>

using alex::sqr;

// Test case for the sqr function
TEST(SqrTest, PositiveNumbers) {
    EXPECT_DOUBLE_EQ(sqr(2.0), 4.0);  // sqr is your function
    EXPECT_DOUBLE_EQ(sqr(3.5), 12.25);
}

TEST(SqrTest, NegativeNumbers) {
    EXPECT_DOUBLE_EQ(sqr(-2.0), 4.0);
    EXPECT_DOUBLE_EQ(sqr(-3.5), 12.25);
}

TEST(SqrTest, Zero) {
    EXPECT_DOUBLE_EQ(sqr(0.0), 0.0);
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();  // Run all the test cases
}
